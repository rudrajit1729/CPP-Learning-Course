#include<iostream>
using namespace std;

class Position 
{
    public:
        int x = 10;
        int y = 20;
        Position operator + (Position pos)
        {
            Position new_pos;
            new_pos.x = x + pos.x;
            new_pos.y = y + pos.y;
            return new_pos; 
        }
        bool operator == (Position pos)
        {
            if (x == pos.x && y == pos.y)
                return true;
            return false;
        }
};

ostream& operator << (ostream & output, Position pos)
{
    output<<"Position : ("<<pos.x<<","<<pos.y<<")";
    return output;
}

istream& operator >> (istream& input, Position pos)
{
    input>>pos.x>>pos.y;
    return input;
}

int main()
{
    Position pos1, pos2;

    cout<<"Enter pos1 : ";
    cin>>pos1; //Operator Overloading(>>)
    cout<<"Enter pos2 : ";
    cin>>pos2; //Operator Overloading(>>)
    
    Position pos3 = pos1 + pos2; // Operator Overloading(+)

    cout << pos3<<endl; // Operator overloading(<<)

    if(pos1 == pos2) // Operator Overloading(==)
    {
        cout<<"Same position\n";
    }
    return 0;
}