#include "pch.h"
#include <stdio.h>

int main()
{
	char check = '\0';
	float cm = 0;
	scanf_s("%f", &cm);
	float inch = cm / 2.54;
	printf_s("%f", inch);
	return 0;
}
