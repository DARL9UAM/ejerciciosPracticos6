Algoritmo productoDeDosMatrizes
	Dimension  matriz1[100,100]
	Dimension matriz2[100,100]
	Dimension resultado[100,100]
		Definir fila1, columna1, fila2, columna2, i, j, k como Entero;
		
		Escribir "Ingrese el número de filas de la primera matriz:"
		Leer fila1
		Escribir "Ingrese el número de columnas de la primera matriz:"
		Leer columna1
		
		Escribir "Ingrese los elementos de la primera matriz:"
		Para i = 1 Hasta fila1
			Para j = 1 Hasta columna1
				Escribir "Ingrese el elemento (", i, ",", j, "):"
				Leer matriz1[i,j]
			FinPara
		FinPara
		
		Escribir "Ingrese el número de filas de la segunda matriz:"
		Leer fila2
		Escribir "Ingrese el número de columnas de la segunda matriz:"
		Leer columna2
		
		Si columna1 <> fila2 Entonces
			Escribir "No se pueden multiplicar las matrices debido a dimensiones incompatibles·"
		Sino
			Escribir "Ingrese los elementos de la segunda matriz:"
			Para i = 1 Hasta fila2
				Para j = 1 Hasta columna2
					Escribir "Ingrese el elemento (", i, ",", j, "):"
					Leer matriz2[i,j]
				FinPara
			FinPara
			
			Para i = 1 Hasta fila1
				Para j = 1 Hasta columna2
					resultado[i,j] = 0
					Para k = 1 Hasta columna1
						resultado[i,j] = resultado[i,j] + matriz1[i,k] * matriz2[k,j]
					FinPara
				FinPara
			FinPara
			
			Escribir "La matriz resultante es:"
			Para i = 1 Hasta fila1
				Para j = 1 Hasta columna2
					Escribir resultado[i,j]
				FinPara
			FinPara
		FinSi
	
FinAlgoritmo
