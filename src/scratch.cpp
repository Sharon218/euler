// #include <iostream>
// #include <vector>

// int main( int argc, char* argv[] )
// {
//   std::vector<int> v1(1, 2);
//   std::vector<int> v2{ 1, 2 };
//   std::cout << v1.size() << v2.size();
// }

// struct A  {
//   A() { foo(); }
//   virtual ~A() { foo(); }
//   virtual void foo() { std::cout << "1"; }
//   // void bar() { foo(); }
// };
//
// struct B : public A {
//   virtual void foo() { std::cout << "2"; }
//   void bar() { foo(); }
// };
//
// int main() {
//   B b;
//   b.bar();
// }


// #include <iostream>
// #include <memory>
// #include <vector>
//
// class C {
// public:
//   void foo()       { std::cout << "A"; }
//   void foo() const { std::cout << "B"; }
// };
//
// struct S {
//   std::vector<C> v;
//   std::unique_ptr<C> u;
//   C *const p;
//
//   S()
//   : v(1)
//   , u(new C())
//   , p(u.get())
// {}
// };
//
// int main() {
//   S s;
//   const S &r = s;
//
//   s.v[0].foo();
//   s.u->foo();
//   s.p->foo();
//
//   r.v[0].foo();
//   r.u->foo();
//   r.p->foo();
// }


// #include <iostream>
//
// void f(int) { std::cout << 1; }
// void f(unsigned) { std::cout << 2; }
//
// int main() {
//   f(-2.5);
// }


// #include <iostream>
// #include <limits>
//
// int main() {
//   int i = std::numeric_limits<int>::max();
//   std::cout << ++i;
// }


#include <iostream>
#include <limits>

int main() {
  int i = std::numeric_limits<int>::max();
  std::cout << ++i;  // Actually undefined behavior
}


// #include <iostream>
// struct X {
//   X() { std::cout << "X"; }
// };
//
// int main()
// {
//   const int* const a = new int();
//   a = 0;
//   *a = 1;
//   //X x();
// }
