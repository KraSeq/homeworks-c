#include <locale.h>
#include <stdio.h>

int main() {
	setlocale(LC_ALL, "rus");
	int num1;
	puts("������� �����");
	scanf("%d", &num1);
	printf("������� ����� %d\n", num1);

	puts("������� �����");
	int num;
	scanf("%d", &num);

	printf("����� ����� %d � %d ����� %d\n", num, num1, num + num1);
	printf("�������� ����� %d � %d ����� %d\n", num, num1, num - num1);
	printf("������������ ����� %d � %d ����� %d\n", num, num1, num * num1);
	printf("������� ����� %d � %d ����� %d\n", num, num1, num/num1);
	printf("������� �� ������� ����� %d �� %d ����� %d\n", num, num1, num % num1);

	return 0;
}	