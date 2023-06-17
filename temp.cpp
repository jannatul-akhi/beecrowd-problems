// C++ program to count total
// number of words in the string
#include <bits/stdc++.h>
using namespace std;
 
// Function to count total number
// of words in the string
int countWords(string str)
{
  // Check if the string is null
  // or empty then return zero
  if (str.size() == 0) {
    return 0;
  }
  // Splitting the string around
  // matches of the given regular
  // expression
  vector<string> words;
  string temp = "";
  for (int i = 0; i < str.size(); i++) {
    if (str[i] == ' ') {
      words.push_back(temp);
      temp = "";
    }
    else {
      temp += str[i];
    }
  }
 
  int count = 1;
 
  for (int i = 0; i < words.size(); i++) {
    if (words[i].size() != 0)
      count++;
  }
 
  // Return number of words
  // in the given string
  return count;
}
 
int main()
{
 
  // Given String str
  string str = "One two       three\n four\tfive ";
  // Print the result
  cout << "No of words : " << countWords(str);
  return 0;
}
 