//Proyecto LISTAS, COLAS y PILAS
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
using namespace std;
//-----------------------------------------------------------------------------------
//Nodo Colas
struct nodof1
{
	char dato1;
	nodof1 *siguiente1;
};
//Funciones Colas
void insertarf1(nodof1 *&, nodof1*&, char);
void mostrarf1(nodof1 *&, nodof1*&, char &);
bool cola_vaciarf1(nodof1*);
int OpCola;
//-----------------------------------------------------------------------------------


//Variables Generales
int op;
void Colas();
void menupilas();
void menulistas();

int main()
{

	cout << "|||||||||||||||||||||||||||||||||||||" << endl;
	cout << "|||       INGRESO UNA OPCION      |||" << endl;
	cout << "|||           1.COLAS             |||" << endl;
	cout << "|||          2. PILAS             |||" << endl;
	cout << "|||          3. LISTAS            |||" << endl;
	cout << "|||           0. SALIR            |||" << endl;
	cout << "|||||||||||||||||||||||||||||||||||||" << endl;
	cin >> op;
	system("cls");
	switch (op)
	{
	case 1:
		cout << "Menu de colas" << endl;
		nodof1 *frente1 = NULL;
		nodof1 *fin1 = NULL;
		char f1;
		do
		{
			cout << "|||||||||||||||||||||||||||||||||||||" << endl;
			cout << "|||        INGRESO A COLA         |||" << endl;
			cout << "|||     1.INGRESO DE DATOS        |||" << endl;
			cout << "|||     2.MOSTRAR COLA            |||" << endl;
			cout << "|||     0. SALIR                  |||" << endl;
			cout << "|||||||||||||||||||||||||||||||||||||" << endl;
			cin >> OpCola;
			switch (OpCola)
			{
			case 1:
				cout << "INGRESO DATO" << endl;
				cin >> f1;
				insertarf1(frente1, fin1, f1);
				system("pause");
				system("cls");
				break;
			case 2:
				cout << "MOSTRAR COLA" << endl;
				while (frente1 != NULL)
				{
					mostrarf1(frente1, fin1, f1);
					if (frente1 != NULL)
					{
						cout << f1 << " , ";
					}
					else
					{
						cout << f1 << "." << endl;
					}
				}
				system("pause");
				system("cls");
				break;
			}

		} while (op != 0);
		cout << "ADIOS" << endl;
		break;
		/*case 2:
		cout << "hola" << endl;
		break;
		case 3:
		cout << "hola" << endl;
		break;
		default:
		break;*/
	}
	return 0;
}
//-----------------------------------------------------------------------------------------------------------
void Colas()
{

}
void insertarf1(nodof1 *&frente1, nodof1*&fin1, char f1)
{
	nodof1 *nuevo_nodo1 = new nodof1();
	nuevo_nodo1->dato1 = f1;
	nuevo_nodo1->siguiente1 = NULL;

	if (cola_vaciarf1(frente1))
	{
		frente1 = nuevo_nodo1;
	}
	else
	{
		fin1->siguiente1 = nuevo_nodo1;
	}
	fin1 = nuevo_nodo1;
	cout << "Elemento -- " << f1 << " -- Insertado a cola correctacmente" << endl;
}

//Funcion booleana
bool cola_vaciarf1(nodof1 *frente1)
{
	return(frente1 == NULL) ? true : false;
}

//Funcion Mostrar
void mostrarf1(struct nodof1 *&frente1, nodof1*&fin1, char &f1)
{
	f1 = frente1->dato1;
	nodof1 *aux = frente1;
	if (frente1 == fin1)
	{
		frente1 = NULL;
		fin1 = NULL;
	}
	else
	{
		frente1 = frente1->siguiente1;
	}
	delete aux;

}
//-------------------------------------------------------------------------------------------------------------
void menupilas()
{

}
void menulistas()
{

}