/*���� n��>0����ѧ����������ѧ�š��ɼ����ֱ�����ɼ���ߺͳɼ����ѧ����������ѧ�š�
  3
  Joe Math990112 89
  Mike CS991301 100
  Mary EE990830 95
  ����� 
  Mike CS991301
  Joe Math990112
*/ 
#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

struct Student{
	char name[11];
	char id[11];
	int score;
}st[100];

int n;
int Max,Min;
int input(){
	cin>>n;
	Max=Min=0;
	for(int i=0;i<n;i++){
		scanf("%s %s %d",st[i].name,st[i].id,&st[i].score);
		if(st[i].score>st[Max].score)
		    Max=i;
		if(st[i].score<st[Min].score)
		    Min=i;
	}	
} 
int display(){
	printf("%s %s\n",st[Max].name,st[Max].id);
	printf("%s %s\n",st[Min].name,st[Min].id);
}
int main(){
	input();
	display();
	return 0;
}


