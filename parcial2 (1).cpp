#include <iostream>
#include <cmath>

using namespace std;
// Definir la estructura de un punto en 2D
struct Point
{
    double x, y;
};

// Función para calcular magnitud asociada al vector de un punto p1
/*Como puede modificar la declaración de la función para que sea mas eficiente en el manejo de memoria?
Teniendo en cuenta que solo necesita leer los valores, pero no modificarlos*/
double calcularMagnitud(Point p1)
{
 float x1 = p1.x;
 float y1 = p1.y;
 float mag;

 mag = sqrt(pow(x1,2) + pow(y1,2));
    return mag;
 // Completar: Usar la fórmula de magnitud
    // sugerencia: puede hacer uso de funcionines como sqrt y pow

}

// Función para leer las coordenadas de varios puntos
void leerPuntos(Point puntos[], int n)
{
    char respuesta;
    cout << "¿Desea ingresar los puntos manualmente? (Y/N): ";

    cin >> respuesta;
    // Leer la respuesta del usuario

    // Completar: Verificar si la respuesta es 's' o 'n', tener en cuenta mayúsculas y minúsculas
    if (respuesta == 'Y' || respuesta == 'y')
    {
        // Completar: Leer las coordenadas de cada punto
        for (int i; i < n; i = i + 1)
        {
            cout << "Ingrese las coordenadas del punto " << i + 1 << " (x, y): ";
            cin >> puntos[i].x >> puntos[i].y;
        }
    }
    else
    {
        // Usar puntos predeterminados
        std::cout << "Usando puntos predeterminados...\n";
        puntos[0] = {0, 0};  // Punto 1 (0, 0)
        puntos[1] = {3, 4};  // Punto 2 (3, 4)
        puntos[2] = {6, 8};  // Punto 3 (6, 8)
        puntos[3] = {9, 12}; // Punto 4 (9, 12)
    }
}

double calcularMayorMagnitud(const Point puntos[], int n, int &indiceMayorMagnitud) {
    // Inicializar con el primer punto
    double mayorMagnitud = calcularMagnitud(puntos[0]);
    indiceMayorMagnitud = 0;

    // Recorrer el resto de los puntos
    for (int i = 1; i < n; i = i + 1) {
        double magnitudActual = calcularMagnitud(puntos[i]);
        if (magnitudActual > mayorMagnitud) {
            mayorMagnitud = magnitudActual;
            indiceMayorMagnitud = i;
        }
    }
    return mayorMagnitud;
}

// Función para mostrar el punto con mayor magnitud y sus coordenadas
void mostrarResultado(const Point puntos[], int indiceMayorMagnitud, double magnitud)
{
    cout << "El punto con mayor magnitud es: (" << puntos[indiceMayorMagnitud].x << ", " << puntos[indiceMayorMagnitud].y << ")\n";
    cout << "La mayor magnitud de los puntos del arreglo es: "  << magnitud << std::endl;
}

int main()
{
    int n;

    float mayor;

    cout << "Ingrese el número de puntos (mínimo 2): ";
    // Leer el número de puntos
    cin >> n;

    if (n < 2)
    {
        cout << "Se necesitan al menos 2 puntos para determinar la mayor magnitud.\n";
        return 1;
    }

    Point puntos[n]; // Arreglo de estructuras para almacenar las coordenadas (x, y)

    // Leer los puntos (manual o predeterminado)
    leerPuntos(puntos, n);

    // Calcular mayor magnitud
    int indiceMayorMagnitud;
    // llamar funcion
    //  Mostrar el resultado
    mayor = calcularMayorMagnitud(puntos, n, indiceMayorMagnitud);

    mostrarResultado(puntos, indiceMayorMagnitud , mayor);

    return 0;
}
