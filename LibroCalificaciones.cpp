	/*
	 * =====================================================================================
	 *
	 *       Filename:  LibroCalificaciones.cpp
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

#include "LibroCalificaciones.h"
#include <iomanip>
#include <iostream> 
using std::to_string;

	LibroCalificaciones::LibroCalificaciones(){}

	LibroCalificaciones::LibroCalificaciones(const string& nombreCurso, int arrayCalificaciones[][EXAMENES]) {
		this->nombreCurso = nombreCurso;
		for (int estudiante = 0; estudiante < ESTUDIANTES; ++estudiante)
			for (int examen = 0; examen < EXAMENES; ++examen)
				calificaciones[estudiante][examen] = arrayCalificaciones[estudiante][examen];
	}

	int LibroCalificaciones::obtenerNotaMinima() {
		int notaMinima = 100;
		for (int estudiante = 0; estudiante < ESTUDIANTES; ++estudiante) {
			for (int examen = 0; examen < EXAMENES; ++examen) {
				if (notaMinima >= calificaciones[estudiante][examen])
					notaMinima = calificaciones[estudiante][examen];
			}
		}
		return notaMinima;
	}

	int LibroCalificaciones::obtenerNotaMaxima() {
		int notaMaxima = 0;
		for (int estudiante = 0; estudiante < ESTUDIANTES; ++estudiante) {
			for (int examen = 0; examen < EXAMENES; ++examen) {
				if (notaMaxima < calificaciones[estudiante][examen])
					notaMaxima = calificaciones[estudiante][examen];
			}
		}
		return notaMaxima;
	}

	double LibroCalificaciones::obtenerPromedio(const int estudiante) {
		double suma=0;

		for (int examen = 0; examen < EXAMENES; ++examen) {
			suma = suma + calificaciones [estudiante][examen] ;
		}

		return (suma / (EXAMENES));
	}

	string LibroCalificaciones::obtenerReporteNotas() {
		int cantExamenes = 1;
		string reporteNotas = "\nLas siguientes son las notas del curso [Curso Progra I]:\n\t\t\t";
		while (cantExamenes <= EXAMENES) { reporteNotas = reporteNotas + "\tExamen" + to_string(cantExamenes)+"\t"; cantExamenes++; }
		reporteNotas=reporteNotas+"\tPromedio";
		for (int estudiante = 0; estudiante < ESTUDIANTES; ++estudiante) {
			reporteNotas = reporteNotas + "\nEstudiante[" + to_string(estudiante+1) + "]\t\t\t";//si se desea que empiece la lista en 0, eliminar el +1.
			for (int examen = 0; examen < EXAMENES; ++examen) {
				reporteNotas = reporteNotas + to_string(calificaciones[estudiante][examen]) + "\t\t";
			}
			reporteNotas = reporteNotas + to_string(obtenerPromedio(estudiante));
		}
		return reporteNotas;
	}
			

	string LibroCalificaciones::obtenerReporteNotasMaxMin() {
		string reporteMinMax;
		reporteMinMax = "La nota minima es: [" + to_string(obtenerNotaMinima()) + "]\n\nLa nota maxima es: [" + to_string(obtenerNotaMaxima())+"]";
		return reporteMinMax;
	}

	string LibroCalificaciones::getNombreCurso() {
		return nombreCurso;
	}

	void LibroCalificaciones::setNombreCurso(string& nombreCurso) {
		this->nombreCurso = nombreCurso;
	}