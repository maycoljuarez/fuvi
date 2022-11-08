Algoritmo cono
	
	Definir A,P,g,r Como Real
	
	Escribir " ingrese los datos de A "
	Leer A
	Escribir " bien haora ingrese los datos de P "
	Leer P
	Escribir " bien haora el datos de g "
	Leer g
	Escribir " ingrese el valor de r "
	leer r
	
	si A < 0 y P < 0 Y g < 0 y r < 0 Entonces
		Escribir " no puede ingresar numeros negativos "
	SiNo
		si A > 0 Y P > 0 Y g > 0 y r > 0 Entonces
			
			Al = (P * g)/2
			V  = (PI*r^2*A)/3
			AT = PI*r*g+r
			
			Escribir " el valor de area lateral es " Al
			Escribir " el valor del volumen es " V
			Escribir " el valor del area total es " AT
			
		FinSi
	FinSi
	
	
	
FinAlgoritmo
