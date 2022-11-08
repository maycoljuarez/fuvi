Algoritmo tetraedro
	
	Definir a Como Real
	
	Escribir " ingrese el valor de a"
	leer a
	
	si a < 0 Entonces
		Escribir " no puede ingresar numeros negativos "
	SiNo
		si a > 0 Entonces
			
			A = a^2*raiz(3)
			V = raiz(2)/12*a^3
			H =  a  * raiz(6)/3
			
			Escribir " el valor de area es " A
			Escribir " el valor del volumen es " V
			Escribir " el valor de la altura es " H
		FinSi
	FinSi
	
FinAlgoritmo
