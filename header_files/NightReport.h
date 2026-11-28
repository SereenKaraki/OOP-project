#pragma once
class Restaurant;

class NightReport {

public:

    NightReport();

    void printReport (const Restaurant& restaurant) const;

    int countUsedTables(const Restaurant& restaurant) const;

    int countGroupsServed(const Restaurant& restaurant) const;

    int countGuestsServed(const Restaurant& restaurant) const;
};

