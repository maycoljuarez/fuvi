Algoritmo problemaNumero13
	
	Definir n,x,sumaPares Como real
	Escribir " cuantos numeros desea sumar "
	leer n
	
	sumaPares = 0
	para x = 1 Hasta n Hacer
		si x mod 2 == 0 Entonces
			sumaPares = sumaPares + x
			
		FinSi
	FinPara
	
	Escribir " La suma de los " ,n, " numeros pares  es: " ,sumaPares
FinAlgoritmo
