Algoritmo problemaNumero23
	
	Definir a,b,x Como Entero
	Definir total Como real
	Definir nombre Como Caracter
	
	a=0
	total=0
	x=0
	
	Escribir " favor de ingresar su nombre "
	leer nombre
	
	Mientras a <> 3 Hacer
		Escribir " 1 lista de lo que ofresemos "
		Escribir " 2 cuenta "
		Escribir " 3 salir "
		leer a
		
		si a == 1 Entonces
			b=0
			
			Mientras b <> 4 Hacer
				Escribir " 1 = bocadillo de jamon C$ 1.5 "
				Escribir " 2 = refresco C$ 1.05 "
				Escribir " 3 = cerveza C$ 0.75 "
				Escribir " 4 salir "
				leer b
				
				si b == 1 Entonces
					total=total + 1.5
				SiNo
					si b == 2 Entonces
						total=total + 1.05
					SiNo
						si b == 3 Entonces
							total=total + 0.75
							
						FinSi
					FinSi
				FinSi
			FinMientras
		SiNo
			si a == 2 Entonces
				Escribir nombre," su cuenta total es de : C$ ",total
			FinSi
		FinSi
		
	FinMientras
	
FinAlgoritmo
