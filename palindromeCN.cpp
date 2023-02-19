/*
Check Palindrome (recursive)

Check whether a given String S is a palindrome using recursion. Return true or false.

Input Format :
String S

Output Format :
'true' or 'false'

Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.

Sample Input 1 :
racecar

Sample Output 1:
true

Sample Input 2 :
ninja

Sample Output 2:
false
*/
#include <iostream>

using namespace std;

bool check(char input[], int s, int e)
{
    if (s == e)
    {
        return true;
    }
    if (s > e)
    {
        return true;
    }
    if (input[s] != input[e])
    {
        return false;
    }

    bool smallcheck = check(input, s + 1, e - 1);
    return smallcheck;
}

bool checkPalindrome(char input[])
{

    int s = 0;
    int e = strlen(input) - 1;
    return check(input, s, e);
}
int main()
{
    char input[50];
    cin >> input;

    if (checkPalindrome(input))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}