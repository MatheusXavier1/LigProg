#include <iostream>
using namespace std;

class Quadriciculo{
    public:
        Quadriciculo(){
            cout << "isso e um quadriciculo\n";
        }
};
class Veiculo{
    public:
        Veiculo(){
            cout << "isso e um veiculo\n";
        }
};

class Carro: public Quadriciculo, public Veiculo{
    public:
        Carro(){
            cout << "isso e um carro\n";
        }
};

class onibus: public Quadriciculo, public Veiculo, public Carro;{
    public:
        onibus(){
            cout << "isso e um onibus\n";
        }
};


int main(){
    Veiculo vel1;
    Quadriciculo quad1;
    Carro car1;
    onibus bus1;
    return 0;
}