#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int numStrings;
    cout << "How many strings do you want to enter? ";
    cin >> numStrings;
    
    vector<string> strings;
    for (int i = 0; i < numStrings; i++) {
        string str;
        cout << "Enter string #" << i+1 << ": ";
        cin >> str;
        strings.push_back(str);
    }
    
    cout << "The strings you entered are:" << endl;
    for (string str : strings) {
        cout << str << endl;
    }
    
    return 0;
}