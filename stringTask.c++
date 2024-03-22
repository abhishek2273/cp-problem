// String Task

// time limit per test
// 2 seconds
// memory limit per test
// 256 megabytes
// input
// standard input
// output
// standard output

// Petya started to attend programming lessons. On the first lesson his task was to write a simple program. The program was supposed to do the following: in the given string, consisting if uppercase and lowercase Latin letters, it:

//     deletes all the vowels,
//     inserts a character "." before each consonant,
//     replaces all uppercase consonants with corresponding lowercase ones.

// Vowels are letters "A", "O", "Y", "E", "U", "I", and the rest are consonants. The program's input is exactly one string, it should return the output as a single string, resulting after the program's processing the initial string.

// Help Petya cope with this easy task.
// Input

// The first line represents input string of Petya's program. This string only consists of uppercase and lowercase Latin letters and its length is from 1 to 100, inclusive.
// Output

// Print the resulting string. It is guaranteed that this string is not empty.
// Examples
// Input
// Copy

// tour

// Output
// Copy

// .t.r

// Input
// Copy

// Codeforces

// Output
// Copy

// .c.d.f.r.c.s

// Input
// Copy

// aBAcAba

// Output
// Copy

// .b.c.b

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    string x;
    cin >> x;
    int len = x.length();

    string result;
    int i, j;
    for (i = 0; i < len; i++)
    {
        if (
            x[i] != 'A' && x[i] != 'a' &&
            x[i] != 'O' && x[i] != 'o' &&
            x[i] != 'Y' && x[i] != 'y' &&
            x[i] != 'E' && x[i] != 'e' &&
            x[i] != 'U' && x[i] != 'u' &&
            x[i] != 'I' && x[i] != 'i')
        {
            result.push_back('.');
            j++;
            if (x[i] >= 65 && x[i] <= 90)
            {
                result.push_back(x[i] + 32);
                j++;
            }
            else
            {
                result.push_back(x[i]);
                j++;
            }
        }
    }
    cout << result << endl;
    return 0;
}