 #include <iostream>
using namespace std;
int main()
{
   int i;
   for(i=0;i<=100;i++)
       
       if (( i % 3 == 0) && (i % 5 != 0 ))
       {
           std::cout << " este numero no es multiplo de 5 pero si es multiplo de tres:"<<i << std::endl;
       }
   return 0;
}