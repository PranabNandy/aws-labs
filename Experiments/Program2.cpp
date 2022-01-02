/* Countable Infinite Process Creation */
#include<bits/stdc++.h>
#include <sys/resource.h>
#include <sys/types.h>
#include <unistd.h>
using namespace std;
int main(){
	static long int i=1;
	vector<int> arr(1000);
	cout<<"Hello  world ! "<<i++<<" Process id : "<<getpid()<<" Parent Id :"<<getppid()<<endl;
	if(i<=INT_MAX){
		fork();
		main();
	}
}
