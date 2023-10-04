#include<iostream>
using namespace std;
	
void add(int n0,int n1)
{
	cout<<n0+n1;
}
void sub(int n0,int n1){
	cout<<n0-n1;
}void mul(int n0,int n1){
	cout<<n0*n1;
}void div(int n0,int n1){
	cout<<n0/n1;
}

int main(){
	int n,n1,n2;
	cout<<"Enter the two number \n";
	cin>>n1;
	cin>>n2;
	cout<<"enter the choice from below \n 1.addition \n 2.subtraction \n 3. multiplication \n 4 division \n";
	cin>>n;
	switch(n){
	case 1:add(n1,n2);
	break;
	
	case 2:sub(n1,n2);
	break;
	case 3:mul(n1,n2);
	break;
	case 4:div(n1,n2);
	break;
	default:cout<<"You enter the wrong choice ";
	break;
	}

	return 0;
}
