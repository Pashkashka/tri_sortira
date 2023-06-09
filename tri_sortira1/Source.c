#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<malloc.h>
void bubbleSort(int *num,int size)
{
	
	system("cls");
	for (int i = 0; i < size; i++) {
		printf("%d", num[i]);
		printf(" ");
	}
	printf("\n");

	int k2 = size;
	for (int i = 0; i < size; i++)
	{
		int swaped = 0, k1 ;
		/*for (int k = 0; k<size; k++)
		{
			printf("%d", num[k]);
			printf(" ");
			if (k == k2)
				printf("|");
		}
		printf("\n");*/
		k2--;
		for (int j = 0; j<size-i-1; j++) // ��� ���� ��������� ����� i-���
		{
			if (num[j] > num[j+1]) // ���� ������� ������� ������ �����������
			{
				swaped = 1;
				int temp = num[j + 1]; // ������ �� �������
				num[j + 1] = num[j];
				num[j] = temp;
				for (int k=0; k < size; k++) {
					printf("%d", num[k]);
					printf(" ");
					if (k == k2)
						printf("|");

				}
				printf("\n");
			}
		}
		if (swaped = 0)
			break;

	}
	getchar();   getchar();
}
void selectionSort(int* num, int size)
{
	system("cls");
	for (int i = 0; i < size; i++) {
		printf("%d", num[i]);
		printf(" ");
	}
	printf("\n");

	int min, temp,p=0; // ��� ������ ������������ �������� � ��� ������
	for (int i = 0; i < size - 1; i++)
	{
		min = i; // ���������� ������ �������� ��������
		// ���� ����������� ������� ����� ��������� �� ����� i-���
		for (int j = i + 1; j < size; j++)  // ��� ��������� ��������� ����� i-���
		{
			if (num[j] < num[min]) { // ���� ������� ������ ������������,
				min = j;// ���������� ��� ������ � min
				p = 1;
			}
			
		}
		temp = num[i];      // ������ ������� i-�� � ����������� ��������
		num[i] = num[min];
		num[min] = temp;
		if (p == 1) {
			for (int k = 0; k < size; k++) {
				printf("%d", num[k]);
				printf(" ");
			}
			printf("\n");
			p = 0;
		}

	}
	getchar();   getchar();
}
void insertSort(int *num, int size)
{
	system("cls");
	int i, j;
	for ( i = 0; i < size; i++) { // ���� ��������, i - ����� �������

		int x = num[i];

		// ����� ����� �������� � ������� ������������������

		for (j = i - 1; j >= 0 && num[j] > x; j--) {

			num[j + 1] = num[j]; // �������� ������� �������, ���� �� �����
			for (int k = 0; k < size; k++) {
				printf("%d", num[k]);
				printf(" ");
				
			}
			printf("\n");
		}


		// ����� �������, �������� �������

		num[j + 1] = x;
		for (int k = 0; k < size; k++) {
			printf("%d", num[k]);
			printf(" ");
			
		}
		printf("\n");

	}
	

	getchar();   getchar();
}

void menu()
{
	int n;
	int* num, size;
	printf("������� ������ �������\n");
	scanf_s("%d", &size);
	num = (int*)malloc(size * sizeof(int));
	printf("������� ������\n");
	for (int i = 0; i < size; i++)
		scanf_s("%d", &num[i]);
	system("cls");
	for (int i = 0; i < size; i++) {
		printf("%d", num[i]);
		printf(" ");
	}
	printf("\n");
	printf("1. ����������� ������� ������\n");
	printf("2. ����������� ������� ������\n");
	printf("3. ����������� ������� ������\n");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:
	{
		bubbleSort(num,size);
		break;
	}
	case 2:
	{
		selectionSort(num, size);
		break;
	}
	case 3:
	{
		insertSort(num, size);
		break;
	}

	}



}
void main()
{
	setlocale(LC_ALL, "Rus");
	menu();
}