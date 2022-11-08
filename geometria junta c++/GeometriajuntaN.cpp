/*
Nombre : Geometria Junta
Autor: Pablo vargas
Lugar: ITV
*/

#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float a;
	float abase;
	float abm;
	float al;
	float alat;
	float amenor;
	float ap;
	float at;
	float d;
	float g;
	float h;
	float n;
	int opci;
	float p;
	float pba;
	float pbas;
	float pi;
	float r;
	float rmayor;
	float v;
	do {
		cout << " ---------------Opciones--------------"<<endl;
		cout << " Para calcular el prima pulse 1 " << endl;
		cout << " Para calcular la piramide pulse 2 " << endl;
		cout << " Para calcular el cono pulse 3 " << endl;
		cout << " Para calcular el cilindro pulse 4 " << endl;
		cout << " Para calcular la esfera pulse 5 " << endl;
		cout << " Para calcular el tetraedro pulse 6 " << endl;
		cout << " Para calcular el hexaedro pulse 7 " << endl;
		cout << " Para calcular el octaedro pulse 8 " << endl;
		cout << " Para calcular el dodecaedro pulse 9 " << endl;
		cout << " Para calcular el icosaedro pulse 10 " << endl;
		cout << " Para calcular el tronco de cono pulse 11 " << endl;
		cout << " Para calcular el tronco de piramide pulse 12 " << endl;
		cout << " Para calcular el hueso esferico 13 " << endl;
		cout << " -----------para salir pulse 0---------- " << endl;
		cin >> opci;
		cout << endl;
		switch (opci) {
		case 1:
			cout << "----ingreso al prisma----" << endl;
			cout << " ingrese el valor del perimetro " << endl;
			cin >> p;
			cout << " ingrese el valor de  Altura " << endl;
			cin >> h;
			cout << " ingrese el valor de A(base) " << endl;
			cin >> a;
			al = p*h;
			at = al+2*a;
			v = a*h;
			cout << " el valor del area lateral del prisma es de: " << al << endl;
			cout << " el valor del area total del prisma es de: " << at << endl;
			cout << " el valor del volumen es de: " << v << endl;
			cout << " " << endl;
			cout << "Presione una tecla" << endl;
			cin.get(); 
			cout << endl; 
			break;
		case 2:
			cout << "----ingreso ala piramide----" << endl;
			cout << " ingrese el valor de perimetro " << endl;
			cin >> p;
			cout << " ingrese el valor del apotema base " << endl;
			cin >> ap;
			cout << " ingrese el valor de A(base) " << endl;
			cin >> a;
			cout << " ingrese el valor de la Altura " << endl;
			cin >> h;
			al = (p*ap)/2;
			at = al+2*a;
			v = (a*h)/3;
			cout << " el valor del area lateral de la piramide es de: " << al << endl;
			cout << " el valor del area total de la piramide es de: " << at << endl;
			cout << " el valor del volumen es de: " << v << endl;
			cout << " " << endl;
			cout << "Presione una tecla" << endl;
			cin.get(); 
			cout << endl; 
			break;
		case 3:
			cout << "----ingreso al cono----" << endl;
			cout << " ingrese el valor del perimetro " << endl;
			cin >> p;
			cout << " ingrese el valor de la generatiz " << endl;
			cin >> g;
			cout << " ingrese el valor del radio menor " << endl;
			cin >> r;
			cout << " ingrese el valor de A(base) " << endl;
			cin >> a;
			cout << " ingrese el valor de  Altura " << endl;
			cin >> h;
			al = (p*g)/2;
			at = M_PI*r*g+h;
			v = (M_PI*pow(r,2)*h)/3;
			cout << " el valor del area lateral del cono es de: " << al << endl;
			cout << " el valor del area total del cono es de: " << at << endl;
			cout << " el valor del volumen es de: " << v << endl;
			cout << " " << endl;
			cout << "Presione una tecla" << endl;
			cin.get(); 
			cout << endl; 
			break;
		case 4:
			cout << "----ingreso al cilindro----" << endl;
			cout << " ingrese el valor del perimetro " << endl;
			cin >> p;
			cout << " ingrese el valor del radio menor " << endl;
			cin >> r;
			cout << " ingrese el valor de A(base) " << endl;
			cin >> a;
			cout << " ingrese el valor de  Altura " << endl;
			cin >> h;
			al = 2*M_PI*r*h;
			at = al+a;
			v = M_PI*pow(r,2)*h;
			cout << " el valor del area lateral del cilindro es de: " << al << endl;
			cout << " el valor del area total del cilindro es de: " << at << endl;
			cout << " el valor del volumen es de: " << v << endl;
			cout << " " << endl;
			cout << "Presione una tecla" << endl;
			cin.get(); 
			cout << endl; 
			break;
		case 5:
			cout << "----ingreso ala esfera----" << endl;
			cout << " ingrese el valor del radio menor " << endl;
			cin >> r;
			at = 4*M_PI*pow(r,2);
			v = (4/3)*M_PI*pow(r,3);
			cout << " el valor del area total de la esfera es de: " << at << endl;
			cout << " el valor del volumen es de: " << v << endl;
			cout << " " << endl;
			cout << "Presione una tecla" << endl;
			cin.get(); 
			cout << endl; 
			break;
		case 6:
			cout << "----ingreso al tetraedro----" << endl;
			cout << " ingrese el valor de a(menor) " << endl;
			cin >> amenor;
			at = pow(amenor,2)*sqrtf(3);
			v = (sqrtf(2)/12)*pow(amenor,3);
			h = (sqrtf(6)/3)*amenor;
			cout << " el valor del area total del tetraedro es de: " << at << endl;
			cout << " el valor del volumen es de: " << v << endl;
			cout << " el valor de la altura es de: " << h << endl;
			cout << " " << endl;
			cout << "Presione una tecla" << endl;
			cin.get();
			cout << endl;
			break;
		case 7:
			cout << "----ingreso al Hexaedro----" << endl;
			cout << " ingrese el valor de a(menor) " << endl;
			cin >> amenor;
			at = 6*pow(amenor,2);
			v = pow(amenor,3);
			d = amenor*sqrtf(3);
			cout << " el valor del area total del Hexaedro es de: " << at << endl;
			cout << " el valor del volumen es de: " << v << endl;
			cout << " el valor de la Diagonal es de: " << d << endl;
			cout << " " << endl;
			cout << "Presione una tecla" << endl;
			cin.get(); 
			cout << endl; 
			break;
		case 8:
			cout << "----ingreso al octaedro----" << endl;
			cout << " ingrese el valor de a(menor) " << endl;
			cin >> amenor;
			at = 2*pow(amenor,2)*sqrtf(3);
			v = (sqrtf(2)/3)/pow(amenor,3);
			cout << " el valor del area total del tetraedro es de: " << at << endl;
			cout << " el valor del volumen es de: " << v << endl;
			cout << " " << endl;
			cout << "Presione una tecla" << endl;
			cin.get(); 
			cout << endl; 
			break;
		case 9:
			cout << "----ingreso al Dodecaedro----" << endl;
			cout << " ingrese el valor de a(menor) " << endl;
			cin >> amenor;
			at = (3*pow(amenor,2))*sqrtf(25+10)*sqrtf(5);
			v = (1/4)*15+7*sqrtf(5)*pow(amenor,3);
			cout << " el valor del area total del dodecaedro es de: " << at << endl;
			cout << " el valor del volumen es de: " << v << endl;
			cout << " " << endl;
			cout << "Presione una tecla" << endl;
			cin.get(); 
			cout << endl;
			break;
		case 10:
			cout << "----ingreso al icosaedru----" << endl;
			cout << " ingrese el valor de a(menor) " << endl;
			cin >> amenor;
			at = 5*pow(amenor,2)*sqrtf(3);
			v = (5/15)*3+sqrtf(5)*pow(amenor,3);
			cout << " el valor del area total del tetraedro es de: " << at << endl;
			cout << " el valor del volumen es de: " << v << endl;
			cout << " " << endl;
			cout << "Presione una tecla" << endl;
			cin.get(); 
			cout << endl; 
			break;
		case 11:
			cout << "----ingreso al tronco de cono----" << endl;
			cout << " ingrese el valor de r(radiomenor) " << endl;
			cin >> r;
			cout << " ingrese el valor de R(radiomayor) " << endl;
			cin >> rmayor;
			cout << " ingrese el valor de g(generatriz) " << endl;
			cin >> g;
			cout << " ingrese el valor de h(altura) " << endl;
			cin >> h;
			cout << " ingrese el valor de AL(arealateral) " << endl;
			cin >> alat;
			cout << " ingrese el valor de AB(areaBase) " << endl;
			cin >> abm;
			cout << " ingrese el valor de Ab(areabaseMenor) " << endl;
			cin >> abase;
			al = M_PI*g*rmayor+r;
			v = (1/3)*M_PI*h*pow(rmayor,2)+pow(r,2)+rmayor*r;
			at = alat+abm+abase;
			cout << " el valor del area total del tronco de cono es de: " << at << endl;
			cout << " el valor del volumen es de: " << v << endl;
			cout << " el valor del area latera del tronco de cono es de: " << al << endl;
			cout << " " << endl;
			cout << "Presione una tecla" << endl;
			cin.get(); 
			cout << endl; 
			break;
		case 12:
			cout << "----ingreso al tronco de piramide----" << endl;
			cout << " ingrese el valor de Pb(perimetrobaseMenor) " << endl;
			cin >> pbas;
			cout << " ingrese el valor de PB(perimetrobaseMayor) " << endl;
			cin >> pba;
			cout << " ingrese el valor de h(altura) " << endl;
			cin >> h;
			cout << " ingrese el valor de ap(apotemabase) " << endl;
			cin >> ap;
			cout << " ingrese el valor de AL(arealateral) " << endl;
			cin >> alat;
			cout << " ingrese el valor de AB(areaBase) " << endl;
			cin >> abm;
			cout << " ingrese el valor de Ab(areabaseMenor) " << endl;
			cin >> abase;
			al = (pba+pbas/2)*ap;
			v = (1/3)*h*abm+abase+sqrtf(abm*abase);
			at = alat+abm+abase;
			cout << " el valor del area total del tronco de piramide es de: " << at << endl;
			cout << " el valor del volumen es de: " << v << endl;
			cout << " el valor del area latera del tronco de piramide es de: " << al << endl;
			cout << " " << endl;
			cout << "Presione una tecla" << endl;
			cin.get();
			cout << endl; 
			break;
		case 13:
			cout << "----ingreso al Hueso esferico----" << endl;
			cout << " ingrese el valor de n(numeroDegrado) " << endl;
			cin >> n;
			cout << " ingrese el valor de r(radiomenor) " << endl;
			cin >> r;
			at = (4*M_PI*pow(r,2)*n)/360;
			v = (4/3)*(M_PI*pow(r,3)/n)/360;
			cout << " el valor del area total del Hueso esferico es de: " << at << endl;
			cout << " el valor del volumen es de: " << v << endl;
			cout << " " << endl;
			cout << "Presione una tecla" << endl;
			cin.get();
			cout << endl;
			break;
		default:
			cout << " ---Fin del Programa--- " << endl;
		}
	} while (opci!=0);
	return 0;
}

