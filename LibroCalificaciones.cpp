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

LibroCalificaciones::LibroCalificaciones() {
    nombreCurso = "";
    for (int contadorY = 0; contadorY <= ESTUDIANTES; contadorY++) {
        for (int contadorX = 0; contadorX <= EXAMENES; contadorX++) {
            calificaciones[contadorY][contadorX] = 0;
        }

    }

    LibroCalificaciones::LibroCalificaciones(const string &nombreCurso, int[][EXAMENES]) {
        nombreCurso= nombreCurso; 
        calificaciones[ESTUDIANTES][EXAMENES] = {
            {87, 96, 70},
            {68, 87, 90},
            {94, 100, 90},
            {100, 81, 82},
            {83, 65, 85},
            {78, 87, 65},
            {85, 75, 83},
            {91, 94, 100},
            {76, 72, 84},
            {87, 93, 73}};
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
            suma = suma + calificaciones[[]][contadorX];
        }

        return suma / (EXAMENES);
    }

    string LibroCalificaciones::obtenerReporteNotas() {
        string reporteNotas;
        //reporteNotas=reporteNotas+-

    }

    string LibroCalificaciones::obtenerReporteNotasMaxMin() {
    }

    string LibroCalificaciones::getNombreCurso() {
        return nombreCurso;
    }

    void LibroCalificaciones::setNombreCurso(string & nombreCurso) {
        this->nombreCurso = nombreCurso;
    }



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
			suma = suma + calificaciones [[]] [contadorX];
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