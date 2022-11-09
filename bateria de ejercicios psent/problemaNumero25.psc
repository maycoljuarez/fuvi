Algoritmo problemaNumero25
	
	Definir Fahrenheit,Celsius,sist,num Como real
	
	Fahrenheit = 1
	Celsius  = 2
	
	
	Escribir " favor ingrese el sistema con el que trabajaremos" Sin Saltar
	Escribir " 1 = Fahrenheit y el 2 = Celsius"
	leer sist
	
	si sist = 1 Entonces
		Escribir " ingrese el valor "
		leer num
		
		Celsius = (Fahrenheit-32)/1.8
	SiNo
		si 2 = Celsius Entonces
			Escribir " ingrese su valor "
			leer num
			
			
			Fahrenheit = (Celsius * 1.8 )+32
			
		FinSi
		
	FinSi
	
	Escribir " su valor de gradosFahrenheit a gradosCelsius es de:" Celsius
	Escribir " su valor de gradosCelsius a gradosFahrenheit es de:" Fahrenheit
FinAlgoritmo
