#include <iostream>
using namespace std;

class Pessoa{
    private:
        int idade;
        string nome;
    public:
        Pessoa(int idade, string nome){
            this->idade = idade;
            this->nome = nome;
        }
    void setNome(string nome){
        this-> nome = nome;
    }
    void setIdade(int idade){
        this-> idade=idade;
    }
    string getNome(){
        return nome;
    }
    int getIdade(){
        return idade;
    }
};

int main(){
    Pessoa pessoa1(18, "Matheus");
    cout << "Nome: " <<pessoa1.getNome()<< endl;
    cout << "idade: "<<pessoa1.getIdade()<< endl;

    pessoa1.setNome("Lilian");
    pessoa1.setIdade(49);

    cout<< "Nome: "<<pessoa1.getNome()<< endl;
    cout<< "Idade "<<pessoa1.getIdade()<< endl;
    return 0;
}