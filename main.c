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
	    printf("Guess a number :");	//�Է��ض� ���� ��� 
		scanf("%d", &i);//�Է��� ����
		if( i < 59)
		printf("Low!\n");
		if ( i > 59 )
		printf("High!\n");   //�Է¼��ڰ� ���亸�� ū�� ������ ��� 
		trial++;
	 } 
	 while (i != 59);
	 printf("Number of trial = %i\n", trial); //�õ� Ƚ�� ��� 
	 
	return 0;
}
