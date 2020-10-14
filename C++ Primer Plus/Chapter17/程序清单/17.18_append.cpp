// append.cpp -- appending information to a fike
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

const char *file = "guests.txt";
int main()
{
    using namespace std;
    char ch;
    // show initial contents
    ifstream fin;
    fin.open(file);

    if (fin.is_open())
    {
        cout << "Here are the current contents of the" << file << " file\n";
        while (fin.get(ch))
        {
            cout << ch;
        }
        fin.close();
    }

    // add new names
    ofstream fout(file, ios_base::out | ios_base::app);
    if (!fout.is_open())
    {
        cerr << "Can't open " << file << " file for output.\n";
        exit(EXIT_FAILURE);
    }

    cout << "Enter guest name (enter a blank line to quit):\n";
    string name;
    while (getline(cin, name) && name.size() > 0)
    {
        fout << name << endl;
    }
    fout.close();

    // show revised file
    fin.clear();
    fin.open(file);
    if (fin.is_open())
    {
        cout << "Here are the new current contents of the" << file << " file\n";
        while (fin.get(ch))
        {
            cout << ch;
        }
        fin.close();
    }
    cout << "Done.\n";
    return 0;
}