#include<iostream>
#include<cmath>

double sum(double x){
  int k;
  double f=0;
  for(k=1;k<=x;k=k+1){
    f=f+1.0/k;
  }
  return f;
}

int main(void){
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double m=1;
  std::cout<<"suma"<<" "<<"#"<<std::endl;
  for(m=1;m<=5000;m=m+20){
    std::cout<<sum(m)-log(m+0.5)<<" "<<sum(m)-log(m)<<" "<<m<<std::endl;
  }
}
