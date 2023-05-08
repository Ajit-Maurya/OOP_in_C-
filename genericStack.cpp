#include <iostream>
using namespace std;

template <typename T> class Stack{
    T *arr;
    int tos,length;
    public:
    Stack(int len){
        length = len;
        arr = new T[length];
        tos = -1;
    }

    ~Stack(){
        delete[] arr;
    }

    bool isEmpty(){
        if(tos == -1)   return true;
        return false;
    }

    int size(){
        return tos+1;
    }

    void push(T x){
        if(tos == length - 1)
        {
            cout<<"Stack is full";
            return;
        }
        tos = tos + 1;
        arr[tos] = x;
    }

    T pop(){
        if(tos == -1){
            cout<<"Stack is empty ";
            return 0;
        }
        T x = arr[tos];
        tos -= 1;
        return x;
    }
};

int main(){
    int n,m;
    cout<<"Enter the size of the first stack : ";
    cin>>n;
    cout<<"Enter the size of the second stack : ";
    cin>>m;

    Stack<string> s1(n);
    Stack<int> s2(m);

    cout<<"Enter the content of first stack with "<<n<<" strings\n";
    for(int i = 0 ; i < n; i++){
        string in;
        cin>>in;
        s1.push(in);
    }

    cout<<"Enter the content of second stack with "<<m<<" integers\n";
    for(int i = 0 ; i < n; i++){
        int in;
        cin>>in;
        s2.push(in);
    }

    cout<<"contents of string stack are\n";
    while(!s1.isEmpty()){
        cout<<s1.pop()<<" ";
    }
    cout<<'\n';

    cout<<"contents of integer stack are\n";
    while(!s2.isEmpty()){
        cout<<s2.pop()<<" ";
    }
}