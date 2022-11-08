Algoritmo TRONCOdePiramide
	
	Definir P1,Pb, AP, h, A1,Ab Como Real
	
	Escribir " ingrese el valor de P1 "
	leer P1
	Escribir " buen trabajo haora ingresa el valor de Pb "
	Leer Pb
	Escribir " bien haora el valor de AP "
	leer AP
	Escribir " bien haora el valor de h "
	leer h
	Escribir " bien haora el valor de A1 "
	Leer A1
	Escribir " bien haora el valor de Ab "
	leer Ab
	
	si Pb < 0 y P1 < 0 Y AP < 0 Y h < 0 y A1 < 0 y Ab < 0 Entonces
		Escribir " no se permiten numeros ngativos "
	SiNo
		si Pb > 0 y P1 > 0 Y AP > 0 Y h > 0 y A1 > 0 Y Ab > 0 Entonces
			
			A = P1+Pb/2*AP
			
			V = 1/3 * h  * ( A1 + Ab ) + raiz(A1*Ab)
			
			Escribir " el valor del area es "   A
			Escribir " el valor del volumen es "   V
		FinSi
	FinSi
	
FinAlgoritmo
