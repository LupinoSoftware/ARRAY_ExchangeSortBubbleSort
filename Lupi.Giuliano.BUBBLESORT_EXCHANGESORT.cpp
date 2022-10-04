// AUTHOR:Giuliano Lupi
//DATE:20/03/2022
//TITLE:BUBBLESORT E EXCHANGE SORT 
/*ALGORITHM:Mostra quanti scambi e clicli vengono effettuati dagli algoritmi di Bubble Sort e Exchange Sort utilizzati per ordinare un array.*/
#include<iostream>
using namespace std;

void bubbleSort(int a[], int N)
{
    int temp = 0;
    int scambi = 0;
    int confronti = 0;
    bool verifica;
    //ordino gli elementi 
    do
    {
        verifica = false;
        for (int i = 0; i < N - 1; i++)
        {
            confronti++;
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                verifica = true;
                scambi++;
            }
        }
        N--;
    } while (verifica);
    cout << "Numero di confronti eseguiti utilizzando BubbleSort: " << confronti << endl;
    cout << "Numero di scambi effettuati utilizzando Bubblesort: " << scambi << endl;
}
void exchangeSort(int array[], int length)
{
    int temp = 0;
    int scambi = 0;
    int confronti = 0;
    for (int i = 0; i < (length - 1); i++)
    {
        for (int j = (i + 1); j < length; j++)
        {
            confronti++;
            if (array[i] > array[j])
            {
                scambi++;
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    cout << "Numero di confronti eseguiti utilizzando SelectionSort: " << confronti << endl;
    cout << "Numero di scambi effettuati utilizzando SelectionSort: " << scambi << endl;
}

void visualizza(int array[], int N) {
    for (int i = 0; i < N; i++) {
        cout << array[i] << "\t";
    }
    cout << endl;
}

int main()
{
    int a[1000], a2[1000];
    int N = 0;
    cout << "Quanto vuoi grande l'array?\n ";
    cin >> N;
    for (int x = 0; x < N; x++)
    {
        cout << "Inserisci il " << x + 1 << " valore: ";
        cin >> a[x];
        a2[x] = a[x];
        cout << endl;
    }

    bubbleSort(a, N);
    cout << "Array ordinato con BubbleSort:\n";
    visualizza(a, N);
    cout << endl;
    exchangeSort(a2, N);
    cout << "Array ordinato con ExchangeSort:\n";
    visualizza(a2, N);

    return 0;
}


