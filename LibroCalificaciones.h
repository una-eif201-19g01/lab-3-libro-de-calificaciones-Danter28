/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.h
 *
 *    Description:  Reporte de calificaciones
 *
 *        Created:  2019-08-12
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */


#ifndef CALIFICACIONES_LIBROCALIFICACIONES_H
#define CALIFICACIONES_LIBROCALIFICACIONES_H

#include <string>
using std::string;

class LibroCalificaciones {
private:
    int ESTUDIANTES=10;
    int EXAMENES=3;
    string nombreCurso;
    int calificaciones[ESTUDIANTES][EXAMENES];
    int obtenerNotaMinima();
    int obtenerNotaMaxima();
    double obtenerPromedio(const int[],const int);
       

public:
    LibroCalificaciones();
    LibroCalificaciones(const string &, int[][this->EXAMENES]);
    string obtenerReporteNotas();
    string obtenerReporteNotasMaxMin();
    string getNombreCurso();
    void setNombreCurso(string&);
    
};


#endif //CALIFICACIONES_LIBROCALIFICACIONES_H
