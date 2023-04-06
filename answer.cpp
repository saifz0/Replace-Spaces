#include <iostream>
#include <string>

using namespace std;

string replaceSpaces(string &str);

int main() {
    string input = "Hello world! This is a test string.";
    string output = replaceSpaces(input);
    cout << "Input string: " << input << endl;
    cout << "Output string: " << output << endl;
    return 0;
}

string replaceSpaces(string &str) {
    size_t pos = str.find(' ');
    while(pos != string::npos) {
        str.replace(pos, 1, "@40");
        pos = str.find(' ');
    }
    return str;
}