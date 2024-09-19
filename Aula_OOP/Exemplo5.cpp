#include <iostream>
using namespace std;

class Poli{
    public:
        int sum(int x, int y){
            return x+y;
        }
        int sum(int x, int y,int z){
            return x+y+z;
        }
        int sum(int x,int y, int z, int w){
            return x+y+z+w;
        }

};

int main(){
    Poli pol1;
    int a = pol1.sum(1,2);
    int b = pol1.sum(1,2,4);
    int c = pol1.sum(5,5,5);

    std::cout << a <<"\n";
    std::cout << b <<"\n";      
    std::cout << c <<"\n";
    return 0;
}