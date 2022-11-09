Algoritmo problemaNumero22
	
	Definir año Como Entero
	Escribir " ingrese el año a evaluar "
	leer año
	
	si año mod 4 == 0 Entonces
		si año mod 100 == 0 Entonces
			si año mod 400 == 0 Entonces
				Escribir " el año ",año," es bisiesto"
			SiNo
				Escribir " el año ",año," no es bisiesto "
			FinSi
		SiNo
			Escribir " el año ",año," es bisiesto"
		FinSi
	SiNo
		Escribir " el año ",año," no es bisiesto "
	FinSi
	
		

FinAlgoritmo
