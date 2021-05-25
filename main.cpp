
#include <iostream>
using namespace std;

int main() {
    int n = 999;

    for(int i = 999; i > 980; i--){
      if(i % 17 == 0){
        cout << i;
        break;
      }
    }
    
    return 0;
}
