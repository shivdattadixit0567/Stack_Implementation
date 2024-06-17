#include<bits/stdc++.h>
using namespace std;

#define ll long long

// stack using std::array<, N> ;

struct stak{
    int size;
    int top;
    int *s;
};

void create(struct stak *st){
    int n;cin>>n;
    st->size = n;
    st->top = -1;
    
    st->s = (int *)malloc(st->size*sizeof(int));
}

void display(struct stak st){
    int i;
    for(i=(st.top);i>=0;i--){
        cout << (st.s[i]) << " ";
    }
    cout << endl;
}

void push(struct stak * st, int data){
    if((st->top)==(st->size)-1)
        cout << "stack is full" << endl;
    else{
        st->top++;
        st->s[st->top] = data;
    }
}

int pop(struct stak * st){
    if((st->top)==-1){
        cout << "Stack is empty" << endl;
    }else{
        int x = st->s[st->top--];
        return x;
    }
}

int peek(struct stak st, int index){
    if(st.top-index+1 < 0)
        return -1;
    else{
        int x = st.s[st.top-index+1];
        return x;
    }
}

int isFull(struct stak st){
    return st.top==st.size-1;
}

int isEmpty(struct stak st){
    return st.top==-1;
}

int stackTop(struct stak st){
    if(!isEmpty(st)){
        return st.s[st.top];
    }
    return -1;
}
int main()
{
    struct stak st;
    
    create(&st);
    push(&st,10);
    push(&st,20);
    push(&st,30);
    display(st);
    cout << pop(&st) << endl;
    display(st);
    cout << "peek element at index 1 : "<<peek(st,3)<<endl;
    
    cout << "top Element in the stack : " << stackTop(st) << endl;
    return 0;
}