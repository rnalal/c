#include <stdio.h>
//1~100�� �Ҽ� ���ϱ� 
void main() { 
		int sw = 0;
		int a;
		int div;
		for(a = 2; a <= 100; a++){
			int div;			
			for(div = 2; div < a; div++){	 
				if(a % div == 0){	 
					sw = 1;
					break;  
				} 	
			}
			if (!sw) {	 
				printf("%d\n",a);		
			}	
			sw = 0;
		} 
}
