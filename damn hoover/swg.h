#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<D:\Microsoft VS Code\program\damn hoover\filswg.h>
using namespace std;
void result(int a,int b, string g){
    int c=1;
    if(a==b){
        c=-1;
    }
    else if(a!=2){
        if(a+1!=b){
           c=0; 
        }
    }
    else{
        if(b==1){
            c=0;
        }
    }
    if(c==0){
        cout<<"------------------------------------------------------YOU LOSE(Kismat kharab hai tumhari)-------------------------------------------------------"<<endl;
        cout<<""<<endl;
        cout<<"-------------------------------------------------------------TRY AGAIN TO WIN-------------------------------------------------------------------"<<endl;
    }
    else if(c==-1){
        
cout<<"---------------------------------------------------------------It's a TIE!!---------------------------------------------------------------------"<<endl;
cout<<""<<endl;
cout<<"---------------------------------------------------------BETTER LUCK NEXT TIME------------------------------------------------------------------"<<endl;

    }
    else{
      updawins(g);
      cout<<"------------------------------------------------------CONGRATULATIONS !!! YOU WIN---------------------------------------------------------------"<<endl;
      cout<<""<<endl;
      cout<<"---------------------------------------------------Jyada khush mat ho kuch ukhada nahi hai------------------------------------------------------"<<endl;

    }

}
int swg(){
    string I[3]={"Snake","Water","Gun"};
    int a;
    cout<<"===============================================================SNAKE  WATER  GUN================================================================"<<endl;
    cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Press 1 to play:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;

    cin>>a;
    if(a==1){
    srand(time(NULL));
    while(a==1){
        cout<<""<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~WELCOME TO THE GAME~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        string g;
            cout<<"                 High score:"<<endl;
        hiscos();
        cout<<endl; 
        cout<<"                            Enter your name ";
        setups();
        cout<<endl;
        for(int i=0;i!=3;i++){
        cout<<"                                                         ====> Press "<<i+1<<" to choose "<<I[i]<< " :)<===="<<endl; 
        }
        int b,random;
        random= rand()%3;
        cin>>b;
        cout<<"************************************************ YOUR CHOICE IS "<<I[b-1]<<" and YOUR OPPONENT CHOOSE ******************************************"<<I[random]<<endl;
        cout<<""<<endl;
        result(b-1,random,g);
        a=0;
        cout<<""<<endl;
        cout<<""<<endl;
        cout<<""<<endl;
        cout<<"-----------------------------------------------------------Do you want to play again------------------------------------------------------------"<<endl;
        cout<<"-----------------------------------------------------If Yes press 1"<<"OR if No press 0-----------------------------------------------------------"<<endl;
        cout<<""<<endl;
        int d;
        cin>>d;
        if(d==1){
            a=1;
        }

    }    
    
        cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!-----------------------------THANKS FOR PLAYING------------------------------!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
        cout<<""<<endl;
        cout<<""<<endl;
        cout<<""<<endl;
        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>HOPE YOU LIKED IT.<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
        cin.get();

    }
    else{
    
        cout<<"                                                      You didn't enter 1. Kindly enter 1 to play"                                                <<endl;

    }
    return 0;
}
