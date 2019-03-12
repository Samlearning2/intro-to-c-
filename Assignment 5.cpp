//Sam Drummond
//do you want to keep adventuring?
//03-12-2019

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void story(string story);//declare story function
int add(int numA, int numB);//declare add function
int subtract(int numA, int numB);
char question(string givenQuestion);//declare question function
void ending();

int rollDie(int sides);
int attack();//declare battle functions
int block();

int treasureGained();//declare
int healthLost();//declare

int health = 30;//declare health and initialize to 30
int totalTreasure = 0;//declare treasure and initialize




int main()
{
 srand(static_cast<unsigned int>(time(0))); //seed random number generator
 
    story("You wake up, and hear of a vast treasure!");
    char answer = question("do you want to go adventuring?");
    
    if (answer == 'y')
    { 

        do
        {
        cout << "You go adventuring!\n";
        if (block() >= attack())
        {
            treasureGained();
        }
        else
        {
           healthLost();
        }
        cout << "You now have " << health << " health and " << totalTreasure << " treasure\n";
    
    
    answer = question("do you want to keep adventuring?");
}while(answer == 'y' && health > 0);
    }
    ending();
    
    return 0;
}







void story(string story) //story
{
    cout << story << endl;
}

char question(string givenQuestion)//take the question
{
    char input;
    do{
     //cout << "Would you like to go adventuring?\n";
         cout << givenQuestion << "\n";
        cout << "(y/n) >> ";
        cin >> input;
    }while (input != 'y' && input != 'n');
return input;
}

int add(int numA, int numB)//add function
{
    int sum = numA + numB;
    return sum;
}
int subtract(int numA, int numB)//subtract
{
    int difference = numA - numB;
    return difference;
}

int rolldie(int sides)//roll a die
{
    return rand() % sides + 1;
}

int attack()//attack roll
{
int roll1 = rolldie(6);
int roll2 = rolldie(6);
int attackRoll = add(roll1, roll2);
return attackRoll;
}

int block()//block roll
{
    int roll3 = rolldie(6);
    int roll4 = rolldie(6);
    int blockRoll = add(roll3,roll4);
    return blockRoll;
} 
int treasureGained()//gain treasure
{
     int gainTreasure = rand() % 20;
     totalTreasure = add(gainTreasure, totalTreasure);
    return totalTreasure;

}
int healthLost()//lose health from attack
{
    int lostHealth = attack();
    health = subtract(health, lostHealth);
    return health;
}
void ending()//end the game
{
    if (health > 0)
    {
        cout <<  "you survive with " << totalTreasure << " treasure";
        cout << " and " << health << " health";
    }
    else
    {
       cout << "you are dead";
    }
}