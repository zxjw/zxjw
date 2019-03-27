/*8 
  PAT 
  PAAT 
  AAPATAA 
  AAPAATAAAA 
  xPATx 
  PT 
  Whatever 
  APAAATAA*/
#include<iostream>
#include<string>
using namespace std;

int n,pat[10],count[3];
char s[101];
char Ans[2][4]={"YES","NO"};
int isPAT(){
	int i,i_p,i_t;
	//i:字符串长度 
	//i_p:P在 字符串中的位置 
	//i_t:T在字符串中的位置 
	i_p=i_t=1;//删除似乎无影响 
	for(int a=0;a<3;a++){
		count[a]=0;				
	}
	for(i=0;s[i]!='\0';i++){
		switch(s[i]){
			case 'P':
				count[0]++;//数组值的自增 
				if(count[0]>1)
				    return 1;
				i_p=i;
				break;
			case 'A':
				count[1]++;
				break;
			case 'T':
				count[2]++;
				if(count[2]>1)
				    return 1;
				i_t=i;
				break;
			default:
				return 1;
		}
	}
	//(i-i_t-1)代表T字符后边A字符的数量;
	//i_p为P前面A的数量;
	//在PAT中间的A的数量为(i_t-i_p-1) 
	if(i_t==-1||i_p==-1)
		return 1;
	else{
		//觉得这块才是有用的 
		if((i_t-i_p-1)!=0&&(i_t-i_p-1)*i_p==i-i_t-1)
		      return 0;
	    else
	          return 1;
	}
} 
int input(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		pat[i]=isPAT();
	}
}
int ANS(){
	for(int i=0;i<n;i++){
		cout<<Ans[pat[i]]<<endl;
	}
}
int main(){
	input();
	ANS();
	return 0;
}




 
