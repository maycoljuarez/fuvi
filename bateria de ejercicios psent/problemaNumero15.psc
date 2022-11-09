Algoritmo problemaNumero15
	
	Definir contador Como Entero
	Definir contra Como Caracter
	
	contador = 1
	Mientras contador <= 3 Hacer
		Escribir " Bienvenido por favor ingrese su clave de acceso "
		leer contra
		
		si contra == "tuani" Entonces
			Escribir  " la clave es correcta "
			contador = 4
		SiNo
			si contador == 3 Entonces
				Escribir " lo sentimos has fallado los 3 intentos permitidos "
			SiNo
				Escribir " la clave es incorrecta "
			FinSi
			contador =contador + 1
		FinSi
	FinMientras
	
	

	
FinAlgoritmo
