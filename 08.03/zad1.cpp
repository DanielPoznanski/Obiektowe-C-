#include <iostream>
#include <string>


using namespace std;
class User {
	string login;
	string pass;
public:
	User(string login2, string pass2);
	bool Authorize(string login, string pass);
};
User::User(string login2, string pass2) {
	login = login2;
	pass = pass2;

}
bool User::Authorize(string login3, string pass3) {
	if (login == login3 && pass == pass3) 
		return 1;
	else
		return 0;
	}

int main()
{
	User dziad("login", "haslo");
	
	cout<< dziad.Authorize("login", "haslo");



	return 0;
}