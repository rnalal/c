#include <stdio.h>
	void main() {
		int i;
		int sum = 0;
		int score[3] = {85, 65, 90};		// score[0], score[1], score[2]�� ���� �� �ʱ�ȭ , int score[3]�� �迭�� 3�� �ִٴ� �� 
		score[3] = 100;						// score[3]�� �������� �ʰ� �ʱ�ȭ ���� , score[3]�� 4��° �迭�� �ǹ�(0���� �����ϴϱ�) 
		for (i = 0; i < 4; i++){			// score[3]�� ���Ŀ� ���� 
			sum += score[i]; 
		}
		int arr_len = sizeof(score) / sizeof(score[0]) + 1; 	// �迭�� ���̸� ���ϴ� ����(���� �ּҷ� ������ ������ +1�ؾ���) 
		printf("�迭 score�� ���̴� %d�Դϴ�.\n", arr_len);
		printf("���� �� ���� �հ�� %d�̰�, ��� ������ %f�Դϴ�.\n",
		sum, (double)sum/arr_len);
	} 
