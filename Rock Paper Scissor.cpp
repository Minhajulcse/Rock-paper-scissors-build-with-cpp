#include <iostream>
#include<cstdlib>
#include <ctime>

using namespace std;

int your_score = 0;
int computer_score = 0;

int main()
{

Play :

    system("cls");
    cout<<"ROCK PAPER SCISSORS BUILD BY MINHAJUL"<<endl;

    int player = 0, computer = 0;
    cout<<"1. ROCK"<<"\t\t\t\t\t\t\t\tScore -> "<<endl;
    cout<<"2. PAPER"<<"\t\t\t\t\t\t\tYou :      "<<your_score<<endl;
    cout<<"3. SCISSORS""\t\t\t\t\t\t\tComputer : "<<computer_score<<endl;
    cout<<"Press 4 for exit the game."<<endl;

choose :

    cout<<"Press what you want: "<<endl;

    cin>>player;
    cout<<endl;

    if(player == 4)
    {
        return 0;
    }
    else if(player == 1)
    {
        cout<<"You choose ROCK."<<endl;
    }
    else if(player == 2)cout<<"You choose PAPER"<<endl;
    else if(player == 3) cout<<"You choose SCISSORS"<<endl;
    else
    {
        cout<<"Please choose a correct digit for play the game"<<endl;
        goto choose;
    }
    computer = rand() % 3 + 1;
    if(computer == 1)
    {
        cout<<"Computer choose ROCK."<<endl;
    }
    else if(computer == 2) cout<<"Computer choose PAPER"<<endl;
    else if(computer == 3) cout<<"Computer choose SCISSORS"<<endl;

    // compare between you and computer turn..

    cout<<endl;
    if(player == computer ) cout<<"DRAW !"<<endl;
    else if(player == 1)
    {
        if(computer == 2)
        {
            cout<<"Computer Win !"<<endl;
            computer_score++;
        }
        else
        {
            cout<<"You Win !"<<endl;
            your_score++;
        }

    }
    else if(player == 2)
    {
        if(computer == 1)
        {
            cout<<"You Win !"<<endl;
            your_score++;
        }
        else
        {
            cout<<"Computer Win !"<<endl;
            computer_score++;
        }

    }
    else if(player == 3)
    {
        if(computer == 1)
        {
            cout<<"Computer Win !"<<endl;
            computer_score++;
        }
        else
        {
            cout<<"You Win !"<<endl;
            your_score++;
        }

    }

    cout<<endl;
    int again;
    cout<<"Wanna play again : "<<endl;
    cout<<"Press 1 for yes, press 2 for no"<<endl;
    cin>>again;
    if(again == 1)
        goto Play;

    else
    {
        cout<<"Your total score is -> "<<your_score<<endl;
        cout<<"Computers total score is-> "<<computer_score<<endl;
    }

    return 0;
}
