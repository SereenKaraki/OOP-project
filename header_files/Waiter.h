// Layan Seyam 20250326
// Rania Aldouri 20251148
// Leen Alkaissi 20250775
// Juman Alsayeh 20250068
// Sereen Alkaraki 20250293
#pragma once
#include <string>
using namespace std;

class Waiter {
private:
    int waiterId;
    string name;

public:
    Waiter(int id, string waiterName);

    int getWaiterId() const;
    string getName() const;

    void setWaiterId(int id);
    void setName(string waiterName);

    void printWaiterInfo() const;
};
