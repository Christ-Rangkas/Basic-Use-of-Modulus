//Christ Rangkas MTH 4300 HW 2 Question 2

#include <iostream>
int main(){
  int m,a,b,c,x=1;
//User Input and the varible x will start with 1 bc x is a positive integer
//so we start with the smallest possile smallest int
  bool go = true; //Flag variable to stop while loop
  std::cin >> m >> a >> b >> c;

  while(go){
    if ((a*x+b)%m == c){
//We will loop until there's an int that gives us remainder c when ax+b is
//divided by m
      std::cout << x << "\n";
      go = false; //breaks my loop
    }
    else if (x==m){
//if x == m that means that remainder is 0. But we know x is a positive int
      std::cout << "No such int x. \n";
      go = false; //breaks my loop
    }
    else {
      x++; //adds 1 to try next int value
    }
  }
  return 0;
}
