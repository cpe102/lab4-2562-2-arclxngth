#include<iostream>
using namespace std;

double findDivisor(int x){

    int divider=2;
    while(x>0){

        if(x%divider==0){
            return divider;
        }
        else{
            divider++;
        }
    }
}

int main(){

  float x;
  cout<<"Please enter number : ";
  cin>>x;
  cout<<findDivisor(x);

  return 0;
}
