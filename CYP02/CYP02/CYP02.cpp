#include <stdio.h>

int main() {
	//Esta variable ser� la que recibir� el valor del tama�o del archivo BMP.
	int tamArch;

	//Esta variable ser� la que recibir� el valor de cu�ntos bits se dedicar�n a los colores del archio BMP.
	int colArch;

	//Detecci�n de valores.
	scanf_s("%d", &tamArch);
	scanf_s("%d", &colArch);


	//Imprimir resultado con el formato especificado en el PDF.
	printf("BM%08X00000000%08X", tamArch, colArch);

	//Devolver 0 al sistema.
	return(0);
}