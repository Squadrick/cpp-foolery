#include <iostream>
#include <memory>

class A 
{
private:
	int a;
public:
	A() {
		this->a = -1;
	}
	A(int a);
	void show();
};

class B
{
private:
	std::shared_ptr<A> a_;
public:
	B(int b);
	void show() {
		std::cout << "B::show() -> ";
		a_->show();
	}
};

B::B(int b) : a_(std::make_shared<A>(b)) {}

A::A(int a) {
	this->a = a;
}

void A::show() {
	std::cout << "A::show() -> " << a << std::endl;
}

int main() {
	auto p = std::make_unique<B>(5);
	p->show();
	std::cout << p.get() << std::endl;
}
