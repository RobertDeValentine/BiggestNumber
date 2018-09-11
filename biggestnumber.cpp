//Author: Robert DeValentine
#include<iostream>

int main()
{
  //declare variables here
    int age;
    int age2;
    int biggest;

  std::cout<<"Please enter a whole number:\n";
          
  std::cin>>age;
  //get first input using std::cin>>

  std::cout<<"Please enter another whole number:\n";
          
  std::cin>>age2;
  //get second input using std::cin>> again with a second variable

  //determine if first or second is bigger and store that in a third variable
  if(age > age2)
    {
        biggest = age;

    }
  else if(age2 >= age)
    {
        biggest = age2;

    }
  else
    {
        std::cout<<"Use numerals please ignore the following                    ";

    }

  std::cout<<"Of those two numbers, the biggest is: ";
  //print out the variable representing the biggest number
  std::cout<<biggest;
  

  std::cout<<std::endl<<"Thank you for playing.\n";
  
  return 0;
}
