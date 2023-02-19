/*
Replace pi (recursive)

Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".

Constraints :
1 <= |S| <= 50
where |S| represents the length of string S.

Sample Input 1 :
xpix

Sample Output :
x3.14x

Sample Input 2 :
pipi

Sample Output :
3.143.14

Sample Input 3 :
pip

Sample Output :
3.14p

Constraints:-
1<=|S|<=50
*/
#include <iostream>

using namespace std;
// Change in the given string itself. So no need to return or print anything

void pi(char input[], int i)
{
    if (input[i] == '\0' && input[i + 1] == '\0')
    {
        return;
    }
    pi(input, i + 1);
    if (input[i] == 'p' && input[i + 1] == 'i')
    {
        for (int j = strlen(input); j >= i + 2; j--)
        {
            input[j + 2] = input[j];
        }

        input[i + 0] = '3';
        input[i + 1] = '.';
        input[i + 2] = '1';
        input[i + 3] = '4';
    }
}

void replacePi(char input[])
{
    // Write your code

    int i = 0;
    pi(input, i);
}

int main()
{
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}