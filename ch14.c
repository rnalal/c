//����Լ�(self recursive) 
#include <stdio.h>
	void main() {
		int a;
		printf("�հ踦 ���� ���ڸ� �Է�:");
		scanf("%d", &a);
		printf("��� : %d", rSum(a));
	}
	int rSum(int n){
		if (n == 1) {				// n�� 1�̸�, �׳� 1�� ��ȯ��. 
			return 1;
		}
		return n + rSum(n-1);
		//n�� 1�� �ƴϸ�, n�� 1���� (n-1)������ �հ� ���� ���� ��ȯ��.		
	}
