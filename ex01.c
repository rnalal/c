#include <stdio.h>
void main() {  //���� 
	short a = 32768;   //2byte : -32768~32767
	unsigned short b = 32768; //2byte : 0~65535
	int c = 1004;  //4byte
	unsigned int d = 1005;  //4byte
	long e = 300;   //4byte
	unsigned long f = 400;  //4byte
	
 	int age=25;  //4byte : 2�� 32�� 
	  
	printf("������ ����:%d\n",a);
	printf("������ ����:%d\n",b);
	printf("�Ϲ�����:%d\n",c);
	printf("��ȣ�����Ϲ�����:%d\n",d);
	printf("����������:%d\n",e);
	printf("��ȣ���¹���������:%d\n",f);
	printf("����� ���̴� %d �Դϴ�.", age);
}
