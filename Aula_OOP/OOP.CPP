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
};
int main(){

    empregado empregado1; // criando o objeto empregado1 da classe empregado
    empregado1.nome = "saldina";
    empregado1.empresa = "youtube-code";
    empregado1.idade = 25;
    empregado1.apresenta();

    empregado empregado2;
    empregado2.nome = "matheus";
    empregado2.empresa = "ufrj";
    empregado2.idade = 18;

    empregado2.apresenta();
}