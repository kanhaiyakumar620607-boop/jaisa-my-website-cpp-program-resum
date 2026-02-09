#include<iostream>
using namespace  std;
int main(){
     double num1,num2;
     char op;
     cout<<"enter fist number:";
     cin>>num1;
     cout<<"enter operator(+,-,*,/):";
     cin>>op;
     cout<<"enter second number:";
     cin>>num2;
     switch(op){
        case'+':
         cout<< "result = " <<num1 + num2;
         break;
         case'-':
          cout<< "result = " << num1 - num2;
          break;
          case'*':
          cout<<"result= " <<num1 * num2;
          break;
          case'/':
          if(num2 != 0)
          cout <<"result = "<<num1/num2;
          else
          cout<<"error !divison by zero.";
          break;
          default:
          cout <<"invalid operator.";
     }
          return 0;
     }
        
          
        


     