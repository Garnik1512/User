
#include <iostream>
using namespace std;
int main(){
  for(int i = 999; i >= 17; i--){
      if(i % 17 != 0){
        continue;
      }

      cout << i << endl;
    }
    
    return 0;
}
