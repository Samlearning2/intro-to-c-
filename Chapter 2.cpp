// Sam Drummond
// Adventure #1
// Chapter 2
// 2-13-19



#include <iostream>
#include <cstdlib>
#include <ctime> // couldn't figure out how to get the wait function to work
#include <chrono>
#include <thread>
using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0))); //seed random number generator
    int randomNumber = rand() % 4 +1 ;
    int health = 10 , attack, block, iterator = 0;//variables
    bool debug = false;
    
    cout << "Welcome to the battle arena!\n\n";
    cout << "Before we begin... would you like to turn on debug mode?\n";
    cout << "type, yes, to turn on, otherwise type anything else.\n";
    
    string input;
    cin >> input;
    if(input == "yes") // to turn on debug mode
    {
        debug = true; // start debug mode
        cout << "Okay. debug mode is on.\n\n\n";
    }
    else 
    {
        cout << "Okay.\n";
        cout << "debug is off.\n\n";
    }
int roundAmount = rand () % 6 +1; // used to set random number of rounds

cout << "This time you will be competing in, " << roundAmount << " rounds.\n\n";

while(iterator < roundAmount && health > 0)
{
    iterator += 1;

    if (health <= 3)
    {
        cout << "hmmm, you arnt looking that great, perhaps you should seek some medical attention...\n\n However!\n\n"; // warn low health
    }
    
    cout << "It's time to begin the next battle!\n\n";

attack = rand() % 4 + 1 ; //attack and block information

block = rand() % 4 + 1;

if(debug == true) // debugging code
{
cout << "the attack is " << attack << endl;
cout << "the block is " << block << endl << endl;
}
if (block >= attack)//make final decision
{
    cout << "You successfully defend the attack! \n\n";

}
else 
{
    health -= attack;
    cout << "You do not defend the attack, you lose " << attack << " health\n";
    cout << "You now have " << health << " health\n\n" ;
}


}

if (health > 0)//won the game
{
    cout << "CONGRATULATIONS!\n\n";
    cout << "You have won the game!\n";
}
else
{
    cout << "Sadly, you have died.\n\n GAME OVER";//lost the game
}
    
    return 0;


}