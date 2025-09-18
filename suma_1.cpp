#include <iostream>
using namespace std;

int main(){

    int numeros[5] = {0,0,0,0,0};
    int suma = 0;

    for (int i=0; i<5; i =i + 1){
        cout << "Ingrese el " << i + 1 << " numero: \n";
        cin >> numeros[i];
    }

    for(int v=0; v<5; v = v + 1){
        suma = suma + numeros[v]; 
    }

    cout << "La suma de los numeros recogidos es: " << suma << "\n";
    return 0;
    
    }