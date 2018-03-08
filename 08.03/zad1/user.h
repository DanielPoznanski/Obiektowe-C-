#ifndef USER_H
#define USER_H
#include <string>

class User {
protected:
    std::string login;
    std::string haslo;
public:
    User(std::string login, std::string haslo);
    bool Authorize(std::string login, std::string haslo);
    std::string getlogin();
};

#endif // USER_H
