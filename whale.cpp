#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  string input;
  cout << "Enter text: \n";
  getline(cin, input);

  vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  vector<char> result;

  for(int i = 0; i < input.size(); i++) {

    for(int j = 0; j < vowels.size(); j++) {

      if (input[i] == vowels[j]) {

        result.push_back(input[i]);
      } 
    }
    if (input[i] == 'e' || input[i] == 'u') {

      result.push_back(input[i]);
    }
  }
  for(int k = 0; k < result.size(); k++) {
    cout << result[k];
  }
}  
