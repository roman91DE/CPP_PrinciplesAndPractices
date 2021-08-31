#include "std_lib_facilities.h"

// write a letter from std input as a drill excercise for chapter 3
int main() {
  cout << "Enter the name of the person you want to write to: ";
  string first_name;
  cin >> first_name;
  cout << "   Dear, " << first_name
       << "\nHow are you?\nI am fine. I miss you!\n";
  cout << "Enter the name of your friend: ";
  string friend_name;
  cin >> friend_name;
  cout << "Have you seen " << friend_name << " lately?\n";
  cout << "Enter m if your friend is male or f if she is female: ";
  char friend_sex = 0;
  cin >> friend_sex;
  cout << "If you see " << friend_name << " please ask ";
  if (friend_sex == 'm') {
    cout << "him ";
  } else if (friend_sex == 'f') {
    cout << "her ";
  }
  cout << "to call me!\n"
       << "Please enter the age of " << first_name << ": ";
  int age;
  cin >> age;
  if (age <= 0 || age >= 110) {
    simple_error("You are kidding!\n");
  }
  cout << "I heared you just had a Birthday and you are " << age
       << " years old!\n";
  if (age < 12) {
    cout << "Next year you will be " << age + 1 << "!\n";
  } else if (age == 17) {
    cout << "Next year you will be able to vote!\n";
  } else if (age >= 70) {
    cout << "I hope you are enjoying your retirement!\n";
  }
  cout << "Yours sincerly,\n\nRoman\n";
  return 0;
}
