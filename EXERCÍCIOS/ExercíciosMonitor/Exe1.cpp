/*Crie uma classe para representar uma Pessoa, 
com os atributos privados de nome, idade e altura. 
Crie os métodos públicos  necessários para sets e 
gets e também um métodos para imprimir os dados de 
uma Pessoa. */

#include <iostream>
#include <string>

class Pessoa {
    private:
        std::string nome;
        int idade;
        float altura;
        
    public:
        Pessoa(std::string nome, int idade, float altura){
        }
        void setNome(std::string nome){//só precisa do std pra string?
            this->nome=nome;
        }
        
        void setIdade(int idade){
            this -> idade=idade;
        }

        void setAltura(float altura){
            this -> altura=altura;
        }

        std::string getNome() const{ // pq const?
            return nome;
        }

        int getIdade() const {
            return idade;
        }

        float getAltura() const {
            return altura;
        }

        void imprime() const{
            std::cout<<"Nome: "<< nome <<"\n";
            std::cout<<"Idade: "<< idade <<" anos\n";
            std::cout<<"Altura: "<< altura <<" metros\n";
        }
};  

int main(){
    Pessoa Pessoa1("Matheus", 18, 1.50);

    Pessoa1.imprime();
    
    Pessoa1.setNome("Lilian");
    Pessoa1.setIdade(49);
    Pessoa1.setAltura(1.49);

    std::cout<<"\n\nApos alterar \n\n";
    Pessoa1.imprime();
    return 0;
}   