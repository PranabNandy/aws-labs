#include <bits/stdc++.h>
#include <sys/resource.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
using namespace std;
int main()
{
  
  for(;;){
    int i=10;
    while(i-->=0)
    system("scp -i sir.pem ubuntu@13.233.98.231:/home/ubuntu/aws-labs/aws_demo.pem /home/ubuntu/");
    sleep(10);
  }
  
 // sleep(10);
  cout<<"Hello World!"<<endl;
  //for(;;) cout<<"fg "<<endl;
  return 0;
}







