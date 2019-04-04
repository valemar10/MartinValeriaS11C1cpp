 #include <iostream>
using namespace std;
/* Lo siguiente se baso en: http://ejercicioscpp.blogspot.com/2014/12/calcular-el-factorial-de-un-numero-en-c.html*/
int main()
{
   int n,i;
   long double factorial; 
   cout << "Introduce un numero: ";
   cin >> n;
   factorial=1;
   for(i=1;i<=n;i++)
        factorial = factorial * i;
   cout << endl << "El factorial de es: "  << factorial << endl;
   return 0;
}