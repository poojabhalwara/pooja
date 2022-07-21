#include <iostream>

using namespace std;


class simpedemo
{
	public:
		int a;
		
	void geta()
	{
	cout<<"Enter A"<<endl;
	cin>>a;
	}	
	void show()	
	{
		cout<<a;
	}
};
  int main ()
  
{
	simpledemo sd;
	sd.getA();
	sd.show();
	
	return0
}