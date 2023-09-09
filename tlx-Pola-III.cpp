
#include <iostream>
using namespace std;
 
int main(){
    int n; int output = 0;
    
    cin >> n;
    for (int i = 0; i <= n; i++){
        for (int j = 0; j < i; j++){
            if (output == 10){
                output = 0;
            }
            cout << output;
            output++;
        }cout << endl;
    }
}
