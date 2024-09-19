#include <iostream>
using namespace std;

class Veiculo{ // criação da classe pai
    public:
        Veiculo(){ cout << "isso e um veiculo\n";} //constructor público
};

class Carro: public Veiculo{
    public:
        Carro(){cout << "Esse veiculo e um carro";}//constructor publico de carro
};

int main(){
    Veiculo vel1; // criando objeto de veiculo
    //printa "isso é um veiculo"

    Carro car1; // criando objeto de carro
    //printa "isso é um veiculo e isso é um carro"

    return 0;
}