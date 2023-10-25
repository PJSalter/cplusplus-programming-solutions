#ifndef CARH
#define CARH

class Car
{
private:
    int modelYear;
    int purchasePrice; // Declare purchasePrice member (int)
    int currentValue;

public:
    void SetModelYear(int userYear);
    int GetModelYear() const;
    void SetPurchasePrice(int price); // Declare SetPurchasePrice() function
    int GetPurchasePrice() const;     // Declare GetPurchasePrice() function
    void CalcCurrentValue(int currentYear);
    void PrintInfo() const; // Declare PrintInfo() method to output modelYear, purchasePrice, and currentValue
};

#endif
