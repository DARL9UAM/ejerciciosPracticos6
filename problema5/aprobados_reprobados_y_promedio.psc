Algoritmo aprobados_reprobados_y_promedio
	Definir alumnos Como Entero;
	Definir alumno Como Entero;
	Definir i Como Entero;
	Definir suma Como Entero;
	Definir aprobados Como Entero;
	Definir reprobados Como Entero;
	Definir promedio Como Real;
	Escribir "¿Cuantos Alumnos hay?";
	Leer alumnos;
	suma <- 0;
	aprobados <- 0;
	reprobados <- 0;
	Para i <- 0 Hasta alumnos - 1 Con Paso 1 Hacer
		Escribir "Alumno", i+1;
		Leer alumno;
		suma <- suma + alumno;
		si alumno >= 70 Entonces
			aprobados <- aprobados+1;
		SiNo
			reprobados <- reprobados+1;
		FinSi
	FinPara
	promedio <- suma/alumnos;
	Escribir "Los alumnos aprobados son: " , aprobados, " los reporbados son: " ,reprobados, " y el promedio es: " , promedio;
FinAlgoritmo
