#include<iostream>
#include<curses.h>
using namespace std;

int tareaa1(){
int set[12] = {3,170,80,5,21,71,23,55,23,20,102,31};
int i,j,aux;

for(i=0;i<12;i++){
  for(j=0;j<11;j++){
    if (set[j]>set[j+1]){
      aux=set[j];
      set[j]=set[j+1];
      set[j+1]=aux;
    }
  }
}
//Para ordenar de menor a mayor
cout<<"De menor a mayor---->  ";
for(i=0;i<12;i++){
   cout<<set[i]<<"  ";
}
//Para ordenar de mayor a menor
cout<<"\nDe mayor a menor---->  ";
for( i=11;i>=0;i--){
   cout<<set[i]<<"  ";

}
cout<<"\n";
return 0;
}
