/*3 5*/ 
#include<iostream>
#include<math.h>
using namespace std;
int n,cut;
void input(){
	cout<<"input number low than 1000:";
	cin>>n;
} 
void count(){
	cut=0;
	while(n!=1){
		if(n%2==0)n=n/2;
		else n=(3*n+1)/2;
		cut++;
	}
}
void display(){
  cout<<"cut="<<cut<<endl;
}
int main(){
	input();
	count();
	display();
	return 0;
}
