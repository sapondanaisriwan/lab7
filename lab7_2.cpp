// Dialog of the first example is given below.

/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/

#include <iostream>
using namespace std;

int main()
{
  string user;
  string dpUser;
  string movie;
  string day;
  string what;
  int studentId;
  int gear;
  cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;

  cout << "?????: ";
  getline(cin, user);
  dpUser = user + ": ";
  cout << "Fahsai: Wow!!! " << user << " is a really cool name." << endl;
  cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
  cout << dpUser;
  cin >> studentId;
  cin.ignore();
  gear = studentId / 10000000 - 12;
  cout << "Fahsai: I think you may be GEAR " << gear << ". I have a free movie ticket for you." << endl;
  cout << "Fahsai: Let's go to the cinema together!!!" << endl;
  cout << "Fahsai: What movie do you want to watch?" << endl;
  cout << dpUser;
  getline(cin, movie);
  cout << "Fahsai: So....which day are you free to go with me?" << endl;
  cout << dpUser;
  getline(cin, day);
  cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << movie << " with you." << endl;
  cout << dpUser;
  getline(cin, what);
  cout << "Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/";
  return 0;
}