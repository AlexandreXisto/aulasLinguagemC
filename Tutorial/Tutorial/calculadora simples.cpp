#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int x, y;
	char op;

	printf("Digite a opera��o desejada: ");
	scanf_s("%c", &op);


	printf("Digite o primeiro valor: ");
	scanf_s("%i", &x);
	printf("Digite o segundo valor: ");
	scanf_s("%i", &y);

	switch (op)
	{
	case '+':
		printf("%i + %i = %i\n", x, y, x + y);
		break;

	case '-':
		printf("%i - %i = %i\n", x, y, x - y);
		break;

	case '*':
		printf("%i * %i = %i\n", x, y, x * y);
		break;

	case '/':
		printf("%i / %i = %i\n", x, y, x / y);
		break;

	default:
		printf("Op��o Inv�lida! \n");
		break;
	}
	return 0;
}