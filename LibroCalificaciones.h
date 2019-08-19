/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.h
 *
 *    Description:  Reporte de calificaciones
 *
 *        Created:  2019-08-12
 *
 *         Author:  Danilo Alvarado Arce
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */


#ifndef CALIFICACIONES_LIBROCALIFICACIONES_H
#define CALIFICACIONES_LIBROCALIFICACIONES_H

#include <string>
using std::string;
static const int ESTUDIANTES = 10;
static const int EXAMENES = 3;

class LibroCalificaciones {
private:

	string nombreCurso;
	int calificaciones[ESTUDIANTES][EXAMENES];
	/**
	 * recorre el arreglo para buscar la nota minima.
	 *
	 * @param _.
	 * @return entero con la nota minima del arreglo.
	 */
	int obtenerNotaMinima();
	/**
	 * recorre el arreglo para buscar la nota maxima.
	 *
	 * @param _.
	 * @return entero con la nota maxima del arreglo.
	 */
	int obtenerNotaMaxima();
	/**
	 * calcula el promedio de un estudiante.
	 *
	 * @param entero con el numero de estudiante a calcular.
	 * @return doble con el promedio del estudiante solicitado.
	 */
	double obtenerPromedio( const int);


public:
	/**
	 * constructor sin parametros.
	 *
	 * @param _.
	 * @return _.
	 */
	LibroCalificaciones();
	/**
	 * constructor con parametros.
	 *
	 * @param string por referencia y un arreglo por valor.
	 * @return _.
	 */
	LibroCalificaciones(const string& nombreCurso, int[][EXAMENES]);
	/**
	 * da formato a la informacion de todo el arreglo para luego ser mostrado en pantalla.
	 *
	 * @param _.
	 * @return string con la informacion para mostrar en pantalla.
	 */
	string obtenerReporteNotas();
	/**
	 * da formato para mostrar cual es la nota minima y maxima de todo el arreglo.
	 *
	 * @param _.
	 * @return string con las notas minima y maxima para mostrar en pantalla.
	 */
	string obtenerReporteNotasMaxMin();
	/**
	 * accesa al nombre del curso
	 *
	 * @param _.
	 * @return string con el nombre de curso
	 */
	string getNombreCurso();
	/**
	 * permite modificar el nombre del curso.
	 *
	 * @param string por referencia.
	 * @return _.
	 */
	void setNombreCurso(string&);

};


#endif //CALIFICACIONES_LIBROCALIFICACIONES_H