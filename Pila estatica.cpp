#include<iostream>

using namespace std;

const int MAX=5;

class Pila{
    public:
        int pila[MAX];
        int cont=0;

        Pila();
        void push(int data);
        int pop(void);
        int peek(void);
        void print(void);

};

Pila::Pila(){
    cont=0;
    pila[0]=0;
}

int main(){



    return 0;
}
