#include <iostream>
using namespace std;
class Student
{
public:
    Student(int n, string nam, int a) :
        num(n), name(nam), age(a) {
        ++count;
    }
    ~Student() { --count; }
    static int getCount() { return count; }
private:
    static int count;
    int num;
    string name;
    int age;
};
int Student::count = 0;
int main()
{
    cout << Student::getCount() << endl;
    Student* pt = new Student(1001, "You", 20);
    cout << pt->getCount() << endl;
    delete pt;
    return 0;
}
