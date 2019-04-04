 #include <iostream>
using namespace std;
int main()
{
   int n1=5;
   int i;
   long double factorial; 
   factorial=1;
   for(i=1;i<=n1;i++)
        factorial = factorial * i;
   std::cout << "El factorial de 5 es "<<factorial << std::endl;
   return 0;
}