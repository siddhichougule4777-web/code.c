
#include <iostream>
using namespace std;
class Distance {
public:
int feet, inch;
Distance()
{
this->feet = 0;
this->inch = 0;
}
Distance(int f, int i)
{
this->feet = f;
this->inch = i;
}
// Overloading (+) operator to perform addition of two distance object Call by reference
Distance operator+(Distance& d2)
{
// Create an object to return
Distance d3;
d3.feet = this->feet + d2.feet;
d3.inch = this->inch + d2.inch;
// Return the resulting object
return d3;
}
};
// Driver Code
int main()
{
Distance d1(8, 9);
Distance d2(10, 2);
Distance d3;
// Use overloaded operator
d3 = d1 + d2;
cout << "\nTotal Feet & Inches: " <<
d3.feet << "'" << d3.inch;
return 0;
}
#include <iostream>
using namespace std;
class MyClass {
private:
int value; // Private member to store the value
public:
// Constructor to initialize MyClass objects
MyClass(int val)
: value(val)
{
}
// Overloading the equality operator (==)
bool operator==(const MyClass& other) const
{
// Compare the value of this object with the value of 'other'
return value == other.value;
}
// Overloading the inequality operator (!=)
bool operator!=(const MyClass& other) const
{
// Utilize the already overloaded '==' operator
return !(*this == other);
}
// Overloading the less than operator (<)
bool operator<(const MyClass& other) const
{
// Compare the value of this object with 'other' for less than
return value < other.value;
}
// Overloading the greater than operator (>)
bool operator>(const MyClass& other) const
{
// Compare the value of this object with 'other' for greater than
return value > other.value;
}
// Overloading the less than or equal to operator (<=)
bool operator<=(const MyClass& other) const
{
// Utilize the already overloaded '>' operator
return !(*this > other);
}
// Overloading the greater than or equal to operator(>=)
bool operator>=(const MyClass& other) const
{
// Utilize the already overloaded '<' operator
return !(*this < other);
}
};
int main()
{
MyClass obj1(20);
MyClass obj2(20);
// Using overloaded relational operators
if (obj1 == obj2) {
cout << "obj1 is equal to obj2" << endl;
}
else {
cout << "obj1 is not equal to obj2" << endl;
}
if (obj1 < obj2) {
cout << "obj1 is less than obj2" << endl;
}
else {
cout << "obj1 is not less than obj2" << endl;
}
// Using overloaded '!=' operator
if (obj1 != obj2) {
cout << "obj1 is not equal to obj2" << endl;
}
else {
cout << "obj1 is equal to obj2" << endl;
}
// Using overloaded '>' operator
if (obj1 > obj2) {
cout << "obj1 is greater than obj2" << endl;
}
else {
cout << "obj1 is not greater than obj2" << endl;
}
// Using overloaded '<=' operator
if (obj1 <= obj2) {
cout << "obj1 is less than or equal to obj2"
<< endl;
}
else {
cout << "obj1 is not less than or equal to obj2"
<< endl;
}
// Using overloaded '>=' operator
if (obj1 >= obj2) {
cout << "obj1 is greater than or equal to obj2"
<< endl;
}
else {
cout << "obj1 is not greater than or equal to obj2"
<< endl;
}
return 0;
}