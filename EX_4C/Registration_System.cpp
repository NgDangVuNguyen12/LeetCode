#include <iostream>
#include <string>

using namespace std;
int main(){
    int n; cin >> n;

    string pw[1000];

    for(int i = 0; i < n; i++){
        cin >> pw[i];
    }
    
    cout << "OK" << endl;
    for(int i = 1; i < n; i++){
        for(int j = i-1; j >= 0; j--){
            if(pw[i] == pw[j]){
                string newpw = pw[i] + to_string(1);
                pw[i] = newpw;
                cout << pw[i] << endl;
            }
            else if(j == 0){
                cout << "OK" << endl;
            }
            else{
                continue;
            }
        }
    }

    return 0;
}