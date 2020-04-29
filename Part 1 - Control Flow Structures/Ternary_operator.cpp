#include<iostream>
using namespace std;

int main()
{
    int ans = 11;
    int guess;
    cout<<"Guess the Number : ";
    cin>>guess;

    /*
    int points = 0;
    if(guess==ans)
    {
        cout<<"Good Guess";
        points +=10;
    }
    else
    {
        cout<<"Bad Choice";
    }
    */
    //Ternary Operator
    int points = guess == ans?10:0;
    guess == ans?cout<<"Good Job\n":cout<<"Bad Job\n";
    cout<<"Points :"<<points<<endl;
}