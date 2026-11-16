//Rating
#pragma once
#include <iostream>
using namespace std;

class Rating
{
    int rating_sum;
    int rating_count;
public:
    Rating();

    void setRating(int rating);
    int getRatingSum()const;
    int getRatingCount()const;

    int addRating(int rating);
    bool validRating(int rating);
    ~Rating();




};