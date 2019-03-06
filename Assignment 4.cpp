//Assignment 4 A vector of names
//03/04/2019
//Sam Drummond

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <iterator>

using namespace std;

int main()
{
    string playerInput;//start program
    cout << "press 6 to start program\n";
    int input;
    cin >> input;
    vector<string>::iterator changeIter;
    vector<string>::const_iterator readIter;
    if ( input == 6)
    {
        cout << "This week's homework.\n";
        vector<string> names;
        names.push_back("Sam");//initialize vector and give some names
        names.push_back("James");
        names.push_back("Jonathan");
        names.push_back("Mary");
        names.push_back("Martha");
        names.push_back("Karen");
        names.push_back("Rachel");


        
        do//begin program
        {
            cout << "Names\n\n";
            for(int i = 0; i < names.size(); ++i)//list names
            {
                cout << names[i] << endl;
            }
            //list options
            cout << "\n\nHere are your options:\n";
            cout << "\nType 'add' to add a name.\n";
            cout << "Type 'change' to change a name.\n";
            cout << "Type 'remove' to remove a name.\n";
            cout << "Type 'show' to show names.\n";
            cout << "type 'quit' to quit.\n";
            cout << "enter choice\n";
            cin >> playerInput;
            if(playerInput == "add")//add a name
            {
                cout << "What name would you like to add?\n";
                string addName;
                cin >> addName;
                names.push_back(addName);
            }
            
            else if (playerInput == "change")//change a name
             {
                cout << "What name would you like to change?\n";
                string changeName;
                cin >> changeName;
                for(int i = 0; i < names.size(); ++i)
                {  
                    if (names[i] == changeName)
                    {
                        cout << "What would you like to change " << changeName << " to?\n";
                        cin >> playerInput;
                        names[i] = playerInput;//change the name
                    }
                    /*else if( i = (names.size() - 1))//name not found
                        {
                            cout << "That is not a valid option.\n\n";
                        }*/
                }
            }
            else if (playerInput == "remove")//remove a name
            {
                cout << "What name would you like to remove?\n";
                string removeName;
                cin >> removeName;//name to remove
                for(int i = 0; i < names.size(); ++i)
                {
                    if(names[i] == removeName)//find name
                    {
                        swap(names[i], names.back());
                        names.pop_back();
                    }
                 
                }   
            }
            
            else if (playerInput == "show")//list the names with an iterator
            {
                cout << "The names are:\n\n";
                for( readIter = names.begin(); readIter != names.end(); ++readIter)
                {
                    cout << *readIter << endl;
                }
            }
        } while (playerInput != "quit");//end program
        
cout << "Thank you for playing the name game.";
cout << "\n\nShutting Down.";
 }
return 0;
}