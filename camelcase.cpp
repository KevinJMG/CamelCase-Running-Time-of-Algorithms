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
    string s;
    // Mensaje interactivo para que sepa cuándo escribir en la terminal
    cout << "Introduce la palabra en camelCase: ";
    getline(cin, s);

    int result = camelcase(s);

    // Muestra el resultado directamente en la pantalla
    cout << "El numero de palabras es: " << result << endl;

    return 0;
}