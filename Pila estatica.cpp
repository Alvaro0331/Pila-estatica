#include<iostream>

using namespace std;

const int MAX=5;

class Pila{
    public:
        int pila[MAX];
        int cont=0;

        Pila();
        void push(int data);
        void pop(void);
        void peek(void);
        void print(void);

};

Pila::Pila(){
    cont=0;
    pila[0]=0;
}

void Pila::push(int data){
    if(cont==MAX){
        cout<<"Pila llena"<<endl;
    }
    else{
        pila[cont]=data;
        cont++;
    }
}

void Pila::pop(void){
    int aux;
    aux=pila[cont-1];
    if(cont==0){
        cout<<"La pila esta vacia"<<endl;
    }
    else{

        cout<<"Elemento que fue sacado: "<<aux<<endl;
        cont--;

    }
}

void Pila::print(void){
    if(cont==0){
        cout<<"Pila vacia"<<endl;
    }
    else{
        for(int i=0; i<cont; i++){
            cout<<pila[i]<<" ";
        }
    }
}

int main(){

    Pila pil;

    cout<<"\tDavila Gomez Alvaro 217700553"<<endl;
    cout<<"\nMetodo push"<<endl;
    pil.push(9);
    pil.push(50);
    pil.push(1);
    pil.push(72);
    pil.push(300);
    pil.print();
    cout<<"\nHacer un push cuando la pila esta llena"<<endl;
    pil.push(1);
    cout<<"\nAplicacion del pop"<<endl;
    pil.pop();
    pil.print();
    cout<<"\n";
    pil.pop();
    pil.print();
    cout<<"\n";
    pil.pop();
    pil.print();
    cout<<"\n";
    pil.pop();
    pil.print();
    cout<<"\n";
    pil.pop();
    pil.pop();
    return 0;
}
