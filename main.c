#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#define N 5
#define M 5 

int initate_bingo(int bingo[N][N]);           //�������̺��� �ʱ⿡ ���� 
int print_bingo(int bingo[N][N]);             //���� ���̺� ���� ��Ȳ�� ȭ�鿡 ��� 
int get_number_byMe();         //���� ���� ��ȣ �Է� ���� 
int get_number_byCom();        //��ǻ�Ͱ� ���Ƿ� ���� ��ȣ ���� 
int process_bingo();           //���õ� ���ڸ� �Է¹޾Ƽ� ���� ���̺� ĭ�� ä�� 
int count_bingo();             //���� ���̺��� ä�� ����/����/�밢�� �� ���� ����ؼ� ��ȯ 
 
int main(int argc, char *argv[]) {
	
	int bingo[N][N];
	int user[N][N];
	int com[N][N];
	
	print_bingo(user);
	print_bingo(com);
	
	

	


	return 0;
}

int initate_bingo(int bingo[N][N])     //�������� ���� 
{  
    int i=0;   
	int j=0;   
	int temp[50];
	int tem=0;
	
	srand((int)time(NULL));   //���� �߻� 
	 
	//������ 0���� �ʱ�ȭ 
	for(i=0; i<N; i++ )
	{
		for(j=0; j<N; j++ )
			{
			bingo[i][j] = 0;
			temp[i]=0;
			}
	}
	//������ N~N*N���� ���� �߻� 
}
	//������ ��� 
int print_bingo(int bingo[N][N])
{
	int i,j;
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		  {
		  	printf("5%d",bingo[i][j]);
		  }
		  printf("\n");
	}
	return initate_bingo(print_bingo);
}


	







