#include <stdio.h>
//�ּҰ����, �ִ����� ���ϱ�
	void main() {	 
		int a, b, i; 	
		int lcm; 	
		int gcd;	
		scanf("%d %d", &a, &b);
		
		for(i=1;i<=a && i<=b;i++){			
			if(a % i == 0 && b % i == 0){		
				gcd = i;							
				}
			}
		lcm = a*b/gcd;
		printf("�ִ� ����� : %d\n",gcd);
		printf("�ּ� ����� : %d\n", lcm);
		}
		
 
