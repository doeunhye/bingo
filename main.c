#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#define N 5
#define M 5 

int initate_bingo([N][N]);           //�������̺��� �ʱ⿡ ���� 
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
	
	while(1)
		{
			
		}
	 

	return 0;
}


void initate_bingo(int bingo[N][N])     //�������� ���� 
{
   srand((unsinged int)tinme(NULL));
   
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
	
	











