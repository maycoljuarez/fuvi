Algoritmo problemaNumero24
	
	Escribir " El programa acontinuacion resuelve ecuaciones de segundo grando "
	Definir A,B,C,x1,x2,disc como real
	
	Escribir "AX^2 + BX + C "
	Escribir " Introdusca el valor de A:"
	Leer A
	
	
	Escribir A," X^2 + BX + C "
	Escribir "***************************"
	
	Escribir " haora ingrese el valor de B:"
	Leer B
	
	
	Escribir A," X^2 + ",B,"X + C "
	Escribir "****************************"
	
	
	Escribir " Bien ingrese el valor de C:"
	leer C
	
	
	
    Escribir A, " X^2 + ",B,"X", " + " C
	Escribir " ***************************"
	
	//Proceso 
	
	Disc = (B^2)-4*(A*C)
	SI Disc < 0 Entonces
		x1 = ((-B)+rc(Disc))/(2*A)
		x2 = ((-B)+rc(Disc))/(2*A)
		//DATOS SALIDA
		Escribir "Raiz 1:",x1
		Escribir "Raiz 2:",x2
	SiNo
		si Disc < 0 Entonces
			parteReal = (-B)/(2*A)
			parteInmaginaria = rc(abs(Disc))/(2*A)
			
			//SALIDA
			Escribir " Raiz 1 ",parteReal," + ",parteInmaginaria," i "
			Escribir " Raiz 1 ",parteReal," - ",parteInmaginaria," i "
		SiNo
			Disc = 0
			r =(-B)/(2*A)
			//SALIDA
			Escribir " la Raiz es igual A : ",r
			
		FinSi
		Escribir " discriminates = ", Disc
		
	FinSi
	
	
	
	
	
FinAlgoritmo
