//X.32 z.1-z.2-z.4

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
//z.1
    vector<char>alphabet{};
    char n;
    //zapelnienie od a do z
    for(n='a'; n<='z'; n++)
    {
	alphabet.push_back(n);
    }

    //wypisanie alfabetycznie
    for (char x: alphabet)
    cout << x << endl;

    cout << endl;

    //rbegin() - odwrotny poczatek
    for(auto it = alphabet.rbegin(); it!=alphabet.rend(); it++)
    {
	cout << *it << endl;
    }
    cout<< endl;

//z.2
    vector<string>fruits{"pomarancza","jablko","kiwi", "banan", "ananas", "mandarynka"};
    string  m;
    cin >> m;
    fruits.push_back(m);

    sort(fruits.begin(), fruits.end());
    for(auto it = fruits.begin(); it!=fruits.end(); it++)
    {
	cout << *it << endl;
    }

    cout << endl;

//z.4
    for(auto it = fruits.begin(); it!=fruits.end(); it++)
    {
	if((*it)[0]=='a')
	cout << *it << endl;
    }
}

//funkcja erase() do usuwania elemantow vectora