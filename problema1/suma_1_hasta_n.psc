Proceso suma_1_hasta_n
	Definir n Como Entero;
	Definir x Como Entero;
	Definir suma Como Entero;
	
	//Proceso 
	Escribir "Dime un numero";
	Leer n;
	suma<-0;
	Para x <- 1 Hasta n Con Paso 1 Hacer
		Escribir x;
		suma <- suma + x;
	FinPara
	
	Escribir "La suma de los " ,n, " primeros numeros es: ",suma;
FinProceso
