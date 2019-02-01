#include <iostream>
#include <list>
#include <memory>

class A {
  private:
    int a_;
  public:
    ~A() {
      std::cout << "FUCKED -> " << a_ << std::endl;
    }
    A(int a) {
      this->a_ = a;
    }
    void show() {
      std::cout << "A::show() -> " << a_ << std::endl;
    }
};


std::list<std::shared_ptr<A> > a_list;
void some_func() {
  auto a = std::make_shared<A>(5);
  auto b = std::make_shared<A>(6);

  a_list.push_back(a);
  a_list.push_back(b);
  //	a_list.clear();
}

int main() {
  some_func();

  std::cout << "Test" << std::endl;
  //	*(a_list.begin())->show();
  //	*(a_list.end())->show();
}
