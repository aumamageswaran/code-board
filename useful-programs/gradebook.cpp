/*
Program created by Akul Umamageswaran.
This program is a "gradebook" that calculates a student's average grade based on seven inputted grades.
*/

#include <iostream>
using namespace std;

int main() {
  int gradebook[7] = {100};
  int sum = 0;
  for (int i = 1; i < 8; i++) {
    cout << "Enter grade for assignment number " << i << ":" << "\n";
    cin >> gradebook[i-1];
    sum += gradebook[i-1];
  }
  
  int average = sum / 7;
  cout << "The student's average is: " << average << ".";
  
  return 0;
}
