#include<iostream>
#include<graphics.h>
#include <conio.h>
#define width 600 // 画布大小 
#define length 600
/*
 圆大小 以及动画幅度 参数
*/
using namespace std;
typedef struct node
{
	int num;//编号
	int x;//圆心的x坐标
	int y;//圆心的y坐标
	int r;//当前圆的半径大小
	node* next;
}node, * link;
void Joseph_Ring();//
void draw_Ring(int C_number,node ** head,int point=0);// 初始化环 // 包括计算 位置，创建结点 
void draw_transfer(int interval,node** head);// 转移动画
void draw_select(node** head ,node * point);// 选中动画 选中后删除结点
int main() {
	Joseph_Ring();
	return 0;
}

void Joseph_Ring(){


	node** head=new node*;// 头指针
	int n = 10,m=3;
	/*
	交互式输入
	*/
	draw_Ring(n, head);
	draw_transfer(m,head);
	/*
	输出结果
	*/
	delete head;
}

void draw_Ring(int C_number,node ** head ,int point){//画环 
}

void draw_transfer(int interval, node** head){
}

void draw_select(node** head,node* point){
}
