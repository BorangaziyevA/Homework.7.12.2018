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
	printf("����������� ����������� ����� = ");
	scanf_s("%d", &N);
	m1 = N / 10;
	m2 = N % 10;
	printf("������ ����� ������������ ����� = ");
	printf("%d\n", m1);
	printf("������ ����� ������������ ����� = ");
	printf("%d\n", m2);
}
void task3()
{
	float m, d;
	float pd;
	printf("������� = ");
	scanf_s("%f", &m);
	printf("���� = ");
	scanf_s("%f", &d);
	pd = ((m/2) * 30)+((m/2)*31) + d;
	int af = (int)pd;
	printf("������ ���� � ������ ���� = ");
	printf("%d\n", af);
}
void task2()
{
	int m, d, pd;
	printf("������� = ");
	scanf_s("%d", &m);
	printf("���� = ");
	scanf_s("%d", &d);
	pd = m * 30 + d;
	printf("������ ���� � ������ ���� = ");
	printf("%d\n", pd);
}
void task1()
{
	int h, m, s, ps/*(��������� ������� � ������ ���)*/;
	printf("����� = ");
	scanf_s("%d", &h);
	printf("����� = ");
	scanf_s("%d", &m);
	printf("������ = ");
	scanf_s("%d", &s);
	ps = (h * 60 * 60) + (m * 60) + s;
	printf("������ ������ � ������ ��� = ");
	printf("%d\n", ps);

}
void main()
{
	setlocale(LC_ALL, "");

	int task;
	int flag;

start:
	printf("������� ����� ������:");
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
	printf("������ ���������?1/0\n");
	scanf_s("%d", &flag);
	if (flag == 1)
		goto start;

	system("pause");
}