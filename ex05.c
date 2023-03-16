#include <stdio.h>
void main() {
	int a = 30, b = 35, c = 32;
	
	//비교연산자(==, !=, >, >=, <, <=) -> 0:false, 1:true	
	printf("a==b : %d\n", (a==b)); 
	printf("a!=b : %d\n", (a!=b));
	printf("a>b : %d\n", (a>b));
	printf("a>=b : %d\n", (a>=b));
	printf("a<b : %d\n", (a<b));
	printf("a<=b : %d\n", (a<=b));
	
	//논리연산자(&&,||,!)
	printf("a>b && b<c :%d %d %d\n",a>b, b<c, (a>b && b<c ));
	printf("a>b && b>c :%d %d %d\n",a>b, b>c, (a>b && b>c ));
	printf("a<b && b<c :%d %d %d\n",a<b, b<c, (a<b && b<c ));
	printf("a<b && b>c :%d %d %d\n",a<b, b>c, (a<b && b>c ));
	printf("\n");
	
	printf("a>b || b<c :%d %d %d\n",a>b, b<c, (a>b || b<c ));
	printf("a>b || b>c :%d %d %d\n",a>b, b>c, (a>b || b>c ));
	printf("a<b || b<c :%d %d %d\n",a<b, b<c, (a<b || b<c ));
	printf("a<b || b>c :%d %d %d\n",a<b, b>c, (a<b || b>c ));
	printf("\n");
	
	printf("!(a>b) : %d\n", !(a>b));
	printf("!(b>c) : %d\n", !(b>c));
	printf("!(a>b || b<c) : %d %d %d\n",a>b, b<c, !(a>b || b<c));
	 
}
