#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'camelcase' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int camelcase(string s) {
    if (s.empty()) {
        return 0;
    }
    
    int palabras = 1; 
    
    for (size_t i = 0; i < s.length(); i++) {
        if (isupper(s[i])) {
            palabras++;
        }
    }
    
    return palabras;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
