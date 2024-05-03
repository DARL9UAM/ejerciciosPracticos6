Proceso productoDeDosVectores
	Definir max Como Entero;
	max<- 10;
	
	Definir v1, v2, v3 Como Entero;
	Dimension v1[max];
	Dimension v2[max];
	Dimension v3[max];
	
	n1<-0;
	n2<-0;
	n3<-0;
	Escribir "Primer vector";
	Para i<-1 Hasta max Hacer
		Escribir "ingrese un numero";
		Leer v1[i];
		n1<-n1+1;
	FinPara
	
	Escribir "Segundo vector";
	Para i<-1 Hasta max Hacer
		Escribir "ingreses un numero";
		Leer v2[i];
		n2<-n2+1;
	FinPara
	
	Para i<-1 Hasta max Hacer
		v3[i] <- v1[i]*v2[i];
	FinPara
	n3 <- max;
	
	Escribir "los elemntos del vector 3 son: ";
	Para k<-1 Hasta n3 Hacer
		Escribir "el elemento de la posicion[ ", k ,"]", v3[k];
	FinPara
	
FinProceso
