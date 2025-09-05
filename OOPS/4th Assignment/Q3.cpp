/*Make a class named Fruit with a data member to calculate the number of fruits in a
basket. Create two other class named Apples and Mangoes to calculate the number of
apples and mangoes in the basket. Print the number of fruits of each type and the total
number of fruits in the basket.*/

#include <iostream>
using namespace std;

class Fruit
{
protected:
    int count;

public:
    void setCount(int c)
    {
        count = c;
    }
    int getCount()
    {
        return count;
    }
};

class Apples : public Fruit
{
public:
    void display()
    {
        cout << "Number of Apples: " << count << endl;
    }
};

class Mangoes : public Fruit
{
public:
    void display()
    {
        cout << "Number of Mangoes: " << count << endl;
    }
};

int main()
{
    Apples a;
    Mangoes m;

    int appleCount, mangoCount;
    cout << "Enter number of Apples: ";
    cin >> appleCount;
    cout << "Enter number of Mangoes: ";
    cin >> mangoCount;

    a.setCount(appleCount);
    m.setCount(mangoCount);

    a.display();
    m.display();

    cout << "Total fruits in basket = " << a.getCount() + m.getCount() << endl;

    return 0;
}
