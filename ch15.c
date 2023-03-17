#include <stdio.h>
	void main() {
		int i;
		int sum = 0;
		int score[3] = {85, 65, 90};		// score[0], score[1], score[2]만 선언 및 초기화 , int score[3]은 배열이 3개 있다는 뜻 
		score[3] = 100;						// score[3]를 선언하지 않고 초기화 진행 , score[3]은 4번째 배열을 의미(0부터 시작하니까) 
		for (i = 0; i < 4; i++){			// score[3]도 수식에 포함 
			sum += score[i]; 
		}
		int arr_len = sizeof(score) / sizeof(score[0]) + 1; 	// 배열의 길이를 구하는 공식(답이 주소로 나오기 때문에 +1해야함) 
		printf("배열 score의 길이는 %d입니다.\n", arr_len);
		printf("과목 총 점수 합계는 %d이고, 평균 점수는 %f입니다.\n",
		sum, (double)sum/arr_len);
	} 
