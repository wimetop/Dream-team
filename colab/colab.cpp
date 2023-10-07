#include <iostream>
using namespace std;
class Point 
{
private:
	int x;
	int y;
public:
	Point()
	{
	
	}
	Point(int x, int y) 
	{
		this->x = x;
		this->y = y;
	}
	int getX() 
	{
		return this->x;
	}
	int getY()
	{
		return this->y;
	}
	void setX(int x)
	{
		this->x = x;
	}
	void setY(int y)
	{
		this->y = y;
	}
};
int main()
{
	Point(1, 5);
	cout << "Tanchik";
}