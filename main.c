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
	
	printf("���� 5�� ��������� �¸� �Դϴ�.\n");
	
	void make_bingo(int bingo[N][N]);
	
	printf("5%d\n", make_bingo);
	return 0;
}


void make_bingo(int bingo[N][N])     //�������� ���� 
{
    int i;      //1~25�� �ʱ�ȭ 
	int j;     
	
	for (i=0 ; i<N ; i++)
	{
		for (j=0 ; j<N ; j++)
		{
			bingo[i][j] = i*N +j +1;
		}
	}
}
	
	











