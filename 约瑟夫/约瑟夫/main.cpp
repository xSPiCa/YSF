#include<iostream>
#include<graphics.h>
#include <conio.h>
#define width 600 // ������С 
#define length 600
/*
 Բ��С �Լ��������� ����
*/
using namespace std;
typedef struct node
{
	int num;//���
	int x;//Բ�ĵ�x����
	int y;//Բ�ĵ�y����
	int r;//��ǰԲ�İ뾶��С
	node* next;
}node, * link;
void Joseph_Ring();//
void draw_Ring(int C_number,node ** head,int point=0);// ��ʼ���� // �������� λ�ã�������� 
void draw_transfer(int interval,node** head);// ת�ƶ���
void draw_select(node** head ,node * point);// ѡ�ж��� ѡ�к�ɾ�����
int main() {
	Joseph_Ring();
	return 0;
}

void Joseph_Ring(){


	node** head=new node*;// ͷָ��
	int n = 10,m=3;
	/*
	����ʽ����
	*/
	draw_Ring(n, head);
	draw_transfer(m,head);
	/*
	������
	*/
	delete head;
}

void draw_Ring(int C_number,node ** head ,int point){//���� 
}

void draw_transfer(int interval, node** head){
}

void draw_select(node** head,node* point){
}
