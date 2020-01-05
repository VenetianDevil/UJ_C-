//X.5 z.9-z.10

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outfile{"out.txt"};
    int a;
    while(cin>>a)
    {
	outfile << a << endl;
    }

    outfile.close();

    ifstream infile;
    infile.open("out.txt");
    int b;
    while(infile>>b)
    {
	cout << b << endl;
    }
    infile.close();
}
