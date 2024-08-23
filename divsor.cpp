#include <iostream>
using namespace std;

long long F(int x){
        int sum=0;
        for(int i=1;i<=x;i++){
            if(x%i==0){
                sum=sum+i;
            }
        }
        return sum;
}

int main(){
    cout << F(4);
}