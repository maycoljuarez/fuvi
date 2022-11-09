Algoritmo problemaNumero17
	
	Definir x,a,b como  entero
	x=1
	a=0
	b=0
	Mientras x <= 100 Hacer
		si x mod 2 == 0 Entonces
			Escribir " Numero multiplo de 2 : ",x
			a = a + 1
		FinSi
		si x mod 3 == 0 Entonces
			Escribir " Numero multiplo de 3 :", x
			b = b + 1
		FinSi
		x = x + 1
		
	FinMientras
	Escribir " Numeros multiplos de 2 : ", a
	Escribir " Numeros multiplod de 3 : ", b
	
FinAlgoritmo
