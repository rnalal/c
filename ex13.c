//������ ��ȿ ���� (scope-������) 
#include <stdio.h>
	void main() {
		int i = 5;
		int var = 10;
		printf("main() �Լ� ���� ���� ���� var�� ���� %d�Դϴ�.\n", var);
		if (i < 10){
			local();
			int var = 30;
			printf("if �� ���� ���� ���� var�� ���� %d�Դϴ�.\n", var);
		} 
		printf("���� ���� ���� var�� ���� %d�Դϴ�.\n", var);		
	}
	void local(){
		int var = 20;
		printf("local() �Լ� ���� ���� ���� var�� ���� %d�Դϴ�.\n", var);
	}
