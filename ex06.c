#include <stdio.h>
	void main() {
		//비트 연산자(&,|,^,~,>>,<<)
		int a=20, b=30;
		printf("a&b : %d\n", a&b);  //and -> 20
		printf("a|b : %d\n", a|b);  //or -> 30
		printf("a^b : %d\n", a^b);  //xor -> 10
		printf("~a : %d\n", ~a);  //complement -> -21
		printf("a>>2 : %d\n", a>>2);  //right shift -> 5
		printf("a<<2 : %d\n", a<<2);  //left shift -> 80
		
		//기타 연산자
		int rank = a>b ? 1 : 2; //삼항 연산자
		int c=50, d=60; //쉼표 연산자
		printf("a>b ? 1 : 2 => %d\n", rank); //삼항 연산의 결과 -> 2 
 	}
