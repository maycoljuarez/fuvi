Algoritmo huesoEsferio
	
	Definir r,ngrado Como Real
	
	Escribir " el valor de r "
	leer r
	Escribir " buen trabao haora el valor de ngrado "
	leer ngrado
	
	si r < 0 y ngrado < 0 Entonces
		Escribir " no se permiten numeros negativos "
	SiNo
		si r > 0 y ngrado > 0 Entonces
			
			A = (4*PI*r^2*ngrado)/360
			
			V = 4/3*(PI*r^2*ngrado)/360
			
			Escribir " el valor del area es "   A
			Escribir " el valor del volumen es "  V
			
		FinSi
	FinSi
	
FinAlgoritmo
