// Group members:
// Layan Seyam 20250326
// Rania Aldouri 20251148
// Leen Alkaissi 20250775
// Juman Elsayeh 20250068
// Sereen Alkaraki 20250293
//Rating
#pragma once

class Rating
{
    int rating_sum;
    int rating_count;
public:
    Rating();

    void setRating(int rating);
    int getRatingSum()const;
    int getRatingCount()const;
    double getAvg()const;

    int addRating(int rating);
    bool validRating(int rating)const;
    double calcAvg()const;
    ~Rating();




};
