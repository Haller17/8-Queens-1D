#include <iostream>
#include<cmath>
using namespace std;
int main(){
  int Q[8] = {};
  int c = 0;
  int S = 0;
  Q[0] = 0;

  Nc: c++;
  if (c==8) goto print;
    
  Q[c] = -1;

  Nr: Q[c]++;
 
  if (Q[c]==8) goto backtrack;

  for (int i=0; i<c; i++)
    if ((Q[i]==Q[c])|| (c-i ==abs(Q[c]-Q[i]))) goto Nr;

  goto Nc;

  backtrack:
  c--;
  if (c==-1) return 0;
  goto Nr;
  
  print:
  S++;
  cout <<"Soulutions: "<<S<<endl;
  for (int i=0; i<8; i++){
     for(int j=0; j<8; j++){
         if (Q[i]==j){ 
               cout <<"1 ";
               }
    else {
       cout <<"0 ";
         }
      }
     cout<<endl;
  }
  goto backtrack;
    }
    
