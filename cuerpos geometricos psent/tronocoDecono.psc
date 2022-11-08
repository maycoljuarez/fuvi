Algoritmo tronocoDecono
	
	Definir g,R1,r,h Como Real
	
	Escribir " ingrese el valor de g"
	leer g
	Escribir " bien haora ingrese el valor de R1 "
	leer R1
	Escribir " bien haora ingrese el valor de r"
	leer r
	Escribir " bien haora ingrese el valor de h "
	leer h
	
	si g < 0 y R1 < 0 Y r < 0 y h < 0 Entonces
		Escribir " no se permiten numeros negativos "
	SiNo
		si g > 0 y R1 > 0 Y r > 0 y h > 0 Entonces
			
			A = PI * g * (R1+r)
			V = 1/3*PI*h*(R1^2+r^2+R1*r)
			
			Escribir " el area es "   A
			
			Escribir " el volumen es"  V
			
		FinSi
	FinSi
	
FinAlgoritmo
