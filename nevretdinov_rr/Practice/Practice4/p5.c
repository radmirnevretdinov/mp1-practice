#include <time.h> 
#include <stdlib.h> 
#include <locale.h> 
#include<stdio.h> 

void Name(int o)
{
	if (o == 0)
		printf_s("������\n");
	if (o == 1)
		printf_s("Garage\n");
	if (o == 2)
		printf_s("������\n");
	if (o == 3)
		printf_s("������\n");
	if (o == 4)
		printf_s("�������� �� ������������\n");
}
void main()
{
	setlocale(LC_ALL, "Russian");
	srand((unsigned int)time(0));

	int NW; //����� ��������� 
	int sh[5] = { 6531, 6532, 6533, 6534, 6535 }; // ������ ����������
	int k[5] = { 0 }; // ���������� ��������� �������, ������� ����� � ���� 
	int a[5] = { 70, 60, 180, 100, 200 }; // ���� �� �������(��������) 
	int s[5] = { 0 }; // ��� ����� �������� ����������� ���� �� �������, �������� ���������� 
	int sale[5] = { 0 };
	int i;
	int r; 
	int I = 0; // ����� 
	int S = 0; // ������ 

	printf("������� ����� ��������� �� ������������:\n 6531\n 6532\n 6533\n 6534\n 6535\n ������� 0, ����� ������������ ���.\n");
	scanf("%d", &NW);

	for (i = 0; i < 5; i++)
		sale[i] = 1 + rand() % 50;

	while (NW >= 6531 && NW <= 6535)
	{
		
		for (i = 0; i < 5; i++)
		{
			if (NW == sh[i])
			{
				r = i;
			}
		}
				k[r]++;
				Name(r);
				printf("������ %d\n", sale[r]);
				s[r] = a[r] * k[r] - (a[r] * sale[r] * k[r] / 100);
				printf("���� � ������ ������ � ���-�� %d\n", s[r]);
			
			printf("\n");
			scanf("%d", &NW);

			if (NW == 0)
				break;
		}

		for (i = 0; i < 5; i++)
		{
			S = S + (a[i] * k[i] - s[i]);
			I = I + s[i];
		}

		// ��� 
		printf("\n\n");
		printf("��� ���\n");

		for (i = 0; i < 5; i++)
		{
			if (k[i] != 0)
			{
				Name(i);
				printf("���� �� ������� %d, �� %d, ���� � ������ ���-�� � ������ %d\n", a[i], k[i], s[i]);
			}
		}
		printf("���� ������ � ��� %d\n", S);
		printf("����� � ���: %d\n", I);
		printf("������� �� �������!\n");
	}

