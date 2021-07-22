#include<iostream>
#include"linear_regression.hpp"
#include"NB.hpp"
#include "LOGO.hpp"
#include "conio.h"
int main(){
    logo();
    char a;
    system("cls");
    A:
    cout<<"Choose "<<endl;
    cout<<"1.Linear Regression"<<endl;
    cout<<"2.Naive Bayes Algorithm on Iris Dataset"<<endl;
    cout<<"3.Exit"<<endl;
    a=getch();
    if (a=='1'){
          Start_regression();
          system("pause");
          system("cls");
          goto A;
    }else if(a == '2'){
          start_Naive_Bayes();
          system("pause");
          system("cls");
          goto A;
    }else if(a== '3'){
        exit(1);
    }
    else{
        cerr<<"Wrong Input.....:("<<endl;
        system("pause");
        system("cls");
        goto A;
    }
    return 0;
}