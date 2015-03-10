#include <iostream>
using namespace std;

int main()
{
 int a;	
 cout<<"Please input a integer:"<<endl;
 cin>>a;
 cout<<a<<' ';
 if(a==1)
 return 0;
 while(a!=1)
 {
 	if(a%2==1){
		a=3*a+1;
 	}
 	else{a=a/2;}
 	cout<<a<<' ';
 }
 cout<<endl;
 return 0;
}
