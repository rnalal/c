//���ڿ��� ó�� 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
	void main(){
		char str[100];
		fputs("���ڿ��� �Է��� �ּ��� :\n", stdout);	//���� �Ǵ� ����ͷ� ������ ���
		fgets(str, sizeof(str), stdin);		//���� �Ǵ� Ű����� ������ �Է�
		puts("�Է��Ͻ� ���ڿ� : ");		//����ͷ� ���
		puts(str);
		//stdin : ǥ�� �Է��� Ű�����, stdout : ǥ�� ����� ����ͷ�
		
		//char str[] = "C���";
		//printf("�� ���ڿ��� ���̴� %d�Դϴ�. \n", strlen(str));
		//char str01[20] = "C language is";	//null ���ڸ� �����Ͽ� 15����
		//char str02[] = "Cool! and funny!";
	} 
