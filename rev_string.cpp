#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char* user_str, * reversed;
    int input_len;
    user_str = new char[100]; 
    cout << "Enter a string: ";
    cin.getline(user_str, 100);
    input_len = strlen(user_str);
    reversed = new char[input_len + 1];
    for (int i = 0; i < input_len; i++) {
        reversed[i] = user_str[input_len - i - 1];
    }
    reversed[input_len] = '\0'; 
    cout << "Reversed string: " << reversed << endl;
    delete[] user_str;
    delete[] reversed;
    return 0;
}
