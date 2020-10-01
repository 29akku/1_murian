#include<bits/stdc++.h>
using namespace std;

struct llnode
{
  int rno;
  llnode *next;	
};

llnode *head=NULL;

void create();
void display();
void display_recursive(llnode *curr);

int main()
{
	
 int n;	
 cout << "Menu: " << endl;
 cout << "1. Create " << endl;
 cout << "2. Display " << endl;
 cin>>n;
 int ch='y';

while(ch='y')
{
 switch(n)
 {
 	case 1: int temp;
	        cout<<"enter the no of data you want enter : ";
 	        cin>>temp;
 	        cout<<endl<<"enter data : "<<endl;
 	        while(temp--)
 	        create();
 	        //break;
 	        
 	case 2: display();
 	case 3: display_recursive(head);
 }
	cout<<"wanna continue";
	cin>>ch;
}
 return 0;
}

void create()
{ int data;
  cin>>data;
  llnode *newllnode= new llnode;
  newllnode->rno=data;
  newllnode->next=head;
  head=newllnode;
}

void display()
{  llnode *curr=head;
	if(head==NULL)
	cout<<"NULL";
	while(curr!=NULL){
		cout<<curr->rno<<" ";
		curr=curr->next;
	}
cout<<endl;
}

void display_recursive(llnode *curr)
{
	if(curr==NULL)
	cout<<"NULL";
	
	cout<<curr->rno<<" ";
	curr=curr->next;
	display_recursive(curr);
}
