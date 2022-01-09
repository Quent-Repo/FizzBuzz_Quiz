#include <iostream>

// when %3 print Fizz
// when %5 print Buzz
// when %3 and(&&) %5 print FizzBuzz

int main(){
  for(int x = 1; x <= 100; x++){
    if(x % 3 == 0 && x % 5 == 0){
      std::cout << "FizzBuzz" << '\n';
    }
    else if(x % 3 == 0){
      std::cout << "Fizz" << '\n';
    }
    else if(x % 5 == 0){
      std::cout << "Buzz" << '\n';
    }
    else{
    std::cout << x << '\n';
    }
  }
  //while(){}

}