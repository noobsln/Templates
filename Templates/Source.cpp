#include <iostream>
using namespace std;

template<typename T> T half(T num) { return num / 2; }
template<> int half<int>(int num) { return static_cast<int>(num)/2; }