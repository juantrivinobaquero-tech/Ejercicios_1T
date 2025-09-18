#include "iostream"
#include "cmath"

using namespace std;

float interes(float p,float t,float a,float an){
    float to = p * pow((1 + (t / a)) , a * an);
    return to;
}

int main(){
    float monto_final = 0.0;
    float principal = 0.0;
    float tasa = 0.0;
    float aplica_anual = 0.0;
    float años = 0.0;

    cout << "Este programa calcula el interes compuesto. \n";

    cout << "Ingrese el principal del préstamo: \n";
    cin >> principal;

    cout << "Ingrese la tasa de interés: \n";
    cin >> tasa;

    cout << "Ingrese la cantidad de veces que capitaliza por año: \n";
    cin >> aplica_anual;

    cout << "Ingrese los años que durá el préstamo: \n";
    cin >> años;

    monto_final = interes(principal,tasa,aplica_anual,años);

    cout << "El monto final será igual a: " << monto_final << endl;

    return 0;

}
