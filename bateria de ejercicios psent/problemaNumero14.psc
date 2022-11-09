Algoritmo problemaNumero14
	
	Definir total,x Como Entero
	Definir n, suma, media Como Real
	Escribir " total de numeros a evaluar "
	leer total
	
	suma =0  
	x = 1
	Mientras x <= total Hacer
		Escribir " ingrese el numero " , x
		leer n
		
		suma = suma + n
		x = x + 1
		
	FinMientras
	
	media = suma / total
	Escribir " la media aritmetica es " media
	
	
	
	
FinAlgoritmo
