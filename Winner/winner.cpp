#include <iostream>
#include <cstring>
#include <string>

using namespace std;
int main(){
    cout << "Nhap n = ";
    int n; cin >> n;
    string name[1000];
    int score[1000];
    for(int i = 0; i < n; i++){
        cin >> name[i] >> score[i];
    }

    // for(int i = 0; i < n; i++){
    //     cout << name[i] << " " << score[i] << endl;
    // }

    int temp = score[0];
    for(int i = 1; i < n; i++){

            int temp2 = 0;
            for(int j = 1; j < n; j++){
                if(name[i] == name[j]){
                    temp2 += score[i];
                }

            if(temp2 > temp){
                temp = temp2;
            }
        }
    }
    cout << " max score = " << temp << endl;

    for(int i = 0; i < n; i++){
        int tempmax = score[i];
        for(int j = i+1; j < n; j++){
            if(name[i] == name[j]){
                tempmax += score[j];
            }
        }
        if(tempmax >= temp){
            cout << "name of max score is \"" << name[i] << "\"" << endl;
            break;
        }
    }

    return 0;
}