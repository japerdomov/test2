#include <iostream>

float calculadora(float a,float b)
{
  float z=0,x=0;
   std::cout<<"Ingrese 1 para suma, 2 para resta, 3 para producto, 4 para cociente"<<std::endl;
   std::cin>>x;
 if(x==1)
    {
      z=(a)+(b);
    }
  if(x==2)
    {
      z=(a)-(b);
    }
  std::cout<<z<<std::endl;
  return 0;
}


int main(void)
{
  float a=0, b=0,x=0;
  std:: cout<<"Ingrese el primer numero: "<<std::endl;
  std::cin>>a;
  std:: cout<<"Ingrese el segundo numero: "<<std::endl;
  std::cin>>b;
  calculadora(a,b);
  return 0;
}
