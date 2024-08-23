#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> A={3,1,2,5,3};
    for(int i=0;i<5;i++){
        cout << A[i] << " " ;
    }
    cout << endl;
    int n=A.size();
    cout << n << endl;
    int slow=A[0];
    int fast=A[0];
    do{
        slow=A[slow];
        fast=A[A[fast]];
    }while(slow!=fast);
    
    fast=A[0];
    while(slow!=fast){
        fast=A[fast];
        slow=A[slow];
    }
    cout << slow << endl;
    int sum_n=0;
    for(int i=1;i<=n;i++){
        sum_n+=i;
    }
    int sum_arr=0;
    for(int i=0;i<n;i++){
        sum_arr+=A[i];
    }
    int missing_num=((sum_arr+slow)-sum_n);
    cout << "reapeating number = " << slow << " missing number = " << missing_num << endl;
    return 0;
}