#include <iostream>
using namespace std;

int main(){

    int a = 3;
    int bit;
    
    for(int i=0; i<32; i++){
        bit = (a >> i) & 0x1;
        cout << bit;
    }

    cout << endl;
    float f = 3.1;
    
    
    for(int i=0; i<32; i++){
        bit = ((int)f >> i) & 0x1;
        cout << bit;
    }
    return 0;
}