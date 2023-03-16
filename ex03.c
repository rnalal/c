#include <stdio.h>
void main() {
	//이스케이프 문자
	/*
	(*)-자바에는 없고 c언어에는 존재 
	\' : 작은 따옴표
	\" : 큰 따옴표
	\? : 물음표 (*)
	\\ : 역슬래시
	\a : 경고음 출력 (*)
	\n : 줄바꿈 탭 
	\t : 수평 탭
	\b : 백스페이스
	\r : 캐리지 리턴 
	\f : 폼 피드(화면 스크롤)
	\v : 수직 탭 (*) 
	*/ 
	/*
	서식 지정자
	%c : 문자
	%s : 문자배열
	%d, %i(int) : 부호 있는 10진수 정수
	%u : 부호 없는 10진수 정수 
	%f, %lf : 실수	 
	%o : 8진수 
	%x : 16진수 
	%e, %E, %g, %G : 지수 (10의 6승 -> e+06)
	%% : 백분율 기호 
	*/
	int kor, eng, mat, tot;
	float avg = 0.0f; 
	printf("국어점수: " );
	scanf("%d", &kor); //&: kor의 기억장소
	printf("영어점수: " );
	scanf("%d", &eng);
	printf("수학점수: " );
	scanf("%d", &mat);
	tot = kor + eng + mat;
	avg = tot / 3.0f;
	printf("번호\t국어\t영어\t수학\t총점\t평균\n");
	printf("01\t%d\t%d\t%d\t%d\t%.3f\n",kor,eng,mat,tot,avg); 
}
