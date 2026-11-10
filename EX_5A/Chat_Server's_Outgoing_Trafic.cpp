#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main() {
    vector <string> menbers;
    string command;
    int total = 0;
    while(getline(cin, command)){
        if(command[0] == '+'){
            string name = command.substr(1);
            menbers.push_back(name);
        }
        else if(command[0] == '-'){
            string name = command.substr(1);
            for(int i = 0; i < menbers.size(); i++){
                if(menbers[i] == name){
                    menbers.erase(menbers.begin() + i);
                    break;
                }
            }
        }
        else{
            int pos = command.find(':');
            string message = command.substr(pos + 1);
            total = total + message.length() * menbers.size();
        }
    }
    cout << total << endl;
    return 0;
}