#include<iostream>
using namespace std;
class Addition
{
public:
  Addition(int int1,int int2)
  {
    int sum= int1+int2;
    cout<<"Addition of two integer = "<<sum<<endl;
  }
private:
  int int1,int2;
};
int main(int argc, char const *argv[]) {
  int int1,int2;
  cout<<"Enter value of int1=";
  cin>>int1;
  cout<<"Enter value of int1=";
  cin>>int2;
  Addition add(int1,int2);

  return 0;
}
