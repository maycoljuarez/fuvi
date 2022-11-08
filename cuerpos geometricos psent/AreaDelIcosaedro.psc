Algoritmo AreaDelIcosaedro
	
	Definir a Como Real
	//DATOS DE ENTRADA
	Escribir " ingrese los datos de a "
	leer a
	
	si a < 0 Entonces
		Escribir " no e permiten numeros negativos "
	SiNo
		si a > 0 Entonces
			//PROCEDIMIENTO
			A= 5*a^2*raiz(3)
			V = 5/12 * 3 + raiz(5) * a^3
			
			Escribir " area del icosaedro " A
			Escribir " el volumen es " V
			
		FinSi
	FinSi
	
	
	
FinAlgoritmo
