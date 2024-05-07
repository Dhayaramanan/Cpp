#include <iostream>

class FriendClass;

class SomeClass
{
private:
    int m_value{};

public:
    SomeClass(int value) : m_value{ value }
    {
    }

    int getValue() const
    {
        return m_value;
    }

    friend class FriendClass;
    friend void FriendClass::modifySomeClass(SomeClass& s, int v);
};

class FriendClass
{
public:
    static void modifySomeClass(SomeClass& s, int v)
    {
        s.m_value = v;
    }
};

int main()
{
    SomeClass s1{3};
    std::cout << s1.getValue() << '\n';

    FriendClass::modifySomeClass(s1, 10);

    std::cout << s1.getValue() << '\n';

    return 0;
}