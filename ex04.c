#include <stdio.h>
	void main() {
	int a = 50;
	int b = 90;
	int c = 80;
	int d = 70; 
	
	//��Ģ���� 
	printf("a+b=%d\n", a+b);
	printf("a-b=%d\n", a-b);
	printf("a*b=%d\n", a*b);
	printf("a/b=%f\n", (float) a/b);
	printf("a%%3=%d\n", a%3);
	
	//������
	printf("�������� a++ : %d\n", a++); 
	printf("�������� ++b : %d\n", ++b);
	printf("�������� c-- : %d\n", c--);
	printf("�������� --d : %d\n", --d);
	
	a = 50, b = 50;
	//���Կ�����
	a+=2; b-=2;
	printf("a+=2 -> a������ 2�� ���Ͽ� ������ ��� : %d\n", a);
	printf("b=+2 -> b������ 2�� �����Ͽ� ������ ��� : %d\n", b);
	a*=2; b/=2;
	printf("a*=2 -> a���� 2�� ���Ͽ� ������ ��� : %d\n", a);
	printf("b/=2 -> b���� 2�� �������Ͽ� ������ ��� : %d\n", b); 
	}
	
