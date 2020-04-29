#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<fstream>
using namespace std;

// This code just uses basics of c++ to generate terminal based guessing number game for education purposes.

void save_score(int count) // Saves high score - minimum guesses to predict a number
{
    ifstream input("best_score.txt");
    int best_score;
    input>>best_score;

    if(!input.is_open())
    {
        cout<<"Unable to open file";
        return;
    }
    ofstream output("best_score.txt");
    if (best_score>count)
        best_score = count;
    output<<best_score<<endl;
    cout<<"BEST SCORE : "<<best_score<<endl;
    
}

void print_vector(vector<int>data)
{
    for (int i=0;i<data.size();i++)
        cout<<data[i]<<"\t";
    cout<<endl;
}
void play_game()
{
    int random = rand() % 251; //No. modulated to get random number in range 0 - 250
    int guess, count = 1;
    vector <int> guesses;//Keeping track of the guesses
    cout<<"Printing the number : "<<random<<endl;
    while(true)
    {
        cout<<"Guess the number : ";
        cin>>guess;
        guesses.push_back(guess);
        if (guess == random)
        {
            cout<<"You Win!!!!\n";
            cout<<"Your guesses:\n";
            print_vector(guesses); //Displaying all the guesses
            save_score(count);
            return;
        }
        else if(guess<random)
        cout<<"Too Low\n";
        else
        cout<<"Too High\n";
        count++;
    } 
}

int main()
{
    srand(time(NULL)); //Seeds changed at the start so that it doesnt repeat the same sequence everytime the program runs
    int choice;
    while(true)
    {
        cout<<"Enter Choice\n0. Quit\n1.Play Game\n";
        cin>>choice;
        switch(choice)
        {
            case 0:
            cout<<"Thanks for Playing\n";
            return 0;
            case 1:
            cout<<"Game Beginning...\n";
            play_game();
            break;
            default:
            cout<<"Wrong Choice\n";
        }
    }
}