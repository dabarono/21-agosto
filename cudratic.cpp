#include<iostream>
#include<cmath>

double c_a(double a,double b, double c){
  //if(pow(b,2)>=4*a*c){
    std::cout<<(-b+sqrt(pow(b,2)-4*a*c))/(2*a)<<" "<<(-b-sqrt(pow(b,2)-4*a*c))/(2*a)<<std::endl;
    //}
  //else {
    //std::cout<<(-b/2*a)<<"+i"<<sqrt(-pow(b,2)+4*a*c))/(2*a)<<" "<<(-b/2*a)<<"-i"<<sqrt(-pow(b,2)+4*a*c))/(2*a)<<std::endl;
//}
}

double c_s(double a,double b, double c){
  // if(pow(b,2)>=4*a*c){
  std::cout<<-2*c/(b+sqrt(pow(b,2)-4*a*c))<<" "<<-2*c/(b-sqrt(pow(b,2)-4*a*c))<<std::endl;
    //}
    //else {
    //std::cout<<(-b/2*a)<<"+i"<<sqrt(-pow(b,2)+4*a*c))/(2*a)<<" "<<(-b/2*a)<<"-i"<<sqrt(-pow(b,2)+4*a*c))/(2*a)<<std::endl;
    //}
}

int main(void){
  double a;
  double b;
  double c;
  std::cout<<"introduzca a"<<std::endl;
  std::cin>>a;
  std::cout<<"introduzca b"<<std::endl;
  std::cin>>b;
  std::cout<<"introduzca c"<<std::endl;
  std::cin>>c;
  std::cout<<"c_a"<<" "<<"c_s"<<std::endl;
  std::cout<<c_a(a,b,c)<<" "<<c_s(a,b,c)<<std::endl;
}
