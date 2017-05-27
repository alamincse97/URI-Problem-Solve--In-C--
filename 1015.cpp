#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    double X1,X2,Y1,Y2,dist;
    while(cin>>X1>>Y1>>X2>>Y2){
        dist=sqrt(pow(X2-X1, 2)+pow(Y2-Y1, 2));
        cout<<fixed<<setprecision(4)<<dist<<endl;
    }
    return 0;
}
