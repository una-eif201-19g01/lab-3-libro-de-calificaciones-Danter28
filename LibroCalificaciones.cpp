	/*
	 * =====================================================================================
	 *
	 *       Filename:  LibroCalificaciones.cpp
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

#include "LibroCalificaciones.h"
#include <iomanip>
#include <iostream> 

	LibroCalificaciones::LibroCalificaciones() { }

	LibroCalificaciones::LibroCalificaciones(const string& nombreCurso, int arrayCalificaciones[][EXAMENES]) {
		this->nombreCurso = nombreCurso;
		for (int estudiante = 0; estudiante <= ESTUDIANTES; estudiante++)
			for (int examen = 0; examen <= EXAMENES; examen++)
				calificaciones[estudiante][examen] = arrayCalificaciones[estudiante][examen];
	}

	int LibroCalificaciones::obtenerNotaMinima() {
		int notaMinima = (calificaciones[0][0]);
		for (int contadorY = 0; contadorY <= ESTUDIANTES; contadorY++) {
			for (int contadorX = 0; contadorX <= EXAMENES; contadorX++) {
				if (notaMinima >= calificaciones[contadorY][contadorX])
					notaMinima = calificaciones[contadorY][contadorX];
			}
		}
		return notaMinima;
	}

	int LibroCalificaciones::obtenerNotaMaxima() {
		int notaMaxima = calificaciones[0][0];
		for (int contadorY = 0; contadorY <= ESTUDIANTES; contadorY++) {
			for (int contadorX = 0; contadorX <= EXAMENES; contadorX++) {
				if (notaMaxima <= calificaciones[contadorY][contadorX])
					notaMaxima = calificaciones[contadorY][contadorX];
			}
		}
		return notaMaxima;
	}

	double LibroCalificaciones::obtenerPromedio(const int[], const int) {
		double suma;

		for (int contadorX = 0; contadorX <= EXAMENES; contadorX++) {
			//suma = suma + calificaciones [[]] [contadorX];
		}

		return suma / (EXAMENES);
	}

	string LibroCalificaciones::obtenerReporteNotas() {
		string reporteNotas;
		//reporteNotas=reporteNotas+

	}

	string LibroCalificaciones::obtenerReporteNotasMaxMin() {
	}

	string LibroCalificaciones::getNombreCurso() {
		return nombreCurso;
	}

	void LibroCalificaciones::setNombreCurso(string& nombreCurso) {
		this->nombreCurso = nombreCurso;
	}