#include <iostream>
#include <list>

class A{
	private:
		int a;
	public:
		A(int a) {this->a = a;}
		void inc() {++a; 
			std::cout << "Inc: "<<a<<std::endl;}
		void show() {
			std::cout << ">>" << a << std::endl;
		}
};

int main() {
	std::list<A> a_list;
	A a(1);
	a.inc();
	a_list.push_front(a);
	a_list.push_front(A(1));

	for(auto& as: a_list) {
		as.inc();
	}
	a.show();

	for(auto it = a_list.begin(); it != a_list.end(); ++it)
		it->inc();
	
	for(auto as: a_list) {
		as.show();
	}
	a.show();
}
