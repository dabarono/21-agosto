#include<iostream>
#include<cmath>

double f(double x){
  double h;
  h= x-sin(x);
  return h;
}

double g(double x){
  double i;
  i=pow(x,3);
  return i;
}

int main(void){
  double x=0.01;
  double dx=0.001;
  std::cout<<"f(x)"<<std::endl;
  std::cout<<(f(x)-f(x+dx))/(g(x)-g(x+dx))<<std::endl;
}
