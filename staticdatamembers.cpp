#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "the id of this employee is " << id << "and the number is " << count << endl;
    }
    static void getCount()
    {
        cout << "the value of count is" << count << endl;
    }
};

int Employee::count = 1000; // default value is zero
int main()
{
    Employee harry, rohan, lovish;
    harry.setData();
    harry.getData();
    Employee::getCount();
    rohan.setData();
    rohan.getData();
    Employee::getCount();
    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}