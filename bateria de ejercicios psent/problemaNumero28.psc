Algoritmo ContarParesImpares
	
	Definir nums, cantidadNumeros, contPares, contImpares, i Como Entero
		
	Escribir "Cuántos numeros va a ingresar? " Sin Saltar
	leer cantidadNumeros
	Dimension nums[cantidadNumeros]
	
	Escribir "Ingrese los numeros: "
	
	Para i = 1 Hasta cantidadNumeros Con Paso 1 Hacer
		Leer nums[i]
	Fin Para
	Para i = 1 Hasta cantidadNumeros Con Paso 1 Hacer
		Si(nums[i] mod 2 = 0) Entonces
			contPares = contPares + 1
			Escribir "Los numeros pares son: " nums[i]
		SiNo
			contImpares = contImpares + 1
			Escribir "Los numeros impares son: " nums[i]
		FinSi
	Fin Para
	
	Escribir "La cantidad de numeros pares ingresados fue " contPares
	Escribir "La cantidad de numeros impares ingresados fue " contImpares
	
FinAlgoritmo
