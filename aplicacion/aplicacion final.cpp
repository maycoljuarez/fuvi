
#include<iostream>
#include<stdlib.h>
using namespace std;


int main() {
	float i1;
	float i2;
	float i3;
	float it;
	int opci;
	float p1;
	float p2;
	float p3;
	float pt;
	float r1;
	float r2;
	float r3;
	float r4;
	float rt;
	float v1;
	float v2;
	float v3;
	float volt;
	float vt;
	do {
		cout << "--------------------------Menu De Opciones--------------------------------" << endl;
		cout << " SI Desea Saber las Caracteristicas de un Circuito serie precione 1 " << endl;
		cout << " Si Desea Calcular Un Circuito Serie Precione 2 " << endl;
		cout << " SI Desea Saber las Caracteristicas de un Circuito paralelo precione 3 " << endl;
		cout << " Si Desea Calcular Un Circuito Paralelo Precione 4 " << endl;
		cout << " ---Para salir del programa precione 0--- " << endl;
		cin >> opci;
		cout << endl; 
		switch (opci) {
		case 1:
			cout << "---Caracteristicas Circuito Serie---" << endl;
			cout << "1.El voltaje total sera igual ala suma de todas las caidas de tension" << endl;
			cout << "2.La corriente es la misma en todo el circuto" << endl;
			cout << "3.LA resistencia Total es Igual ala suma de las resistencias individuales" << endl;
	
			cin.get(); 
			
			cout << endl; 
			break;
		case 2:
			cout << " ---Calculo de Circuio serie---" << endl;
			cout << " Ingrese el valor de las resistencias " << endl;
			cin >> r1;
			cin >> r2;
			cin >> r3;
			cout << " Ingrese el voltaje " << endl;
			cin >> volt;
			if (r1>=1 && r1<=9999 && r2>=1 && r2<=9999 && r3>=1 && r3<=9999) {
				rt = r1+r2+r3;
				it = v1/rt;
				p1 = v2*it;
				p2 = v3*it;
				p3 = v4*it;
				pt = volt*it;
				v1 = r1*it;
				v2 = r2*it;
				v3 = r3*it;
				vt = rt*it;
				cout << "______________Respuestas_______________" << endl;
				cout << " Resistencia 1(uno) " << r1 << endl;
				cout << " Resistencia 2(dos) " << r2 << endl;
				cout << " Resistencia 3(tres) " << r3 << endl;
				cout << " Resistencia Total  " << rt << endl;
				cout << "______________Respuestas_______________" << endl;
				cout << " Voltaje 1(uno) " << v1 << endl;
				cout << " Voltaje 2(dos) " << v2 << endl;
				cout << " Voltaje 3(tres) " << v3 << endl;
				cout << " Voltaje Total  " << vt << endl;
				cout << "______________Respuestas_______________" << endl;
				cout << " Intencidad 1(uno) " << it << endl;
				cout << " Intencidad 2(dos) " << it << endl;
				cout << " Intencidad 3(tres) " << it << endl;
				cout << " Intencidad Total  " << it << endl;
				cout << "______________Respuestas_______________" << endl;
				cout << " Potencia 1(uno) " << p1 << endl;
				cout << " Potencia 2(dos) " << p2 << endl;
				cout << " Potencia 3(tres) " << p3 << endl;
				cout << " Potencia Total  " << pt << endl;
			} else {
				cout << " Error no puede ingresar resistencias o voltaje negativos " << endl;
			}
			
			cin.get();
			cout << endl; 
			break;
		case 3:
			cout << "---Caracteristicas Circuito Paralelo---" << endl;
			cout << "1.El Voltaje es el mismo en todos los componentes del circuito" << endl;
			cout << "2.La corriente no se ve afectada incluso cuando se agregan o eliminan más componentes (resistores) al circuito." << endl;
			cout << "3.La Resistencia Total (RT) siempre será menor que las resistencias individuales" << endl;
			
			cin.get(); 
			cout << endl; 
			break;
		case 4:
			cout << " ---Calculo de Circuio Paralelo---" << endl;
			cout << " Ingrese el valor de las resistencias " << endl;
			cin >> r1;
			cin >> r2;
			cin >> r3;
			cout << " Ingrese el voltaje " << endl;
			cin >> volt;
			if (r1>=1 && r1<=9999 && r2>=1 && r2<=9999 && r3>=1 && r3<=9999) {
				i1 = volt/r1;
				i2 = volt/r2;
				i3 = volt/r3;
				it = i1+i2+i3;
				
				r4=(r1*r2)/(r1+r2);
				rt=(r4*r3)/(r4+r3);
				
				p1 = volt*i1;
				p2 = volt*i2;
				p3 = volt*i3;
				pt = volt*it;
				cout << "______________Respuestas_______________" << endl;
				cout << " Resistencia 1(uno) " << r1 << endl;
				cout << " Resistencia 2(dos) " << r2 << endl;
				cout << " Resistencia 3(tres) " << r3 << endl;
				cout << " Resistencia Total  " << rt << endl;
				cout << "______________Respuestas_______________" << endl;
				cout << " Voltaje 1(uno) " << volt << endl;
				cout << " Voltaje 2(dos) " << volt << endl;
				cout << " Voltaje 3(tres) " << volt << endl;
				cout << " Voltaje Total  " << volt << endl;
				cout << "______________Respuestas_______________" << endl;
				cout << " Intencidad 1(uno) " << i1 << endl;
				cout << " Intencidad 2(dos) " << i2 << endl;
				cout << " Intencidad 3(tres) " << i3 << endl;
				cout << " Intencidad Total  " << it << endl;
				cout << "______________Respuestas_______________" << endl;
				cout << " Potencia 1(uno) " << p1 << endl;
				cout << " Potencia 2(dos) " << p2 << endl;
				cout << " Potencia 3(tres) " << p3 << endl;
				cout << " Potencia Total  " << pt << endl;
			} else {
				cout << " Error no puede ingresar resistencias o voltaje negativos " << endl;
			}

			cin.get(); 
			cout << endl; 
			break;
		}
	} while (opci!=0);
	
	system("pause");
	return 0;
}

