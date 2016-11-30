#include <stdio.h>


int main() {
	int x = 25;
	int *p = &x;
	printf("La direccion de memoria de la variable x es: %p", x);
	//cout << "La direccion de memoria del apuntador p es: " << &p << endl;
	//cout << "El valor del apuntador p es: " << p <<  endl;
	//cout << "El valor de la direccion de memoria a la que apunta el apuntador p es: " << *p << endl;
	return 0;
}
