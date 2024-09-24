#include <iostream>
using namespace std;

class Animal{
    public: 
    string cor ="preto";
};
class dog: public Animal{
    public:
    string cor = "branco";
};
int main(){
    Animal d = dog(); // animal d está recebendo a class dog?
    cout<<d.cor;
    return 0;
}