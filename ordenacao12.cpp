#include <iostream>
using namespace std;

void selection(int vetor[], int n){
    int imenor;
    int aux;
    for(int i = n - 1; i > 0; --i){
        imenor = i;
        for(int j = 0; j <= i; ++j){
            if(vetor[j] < vetor[imenor]){
                imenor = j;
            }
        }
        aux = vetor[i];
        vetor[i] = vetor[imenor];
        vetor[imenor] = aux;
    }
}
    

int main()
{
    int n;
    cin >> n;
    int vetor[n];
    for(int i = 0; i < n; ++i){
        cin >> vetor[i];
    }
    selection(vetor, n);
    for(int i = 0; i < n; ++i){
        cout << vetor[i] << " ";
    }
    cout << endl;
    return 0;
}
