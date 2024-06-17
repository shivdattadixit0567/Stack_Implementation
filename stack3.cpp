#include<bits/stdc++.h>
using namespace std;

#define ll long long

// stack using std::array<, N> ;

class Node{
    public:
    int data;
    Node * next;
};

class stak{
    Node * top;
    public:
    stak(){
        top=NULL;
    }
    void push(int x);
    int pop();
    void display();
};

void stak::push(int x){
    Node * new_node = new Node;
    new_node->data=x;
    new_node->next=this->top;
    this->top=new_node;
}

int stak::pop(){
    Node * new_node = this->top;
    int x = this->top->data;
    this->top = this->top->next;
    delete new_node;
    return x;
}

void stak::display(){
    Node * p = this->top;
    while(p!=NULL){
        cout << (p->data) << " ";
        p = p->next;
    }
    cout << endl;
}


int main()
{
    stak * st = new stak;
    st->push(30);
    st->push(20);
    st->push(10);
    st->display();
    cout << st->pop() << endl;
    st->display();
    return 0;
}