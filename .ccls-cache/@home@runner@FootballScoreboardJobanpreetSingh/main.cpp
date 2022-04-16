// Jobanpreet Singh
// CSE COSC 1437 Dr. T
// 4/15/22

#include <iostream>
#include <string> 
#include "Input_Validation_Extended.h"
using namespace std; 

class Team 
{
  private:
    string Name; 
    string Coach_Name;
    string Home_City;
    bool Home_Status; 
    int Score; 
    int Timeout_Count;
  public:
      Team()
      {
        Name = "Default"; 
        Coach_Name = "Default";
        Home_City = "Default";
        Home_Status = false;
        Score = 0;
        Timeout_Count = 0;
      }
      void setName (string n) { Name = n; }
      string getName() const { return Name; }
      void setCoach_Name (string c) { Coach_Name = c; }
      string getCoach_Name() const { return Coach_Name; }
      void setHome_City (string h) { Home_City = h; }
      string getHome_City() const { return Home_City; }
      void setHome_Status (bool s) { Home_Status = s; }
      bool getHome_Status() const { return Home_Status; }
      void setScore(int sc) { Score = sc; }
      int getScore() const { return Score; }
      void setTimeout_Count(int t) { Timeout_Count = t; }
      int getTimeout_Count() const { return Timeout_Count; }
      
};

class Scoreboard
{
  private:
    int down;
    int toGo;
    int Quarter;
    int minute;
    int second;
    Team Team1;
    Team Team2; 
  public: 
    Scoreboard()
    {
      down = 0;
      toGo = 0;
      Quarter = 1;
      minute = 0;
      second = 0;
    }  
    void setDown ( int n ) { down = n; }
    void setTogo ( int n ) { toGo = n; }
    void setQuarter ( int n ) { Quarter = n; }
    void setMinute (int n ) { minute = n; }
    void setSecond (int n ) { second = n; }
    void setTeam1 ( Team n ) { Team1 = n; }
    void setTeam2 ( Team n ) { Team2 = n; }
    int getDown() const { return down; }
    int getTogo() const { return toGo; }
    int getQuarter() const { return Quarter; }
    int getMinute() const { return minute; }
    int getSecond() const { return second; }
    Team getTeam1() const { return Team1; }
    Team getTeam2() const { return Team2; }
    void showScoreboard()
    {
      cout << "************************" << endl;
      cout << "  " << Team1.getName() << " " << getMinute() << ":" << getSecond()
        << " " << Team2.getName() << endl;
      cout << "      " << Team1.getScore() << "         " << Team2.getScore() << 
        endl;
      cout << "         QTR " << getQuarter() << endl;
      cout << "   " << getDown() << " DOWN     TO GO " << getTogo() << endl;
      cout << "************************" << endl;
      cout << "\n\n" ;
    }
};

int main() 
{
  Scoreboard s;
  Team tOne;
  Team tTwo; 
  string choice = ""; 
  string userChoice = "";
  int homeTeamQuestion = 0; 
  int newScore = 0; 
  tOne.setHome_Status(true); 
  s.setTeam1(tOne); 
  s.setTeam2(tTwo); 
  do 
  {
      system("clear"); 
      s.showScoreboard(); 
      cout << "Enter your choice " << endl;
      cout << "A = Update Team 1 Name" << endl; 
      cout << "B = Update Team 2 Name " << endl; 
      cout << "C = Update Team 1 Coach Name " << endl; 
      cout << "D = Update Team 2 Coach Name" << endl; 
      cout << "E = Update Team 1 City " << endl;
      cout << "F = Update Team 2 City " << endl;
      cout << "G = Update Home Status " << endl;
      cout << "H = Update Team 1 Score " << endl;
      cout << "I = Update Team 2 Score " << endl;
      cout << "J = Update Team 1 Timeout Count " << endl;
      cout << "K = Update Team 2 Timeout Count " << endl;
      cout << "L = Update Down Count " << endl;
      cout << "M = Update To Go Count " << endl;
      cout << "N = Update Time " << endl;
      cout << "O = Update Quarter " << endl;
      cout << "Z = Exit " << endl;
      cout << "Your Answer: ";
      cin >> userChoice;     
      if(userChoice == "A" || userChoice == "a") 
      {
        cout << "\nEnter Team 1 name " << endl;
        cin >> choice;
        tOne.setName(choice);
      }
      else if(userChoice == "B" || userChoice == "b") 
      {
        cout << "\nEnter Team 2 name " << endl;
        cin >> choice;
        tTwo.setName(choice);
      }
      else if(userChoice == "C" || userChoice == "c") 
      {
        cout << "\nEnter Team 1 Coach Name " << endl;
        cin >> choice;
        tOne.setCoach_Name(choice);
      }
      else if(userChoice == "D" || userChoice == "d") 
      {
        cout << "\nEnter Team 2 Coach Name " << endl;
        cin >> choice;
        tTwo.setCoach_Name(choice);
      }
      else if(userChoice == "E" || userChoice == "e") 
      {
        cout << "\nEnter Team 1 City Name " << endl;
        cin >> choice;
        tOne.setHome_City(choice);
      }
      else if(userChoice == "F" || userChoice == "f") 
      {
        cout << "\nEnter Team 1 City Name " << endl;
        cin >> choice;
        tTwo.setHome_City(choice);
      }
      else if(userChoice == "G" || userChoice == "g")
      {
        cout << "\nUpdate Home Status Module" << endl; 
        cout << "\nWho is the home team: 1 = Team 1, 2 = Team 2: "; 
        homeTeamQuestion = validateInt(homeTeamQuestion); 
        if(homeTeamQuestion == 1)
        {
          tOne.setHome_Status(true); 
          tTwo.setHome_Status(false); 
        }
        else if(homeTeamQuestion == 2)
        {
          tOne.setHome_Status(false); 
          tTwo.setHome_Status(true);
        }
        else
        {
          cout << "\nInvalid Input!" << endl; 
        }
      }
      else if(userChoice == "H" || userChoice == "h") 
      {
        cout << "\nEnter Team 1 Score " << endl;
        cin >> newScore;
        tOne.setScore(newScore);
      }
      else if(userChoice == "I" || userChoice == "i") 
      {
        cout << "\nEnter Team 2 Score " << endl;
        cin >> newScore;
        tTwo.setScore(newScore);
      }
      else if(userChoice == "J" || userChoice == "j") 
      {
        cout << "\nEnter Team 1 Timeout Count " << endl;
        cin >> newScore;
        tOne.setTimeout_Count(newScore);
      }
      else if(userChoice == "K" || userChoice == "k") 
      {
        cout << "\nEnter Team 2 Timeout Count " << endl;
        cin >> newScore;
        tTwo.setTimeout_Count(newScore);
      }
      else if(userChoice == "L" || userChoice == "l") 
      {
        cout << "\nEnter Down Count " << endl;
        cin >> newScore;
        s.setDown(newScore);
      }
      else if(userChoice == "M" || userChoice == "m") 
      {
        cout << "\nEnter To Go Count " << endl;
        cin >> newScore;
        s.setTogo(newScore);
      }
      else if(userChoice == "N" || userChoice == "n") 
      {
        cout << "\nEnter The Minutes " << endl;
        cin >> newScore;
        s.setMinute(newScore);
        cout << "\nEnter The Seconds " << endl;
        cin >> newScore;
        s.setSecond(newScore);
      }
      else if(userChoice == "O" || userChoice == "o") 
      {
        cout << "\nEnter The current Quarter " << endl;
        cin >> newScore;
        s.setQuarter(newScore);
      }
      else if(userChoice == "Z" || userChoice == "z")
      {
        cout << "Exit chosen." << endl; 
      }
      else
      {
        cout << "\nInvalid input." << endl; 
      }

      s.setTeam1(tOne); 
      s.setTeam2(tTwo); 
  
  }while(userChoice != "Z" && userChoice != "z");
  return 0; 
}