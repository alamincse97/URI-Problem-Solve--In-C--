#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%2==0)
        printf("%d^2 = %d\n", i, i * i);
    }
    return 0;
}
