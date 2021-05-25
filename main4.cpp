#include <iostream>
using namespace std;

int main()
{int rows = 5;
    for (int row = 1 ; row <= rows ; row++){
      for (int j = 0; j < rows - row; j++){
        cout << ' ' ;
      }
        for (int j = 0; j < row * 2 - 1; j++){
            cout << '*';
        }
        
        cout << endl;
    }
    
  return 0;
}
