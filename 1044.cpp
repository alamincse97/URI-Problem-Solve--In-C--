#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    
    cin >> a >> b;
    
    if(a < b){
         c = a;
         a = b;
         b = c;
    }
    
    if(a%b == 0)
           cout << "Sao Multiplos\n";
    else
           cout << "Nao sao Multiplos\n";
           
    return 0;
}
