

#include<stdio.h>
#include<bits/stdc++.h>
#include <sys/resource.h>
#include <sys/types.h>
#include <unistd.h>
using namespace std;
std:: ofstream input;
std:: ofstream output;


int c=1;
string path;

int fun()
{
    // Creation of ofstream class object
    ofstream fout;
    string line;
    path="sample2"+to_string(c)+".txt";
   
    fout.open(path);
    while (fout) {
        long int n=1e2;
        srand((unsigned) time(0));
        for(int i=0; i<n; i++){
           int x = (rand()%10000000);
           fout<<x;
           fout<<"\n";
         }
        break;
    }
 
    // Close the File
    fout.close();
    return 0;
 }
 int foo(){
    ifstream fin;
    
    string line;
    fin.open(path);
    while (fin) {
 
        // Read a Line from File
        getline(fin, line);
 
        // Print line in Console
        cout << line << endl;
    }
 
    // Close the file
    fin.close();
    return 0;
 
}
int fun2(){
    ifstream indata; 
    int num;
    indata.open(path);
    indata >> num;
    int cnt=0;
    while ( !indata.eof() ) { // keep reading until end-of-file
        //  cout << "The next number is " << num << endl;
            cnt++;
            indata >> num; // sets EOF flag if no value found
    }
    cout<<"cnt : "<<cnt<<endl;
    indata.close();

    return 0;
}
void clear(){
    ofstream fout;
    string line;
    //path="sample1"+to_string(c)+".txt";
    //fout.open(path);
    //fout.close();
    int n = path.length();
 
    char array[n + 1];
 
    strcpy(array, path.c_str());

    remove(array);
    c++;
}
int main(){
    
    while(1){
        fun();
        foo();
        fun2();
        clear();
    
    }
    
   
  
}