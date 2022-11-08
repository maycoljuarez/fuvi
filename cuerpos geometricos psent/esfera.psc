Algoritmo esfera
	
	Definir A, radioMenor Como Real
	
	//datos de entrada
	Escribir "datos de la esfera A,radioMenor"
	leer radioMenor
	
	SI  radioMenor < 0  Entonces
		Escribir  " no puede ingresar valores negativos "
	SiNo
		si radioMenor > 0 Entonces
			
			//procedimiento
			A= 4*PI*radioMenor^2
			V = 4/3 *(PI*radioMenor^3)
			
			Escribir "area de la esfera " A
			Escribir " el volumen es " V
			
		FinSi
	FinSi
	

FinAlgoritmo
