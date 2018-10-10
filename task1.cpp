#include<iostream>
using namespace std;
class Rectangle
{
public:
  Rectangle()
  {
    width=2;
    length=4;
  }
  double Area_of_rectangle(double length, double width)
  {
  double  Area_of_rectangle =length*width;
    return Area_of_rectangle;
}
private:
  double width;
  double length;
};
int main(int argc, char const *argv[])
{
  Rectangle Area;
  double length,width;
  cout<<"length of rectangle=";
  cin>>length;
  cout<<"width of rectangle=";
  cin>>width;
double Area_rectangle=Area.Area_of_rectangle(length,width);



cout<<"Area of the rectangle="<<Area_rectangle<<endl;
  return 0;
}
