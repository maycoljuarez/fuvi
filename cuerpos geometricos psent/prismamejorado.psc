Algoritmo AreaLateralDelPrisma
	
	//area lateral del prisma
	
	definir Perimetro,altura como real
	// DATOS DE ENTRADA
	Escribir "ingresar datos  perimetro , altura "
	Leer Perimetro
	leer altura
	
	
	si Perimetro < 0  y altura < 0 Entonces
		Escribir " no se permiten numeros negativos "
	SiNo
		si Perimetro > 0 y altura > 0 Entonces
			
			AreaLatral =Perimetro * altura
			AreaTotal = AreaLatral + 2 * AreaLatral
			volumen = AreaTotal * altura
			
			
			Escribir " area lateral del prisma " AreaLatral
			Escribir " area total de prisma  " AreaTotal
			Escribir " volume del prisma  " volumen
			
		FinSi
	FinSi
	
FinAlgoritmo
