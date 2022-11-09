Algoritmo problemaNumero18
	
	Definir dia, mes, año Como Entero
	Definir nombreMes Como Caracter
	
	Escribir " favor ingrse el dia "
	leer dia 
	Escribir " haora ingrese el mes "
	leer mes
	Escribir " ingrese el año "
	leer año
	
	si dia  < 1 o dia > 31
		repetir
			Escribir " Dia fuera de rango "
			Escribir " ingrese un dia "
			leer dia
		Hasta Que dia > 0 y dia  < 32
		
	FinSi
	si mes < 1 o mes > 12
		Repetir
			Escribir " Mes fuera de rango "
			Escribir " favor ingresar el mes "
			leer mes 
		Hasta Que mes > 0 y mes < 13
	FinSi
	si año < 1
		Repetir
			Escribir " año fuera de rango "
			Escribir " ingrese el año "
			leer año
		Hasta Que año > 0
	FinSi
	Segun mes Hacer
		caso 1: nombreMes = " enero "
		Caso 2: nombreMes = " febrero "
		caso 3: nombreMes = " marzo "
		caso 4: nombreMes = " abril "
		Caso 5: nombreMes = " mayo "
		Caso 6: nombreMes = " junio "
		Caso 7: nombreMes = " julio "
		caso 8: nombreMes = " agosto "
		Caso 9: nombreMes = " septiembre "
		caso 10: nombreMes = " octubre "	
		Caso 11: nombreMes = " noviembre "
		caso 12: nombreMes = " diciembre "	
	FinSegun
	
	Escribir dia ,"de", nombreMes ,"de", año
FinAlgoritmo
