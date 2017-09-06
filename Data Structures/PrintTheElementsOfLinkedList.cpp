#include<iostream>
using namespace std;
class SLL{
private:


public:
    int data;
    SLL *node;
    SLL(int data1)
    {

        data=data1;
        node=nullptr;
    }
    SLL()
    {
        node=nullptr;
    }
};
int main()
{
    int data=10;
    SLL *head=new SLL(10);
    SLL *second=new SLL(20);
    head->node=nullptr;
    head->node=second;
    SLL *current;

    current=head;
    while(current!=nullptr)
    {
        cout<<current->data<<endl;
        current=current->node;
    }







}
