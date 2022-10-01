#include <stdbool.h>

bool lovefunc(int flower1, int flower2) {
  bool timmy = false, sarah = false;
  
  if(flower1%2 == 0){
    timmy = true;
  }
  if(flower2%2 == 0){
    sarah = true;
  }
  if(timmy == sarah){
    return false;
  }else{
    return true;
  } 
}

// #include <criterion/criterion.h>
// #include <stdbool.h>

// bool lovefunc(int, int);

// Test(ExampleTests, ShouldPassAllTheTestsProvided) {
//   cr_assert(lovefunc(1, 4));
//   cr_assert(lovefunc(0, 1));
//   cr_assert_not(lovefunc(2, 2));
//   cr_assert_not(lovefunc(0, 0));
// }