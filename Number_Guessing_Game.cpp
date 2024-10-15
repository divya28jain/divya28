#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
int main()
{
  string name;
  int inputuser;
  char input;
  int score=0;
  cout << "Enter your name";
  getline(cin, name);
  cout << endl;
  do
  {
    srand(0);
    int variable = rand() % 100 + 1;
    cout << "Enter any number in range between 1 and 100" << endl;
    cin >> inputuser;
    cout << endl;
    if (inputuser == variable)
    {
      cout << "Hurray!! You Guessed It Right." << endl;
      score++;
    }
    else
    {
      cout << "OOPs!! You Guessed It Wrong , Try Again";
    }
    cout << "Would You like to Try Again Yes(Y) or No(N)";
    cin >> input;
  } while (input != 'N');
  cout << "Your Score is" << score << endl;
  cout << "Game End" << endl;
  return 0;
}
