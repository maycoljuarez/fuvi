Algoritmo ORTOEDRO
	
	Definir ab,ac,bc,a,b,c Como Real
	
	Escribir " ingrese el valor de ab "
	leer ab
	Escribir " bien haora el valor de ac "
	leer ac
	Escribir " bien haora el valor de bc "
	Leer bc
	Escribir " haora el valor de a "
	leer a
	Escribir " haora el valor de b "
	leer b
	Escribir " bien hecho haora el valor de c "
	leer c
	
	si ab < 0 y ac < 0 y bc < 0 y a < 0 y b < 0 y c < 0 Entonces
		Escribir " no se permiten numeros negativos "
	SiNo
		si ab > 0 y ac > 0 y bc > 0 y a > 0 y b > 0 y c > 0 Entonces
			
			A = 2*(ab+ac+bc)
			D =raiz(a^2+b^2+c^2)
			V = a*b*c
			
			Escribir " el angulo es "     A
			Escribir " la diagonal es "   D
			Escribir " el volumen es "    V
			
		FinSi
	FinSi
	
	
FinAlgoritmo
