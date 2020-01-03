#include <iostream>
#include <cmath>
using namespace std;

double equa(int x){

    double e=2.71828;
    double y = 3*x*x*x+2*e+pow(2,2*x+1)+sqrt(x*x+1);
    return y;
}


int main(){

    float x;
    cout<<"Enter x = ";
    cin>>x;
    cout<<"Result y = "<<equa(x)<<endl;

    return 0;
}
