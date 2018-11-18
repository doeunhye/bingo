#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#define N 5
#define M 5 

int initate_bingo(int bingo[N][N]);           //�������̺��� �ʱ⿡ ���� 
int print_bingo();             //���� ���̺� ���� ��Ȳ�� ȭ�鿡 ��� 
int get_number_byMe();         //���� ���� ��ȣ �Է� ���� 
int get_number_byCom();        //��ǻ�Ͱ� ���Ƿ� ���� ��ȣ ���� 
int process_bingo();           //���õ� ���ڸ� �Է¹޾Ƽ� ���� ���̺� ĭ�� ä�� 
int count_bingo();             //���� ���̺��� ä�� ����/����/�밢�� �� ���� ����ؼ� ��ȯ 
 
int main(int argc, char *argv[]) {
	
	int user[N][N];
	int com[N][N];
	
	printf("���� 5�� ��������� �¸� �Դϴ�.\n");
	int initate_bingo(user);
	int initate_bingo(com);
	int print_bingo(user); 
	int print_bingo(com); 
	


	return 0;
}

int initate_bingo(int bingo[N][N])     //�������� ���� 
{  
    int i=0;   
	int j=0;   
	int temp[50];
	int tem;
	
	srand((int)time(NULL));   //���� �߻� 
	 
	
	//������ 0���� �ʱ�ȭ 
	for(i=0; i<N; i++ )
	{
		for(j=0; j<N; j++ )
			bingo[i][j] = 0;
			temp[i]=0;
	}
	

	//������ N~N*N���� ���� �߻� 
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

	//������ ��� 
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
			printf("%d",bingo[i][j]);
			printf("\n");
	}
}

	







