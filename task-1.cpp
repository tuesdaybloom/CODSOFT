//c++ program for counting the words
#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    char words[60];
    int space = 0, i; 
    cout << "Enter your String : ";
    gets(words);
    for (i = 0; words[i] != '\0';i++)
    {
        if (words[i] == ' ')
            space++;    
    }
    cout << "Number of words in the string are: " << space + 1;
    return 0;
}