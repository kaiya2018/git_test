#include<iostream>
using namespace std;

class sample{
	private:
		int x,y;
	public:
		sample(int x,int y){
			this->x = x;
			this->y = y;
		}		
		void copy(sample &z){
			if(this==&z)
				return;
			*this = z;
			cout<<"this: "<<this<<endl;
			cout<<"&(*this): "<<&(*this)<<endl;
			cout<<"this->x"<<this->x<<endl;
			cout<<"this->y"<<this->y<<endl;
		}
};

int main(){
    sample s1(1,2);
	sample s2(3,4);
	s1.copy(s2);

	return 0;
}
