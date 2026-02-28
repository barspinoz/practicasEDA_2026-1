/*
 * ESTRUCTURA DE DATOS Y ALGORITMOS I
 *
 * PRACTICA 3: HOSPITAL
 *
 * OBJETIVO:
 * El siguiente programa corresponde a la práctica 3
 * de la materia EDA I. El tema que se aborda es el
 * de estructuras en el lenguaje de programación C.
 * Con el fin de poner en práctica los conocimientos
 * adquiridos, se diseñará un programa que con la
 * ayuda de las estructuras, pueda hacer la gestión
 * de los datos de un hospital. Los datos abordan:
 *
 * - Las generalidades del hospital (dirección, número,
 *   nombre clave);
 * - Datos de los pacientes (nombre del paciente, en-
 *   fermedad, CURP);
 * - Datos de los doctores (nombre del doctor, espe-
 *   cialidad, horarios)
 *
 * Entre otros datos más (que se especificarán for-
 * malmente en los detalles de la tarea en Google
 * Classroom.
 *
 * BRIGADA 1:
 * - CASTELAN SIERRA GAEL
 * - ESPINOSA SALVADOR ROMAN
 * - MALDONADO MARTINEZ ERICK FERNANDO
 * - VIDAURE ÁLVAREZ KEVIN EMMANUEL
 *
 */
#include <stdio.h>
#include <string.h>

#define MAX_HOSPITALES 2
#define MAX_PACIENTES 10
#define MAX_DOCTORES 20
#define MAX_ESPECIALIDADES 4
#define MAX_INTENDENTES 15
#define MAX_TRABAJADORES 35
#define MAX_EQUIPO_MED 30

struct hospital { // Hospital y sus datos generales
	int id_hospital[NUM_MAX_HOSP];
	char direccion[NUM_MAX_HOSP];
};

struct paciente { // Pacientes y sus datos generales
	int curp_paciente[NUM_MAX_HOSP];
	char enfermedad_paciente[NUM_MAX_HOSP];
	char nombre_paciente[NUM_MAX_HOSP];
};

struct trabajador {

};

struct doctor { // Doctores y sus datos generales
	int cedula_doc[NUM_MAX_HOSP];
	int id_hospital_doc[NUM_MAX_HOSP];
	char nombre_doc[NUM_MAX_HOSP];
	char especialidad_doc[NUM_MAX_HOSP];
};

struct especialidad {

};

struct intendencia {

};

struct equipo_medico {

};

void agreagar_datos();
void visualizar_datos();

void main() {
	int caso = 0, blindaje = 0;

	do {
		printf("=== BASE DE DATOS DE HOSPITALES ===\n");
		printf("========= MENU DE OPCIONES =========\n");
		printf("1. Agregar datos\n");
		printf("2. Visualizar datos\n");
		printf("3. Salir\n", );
		blindaje = scanf("%d", &caso);
		while(getchar() != '\n');
		if (blindaje != 1 || caso < 1 || caso > 3) {
			printf("ERROR. OPCION NO VALIDA.\n");
			continue;
		}

		switch (caso) {
			case 1: // Agregar datos
				agreagar_datos();
				break;
			case 2: // Visualizar datos
				visualizar_datos();
				break;
			case 3: // Salir
				return;
				break;
			default:
				printf("ERROR. VUELVA A INTENTAR.\n");
				break;

		}
		
	} while (caso != 3);
}

void agreagar_datos() {

}

void visualizar_datos() {

}
