#include <iostream>
#include <vector>
#include <cstdlib>
#include<ctime>
using namespace std;

const int MAX_PERIODS = 10;
const int MAX_TEAMS = 4;
const int MIN_PERIODS = 1;
const int MIN_TEAMS = 1;

void printScoreboard(vector < vector <int> >);
int  randomBetween(int , int);

int main()
{
  srand((int) time(0));
  int periods;
  int teams;
  
  cout<<"How many competitors? ";
  cin>>teams;
  cout<<"How many scoring periods? ";
  cin>>periods;

  vector< vector < int > > Board;

  vector< vector < int > > grid;

  if( teams < MIN_TEAMS || periods < MIN_PERIODS || 
      teams > MAX_TEAMS || periods > MAX_PERIODS )
  {
    cout<<"Must have between "<<MIN_TEAMS<<" and "<<MAX_TEAMS<<" competitors.\n";
    cout<<"and between "<<MIN_PERIODS<<" and "<<MAX_PERIODS<<" periods.\n";
    return 0;
  }
  else
  {
  //cout<< "SCOREBOARD\n";
  Board.resize (teams);

  for( int  i = 0; i < Board.size(); i ++)
  {
        Board[i].resize(periods);
  }
  
  for(int t = 0; t < teams; t ++)
  {
        //cout<<"Player " << t+1 << ": ";

        for(int p = 0; p < periods; p++)
        {
                Board[t][p] = 0;
               // cout<<Board[t][p]<< "|";
        }

         //cout<<endl; 
  }      

  printScoreboard(Board);

  for(int t = 0; t < teams; t ++)
  {
        //cout<<"Player " << t+1 << ": ";

        for(int p = 0; p < periods; p++)
        {
                Board[t][p] = randomBetween(5,5);
               // cout<<Board[t][p]<< "|";
        }

         //cout<<endl; 
  }      

   //make scoreboard and fill it with zeros
  
   //once created, display the scoreboard
  }

  printScoreboard(Board);
  return 0;
}

  void printScoreboard(vector< vector<int> > grid)
  {
        cout<<"SCOREBOARD\n";

  
  for(int t = 0; t < grid.size(); t ++)
  {
         
        cout<<"Player " << t+1 << ": ";

        for(int p = 0; p < grid[t].size(); p++)
        {
                //grid[t][p] = 0;
                cout<<grid[t][p]<< "|";
        }

        cout<<endl; 
  }    

  }

  int randomBetween(int first, int second)
  {
        if(first > second)
        {
            return second =rand()%(first-second+1);
        }
        else
        {
            return first +rand()%(second-first+1);
        }
  }






  
