#include<stdio.h>
#include<iostream>
#include<locale.h>

void task6()
{
	int m, n;
	printf("m = ");
	scanf_s("%d", &m);
	printf("n = ");
	scanf_s("%d", &n);

	if (m%n == 0)
		printf("TRUE\n");
	else
		printf("FALSE\n");

}
void task5()
{
	int  m1,m2,m3;
	printf("m1 = ");
	scanf_s("%d", &m1);
	printf("m2 = ");
	scanf_s("%d", &m2);
	printf("m3 = ");
	scanf_s("%d", &m3);


	if ((m1 > m2) && (m2 > m3))
		printf("%d\n", m3);
	else if ((m1 > m3) && (m3 > m2))
		printf("%d\n", m2);
	else if ((m2 > m1) && (m1 > m3))
		printf("%d\n", m3);
	else if ((m2 > m3) && (m3 > m1))
		printf("%d\n", m1);
	else if ((m3 > m2) && (m2 > m1))
		printf("%d\n", m1);
	else if ((m3 > m1) && (m1 > m2))
		printf("%d\n", m2);
}
void task4()
{
	int m1, m2, N;
	printf("Двухзначное натуральное число = ");
	scanf_s("%d", &N);
	m1 = N / 10;
	m2 = N % 10;
	printf("Первое число двухзначного числа = ");
	printf("%d\n", m1);
	printf("Второе число двухзначного числа = ");
	printf("%d\n", m2);
}
void task3()
{
	float m, d;
	float pd;
	printf("Месяцев = ");
	scanf_s("%f", &m);
	printf("Дней = ");
	scanf_s("%f", &d);
	pd = ((m/2) * 30)+((m/2)*31) + d;
	int af = (int)pd;
	printf("Прошло дней с начала года = ");
	printf("%d\n", af);
}
void task2()
{
	int m, d, pd;
	printf("Месяцев = ");
	scanf_s("%d", &m);
	printf("Дней = ");
	scanf_s("%d", &d);
	pd = m * 30 + d;
	printf("Прошло дней с начала года = ");
	printf("%d\n", pd);
}
void task1()
{
	int h, m, s, ps/*(Прошедшие секунды с начала дня)*/;
	printf("Часов = ");
	scanf_s("%d", &h);
	printf("Минут = ");
	scanf_s("%d", &m);
	printf("Секунд = ");
	scanf_s("%d", &s);
	ps = (h * 60 * 60) + (m * 60) + s;
	printf("Прошло секунд с начала дня = ");
	printf("%d\n", ps);

}
void main()
{
	setlocale(LC_ALL, "");

	int task;
	int flag;

start:
	printf("Введите номер задачи:");
	scanf_s("%d", &task);
	switch (task)
	{
		case 1:task1(); break;
		case 2:task2(); break;
		case 3:task3(); break;
		case 4:task4(); break;
		case 5:task5(); break;
		case 6:task6(); break;
	default:
		break;
	}
	printf("Хотите продлжить?1/0\n");
	scanf_s("%d", &flag);
	if (flag == 1)
		goto start;

	system("pause");
}