#include <iostream>
using namespace std;

class B;

class A {
  public:
	friend class B;
	int fun(B &obj);
  private:
	int x=1;
};

class B{
  public:
	friend class A;
	int fun(A &obj){
		return obj.x;
	}
  private:
    int y=20;
};

int A::fun(B &obj){
	return obj.y;
}

int main() {
	A a;
	B b;
	cout<<b.fun(a)<<endl;
	cout<<a.fun(b)<<endl;
};
