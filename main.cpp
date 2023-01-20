#include <iostream>
#define  B 100
#define A 5
using namespace std;

int main() {
    char str[A][B];
    int kolvo = 0, size, lenght;
    bool flag;
    //считывает строки с консоли
    for(int i = 0; i<A; i++){
        std::cin.getline(str[i], B);
    }
    //узнает длину строки
    for(int i = 0; i<A; i++) {
        lenght = 0;
        flag = true;
        while (str[i][lenght] != '\0'){
            lenght++;
        }
        //узнает четная она или нет
        if (lenght % 2 == 1 ){
            size = (lenght + 1) / 2;
        }else {
            size = (lenght) / 2;
        }
        //узнает является ли слово паллиндромом
        for(int j = 0; j<= size && flag; j++){
            if(str[i][j] != str[i][lenght-j-1]){
                flag = false;
            }
        }
        if (flag){
            kolvo++;
        }
    }
    cout << "Palindrom:"<< num ;
}