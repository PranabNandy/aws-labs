/* Uncountable Infinite Process Creation */
#include<bits/stdc++.h>
#include <sys/resource.h>
#include <sys/types.h>
#include <unistd.h>
using namespace std;
int main(){
	 long int i=1;
	cout<<"Hello  world ! "<<i++<<" Process id : "<<getpid()<<" Parent Id :"<<getppid()<<endl;
	if(i<=2){
		fork();
		main();
	}
}
