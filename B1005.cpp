/*����ֻ��Ҫ��֤���еļ����ؼ������Ϳ��Բ������ظ���֤���µ�����
�����������ҳ���Щ�ؼ����֣������Ӵ�С��˳���������
�� 1 �и���һ�������� K (<100)��
�� 2 �и��� K ��������ͬ�Ĵ���֤�������� n (1<n��100)��ֵ
6
3 5 6 7 8 11
7 6
*/
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std; 

int K;
int N[101];
bool R[101];

bool comp(const int &a,const int &b){
	return a>b;
}
int input(){
	int i;
	for(i=0;i<101;i++){
		R[i]=false;
		scanf("%d",&K);
		for(i=0;i<K;i++){
			scanf("%d";&N[i]);
			sort(N,N+K,comp);
		}
	}
}
int consume(int x){
	
}

