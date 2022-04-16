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
        Name = "Dafault"; 
        Coach_Name = "Default";
        Home_City = "Default";
        Home_Status = false;
        score = 0;
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
    bool possession;
    Team Team1;
    Team Team2; 
  public: 
    Scoreboard()
    {
       
    }  
    void setDown ( int n ) { down = n; }
    void showScoreboard()
    {
      
    }
};

int main() 
{
  Scoreboard s;
  Team tOne;
  Team tTwo; 
  string newName = ""; 
  string userChoice = ""; 
  string newCoachName = ""; 
  int homeTeamQuestion = 0; 
  int newScore = 0; 
  tOne.setHomeStatus(true); 
  s.setHome(tOne); 
  s.setVisitor(tTwo); 
  do 
  {
      system("clear"); 
      s.showScoreboard(); 
      
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
      cin >> userChoice; 

      setScore(newScore);         
      }
      else if(userChoice == "C" || userChoice == "c")
      {
        cout << "\nUpdate Home Status Module****" << endl; 
        cout << "\nWho is the home team: 1 = T1, 2=T2: "; 
        homeTeamQuestion = validateInt(homeTeamQuestion); 
        
        if(homeTeamQuestion == 1)
        {
          tOne.setHomeStatus(true); 
          tTwo.setHomeStatus(false); 
        }
        else if(homeTeamQuestion == 2)
        {
          tOne.setHomeStatus(false); 
          tTwo.setHomeStatus(true);
        }
        else
        {
          cout << "\nInvalid Input!" << endl;
          sleep(2); 
        }
      }
      else if(userChoice == "D" || userChoice == "d")
      {
          cout << "\nUpdate Visitor Coach Module****" << endl; 
          cout << "\nPlease enter the visitor coach Name: "; 
          cin >> newCoachName; 
          tTwo.setCoachName(newCoachName); 
      }
      else if(userChoice == "E" || userChoice == "e")
      {
        cout << "Exit chosen." << endl; 
      }
      else
      {
        cout << "\nInvalid input." << endl; 
      }

      s.setHome(tOne); 
      s.setVisitor(tTwo); 
  
  }while(userChoice != "E" && userChoice != "e");


  return 0; 
}