#include<bits/stdc++.h>
using namespace std;
struct LL{
	int data;
	LL *next;
};
LL* insert(LL *node,int d)
{
	LL *temp=node;
	if(d)
	{
		temp=new LL;
		node->data=d;
		node->next=NULL;
	   cout<<node->data;
	}
	return temp;
}
void print(LL *head)
{
	LL *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
	
}
int main()
{
	LL *head=NULL;
	LL *temp=head;
	int d=10;
	temp=insert(temp,d);
	temp=temp->next;
	d=20;
	temp=insert(temp,d);
	print(head);
	
}
