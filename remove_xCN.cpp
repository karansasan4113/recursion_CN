/*
Remove X

Given a string, compute recursively a new string where all 'x' chars have been removed.

Input format :
String S

Output format :
Modified String

Constraints :
1 <= |S| <= 10^3
where |S| represents the length of string S.

Sample Input 1 :
xaxb

Sample Output 1:
ab

Sample Input 2 :
abc

Sample Output 2:
abc

Sample Input 3 :
xx

Sample Output 3:

*/
#include <iostream>

using namespace std;
void xxx(char input[])
{
    if (input[0] == '\0')
    {
        return;
    }
    if (input[0] == 'x')
    {

        // strcpy(input,input+1);
        memmove(input, input + 1, strlen(input) + 1);
        xxx(input);
    }

    xxx(input + 1);
}

void removeX(char input[])
{
    // Write your code here

    xxx(input);
}
int main()
{
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}