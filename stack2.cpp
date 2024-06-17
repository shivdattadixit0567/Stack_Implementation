#include<bits/stdc++.h>
using namespace std;

#define ll long long

// stack using std::array<, N> ;

struct stak{
    int data;
    struct stak * next;
};


void display(struct stak *st){
    while(st!=NULL){
        cout << (st->data) << " ";
        st=st->next;
    }
    cout << endl;
}

struct stak * push(struct stak * st, int data){
    
   struct stak *st1;
   st1 = (struct stak*)malloc(sizeof(stak));
   
   if(st1==NULL){
       printf("stack is full");
   }else{
       st1->data = data;
       st1->next=st;
       st = st1;
       return st;
   }
}

struct stak* pop(struct stak * st){
    if((st->data)==NULL){
        cout << "Stack is empty" << endl;
    }else{
        struct stak * node = st->next;
        int x = st->data;
        delete st;
        st = node;
        return st;
    }
}

int main()
{
    struct stak *st;
    st = push(st,10);
   st = push(st,20);
   st = push(st,30);
   st = push(st,40);
    display(st);
    st = pop(st);
    display(st);
    return 0;
}