#include<iostream>
#include<cstdlib>
#include<windows.h>
#include<string.h>
#include<fstream>
#include<iomanip>
#include<cstring>
using namespace std;
//agegando colores al menu 
#define Color_Red 12
#define Color_Def 15
#define Color_Yellow 14
#define Color_Green 10

//menu principal

void titulo1(){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Green);	
	cout<<"      _____________________________________________________________________"<<endl;
	cout<<"      |                                   ____________________            |"<<endl;
	cout<<"      |                                   | NOMBRE1\xA5"<<"         |___________ |"<<endl;
	cout<<"      |        ******************         | NOMBRE2          |  EMPRESA  ||"<<endl;
	cout<<"      |         SISTEMA DE VENTAS         | NOMBRE3          |           ||"<<endl;
	cout<<"      |        ******************         |                  | EMPRESCORP||"<<endl;
	cout<<"      |  _________________________________|                  |           ||"<<endl;
	cout<<"      |  |  _    _           _    _    _  |   _ _  _ _  _ _  |   ______  ||"<<endl;
	cout<<"      |  | | |  | |  _____  | |  | |  | | |       ______     |   |  _ |  ||"<<endl;
	cout<<"      |  | |_|  |_|  | | |  |_|  |_|  |_| |       |  | |     |   |  | |  ||"<<endl;
	cout<<"      ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;	
}

//men� principal
void menu1(){
    cout<<"      ---------------------------------------------------------------------\n";
    cout<<"              <<<<<<<<<<          SISTEMA DE VENTAS          >>>>>>>>>>";
    cout<<"\n      ---------------------------------------------------------------------\n\n";

    cout<<"                                                                    "<<endl;
    cout<<"      (1)COMPRAS                ||    ||    ||||     ||    |||||||||   "<<endl;
    cout<<"      (2)VENTAS                 ||    ||    || ||    ||    ||     ||       "<<endl;
    cout<<"      (3)INVENTARIO             ||    ||    ||  ||   ||    |||||||||       "<<endl;
    cout<<"      (4)SALIR                  ||    ||    ||   ||  ||    ||            "<<endl;
    cout<<"                                ||    ||    ||    || ||    ||         "<<endl;
    cout<<"                                ||||||||    ||     ||||    ||     "<<endl;
}

//compras
void menu2(){
    cout<<"      ---------------------------------------------------------------------\n";
    cout<<"                 <<<<<<<<<<         COMPRAS        >>>>>>>>>>";
    cout<<"\n      ---------------------------------------------------------------------\n\n";
    cout<<"                                        "<<endl;
    cout<<"      (1)VER LOS PROVEEDORES               "<<endl;
    cout<<"      (2)REGRESAR AL MENU PRINCIPAL             "<<endl;
    cout<<"              					   "<<endl;
    cout<<"               					 "<<endl;
    cout<<"                 			        "<<endl;
    cout<<"                            	       "<<endl;
    cout<<"                                         PROYECTO - PROGRAMACION "<<endl;	
}
//ventas
void menu3(){
    cout<<"      ---------------------------------------------------------------------\n";
    cout<<"                 <<<<<<<<<<         VENTAS        >>>>>>>>>>";
    cout<<"\n      ---------------------------------------------------------------------\n\n";
    cout<<"      (1)VENDER PRODUCTO              "<<endl;
    cout<<"                                        "<<endl;
    cout<<"      (2)VER VENTAS REALIZADAS            "<<endl;
    cout<<"                                      "<<endl;
    cout<<"      (3)SALIR          "<<endl;
    cout<<"                                    "<<endl;
    cout<<"                       "<<endl;

    cout<<"                                         PROYECTO - PROGRAMACION "<<endl;
    cout<<"      Ingrese el numero de la opcion : ";
}
//inventario
void menu4(){

    cout<<"      ---------------------------------------------------------------------\n";
    cout<<"                 <<<<<<<<<<         INVENTARIO        >>>>>>>>>>";
    cout<<"\n      ---------------------------------------------------------------------\n\n";

    cout<<"      (1)VER CODIGO DEL PRODUCTO              "<<endl;
    cout<<"                                        "<<endl;
    cout<<"      (2)VER PRODUCTO            "<<endl;
    cout<<"                                      "<<endl;
    cout<<"      (3)VER INVENTARIO          "<<endl;
    cout<<"                                    "<<endl;
    cout<<"      (4)SALIR                  "<<endl;

    cout<<"                                         PROYECTO - PROGRAMACION "<<endl;

    cout<<"      Ingrese el numero de la opcion : ";

}
//COMPRAS
void mostrar_proveedores(){
	ifstream archivo_entra("proveedores.txt");//leer archivo
	char car; //variable para leer
	while(archivo_entra.get(car))
	cout<<car;
	archivo_entra.close();
	cout<<"Fin programa"<<endl;
}
//VENTAS
void ventas()
{
	{
	char rpta;
	char bus[20];
	int n;
	int j=0;
	int sum=0;
	int precio;
	int cod;
	int num;
	int total=0;
	char rpta1;
	do{
	cout<<"Ingrese nombre del producto"<<endl;
	cin.getline(bus,20);	
	ifstream archivo_codigo("codigodelproducto.txt");
	char car1;
	while(archivo_codigo.get(car1))
	{cout<<car1;}
	archivo_codigo.close();
	cout<<"Verifique si el producto existe en la lista y vea el precio s o n"<<endl;
	cin>>rpta;
	if(rpta=='n'){break;}
	cout<<"Ingrese el codigo del producto"<<endl;
	cin>>cod;
	//Precios de cada codigo 
	if(cod==1000) {precio=1;}	if(cod==1001) {precio=2;}
	if(cod==1002) {precio=3;}  	if(cod==1003) {precio=4;}
	if(cod==1004) {precio=4;}  	if(cod==1005) {precio=1;}
	if(cod==1006) {precio=2;}	if(cod==1007) {precio=1;}
	if(cod==1008) {precio=4;}   if(cod==1009) {precio=4;}
	if(cod==1010) {precio=9;}	if(cod==1011) {precio=3;}
	if(cod==1012) {precio=7;}	if(cod==1013) {precio=1;}
	if(cod==1014) {precio=9;}	if(cod==1015) {precio=2;}
	if(cod==1016) {precio=1;}	if(cod==1017) {precio=1;}
	if(cod==1018) {precio=1;}	if(cod==1019) {precio=8;}
	if(cod==1020) {precio=3;}	if(cod==1021) {precio=7;}
	if(cod==1022) {precio=2;}	if(cod==1023) {precio=9;}
	cout<<"cuantas unidades comprara?"<<endl;
	cin>>num;
	total=num*precio;
	cout<<"Ingrese (s) si va a comprar otro producto"<<endl;
	cout<<"Ingrese (n) si no va comprar otro producto"<<endl;
	cin>>rpta;
	sum=sum+total;
	if(rpta=='n' || rpta=='N'){j=1;}
	}
	while(j==0);
	cout<<"Precio total= "<<sum<<endl;
	char nom1[20];
	char nom2[20];
	char nom3[20];
	fstream clientes;
	cout<<"Ingrese nombre y apellidos del cliente en cada linea"<<endl;
	cin.getline(nom1,20);
	cin.getline(nom2,20);
	cin.getline(nom3,20);	
	clientes.open("clientes.txt",ios::out|ios::app);
	cout<<setiosflags(ios::showpoint)
	<<setprecision(2);
	clientes.put('\n');
	clientes<<nom1<<" "<<nom2<<" "<<nom3;
	clientes.close();
}	
}
		//corriendo el codigo
		


void clientes(){
	ifstream archivo_entra("clientes.txt");//leer archivo
	char car; //variable para leer
	while(archivo_entra.get(car))
	cout<<car;
	archivo_entra.close();
	cout<<"Fin programa"<<endl;	

}
//INVENTARIO
void codigodelproducto(){
	ifstream archivo_entra("codigodelproducto.txt");//leer archivo
	char car; //variable para leer
	while(archivo_entra.get(car))
	cout<<car;
	archivo_entra.close();
	cout<<"Fin programa"<<endl;	
}
void productos(){
	ifstream archivo_entra("producto.txt");//leer archivo
	char car; //variable para leer
	while(archivo_entra.get(car))
	cout<<car;
	archivo_entra.close();
	cout<<"Fin programa"<<endl;	
}
void inventario(){
	ifstream archivo_entra("inventario.txt");//leer archivo
	char car; //variable para leer
	while(archivo_entra.get(car))
	cout<<car;
	archivo_entra.close();
	cout<<"Fin programa"<<endl;	
}
int main(){
	cout<<"Hola soluciones coder"<<endl;
	
	int op1,op2;//operacion 1 y 2 para ingresar 

	do {
	titulo1();
	menu1();
	  cin>>op1;
	  	switch(op1){
	  		
	  		//limpiar pantalla
	  		//COMPRAS
		    case 1: system("cls");
			    do {
				  titulo1();			    	
		  		  menu2();
		  		  cin>>op2;
					switch(op2) //donde opci�n es la variable a comparar
					{
					    case 1:  system("cls");
					    mostrar_proveedores();
					    break;
						case 2: break;
		  				default: cout<<"Ingrese una opcion valida "<<endl; break;
					}
					cout<<endl;
					system("pause"); system("cls");
				}
				while (op2!=2);
		    break;
		    //VENTAS
		    case 2: system("cls");
			    do {
				  titulo1();			    	
		  		  menu3();
		  		  cin>>op2;
					switch(op2) //donde opci�n es la variable a comparar
					{
					    case 1:  system("cls");
					    ventas();
					    break;
					    case 2:  system("cls");
					    clientes();
					    break;					    
						case 3: break;
		  				default: cout<<"Ingrese una opcion valida "<<endl; break;
					}
					cout<<endl;
					system("pause"); system("cls");
				}
				while (op2!=3);		    
		    break;
		    //INVENTARIO
		    case 3: system("cls");//limpia pantall
			    do {
				  titulo1();			    	
		  		  menu4();
		  		  cin>>op2;
					switch(op2) //donde opci�n es la variable a comparar
					{
					    case 1:  system("cls");
					    codigodelproducto();
					    break;
					    case 2:  system("cls");
					    productos();
					    break;
					    case 3:  system("cls");
					    inventario();
					    break;											    
						case 4: break;
		  				default: cout<<"Ingrese una opcion valida "<<endl; break;
					}
					cout<<endl;
					system("pause"); system("cls");
				}
				while (op2!=4);		    
			break;
			
		    default: cout<<"Ingrese una opcion valida "<<endl; break;
		}
	}while (op1!=4);	
	return 0;
}
