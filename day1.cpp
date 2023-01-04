//area of the circle
/*#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int r;
	cin>>r;
	float formula=M_PI*r*r;
	cout<<formula;
}*/


//program to perform all arithmetic operations

/*#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	cout<<a+b;
	cout<<a/b;
	cout<<a*b;
	cout<<a-b;
	cout<<a%b;
}*/


//program to solve the quadratic equations

/*#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	
	cout<<"X1 value"<<endl;
	
	int x1= (-b+sqrt(b*b-4*a*c))/2*a;
	cout<<x1<<endl;
	
	cout<<"X2 value"<<endl;
	int x2=(-b-sqrt(b*b-4*a*c))/2*a;
	cout<<x2;
	
}*/
//program to swap to number

/*#include<iostream>
using namespace std;

int main(){
	int a,b,tem;
	cin>>a>>b;
	
	cout<<"before swaping the element"<<endl;
	cout<<"a"<<" "<<a<<" "<<"b"<< " "<<b<<endl;
	cout<<"after swaping the element "<<endl;
	tem=a;
	a=b;
	b=tem;
	cout<<"a"<<" "<<a<<" "<<"b"<<" "<<b;
}*/
//leap year
/*#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	if(n%4==0){
		cout<<"leap year";
	}else{
		cout<<"not leap year";
	}

}*/
//display multiplication table
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=10;i++){
		cout<<i<<"*"<<n<<"="<<i*n<<endl;
	}
}*/
//factorial
/*#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;

	int fact=1;
	for(int i=2;i<=n;i++){
		fact=fact*i;
	}
	cout<<fact;
}*/
//convert decimal to binary ,octal and hexadecimal
/*#include<iostream>
#include<cmath>
#define ull unsigned long long int
using namespace std;
int binary(	int n){
     
    ull B_Number=0;
    int ans=0;
 
	while(n!=0){
	int tep=n%2;
	ull c=pow(10,ans);
	B_Number+=tep*c;
	n=n/2;
	ans++;
	
	}
	return B_Number;
  
	}

int octal(int n){
	int ans=0;
	while(n!=0){
		int oct=n%8;
		ans=ans*10+oct;
		n=n/8;
	}
	return ans;
}
int hexadecimal(int n){
	int ans=0;
	while(n != 0){
		int ans=0;
		while( n!=0){
			int hex=n%16;
			ans=ans*10+hex;
			n=n/16;
			
		}
		return ans;
	}
}
int main(){
	int n;
	cin>>n;
	cout<<binary(n)<<endl;
	cout<<octal(n)<<endl;
	cout<<hexadecimal(n)<<endl;
}
*/














































































