Algoritmo problemaNumero26
	
	Definir prod,x,res Como Entero
	
	Escribir " cuando se ingrse cero(0) el programa finalizara"
	prod = 0
	x = 1
	res = 1
	
	Mientras x <> 0 Hacer
		Escribir " ingrese un numero "
		leer x
		si x <> 0 Entonces
			res = res * x
			prod = res
		FinSi
	FinMientras
	
	Escribir  " el producto de los numeros es:",prod
FinAlgoritmo
