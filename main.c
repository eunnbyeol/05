#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int answer= 59;
	int i;
	int trial=0;
	
	do
	{
	    printf("Guess a number :");	//입력해라 문구 출력 
		scanf("%d", &i);//입력을 받음
		if( i < 59)
		printf("Low!\n");
		if ( i > 59 )
		printf("High!\n");   //입력숫자가 정답보다 큰지 작은지 출력 
		trial++;
	 } 
	 while (i != 59);
	 printf("Number of trial = %i\n", trial); //시도 횟수 출력 
	 
	return 0;
}
