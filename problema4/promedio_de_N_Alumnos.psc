Proceso promedio_de_N_Alumnos
	Escribir "Ingrese la cantidad de alumnos";
	Leer n;
	Dimension datos[n,3];
	Definir i Como Entero;
	Definir j Como Entero;
	Definir proAl Como Real;
	Definir  sum Como Real;
	Definir  proGen Como Real;
	i<-1;
	Mientras (i<=n) Hacer
		Escribir "** Estudiante: ", i;
		Escribir  "Nota numero 1: ";
		Leer n1;
		Escribir "Nota numero 2: ";
		Leer n2;
		Escribir "Nota numero 3: ";
		Leer n3;
		datos[i, 1] <- n1;
		datos[i, 2] <- n2;
		datos[i, 3] <- n3;
		i<-i+1;
		
	FinMientras
	j <- 1;
	Mientras (j<=n) Hacer
		proAl <- (datos[j,1] + datos[j,2] + datos[j,3])/3;
		Escribir "El promedio del alumno: ", j , " Es: ", proAl;
		sum <- sum+proAl;
		j<-j+1;
	FinMientras
	proGen <- sum/n;
	Escribir "El promedio general es: ", proGen;
	
FinProceso
