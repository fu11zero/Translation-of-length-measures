#include "pch.h"
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	float cm = 0;
	printf_s("Введите количество сантиметров для перевода в дюймы: ");
	scanf_s("%f", &cm);
	float inch = cm / 2.54;
	printf_s("Это в дюймах: ");
	printf_s("%f", inch);
	return 0;
}
