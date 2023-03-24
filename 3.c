#include <stdio.h>
//구구단
	void main(){
		int a;
		int b;
		for(a=1;a<=9;a++){
			for(b=1;b<=9;b++){
				printf("%d*%d=%d\t", b,a,a*b);
			}
			printf("\n");
		}
		int dan;
		printf("\n\n단 입력:");
		scanf("%d", &dan);
		gugudan(dan);
	}
	void gugudan(int su){
		int g;
		for(g=1;g<=9;g++){
			printf("%d*%d=%d\n", su,g,su*g);
		}
	}
