#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#define N 5
#define M 5 

void make_bingo(int bingo[N][N]);
void mix_bingo(int bingo[N][N]);
void play_bingo(int bingo[N][N]);
int count_bingo(int bingo[N][N], int sum[N]);
 
int main(int argc, char *argv[]) {
	
	int user[N][N];
	int com[N][N];
	
	printf("빙고가 5줄 만들어지면 승리 입니다.\n");
	
	void make_bingo(int bingo[N][N]);
	
	return 0;
}


void make_bingo(int bingo[N][N])     //빙고판을 만듬 
{
    int i;      //1~25로 초기화 
	int j;     
	
	for (int i ; i<N ; i++)
	{
		for (int j ; j<N ; J++)
		{
			bingo[i][j] = i*N +j +1;
		}
	}
	
}
	
	











