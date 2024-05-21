#include <iostream>
#include <string>
using namespace std;

int main() {
    int cedula;
    string nombreEstudiante, nombreCurso;
    double notaExamen1, notaExamen2, notaExamen3, promedioFinal;

    cout << "Ingrese la cedula del estudiante: ";
    cin >> cedula;

    cin.ignore();

    cout << "Ingrese el nombre del estudiante: ";
    getline(cin, nombreEstudiante);

    cout << "Ingrese el nombre del curso: ";
    getline(cin, nombreCurso);

    cout << "Ingrese la nota del primer examen: ";
    cin >> notaExamen1;

    cout << "Ingrese la nota del segundo examen: ";
    cin >> notaExamen2;

    cout << "Ingrese la nota del tercer examen: ";
    cin >> notaExamen3;

    promedioFinal = (notaExamen1 + notaExamen2 + notaExamen3) / 3;

    cout << "\nDatos del estudiante:" << endl;
    cout << "Cedula: " << cedula << endl;
    cout << "Nombre: " << nombreEstudiante << endl;
    cout << "Curso: " << nombreCurso << endl;
    cout << "Notas de los exámenes:" << endl;
    cout << "Examen 1: " << notaExamen1 << endl;
    cout << "Examen 2: " << notaExamen2 << endl;
    cout << "Examen 3: " << notaExamen3 << endl;
    cout << "Promedio final: " << promedioFinal << endl;

    return 0;
}
