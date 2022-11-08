Algoritmo AreaDelHexaedro
	
	Definir a, V Como Real
	
	//datos de entrada
	Escribir " ingrese los datos de a "
	Leer a
	
	si a < 0 Entonces
		Escribir " no se permiten numeros negativos "
	SiNo
		si a > 0 Entonces
			
			//procedimiento
			A= 6 * a^2
			V = a^3
			D = a*rc(3)
			Escribir " area del hexaedro " A
			Escribir " el volumen es " V
			Escribir " la Diagonal es de " D
		FinSi
	FinSi
	
FinAlgoritmo
