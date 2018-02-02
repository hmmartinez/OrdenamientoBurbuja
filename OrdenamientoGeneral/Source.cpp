
#include <iostream>
#include <array>
using namespace std;

void ordenarArreglo(int[], int);
void intercambiar(int&, int&);
int main() {


	int opciones = 0;
	do {

		cout << "**Menu**\n1-Ordenamiento Burbuja\n2-Ordenamiento Simple\n3-Salir";
		cout << "\n\nElija su opcion: ";
		cin >> opciones;

		switch (opciones) {

		case 1: {
			array<int, 10> arreglo;


			int TAM = arreglo.size();

			for (int f = 0; f < TAM; f++) {
				cout << "Ingrese el valor para el espacio " << f + 1 << ": ";
				cin >> arreglo[f];
			}

			for (int i = 0; i < TAM; i++) {
				for (int j = 0; j < TAM - 1; j++) {

					if (arreglo[j] > arreglo[j + 1]) {
						int temp = arreglo[j];
						arreglo[j] = arreglo[j + 1];
						arreglo[j + 1] = temp;
					}
				}
			}

			cout << endl;

			for (int f = 0; f < TAM; f++) {
				cout << arreglo[f] << " ";
			}

			cout << endl;

		}
			break;
		case 2: {
			const int tamaño = 15;
			int valores;
			int arreglo[tamaño];


			for (int x = 0; x < 15; x++) {
				if (x == 0)
					cout << "Ingrese un valor :" << endl;
				else
					cout << "Ingrese otro valor :" << endl;


				cin >> valores;

				arreglo[x] = valores;

			}
			cout << "Mostrando arreglo :" << endl;
			for (int i = 0; i < 15; i++) {
				cout << "Posicion [" << i << "]=" << arreglo[i] << endl;



			}

			ordenarArreglo(arreglo, 15);
			cout << "Mostrando arreglo ordenado :" << endl;
			for (int i = 0; i < 15; i++) {
				cout << "Posicion [" << i << "]=" << arreglo[i] << endl;

			}

		}
			break;
		case 3: {
		}
			break;
		}


	} while (opciones != 3);
}


void ordenarArreglo(int arreglo[], int tamano) {
	for (int i = 0; i<tamano - 1; i++)
		for (int j = 0; j<tamano - 1; j++)
			if (arreglo[j] < arreglo[j + 1])
				intercambiar(arreglo[j], arreglo[j + 1]);
}



void intercambiar(int &a, int &b)
{
	int tmp = b;
	b = a;
	a = tmp;
}