#include <iostream>
#include <array>
using namespace std;

int main() {
	
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

		system("pause");
}