#include "std_lib_facilities.h"

// int main() {
//   string s;
//   int n;
//   cin >> s >> n;
//   cout << "string s = " << s << endl << "int n = " << n <<endl;
//   return 0;
// }

// find adjacent repetition of words
int main() {
  string current;
  string previous = "__INIT__";
  cout << "Prompt:";
  while (cin >> current) {
    if (previous == current) {
      cout << "Repetition detacted: " << current << "!\n";
    }
    previous = current;
  }
  cout << "while loop finished!" << endl;
  return 0;
}
