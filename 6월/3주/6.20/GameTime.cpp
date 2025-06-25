#include "GameTime.h"
#include <iostream>

// ������
GameTime::GameTime(int minutes) : totalMinutes(minutes) {}

// �� ������ ����
bool GameTime::operator>(const GameTime& other) const {
    return totalMinutes > other.totalMinutes;
}

bool GameTime::operator<(const GameTime& other) const {
    return totalMinutes < other.totalMinutes;
}

bool GameTime::operator==(const GameTime& other) const {
    return totalMinutes == other.totalMinutes;
}

// ��� ������ ����
std::ostream& operator<<(std::ostream& os, const GameTime& time) {
    int hours = time.totalMinutes / 60;
    int minutes = time.totalMinutes % 60;
    os << hours << "�ð� " << minutes << "��";
    return os;
}