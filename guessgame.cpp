#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){

  srand(time(NULL));
  int number = rand()%100+1;
  int guess;

  cout << "Thinking of a number (1-100).  Guess?";
  cin >> guess;

  if (number == guess){
    cout << "You got it." << endl;
  }  else if (number < guess){
    cout << "Your guess is high." << endl;
  } else {
    cout << "Your guess is low." << endl;
  }

}
