#include <stdio.h>
//최소공배수, 최대공약수 구하기
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
		printf("최대 공약수 : %d\n",gcd);
		printf("최소 공배수 : %d\n", lcm);
		}
		
 
