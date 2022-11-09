Algoritmo problema32
	
	Definir a,b,x,maximo como entero
	Escribir " Ingrese dos numeros "
	leer a,b
	si a > 0 y b > 0 Entonces
		maximo=1
		x=1
		Mientras x <= a Hacer
			si a mod x = 0 y b mod x = 0 Entonces
				si x > maximo Entonces
					maximo=x
				FinSi
			FinSi
			x = x + 1
		FinMientras
		Escribir " el maximo comun divisor es: " maximo
	SiNo
		Escribir " debes ingresar numeros mayores a 0 "
	FinSi
	
FinAlgoritmo
