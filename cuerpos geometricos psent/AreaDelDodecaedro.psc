Algoritmo AreaDelDodecaedro
	
	Definir a Como real
	
	//datos de entrada
	Escribir " ingrese los datos de a "
	leer a
	
	si a < 0 Entonces
		Escribir " no se permiten numeros negativos "
	SiNo
		si a > 0 Entonces
			
			//procedimiento
			a = 3 *a^2 * raiz(25+10) * raiz(5)
			v = 1/4 * (15+7) * raiz(5)  * a^3
			
			//salida
			Escribir " el area es " a
			Escribir " el volumen es " v
			
		FinSi
	FinSi
	
	
	
	
	
	
	
FinAlgoritmo
