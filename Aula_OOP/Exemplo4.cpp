#include <iostream>
using namespace std;

class pai{
    public:
        void GeeksForGeeksPrint(){
                cout << "METODO DA CLASS BASE\n";
        }
};
class filho: public pai{
    public:
        void GeeksForGeeksPrint(){
            cout << "METODO DA CLASS DERIVADA\n";
        }
};
int main(){
    filho filho1;
    filho1.GeeksForGeeksPrint();
    return 0;
}