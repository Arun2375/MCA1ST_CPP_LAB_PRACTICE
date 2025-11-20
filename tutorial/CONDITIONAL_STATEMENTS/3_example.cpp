//Checks Vowels or a consonant manually
#include <iostream>
using namespace std;
int main()
{
    char c;
    bool isLovercaseVowel, isUppercaseVowel;

    cout << "Enter an alphaber: ";
    cin >> c;

    //evaluates to 1 true if c is a lowercase vowel
    isLovercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    //evaluates to 1 true if c is an uppercase vowel
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // show erro message if c is not an alphabet
    if (!isalpha(c))
    printf("Error! Non-alphabetic character.");
    else if (isLovercaseVowel || isUppercaseVowel)
    cout << c << " is a vowel. ";
    else 
    cout << c << " is a consonant. ";
    return 0;
}
