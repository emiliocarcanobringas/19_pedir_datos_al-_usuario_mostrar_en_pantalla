/*Ete programa lee los datos de una persona de la librer�a est�ndar: edad, sexo, estatura en metros que son datos
de tipo: entero, caracter y float (tipo real)*/

#include <iostream> //Librer�a est�ndar de entrada de datos
#include <locale.h> //Librer�a estandar de localizaci�n (regionalizaci�n)

using namespace std; //Damos acceso al espacio de nombres

main(){  //Inicio del programa
    setlocale(LC_CTYPE, "Spanish");
	int edadusuario; //Declaramos la variable edad
	char sexousuario[10]; //Declaramos la variable sexo
	float estaturas; //Declaramos las variables
	
		cout<<"Por favor ingrese la edad del usuario"<<endl; /*Solicitamos el valor de la variable edad*/ cin>>edadusuario; //Almacenamos la variable edad
		cout<<"Por favor ingrese el sexo del usuario"<<endl; /*Solicitamos el valor de la variable sexo*/ cin>>sexousuario; //Almacenamos la variable sexo
		cout<<"Por favor ingrese la estatura del usuario"<<endl; /*Solicitamos el valor de la estatura*/ cin>>estaturas; //Almacenamos la estatura
		
		cout<<"\nLa edad del usuario es: "<<edadusuario<<endl; //Mostramos en pantalla este mensaje e insertamos un salto de l�nea
	
		cout<<"El sexo del usuario es: "<<sexousuario<<endl; //Mostramos en pantalla este mensaje
	
		cout<<"La estatura del usuario es: "<<estaturas<<endl; //Mostramos en pantalla este mensaje
	
					
	return 0; //Fin del programa
	}

