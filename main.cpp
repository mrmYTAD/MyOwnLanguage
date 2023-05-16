#include <stdio.h>
#include <iostream>
#include <fstream>
#include "variables.h"
#include "header.h"

using namespace std;

int main() {

    cout << endl << endl << endl;

    string filename;

    cin >> filename;

    string newnewfilename = "createdcode/";

    string newfilename = filename.substr(0, filename.find_last_of('.')) + ".mol";

    for (int i = 0; newfilename[i] != '\0'; i++)
    {
        newnewfilename.push_back(newfilename[i]);
    }

        ofstream o(newnewfilename.c_str());

        o << "a";






    ifstream infile("main.mol");
    char ch;

start:
    while (infile.get(ch)) {

        if (ch == 'v') {

            int* c = new int;
            infile.get(ch);

            while (ch != ';') {

                int arr[2] = { (int)ch - 48, 0 };

                cout << arr[1];

                infile.get(ch);
            }

            infile.get(ch);

            //da cambiare   *c = (int)ch - 48; //funziona solo da 0 a 9 per ora

            //cout << *c << endl << endl;

            goto start;
        }

        if (ch == '\n') {

            cout << endl;

            goto start;
        }

        if (ch == 'i') {

            char(*pchar)[3] = new char[2][3];
            for (int a = 0; a < 2; a++) {

                for (int b = 0; b < 3; b++) {

                    pchar[a][b] = 'O';
                    cout << pchar[a][b] << endl;
                }

            }
            cout << endl;

            delete[] pchar;

            goto start;
        }

        //§
        if (ch == '§') {

            infile.get(ch);
            if (ch == '§') {    //§§ start of comments

                infile.get(ch);
                while (ch != '§') {

                    infile.get(ch);

                }
                while (ch != '§') {

                    infile.get(ch);

                }

                goto start;

            }   //end of comments

        }

        if (ch == 'c') {

            cout << "c";

            goto start;
        }
    }

    cout << endl << endl;

    variablesDeclaration();

    cout << endl;

    funct();

    cout << endl << endl << endl;

    return 0;
}