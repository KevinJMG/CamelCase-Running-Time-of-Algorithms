#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'runningTime' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */
int runningTime(vector<int> arr) {
    int desplazamientos = 0;
    int n = arr.size();
    
    // Algoritmo de Insertion Sort con contador
    for (size_t i = 1; i < n; i++) {
        int valor_actual = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > valor_actual) {
            arr[j + 1] = arr[j];
            desplazamientos++;
            j--;
        }
        arr[j + 1] = valor_actual;
    }
    
    return desplazamientos;
}


int main()
{
    int n;
    cout << "Ingrese la cantidad de elementos: ";
    if (!(cin >> n)) return 0;

    vector<int> arr(n);
    cout << "Ingrese los " << n << " numeros separados por espacios: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = runningTime(arr);

    // Muestra el resultado final en pantalla
    cout << "Total de desplazamientos: " << result << endl;

    return 0;
}