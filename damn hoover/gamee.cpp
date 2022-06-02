#include<iostream>
#include<D:\Microsoft VS Code\program\damn hoover\avengers.h>
#include<D:\Microsoft VS Code\program\damn hoover\ttt.h>
#include<D:\Microsoft VS Code\program\damn hoover\kbc.h>
#include<D:\Microsoft VS Code\program\damn hoover\tord.h>
#include<D:\Microsoft VS Code\program\damn hoover\guessthen.h>
#include<D:\Microsoft VS Code\program\damn hoover\swg.h>
#include<windows.h>
using namespace std;
int main(){
    system("CLS");
    int a=-1;
    while(a!=0){
    system("COLOR 03");
    cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
    cout<<"|=============================================================<<<<<<<<>>>>>>>>>==================================================================|"<<endl;
    cout<<"|=================================================     WELCOME TO THE WORLD OF GAMING     =======================================================|"<<endl;
    cout<<"|=============================================================<<<<<<<<>>>>>>>>>==================================================================|"<<endl;
    cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
   

    cout<<""<<endl; 
    
    cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
    cout<<"|-----------------------------------------------HI, PLEASE SELECT THE GAME YOU WANT TO PLAY------------------------------------------------------|"<<endl; 
    cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~FOLLOWING GAMES ARE AVAILABLE~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl; 
    cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<" ________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<"|                                                     1.Guess the Number                                                                         |"<<endl;
    cout<<"|*   *   *   *   *   *   *   *   *   *   *   *                                    *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *  |"<<endl;
    cout<<"|  *   *   *   *   *   *   *   *   *   *   *   *      2.Tic Tac Toe                 *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *|"<<endl;
    cout<<"|*   *   *   *   *   *   *   *   *   *   *   *                                    *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *  |"<<endl;
    cout<<"|  *   *   *   *   *   *   *   *   *   *   *   *      3.KBC                         *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *|"<<endl;
    cout<<"|*   *   *   *   *   *   *   *   *   *   *   *                                    *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *  |"<<endl;
    cout<<"|  *   *   *   *   *   *   *   *   *   *   *   *      4.Snake Water Gun             *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *|"<<endl;
    cout<<"|*   *   *   *   *   *   *   *   *   *   *   *                                    *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *  |"<<endl;
    cout<<"|  *   *   *   *   *   *   *   *   *   *   *   *      5.Avengers Secret Wars        *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *|"<<endl;
    cout<<"|*   *   *   *   *   *   *   *   *   *   *   *                                    *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *  |"<<endl;
    cout<<"|  *   *   *   *   *   *   *   *   *   *   *   *      6.Truth or Dare               *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *|"<<endl;
    cout<<"|________________________________________________________________________________________________________________________________________________|"<<endl;
    cout<<"                                                                                                                                                  "<<endl;
    cout<<"                                                 Wanna Exit? Just press 0                                                                         "<<endl;
  
    int choice;
    cout<<"Enter your choice: ";
    cin>>choice;
    cout<<endl;
    switch (choice)
    {
    system("CLS");
    case 1:
        guessthen();
        break;
    case 2:
        ttt();
        cin.get();
        break;
    case 3:
        kbc();
        break;
    case 4:
        swg();
        break;
    case 5:
        avengers();
        break;
    case 6:
        tord();
        break;
    case 0:
        a=0;
        break;
    default:
        break;
    }
    system("CLS");
    }
    return 0;
}