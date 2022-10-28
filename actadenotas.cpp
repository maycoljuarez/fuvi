/*
Nombre del archivo: actadenotas.cpp
autor: danilo noguera
lugar: itv
intrucciones: el usuario ingresara los datos de cada estudiante y se le imprimira 
*/

#include<iostream>
#include<iomanip>
	using namespace std;
	
	int main(){
	
		// datos de entrada: cantidad de  nombre del estudiante, codigo de carnet, carrera, asignatura, codigo de asignatura, nombre del docente, inscripcion, pensum, primer parcial 25, segundo parcial 25, tercer parcial 24,
		 
		 const string carrera = " Tecnico superior en electronica industrial";
		 const string asignatura = " introduccion ala programacion";
         const string codigoAsignatura = " EI025 ";
         const string pensum = " 03-EI01";
         string nombreDocente;
         string fecha;
         int cantidadEstudiantes;
        
         // perdir datos al docente
         cout << "---------------------------------------------------"<<endl;
         cout << " Sea Bienvenido al sistema de registro academico" <<endl;
         cout << "---------------------------------------------------"<<endl;
         cout << "nombre del docente: ";
         getline(cin,nombreDocente);
         cout << " fecha: (DD/MM//AAAA)";
         cin >> fecha;
         cout << " Cantidad de estudiantes del grupo: ";
         cin >> cantidadEstudiantes;
         
         string codigoCarnet [ cantidadEstudiantes];
         string nombreCompleto[ cantidadEstudiantes];
         int primerParcial [ cantidadEstudiantes];     //25
         int segundoParcial [ cantidadEstudiantes];    //25
         int tercerParcial [ cantidadEstudiantes];     //25
         int acumulado [ cantidadEstudiantes];         //25
         int notaFinal  [ cantidadEstudiantes];        //100
         char observacion  [ cantidadEstudiantes];     // R-reprobado, A-aprobado
         
         
         cout <<"-----------------------------------------------------" << endl;
         cout << " Ingrese los datos de cada estudiante" <<endl;
         cout <<"-----------------------------------------------------" <<endl;
         for(int i = 0; i < cantidadEstudiantes; i++){
         	cout << "Estudiantes[" << i+1 <<"]" <<endl;
         	cout << "Codigo de carnet = ";
         	cin >> codigoCarnet[i];
         	cout << "Nombre completo = ";
         	getline(cin >> ws,nombreCompleto[i]);
         	cout <<"Nota primer parcial = ";
         	cin >> primerParcial[i];
         		cout <<"Nota segundo parcial = ";
         	cin >> segundoParcial[i];
         		cout <<"Nota tercer parcial = ";
         	cin >> tercerParcial[i];
         		cout <<"Nota de acumulado= ";
         	cin >> acumulado[i];

		 }
         
         //procesamiento
         for(int i = 0; i < cantidadEstudiantes;i++){
         	notaFinal[i] = primerParcial[i]+segundoParcial[i]+tercerParcial[i]+acumulado[i];
		 }
		 //determinar si el estudiante aprobo o reprobo
		  for(int i = 0; i < cantidadEstudiantes;i++){
		  	if(notaFinal[i] < 70){
		  	    observacion[i] ='R';
		  	    
			  }else
			    observacion[i] ='A';
			  
    }
    
		 // CALCULAR EL PROMEDIO DEL GRUPO
		 int sumaNotas = 0, promediodeNotas;
		   for(int i = 0; i < cantidadEstudiantes;i++){
         	sumaNotas += notaFinal[i];
		 }
		 
		 promediodeNotas = sumaNotas / cantidadEstudiantes;
		 
		 // presentacion de los resultados ------ imprimir acta de notas
		 string inscripcion;
		 cout <<"-----------------------------------------------------" << endl;
         cout << " Acta de calificaciones" <<endl;
         cout <<"-----------------------------------------------------" <<endl;
         cout << " Inscripciones:\t" << inscripcion << endl;
         cout << " Asignatura:\t" << asignatura << endl;
         cout << " Docente:\t" << nombreDocente << endl;
         cout << setw(15) << "Carbet"  << setw(35) << "Nombre Completo"  << setw(10) << "Pensum" <<   setw(7) << "Nota 1P"  << setw(7) << "Nota 2P"  << setw(7) << "Nota 3P"  << setw(8) << "Nota ACUM" << setw  <<  "final" << " observaciones";
	        for(int i = 0; i < cantidadEstudiantes;i++){
         	cout << setw(15) << codigoCarnet[i] << setw(35) << nombreCompleto[i] << setw(10) << pensum <<   setw(7) << primerParcial[i]  << setw(7) << segundoParcial[i]  << setw(7) << tercerParcial[i]  << setw(8) << acumulado[i] << notaFinal[i] << observacion[i];
		}
		
		cout << " promedio del grupo: " << promediodeNotas << endl;
		cout <<"-----------------------------------------------------" <<endl;
		
	
}