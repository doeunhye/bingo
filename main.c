#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#define N 5
#define M 5 

int initate_bingo(int bingo[N][N]);           //빙고테이블을 초기에 만듬 
int print_bingo();             //빙고 테이블 현재 상황을 화면에 출력 
int get_number_byMe();         //내가 빙고 번호 입력 선택 
int get_number_byCom();        //컴퓨터가 임의로 빙고 번호 선택 
int process_bingo();           //선택된 숫자를 입력받아서 빙고 테이블 칸을 채움 
int count_bingo();             //빙고 테이블이 채운 가로/세로/대각선 줄 수를 계산해서 반환 
 
int main(int argc, char *argv[]) {
	
	int user[N][N];
	int com[N][N];
	
	printf("빙고가 5줄 만들어지면 승리 입니다.\n");
	int initate_bingo(user);
	int initate_bingo(com);
	int print_bingo(user); 
	int print_bingo(com); 
	


	return 0;
}

int initate_bingo(int bingo[N][N])     //빙고판을 만듬 
{  
    int i=0;   
	int j=0;   
	int temp[50];
	int tem;
	
	srand((int)time(NULL));   //난수 발생 
	 
	
	//빙고판 0으로 초기화 
	for(i=0; i<N; i++ )
	{
		for(j=0; j<N; j++ )
			bingo[i][j] = 0;
			temp[i]=0;
	}
	

	//빙고판 N~N*N까지 난수 발생 
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			while(1)
			{
				tem = rand()%N*N+1;
				if(temp[tem]==0)
				{
					bingo[i][j] = tem;
					temp[tem] =1;
					break;
				}
			}
		}
	}

	//빙고판 출력 
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
			printf("%d",bingo[i][j]);
			printf("\n");
	}
}

	







