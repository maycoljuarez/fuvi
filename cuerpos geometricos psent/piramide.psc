Algoritmo areaLateralPiramide
	
	Definir r, A, h, perimetro, apotemaPiramide Como Real
	
	Escribir " ingrese datos del perimetro "
	Leer perimetro
	Escribir " bien echo haora ingresa el valor del apotemaPiramide "
	Leer apotemaPiramide
	Escribir " genial haora ingresa el valor de A "
	leer A
	Escribir " bien echo haora ingresa el valor e r "
	Leer r
	Escribir " bien haora el ultimo valor h "
	leer h
	
	si perimetro < 0  y apotemaPiramide < 0  y A < 0  Y r < 0  Y h < 0 Entonces
		Escribir " no se permiten numeros negativos "
	SiNo
		si perimetro > 0 y apotemaPiramide > 0 y A > 0 y r > 0 y h > 0 Entonces
			
			AL = (perimetro*apotemaPiramide)/2
		    AT = AL+A
			V  = (PI*r^2*h)  / 3
			
			
			
			Escribir "Area lateral de la piramide " AL
			Escribir "Area total de la piramide " AT
			Escribir " el volumen es " V
			
		FinSi
	FinSi
	
FinAlgoritmo
