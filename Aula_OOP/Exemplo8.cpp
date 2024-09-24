#include <iostream>
using namespace std;

class pai {
    public:
    int id_p;
    void print_ID_P(){cout<<id_p<<endl;}
};
class filho:public pai{
    public:
    int id_f;
    void print_ID_F(){cout<<id_f<<endl;}
};
int main(){
    filho filho1;

    filho1.id_p = 7; //atribuindo algo a id_p
    filho1.print_ID_P();
    
    filho1.id_f =12;
    filho1.print_ID_F();
    return 0;
}