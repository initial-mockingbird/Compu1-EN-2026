#include "lab2.hpp"
#include <vector>
#include <string>
#include <iostream>

using namespace std;



int main()
{
  List<int> l;
  List<int> l2 = l.cons(1);
  List<int> l3 = l2.cons(2);
  cout << show(l) << endl;
  cout << show(l2) << endl;
  cout << show(l3) << endl;
  auto l4 = l.cons(5).cons(4).cons(3).cons(2).cons(1);

  return 0;
}
