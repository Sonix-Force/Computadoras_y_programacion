#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");

	float base;
	float altura;
	float area;

	printf("Bienvenido a este programa el cual calcular� el valor del �rea de un rect�ngulo.\n\nPor favor, introduce el valor de la base del rect�ngulo: ");

	scanf_s("%f", &base);

	printf("\n\nAhora introduce el valor de la altura del rect�ngulo: ");
	
	scanf_s("%f", &altura);

	
	area = base * altura;


	printf("\n\nEsta es el �rea del rect�ngulo: %10.2f\n\n", area);
}