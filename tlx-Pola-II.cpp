
#include <iostream>
using namespace std;
 
int main(){
    int n;
    string result;
    
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int space = n-1; space > i; space--){
            result += " ";
        }
        for (int x = 0; x <= i; x++){
            result += "*";
        }
        cout << result << endl;
        result = "";
    }
}
