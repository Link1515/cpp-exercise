#include <iostream>

using namespace std;

int main()
{
  int score { 0 };
  int count { 0 };
  int total { 0 };

  cout << "Enter score and calculate the average. Enter -1 to show result." << endl;
  cout << "--------------------------------------" << endl;

  while (1){
    cout << "Enter score: ";
    cin >> score; 
    
    if (score > 100 || score < 0) {
      if (score == -1) break;
      cout << "score range should between 0 to 100" << endl;
      continue;
    } 

    count++;
    total += score;
  }
      
  cout << "You input " << count << " nmuber of score." << endl;
  cout << "The average is " << (float) total / count << endl;
} 
