#include <iostream>
#include <map>

using namespace::std;

void sumatoria(int** a,int** b, int filas,int columnas) {
    //La sumatoria de las dos matrices
    cout<<"______________________________"<<endl;
    cout<< "\nLa sumatoria de las matrices es: "<<endl;
    for(int i=0; i<filas; i++){
        for(int m=0; m<columnas; m++){
            cout<<" "<<a[i][m] +  b[i][m];
        }
        cout<<endl;
    }


}

void producto(int** a,int** b,int filas,int columnas){
    //Producto de las dos matrices
    cout<<"\n______________________________"<<endl;
    cout<< "\nEl producto de las matrices es: "<<endl;
    for(int i=0; i<filas; i++){
        for(int m=0; m<columnas; m++){
            cout<<" "<<a[i][m] *  b[i][m];
        }
        cout<<endl;
    }

}

void diagonal(int** a,int** b,int filas, int columnas){
    //Pendiente de producto de diagonal matrices                                <- revisar
    cout<<"\n______________________________"<<endl;
    cout<< "\nEl producto del diagonal matrices es: "<<endl;
    for(int i=0; i<filas; i++){// mostrar matriz
        for(int m=0; m<columnas; m++){
            if(i=m){
                cout<<" "<< a[i][m] * b[i][m];// se muestra el producto de las matrices
            }
        }
        cout<<endl;
    }
}

void escalar(int** a,int** b, int filas, int columnas){
    cout<<"\n______________________________"<<endl;

    // punto 5, el producto de A[0][0] por B (Producto de un escalar por una matriz)
    cout<< "\nEl producto de un escalar de una matriz es: "<<endl;
    for(int i=0; i<filas; i++){
        for(int m=0; m<columnas; m++){
            cout<<" "<<a[0][0] *  b[i][m];// Se muestra
        }
        cout<<endl;
    }
    cout<<endl;
}

// paso del array bidimensional a como puntero a puntero
void original(int** a, int f, int c)
{
    std::cout << "matriz original:\n";
    for (int i = 0; i < f; i++)   {
        for (int j = 0; j < c; j++)
            std::cout << a[i][j] << " ";
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

// Muestra los elementos no repetidos de la matriz.
void no_repetidos(int** a, int f, int c)
{
    std::map<char, int> caracteres;
    for (int i = 0; i < f; i++)
        for (int j = 0; j < c; j++)
            ++caracteres[a[i][j]];


    std::cout << "matriz sin repetidos:\n";
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            if (caracteres.find(a[i][j])->second == 1) // único
                std::cout << a[i][j] << " ";
            else
                std::cout << "- ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}


int main()
{
    int f, i, j, k, l;
    int c;
    int** a;
    int** b;


    std::cout << "Ingrese el numero de filas: ";            //ingreso por teclado las filas y columnas
    std::cin >> f;
    std::cout << "Ingrese el numero de columnas: ";
    std::cin >> c;

    a = new int* [f];                              //genero la matriz original
    for (i = 0; i < f; i++)
        a[i] = new int[c];

    b = new int* [f];                              //genero la matriz original
    for (k = 0; k < f; k++)
        b[k] = new int[c];

    for(i = 0; i < f; i++)                          //ingreso cada elemento de la matriz
        for(j = 0; j < c; j++) {
            std::cout << "Ingrese el elemento A[" << i + 1 << "][" << j + 1 << "]";
            std::cin >> a[i][j];
        }

    for(k = 0; k < f; k++)                          //ingreso cada elemento de la matriz
        for(l = 0; l < c; l++) {
            std::cout << "Ingrese el elemento B[" << k + 1 << "][" << l + 1 << "]";
            std::cin >> b[k][l];
        }

    original(a, f, c);
    no_repetidos(a, f, c);
    original(b, f, c);
    no_repetidos(b, f, c);

    sumatoria(a,b,f,c);
    producto(a,b,f,c);
    diagonal(a,b,f,c);
    escalar(a,b,f,c);

    for(i=0; i<f; i++)  // libera la memoria de cada fila
        delete[] a[i];
    delete[] a;

    for(i=0; i<f; i++)  // libera la memoria de cada fila
        delete[] b[i];
    delete[] b;
}