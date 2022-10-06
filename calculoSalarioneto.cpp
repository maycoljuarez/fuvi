/*
Nombre del archivo: calculo salario neto
autor: danilo noguera
lugar: itv
intrucciones:otro ejemplo de programacion estructurada
*/
#include<string>
#include<iostream>

	using namespace std;
	//VARIABLE GLOBALES - constantes
	const double TASA_ANTIGUEDAD = 15;
	const double TASA_SINDICATO = 1;
	const double TASA_INSS = 7;
	const double TASA_IR = 15.6;
	const double TASA_INSSPATRONAL = 22.5;
	int main(){
		//DECLARACION DE VARIABLES
		double salarioBruto, ingresoNeto, ingresoTotal, DeduccionesTotales;
		double ingresoAntiguedad, montoAfiliacion, INSSmonto, IRmonto, inssPatronal ;
		string nombre;
		//pedir datos al usuario
		cout << " ingrese su nombre :  " ;
		cin >> nombre;
		cout << " hola " << nombre << " , ingrese su salarioBruto : ";
		cin >>  salarioBruto;
		//calcular los ingresos
		ingresoAntiguedad = salarioBruto  * (TASA_ANTIGUEDAD/100);
		ingresoTotal = salarioBruto + ingresoAntiguedad;
		//calcular las deducciones al empleado
		montoAfiliacion = salarioBruto * (TASA_SINDICATO/100);
		INSSmonto = ingresoTotal * (TASA_INSS/100);
		IRmonto = ingresoTotal * (TASA_IR/100);
		DeduccionesTotales = montoAfiliacion + INSSmonto + IRmonto;
		// calcular ingreso nneto o salario neto
		ingresoNeto = ingresoTotal - DeduccionesTotales;
		//calcular las deducciones ala empleador
		inssPatronal = ingresoTotal * (TASA_INSSPATRONAL/100);
		//mostrar resultados
    	cout << "------------- nombre del empleado: " << nombre << endl; 
		
		cout << " salario bruto C$ = " << salarioBruto << endl;
		cout << " ------------- ingresos totales---------------- " << endl;
		cout << " monto por antiguedad C$ = " << ingresoAntiguedad << endl;
		cout << " monto de ingresos totales C$ = " << ingresoTotal << endl;
		cout << " ------------ deducciones totales ------------- " << endl;
		cout << " monto por afiliacion C$ = " << montoAfiliacion << endl;
		cout << " monto por inss C$ = " << INSSmonto << endl;
		cout << " monto por ir C$ = " << IRmonto << endl;
		cout << " monto por deducciones totales C$= " << DeduccionesTotales << endl;
		cout << " ------------ deducciones totales ------------ " << endl;
		cout << "  ingreso neto C$ =  " << ingresoNeto << endl;
		cout << " inss patronal C$ = " << inssPatronal << endl;
		
		
		
		
	
	return 0;
}
	