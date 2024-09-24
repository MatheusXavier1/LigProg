#include <iostream>
using namespace std;

class Pessoa{
    protected:
    int idade;
    string nome;
    public:
    Pessoa(int idade, string nome){
        this-> idade=idade;
        this-> nome=nome;
    }
    void getNome(){
        cout<<"Nome: "<<nome<<endl;
    }
    void getIdade(){
        cout<<"Idade: "<<idade<<endl;
    }
};
int main(){
    Pessoa pessoa1(18,"Matheus");
    Pessoa pessoa2(40, "Carlos");
    pessoa1.getIdade();
    pessoa1.getNome();
    pessoa2.getIdade();
    pessoa2.getNome();
    return 0;
}