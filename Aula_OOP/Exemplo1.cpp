#include <iostream>
using namespace std;
class A{
    public:
        int x; // pode ser acessado dentro e fora de A
    protected:
        int y; // só pode ser acessado dentro de A e por classes herdeiras
    private:
        int z; // só pode ser acessado dentro de A
};
class B : public A{ // está herdando de forma pública "A", mas na ordem de prioridade prevalece o mais restrito
    void mostrar(){
        std::cout<< x << "\n"; // mostra pois x é publico em A
        std::cout<< y << "\n"; // mostra pois y é protegido em A e B é herdeira de A
        std::cout<< z << "\n"; // NÃO mostra pois z é privado em A
    }
};

class C: protected A{
        // x é protegido
        // y é protegido
        // z não é mostrado pois esta privado em A
};

class D: private A{
    // x é privado
    // y é privado
    // z não mostra pois esta privado em A
};
