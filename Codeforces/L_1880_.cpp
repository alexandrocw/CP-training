#include <iostream>
#include <cmath>

using namespace std;

bool isSumEqual(string firstWord, string secondWord, string targetWord) {
    int sum1=0, sum2=0, sum3=0;
    for(int i = 0; i < firstWord.length(); i++) {
        sum1 += int(firstWord[i] - 97) * pow(10, firstWord.length()-i - 1);
    }
    for(int i = 0; i < secondWord.length(); i++) {
        sum2 += int(secondWord[i] - 97) * pow(10, secondWord.length()-i - 1);
    }
    for(int i = 0; i < targetWord.length(); i++) {
        sum3 += int(targetWord[i] - 97) * pow(10, targetWord.length()-i - 1);
    }

    return sum1 + sum2 == sum3;
}

int main() {
    string firstWord, secondWord, targetWord;

    cin >> firstWord >> secondWord >> targetWord;

    cout << isSumEqual(firstWord, secondWord, targetWord);

    return 0;
}
