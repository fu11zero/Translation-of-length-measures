#include "pch.h"
#include <locale.h>
#include <stdio.h>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	char check = '\0';
	float cm = 0;
	printf_s("Введите количество сантиметров для перевода в дюймы: ");
	while (scanf_s("%f%c", &cm, &check, 1) != 2 || check != '\n' || cm <= 0)
	{
		printf_s("Ошибка,попробуйте ещё раз используя только положительные числа\n");
		while (getchar() != '\n');
	}
	float inch = cm / 2.54;
	printf_s("Это в дюймах: %f ", inch);
	printf_s("\nНажмите любую клавишу для выхода из программы\n");
	getchar();
	return 0;
}
