#ifndef GAMETIME_H
#define GAMETIME_H

#include <iostream>

class GameTime {
private:
    int totalMinutes;

public:
    GameTime(int minutes = 0);

    // �� ������
    bool operator>(const GameTime& other) const;
    bool operator<(const GameTime& other) const;
    bool operator==(const GameTime& other) const;

    // ��� ������
    friend std::ostream& operator<<(std::ostream& os, const GameTime& time);
    
};

#endif