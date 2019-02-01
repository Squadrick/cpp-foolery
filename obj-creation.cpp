#include <iostream>

class A {
  public:
    A(int a){
      this->a = a;
    }
    ~A(){
      std::cout << "A(" << a << ") is destoryed" << std::endl;
    }
  private:
    int a;
};

int main() {
  if(true){
    A* a = new A(5);
    A b(6);
    delete a;
  }
  std::cout << "end of program" << std::endl;
}
