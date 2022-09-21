#include <stdio.h>
#include <locale.h>
#define D_E 2.54
#define D_SP 2,32166
#define D_S 2,7076

#define MILE_N 1.852
#define MILE_L 1.609
#define MILE_R 1.475
#define MILE_OLD_R 7.468
#define MILE_G 7412.6

int main()
{
	setlocale(LC_ALL, "RUS");
	
	int num1, num2;
	puts("Введите число:");
	scanf("%d", &num1);
	printf("Введено число %d\n", num1);
	puts("Введите число:");
	scanf("%d", &num2);
	printf("Введено число %d\n", num2);

	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("Остаток деления от %d и %d равен %d\n", num1, num2, num1 % num2);

	int dym;
	float result1;
	float result2;
	float result3;
	puts("Введите дюймы:");
	scanf("%d", &dym);
	result1 = D_E * dym;
	result2 = D_SP * dym;
	result3 = D_S * dym;
	printf("%d английских дюймов – это %.2f см\n", dym, result1);
	printf("%d испанских дюймов – это %.2f см\n", dym, result2);
	printf("%d старолитовских дюймов – это %.2f см\n", dym, result3);

	int mile;
	float result_nauticle;
	float result_land;
	float result_rome;
	float result_old_russian;
	float result_geograph;
	puts("Введите число миль:");
	scanf("%d", &mile);

	result_nauticle = MILE_N * mile;
	result_land = MILE_L * mile;
	result_rome = MILE_R * mile;
	result_old_russian = MILE_OLD_R * mile;
	result_geograph = MILE_G * mile;

	printf("%d морских миль – это %.2f см\n", mile, result_nauticle);
	printf("%d сухопутных миль – это %.2f см\n", mile, result_land);
	printf("%d римская миль – это %.2f см\n", mile, result_rome);
	printf("%d старорусская миль – это %.2f см\n", mile, result_old_russian);
	printf("%d географическая миль – это %.2f см\n", mile, result_geograph);

	int a;
	int b;
	puts("Введите число:");
	scanf("%d", &a);
	printf("Введено число %d\n", a);
	puts("Введите число:");
	scanf("%d", &b);
	printf("Введено число %d\n", b);
	printf("________________________\n");
	printf("| a * b | a + b | a - b|\n");
	printf("------------------------\n");
	printf("| %d * %d | %d + %d | %d - %d|\n", a, b, a, b, a, b);
	printf("------------------------\n");
	printf("|   %d   |   %d   |  %d   |\n", a *b, a + b, a - b);
}