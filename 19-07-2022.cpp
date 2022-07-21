#include <iostream>

using namespace std;

class tops 
{
	public:
		int a;
		
		void getA()
		{
			cout<<"Enter A"<<endl;
			cin >>a;
		}
        
        void showA()
        {
        	cout<<a;
		}


};
int main ()
{
	tops sd;
	sd.getA();
	sd.showA();
	
	return 0;
	
}










