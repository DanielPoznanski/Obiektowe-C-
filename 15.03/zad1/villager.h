#ifndef VILLAGER_H
#define VILLAGER_H
#include <string>

class Villager
{
    static std::string maleName[10];
    static std::string femaleName[10];
    static bool randomized;
    static int femaleCount,maleCount;

    std::string m_name ;
    unsigned int m_age;
    unsigned int m_maxAge;
    bool m_sex;
    public:
public:
    Villager();
    Villager(std::string m_name,unsigned int m_age,unsigned int m_maxAge,bool m_sex);
    ~Villager(); //destruktor
    std::string name() const;
    unsigned int age() const;
    unsigned int maxAge() const;
    bool sex() const;
    void advance();
    bool readyToDie();
};

#endif // VILLAGER_H
