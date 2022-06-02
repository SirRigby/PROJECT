#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
void shok(string a){
    ifstream f;
    string b;
    int c;
    f.open("kbc.txt", ios::in);
    cout<<"                    Name: ";
    while(!f.eof()){
       getline(f,b);
       if(("@$@"+a)==b){
            for(int i=0;i<b.size()-3;i++){
                cout<<b[i+3];
            }
            cout<<endl;
            getline(f,b);
            cout<<"                    Times played: ";
            cout<<b<<endl;
            c=stoi(b);
            cout<<"                    Highest round reached: ";
            getline(f,b);
            cout<<b<<endl;
            cout<<"                    Average rounds per attempt: ";
            if(c!=0){
                cout<<setprecision(2)<<fixed<<(stoi(b)/(c*1.0))<<endl;
            }
            else{
                cout<<"N/A";
            }
            f.close();
            return;
       }
    }
    f.close();
}
void updak(string a){
    ifstream f;
    ofstream ff;
    string b;
    f.open("kbc.txt", ios::app);
    ff.open("temp.txt", ios::app);
    while(!f.eof()){
        getline(f,b);
        ff<<b<<endl;
        if(("@$@"+a)==b){
            getline(f,b);
            ff<<stoi(b)+1<<endl;
            getline(f,b);
            ff<<b<<endl;
       }
       else{
            getline(f,b);
            ff<<b<<endl;
            getline(f,b);
            ff<<b<<endl;
       }
    }
    f.close();
    ff.close();
    remove("kbc.txt");
    rename("temp.txt", "kbc.txt");
}
void updawink(string a,int i){
    ifstream f;
    ofstream ff;
    string b;
    int d;
    f.open("kbc.txt", ios::app);
    ff.open("temp.txt", ios::app);
    while(!f.eof()){
        getline(f,b);
        ff<<b<<endl;
        if(("@$@"+a)==b){
            getline(f,b);
            ff<<b<<endl;
            d=stoi(b);
            getline(f,b);
            ff<<max(stoi(b),i)<<endl;
       }
       else{
            getline(f,b);
            ff<<b<<endl;
            getline(f,b);
            ff<<b<<endl;
       }
    }
    f.close();
    ff.close();
    remove("kbc.txt");
    rename("temp.txt", "kbc.txt");
    f.open("kbc.txt", ios::app);
    getline(f,b);
    getline(f,b);
    getline(f,b);
    if(i>stoi(b)){
        ff.open("temp.txt", ios::app);
        ff<<"$"<<a<<endl;
        ff<<d<<endl;
        ff<<i<<endl;
        while(!f.eof()){
            getline(f,b);
            ff<<b<<endl;
        }
        f.close();
        ff.close();
        remove("kbc.txt");
        rename("temp.txt", "kbc.txt");
    }
}
bool snamek(string a){
    ifstream f;
    string b;
    f.open("kbc.txt", ios::in);
    while(!f.eof()){
       getline(f,b);
       if(("@$@"+a)==b){
            return 1;
       }
    }
    f.close();
    return 0;
}
void settk(string a){
    ofstream f;
    f.open("kbc.txt", ios::app);
    f<<("@$@"+a)<<'\n';
    f<<1<<endl;
    f<<0<<endl;
    f.close();
}
string setupk(){
    string a;
    cin>>a;
    if(snamek(a)){
        cout<<"User already exists, is this you?"<<endl;
        shok(a);
        int tr;
        cout<<"Enter 1 if yes, otherwise 0 "<<endl;
        cin>>tr;
        if(tr==1){
            updak(a);
        }
        else{
            cout<<"Let's be original, some other name"<<endl;
            setupk();
        }
    }
    else{
        settk(a);
    }
    return a;
}
void hiscok(){
    ifstream f;
    string b;
    f.open("kbc.txt", ios::in);
    getline(f,b);
    cout<<"                    Name: ";
    for(int i=0;i<b.size()-1;i++){
        cout<<b[i+1];
        }
    cout<<endl;
    getline(f,b);
    getline(f,b);
    cout<<"                    Highest round reached: ";
    cout<<b<<endl;
}