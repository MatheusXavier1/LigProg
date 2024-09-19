#include <iostream>
using std::string;

class empregado{
//atributos e comportamentos
public: // se não tem nada, tá private
    string nome; // modelos
    string empresa;
    int idade;
    //empregado tem name, company e age
    void apresenta(){

        std::cout<<"Nome - "<< nome << std::endl;
        std::cout<<"Empresa - "<< empresa << std::endl;
        std::cout<<"Idade - " << idade << std::endl;
    }
    empregado(string n, string e, int i){
        nome = n;
        empresa = e;
        idade = i;

    }
};
int main(){

    empregado empregado1 = empregado("matheus","ufrj", 18); // criando o objeto empregado1 da classe empregado
    empregado1.apresenta();

    empregado empregado2 = empregado("lilian","universo",49);
    empregado2.apresenta();
}