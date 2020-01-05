#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector <int> wek {5, 9, -1, 200, 0};
    //wypisanie wektora
    for (int n: wek)
    {
	cout << n << endl;
    }

    //sortowanie
    sort(wek.begin(), wek.end());
    cout << endl;
    //wypisanie posortowanego wektora
    for(auto it = wek.begin(); it!=wek.end(); it++)
    {
	cout << *it << endl;
    }

    cout << endl;

    vector <string> wektor {"Kant", "Plato", "Aristotle", "Kierkegard", "Hume"};
    for (string& n: wektor)
    {
	cout << n << endl;
    }

    sort(wektor.begin(), wektor.end());
    cout << endl;
    for( auto it = wektor.begin(); it!=wektor.end(); it++)
    {
	cout << *it << endl;
    }
}