#include "iostream"

using namespace std;

/*int mcd(int a, int b){

    int MCD = 0; 

    int mas = 0;
    int mbs = 0;

    int* ma = NULL;
    int* mb = NULL;

    for (int i = 1 ; i <= a; i = i + 1){
        if( a % i == 0){
            mas = mas + 1;
        }
    }

    for (int v = 1 ; v <= b; v = v + 1){
        if( b % v == 0){
            mbs = mbs + 1;
        }
    }

    ma = new int[mas];
    mb = new int[mbs];

    for(int j = 1 ; j <= a ; j = j + 1){
        if( a % j == 0){
        ma[j-1] = j;
        }
    }

    for(int j = 1 ; j <= b ; j = j + 1){
        if( b % j == 0){
        mb[j-1] = j;
        }
    }

    for (int i = 0; i <= mas; i = i + 1){
        for(int j = 0; j <= mbs; j = j + 1){
            if(ma[i] == mb[j] & ma[i] > MCD){
                MCD = ma[i+1];
            }
        }
        
    }

    delete[] ma;
    delete[] mb;

    return MCD;

}*/

int mcd2(int a, int b){
        int MCD = 1;
        int menor = 1;
    
    if(a - b < 0){
        menor = a;
    }
    else{
        menor = b;
    }

    for (int i = menor; i >= 1; i = i - 1) {
        if (a % i == 0 && b % i == 0 && i > MCD) {
            MCD = i;
        }
    }
    
    return MCD;
}





int main(){

    int MCD = 0;
    int numa = 0;
    int numb = 0;

    cout <<"Este programa calcula el MCD de dos numeros; Porfavor ingreselos: \n";
    cin >> numa;
    cin >> numb;

    MCD = mcd2(numa,numb);


    cout <<"El máximo común divisor es: " << MCD << endl;

    return 0;
}

