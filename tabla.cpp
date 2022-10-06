#include<iomanip>
#include<iostream>

	using namespace std;
	
	int main(){
		
		cout << left;
		cout  << setw(20)<< "asignatura" << setw(10) << "estudiantes" << endl
		      << setw(20)<< "programacion" << setw(10) << right << 12 << endl 
		                 << "redes" << setw(25) << right << 9 << left << endl;
		     
	
	
	return 0;
}
	