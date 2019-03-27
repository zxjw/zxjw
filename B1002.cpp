/*1234567890987654321123456789    yi san wu*/
#include<iostream>
#include<stack>
using namespace std;

int sum;
char a[101];
char n[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};

int input(){
	cin>>a;
}
int add(){
	sum=0;
	for(int i=0;a[i]!='\0';i++){
		sum+=a[i]-'0';
	}
}
int math(){
	if(sum==0){
		cout<<"ling"<<endl;
	}
	else{
		stack<int> S;
		while(sum>0){
			S.push(sum%10);
			sum/=10;
		}
		cout<<n[S.top()];
		S.pop();
		while(!S.empty()){
			cout<<' '<<n[S.top()];
			S.pop();
		}
	}
}
int main(){
	input();
	add();
	math();
	return 0;
}


