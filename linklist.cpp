#include<iostream>
using namespace std;
class Node{
	Node *next;
	int info;
	public:
		void Createll();
		void Insertbb();
		void insertee();
		void display();
};
		
Node *start=NULL;
Node *ptr;

void Node::display(){
	ptr=start;
	cout<<"Link is is:"
	while(ptr!=NULL){
		cout<<ptr->info<<"   ";
		ptr=ptr->next;
	}
}
void Node::Createll(){
	int val;
	start=NULL;
	ptr=new Node;
	cout<<"Enter the value for new node \n ";
	cin>>val;
	ptr->info=val;
	ptr->next=NULL;
	start=ptr;
}

void Node::Insertbb(){
	int val;
	Node *ptr;
	ptr=new Node;
	cout<<"Enter the value at befinning  \n ";
	cin>>val;
	ptr->info=val;
	if(start==NULL){
		start=ptr;
		ptr->next=NULL;
	}else{
		ptr->next=start;
		start=ptr;
	}
	cout<<"Newly inserted node is "<<ptr->info;
}
void Node:: insertee(){
	Node *temp;
	int val;
	ptr=new Node;
	cout<<"Enter the value \n";
	cin>>val;
	ptr->info=val;
	ptr->next=NULL;
	if(start==NULL){
		start=ptr;
	}else{
		temp=start;
		while(temp->next !=NULL){
			temp=temp->next;
		}
		temp->next=ptr;
		cout<<"newly added node is "<<ptr->info;
	}
}

int main(){
	Node n1;
	int op;
	while(true){
	
	cout<<"\n 1.create a link list \n 2.Insert at begining \n 3.Insert at end \n 4.exit \n 5.display \n";
	cout<<"Enter the one of the option from above"<<endl;
	cin>>op;
	switch(op){
		case 1:n1.Createll();
		break;
		case 2:n1.Insertbb();
		break;
		case 3:n1.insertee();
		break;
		case 4:exit(0);
		break;
		case 5:n1.display();
		break;
		default:cout<<"wrong option choose ";
		break;
	}
}
	return 0;
}
