Proceso sumaDeDosVectores
	Definir suma_v1 Como Entero;
	Definir suma_v2 Como Entero;
	Definir suma_total Como Entero;
	Definir i,j,k,l Como Entero
	suma_v1<-0;
	suma_v2<-0;
	Escribir "¿Cuántos valores tendrá el vector 1?";
	leer val1;
	Escribir "¿Cuántos valores tendrá el vector 2?";
	leer val2;
	Dimension vector1[val1];
	Dimension vector2[val2];
	Para i<-1 Hasta val1 Con Paso 1 Hacer
		Escribir "Ingrese el valor " , i , " del vector 1 ";
		Leer v1;
		vector1[i]<-v1;
	FinPara
	
	Para j<-1 Hasta val2 Con Paso 1 Hacer
		Escribir "Ingrese el valor " , i , " del vector 1 ";
		Leer v2;
		vector2[j]<-v2;
	FinPara
	
	Para k<-1 Hasta val1 Con Paso 1 Hacer
		suma_v1<- suma_v1 + vector1[k];
	FinPara
	
	Para l<- 1 Hasta val2 Con Paso 1 Hacer
		suma_v2 <- suma_v2 + vector2[l];
	FinPara
	suma_total<- suma_v1 + suma_v2;
	Escribir "la suma de los elementos del vector1 es: ", suma_v1;
	Escribir "la suma de los elemnetos del vector2 es: ", suma_v2;
	Escribir "la suma de los dos vectores es: ", suma_total;
	
FinProceso
