#include<iostream>
using namespace std;

double findDistance(float u,float a,float t){

  float s = u*t+0.5*a*t*t;
  return s;
}

int main(){

  float u,a,t;
  cout<<"Please enter initial velocity(m/s) : ";
  cin>>u;
  cout<<"Please enter acceleration(m/s^2) : ";
  cin>>a;
  cout<<"Please enter time(s) : ";
  cin>>t;
  cout<<"Distance is : "<<findDistance(u,a,t)<<" m";

  return 0;
}
