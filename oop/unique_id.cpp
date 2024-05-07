#include <iostream>

class Something
{
private:
    static inline int idGenerator{ 1 };
    int m_id{};

public:
    Something() : m_id{ idGenerator++ }
    {
    }

    int getId() const
    {
        return m_id;
    }

    static int getIdGenerator()
    {
        return idGenerator;
    }
};

int main()
{
    Something first{};
    Something second{};
    Something third{};

    std::cout << first.getId() << '\n';
    std::cout << second.getId() << '\n';
    std::cout << third.getId() << '\n';

    std::cout << Something::getIdGenerator() << '\n';

    return 0;
}