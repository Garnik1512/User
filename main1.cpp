#include <iostream>
using namespace std;
int main()
{
   const long int n = 7;
   long int zangvac[n];
   long int  sum = 1;
    for (long int i = 0; i < n; i++) {
     cin >> zangvac [i];
     }
         
    for (long int i = 0; i < n; i++){
      if (-7 >= zangvac[i] && zangvac[i] < 15)
        sum *= zangvac [1];
     }
       cout << sum ;
       return 0;
}