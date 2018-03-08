#include "user.h"

    User::User(std::string login, std::string haslo)
{
    this->login=login;
    this->haslo=haslo;
}
    bool User::Authorize(std::string log, std::string pas)
    {
        return log==login && pas==haslo;
    }

    std::string User::getlogin()
    {
        return this->login;
    }
