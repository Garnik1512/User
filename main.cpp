#include <iostream>
using namespace std;
int main()
{
   const int n = 7;
   int arrays[n];
   int sum = 0;
   int d = 0;
   int b = 0;
    for (int i = 0; i < n; i++) {
      cin >> arrays [i];
     }
         
    for (int i = 0; i < n; i++){
           if (arrays[i] < 0)
        
            b += arrays [i]; 
        }
    for (int i = 0; i < n; i++){
       if (arrays[i] > 0)
        d += arrays [i]; 
        }       
        sum = d - b;
        cout << sum ;
        return 0;
}