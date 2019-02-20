//Sam Drummond 
//Chapter 3 Assignment
//2/20/19


#include <iostream>
#include <string>
#include <ctime> 
using namespace std;

int main ()
{

const int MAX_ITEMS = 10;// create array
string inventory[MAX_ITEMS];
int num_items = 3;

inventory[0]= "Wizard's Garb";// inventory list
inventory[1] = "10 of spades";
inventory[2] = "7 of hearts"; 



cout << " \t\t\t Welcome to 'A wizards journey'\n\n\n";
cout << "What is your name?\n";
string playerName;
cin >> playerName;

//begin story
cout << "\nWelcome, " << playerName << " to the start of your journey!\n";
cout << "\nWe live in a world where the best are decided by the cards you hold.\n";
cout << "Therefore, you must strive to always improve your cards if you wish to succeed in this world.\n\n";
cout << "currently, this is what you possess\n\n";

for(int i = 0; i < num_items; ++i)//display inventory
{
    if (inventory[i] != "")
    {
    cout << inventory[i] << endl;
    }
    else {
        continue;
    }
} 
cout << "\n\nCurrently, you are in your house, preparing to go on a long adventure.\n";
cout << "You do not know if you shall return... in fact you mean not to.\n\n";
cout << "As you do one last pass through your house, you find a 'jack of hearts', what a find!\n";


cout << "what nickname would you like to give your jack of hearts?\n";
cout << "make sure it is all one word or i won't understand!\n";

string nick1;// give item a name
cin >> nick1;

inventory[num_items++]= nick1;//add first inventory

cout << "\nthis is now your inventory:\n\n";

for(int i = 0; i < num_items; ++i)//display inventory
{
    if (inventory[i] != "")//ignore if blank
    {
    cout << inventory[i] << endl;
    }
    else {
        continue;
    }
} 

cout << "\n\nafter this, you begin on your quest traveling to the east.\n";

cout << "you are trekking across an mountain when you see an old man sitting by a campfire\n";

cout << "\n Would you like to talk to him?(y/n)\n";

string nick2;//will be used later if input is yes
string cardPlayed;//will be used later if input is yes
//take player input
string input;
cin >> input;
if (input == "y")
{
    const int MAX_HAND = 3;// make an array for you hand
    string hand[MAX_HAND];
    hand[0]= "5 of spades";
    hand[1]= "2 of hearts";
    hand[2] = "jack of clubs";

    cout << "\nYou walk up to the man, and he challenges you to a friendly duel.\n";
    cout << "He tells you he will give you one of his most prized possessions if you can best him.\n";
    cout << "He then gives you a hand of cards, as well as himself.\n";
    cout << "Then he playes a 6 of hearts.\n";
    cout << "you can either use a card from your inventory or use a card from your hand.\n";
    cout << "your hand is:\n\n";

    for(int j= 0; j < MAX_HAND; ++j)//display the hand he gives you
    {
        cout << hand[j]<< endl;
    }

    cout << "\n\nYou can either use a card from your hand, or pull a card out from your inventory.\n";
    string input;
    cin >> input;

    if (input == "inventory")
    {
        cout << "which card?\n\n";
            for(int i = 0; i < num_items; ++i)//display inventory
{
            if (inventory[i] != "")//ignore if blank
                {
                cout << inventory[i] << endl;
                }
    else {
        continue;
    }
}

 cout << endl;

    cin >> cardPlayed;
    
    cout << "\nyou sneak out your " << cardPlayed << " from your pocket and play it\n";//cheat option
    }
    else //pick a random card from hand
    {
        cout << "you pick a random card from your hand\n";
        cout << "it happens to be the 5 of spades.\n";

        cardPlayed = "5 of spades";// losing card
    }
    if (cardPlayed == nick1 || cardPlayed == "7 of hearts")//decide the end result
    {
    cout << "Your card beats his 6 of hearts. Shocked, he gives you his most prized possession, the 'Ace of spades'\n\n";
    cout << "give it a nickname.\n";
   cin >> nick2;
        inventory[num_items++] = nick2; //you win and get a good card
    }
    else {
        cout << "his card beats yours and he laughs. however, he feels bad for you and gives you a 3 of diamonds\n";
        cout << "what would you like to name the 3 of diamonds?\n";
        
        cin >> nick2;
        inventory[num_items++] = nick2;    //lose, but still get a card
    }
    cout << "you tell the man 'thank you', and go along your way.\n";
    cout << "your inventory is now:\n\n";

    for(int i = 0; i < num_items; ++i)//display inventory
{
    if (inventory[i] != "")//ignore if blank
    {
    cout << inventory[i] << endl;
    }
    else {
        continue;
    }
} 
}
else// if the player does not want to talk to the man
{
    cout << " you avoid the man, you notice he sees you, but he doesnt chase you. You go along your way.\n";
}
// after the encounter with the man
cout << "\nyou then continue traveling towards the west";

cout << "you come accross a river, and see a boat which you used to cross the river.\n";

cout << "While you are crossing the river, you spot a dagger in the boat.\n";
cout << "as you take it, you give it a name.\n What is the name?\n";

string nick3;
cin >> nick3;

inventory[num_items++] = nick3; // get item 3

cout << "\nyour inventory is now: \n";

for(int i = 0; i < num_items; ++i)//display inventory
{
    if (inventory[i] != "")
    {
    cout << inventory[i] << endl;
    }
    else {
        continue;
    }
} 
cout << endl;


cout << "however, as you get out of the boat, you accidentally drop your 10 of spades into the river and lose it.\n";
cout << "because of this, your inventory is now:\n";//lost an item

inventory[1] = "";//item is now blank which will be ignored

for(int i = 0; i < num_items; ++i)//display inventory
{
    if (inventory[i] != "")// ignore if no characters
    {
    cout << inventory[i] << endl;
    }
    else {
        continue;
    }
} 
cout << endl;
cout << "Tired, you see a bridge with a nice looking city on the other side! The end is in sight!\n";
cout << "however there is a guard at the entrance, he demands a rite of passage in order to get into the city.\n\n";

//missed how to do the search. I'll look for it.
if (cardPlayed == nick1 || cardPlayed == "7 of hearts") // use this to decide if they have the ace of spades
{
    cout << "the gaurd demands that you give him, " << nick2 << " for entrance into the city\n";
    cout << "very sad, you give it to him and enter the city";
    inventory[4]=""; // lose the ace of spades
}
else
{
    cout << "the guard demands that you give him " << nick1 << " for entrance into the city\n";
    cout << "sad, you give it to him and enter the city.";
    inventory[3]="";
}
cout << "\n\nYour inventory is now: \n\n";


for(int i = 0; i < num_items; ++i)//display inventory
{
    if (inventory[i] != "")// ignore if no characters
    {
    cout << inventory[i] << endl;
    }
    else {
        continue;
    }
    cout << "you walk into the city, and enjoy the rest of your life.";
    cout << "\nThis concludes your adventure";
    cout << "\n\n\n The end\n\n";
} 

return 0;
}
