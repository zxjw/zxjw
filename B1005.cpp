/*我们只需要验证其中的几个关键数，就可以不必再重复验证余下的数字
你的任务就是找出这些关键数字，并按从大到小的顺序输出它们
第 1 行给出一个正整数 K (<100)，
第 2 行给出 K 个互不相同的待验证的正整数 n (1<n≤100)的值
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

