Proceso Suma_Pares_100A200
	Definir i Como Entero;
	Definir suma Como Entero;
	suma <- 0;
	Para i <- 100 Hasta 200 Hacer
		si i mod 2 = 0 Entonces
			suma <- suma + i;
		FinSi
	FinPara
	Escribir "La suma es: ",suma ;
	
FinProceso
