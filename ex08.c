#include <stdio.h>
	void main() {
		//���ǹ� : if~, if~else~, if~else if~else~, switch~case~break
		int edps=90, db=100, pg=100, tot=0;
		char pass='F';
		float avg = 0.0f;
		//if~
		//����, ����� 60�̻��̸�, pass�� 'T'�̰�, �ƴϸ�, 'F'
		avg = (float)(edps+db+pg)/3;
		if(avg>=60) pass='T';	
		
		//pass�� "T"�̸� "�հ�", "F"�̸� "���հ�"�� ���
		if(pass=='T'){
			printf("�հ�\n");
		} else {
			printf("���հ�\n");
		}
		//����� 90�̻��̸� "��", 80�� �̻��̸� "��"
		//70�̻��̸� "��", 60�̻��̸� "��", 60�̸��̸� "��"�� ���
		if(avg>=90) {
			printf("��\n");
		} else if(avg>=80) {
			printf("��\n");			
		} else if(avg>=70) {
			printf("��\n");
		} else if(avg>=60) {
			printf("��\n");
		} else {
			printf("��\n");
		}
		
		
		//���� ��� ���� - � �����̶� 95�� �̻��̸�, "������" �ƴϸ�, "����"
		printf("���� ��� ����\n"); 
		if(edps>=95 || db>=95 || pg>=95){
			printf("������\n");
		} else {
			printf("����\n");
		}
		
		
		//������� - ��� ������ 90�̻��̸�, "������л�", �ƴϸ� "�Ϲ�"
		printf("�������\n"); 
		if(edps>=90 && db>=90 && pg>=90){
			printf("������л�\n");
		} else {
			printf("�Ϲ�\n");
		}
		
		//���: ����� 10���� ���� ������ 10�Ǵ� 9�̸�,1���,8�̸�,2���, 
		//7�̸�, 3���, �������� 5���(switch~case~break Ȱ��)
		int grade = avg/10; 
		switch(grade) {
			case 10:
			case 9:
				printf("1���");
				break;
			case 8:
				printf("2���");
				break;
			case 7:
				printf("3���");
				break;
			default:
				printf("5���");			
		} 
		
		 
	} 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
