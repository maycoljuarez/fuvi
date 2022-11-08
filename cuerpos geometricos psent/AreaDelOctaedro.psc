Algoritmo AreaDelOctaedro
	
	Definir a Como Real
	//DATOS DE ENTRADA
	Escribir " ingrese los datos de a "
	leer a
	
	si a < 0 Entonces
		Escribir " no se permiten numeros negativos "
	SiNo
		si a > 0 Entonces
			
			A= 2 * a^2 * raiz(3)
			V = raiz(2) / 3 * a^3
			
			Escribir " area del octaedro " A 
			Escribir " el volumen es " V
			
		FinSi
	FinSi
	
FinAlgoritmo
