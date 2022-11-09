Algoritmo probleNumero21
	
	Definir i,j,n Como Entero
	
	Escribir " digite un numero "
	leer n
	
	para  i<- n  Con Paso -1 Hasta 1 Hacer
		Para j <-0 Hasta ( n-i-1) Hacer
			Escribir "" Sin Saltar
		FinPara
		para j <- 1 Con Paso 1 Hasta i Hacer
			Escribir "*" Sin Saltar
			
		FinPara
		Escribir ""
	FinPara
	
FinAlgoritmo
