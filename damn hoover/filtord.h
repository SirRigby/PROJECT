#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
void shot(string a){
    ifstream f;
    string b;
    int c;
    f.open("tord.txt", ios::in);
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
            getline(f,b);
            //cout<<b<<endl;
            if(c!=0){
              //  cout<<setprecision(2)<<fixed<<(stoi(b)/(c*1.0))*100<<"%"<<endl;
            }
            else{
               // cout<<"N/A";
            }
            f.close();
            return;
       }
    }
    f.close();
}
void updat(string a){
    ifstream f;
    ofstream ff;
    string b;
    f.open("tord.txt", ios::app);
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
    remove("tord.txt");
    rename("temp.txt", "tord.txt");
}
void updawint(string a){
    ifstream f;
    ofstream ff;
    string b;
    int c;
    int d;
    f.open("tord.txt", ios::app);
    ff.open("temp.txt", ios::app);
    while(!f.eof()){
        getline(f,b);
        ff<<b<<endl;
        if(("@$@"+a)==b){
            getline(f,b);
            ff<<b<<endl;
            d=stoi(b);
            getline(f,b);
            c=stoi(b)+1;
            ff<<c<<endl;
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
    remove("tord.txt");
    rename("temp.txt", "tord.txt");
    f.open("tord.txt", ios::app);
    getline(f,b);
    getline(f,b);
    getline(f,b);
    if(c>stoi(b)){
        ff.open("temp.txt", ios::app);
        ff<<"$"<<a<<endl;
        ff<<d<<endl;
        ff<<c<<endl;
        while(!f.eof()){
            getline(f,b);
            ff<<b<<endl;
        }
        f.close();
        ff.close();
        remove("tord.txt");
        rename("temp.txt", "tord.txt");
    }
}
bool snamet(string a){
    ifstream f;
    string b;
    f.open("tord.txt", ios::in);
    while(!f.eof()){
       getline(f,b);
       if(("@$@"+a)==b){
            return 1;
       }
    }
    f.close();
    return 0;
}
void settt(string a){
    ofstream f;
    f.open("tord.txt", ios::app);
    f<<("@$@"+a)<<'\n';
    f<<1<<endl;
    f<<0<<endl;
    f.close();
}
string setupt(){
    string a;
    cin>>a;
    if(snamet(a)){
        cout<<"User already exists, is this you?"<<endl;
        shot(a);
        int tr;
        cout<<"Enter 1 if yes, otherwise 0 "<<endl;
        cin>>tr;
        if(tr==1){
            updat(a);
        }
        else{
            cout<<"Let's be original, some other name"<<endl;
            setupt();
        }
    }
    else{
        settt(a);
    }
    return a;
}
void hiscot(){
    ifstream f;
    string b;
    f.open("tord.txt", ios::in);
    getline(f,b);
    cout<<"                    Name: ";
    for(int i=0;i<b.size()-1;i++){
        cout<<b[i+1];
        }
    cout<<endl;
    getline(f,b);
    getline(f,b);
    cout<<"                    Times played: ";
    cout<<b<<endl;
}