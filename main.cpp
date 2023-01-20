#include <iostream>
#include <fstream>
#include <conio.h>
#define A 100
#define B 100
using namespace std;

int main() {
    char s[A], Str[B];
    int NumStr = 0, lengthS = 0, m = 0;
    bool flag;
    ifstream f1("C:\\Users\\Public\\Clion\\project3\\input.txt");
    cout << "Enter substring: ";
    cin.getline(s, A);
    while(s[lengthS] != '\0'){
        lengthS++;
    }
    while (!f1.eof()){
        f1.getline(Str, B );
        NumStr++;
        for(int i = 0; Str[i] != '\0'; i++){
            if (Str[i] == s[0]){
                flag = true;
                int k = i;
                while(flag && (k - i < lengthS)){
                    if(Str[k] != s[k - i]){
                        flag = false;
                    }
                    k++;
                    m++;
                }
                if (flag && m == lengthS){
                    cout << NumStr << endl;
                }
                m = 0;
            }
        }
    }
    f1.close();
}