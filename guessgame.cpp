#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;


// nelsoncs02's comment!
int main(){

  srand(time(NULL));
  int number = rand()%100+1;
  int guess;
  bool correct = false;
  int tries = 0;

  cout << "Thinking of a number (1-100).  Guess?";
  while(!correct){
	  cin >> guess;
          tries++;

	  if (number == guess){
		  cout << "You got it in " << tries << " tries." << endl;
		  correct = true;
	  }  else if (number < guess){
		  cout << "Your guess is high. try again:" << endl;
	  } else {
		  cout << "Your guess is low. try again:" << endl;
	  }
  }

}
