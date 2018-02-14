#include <iostream>

using namespace std;

int main()
{
    cout<<"two players start from 0 and alternatinely add anumber from 1 to 10 to the sum"<<endl;
    cout<<"the player who reaches 100 wins"<<endl;
    int sum=0;
    string player1,player2;
    cin>>player1>>player2;
    int player1num,player2num;
    while(1<=player1num<=10 and 1<=player2num<=10 and sum<=100)
        {
            cin>>player1num;
            sum=sum+player1num;
            if(sum==100)
                {
                cout<<player1[]"is the winner"<<endl;
                }
            cin>>player2num;
            sum=sum+player2num;
            if(sum==100)
                {
                cout<<player2[]"is the winner"<<endl;
                }

       }
    return 0;
}
