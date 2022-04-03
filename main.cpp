#include <iostream>
using namespace std;

int main() {
    float x=0, y=0, z=0, a=0, b=0;
   cout<< "Inserire 4 numeri reali\n";
   cin >> a >> b >> x >> y;
   if ((x<0)&&(y>0)){
       z=a*x-b*y;
   }else if ((x>=0)&&(y<=0)){
       z=a*x*x-b*y;
   }else{
       z=a*x+b*y*y;
   }
   cout << z << endl;
   return 0;

   }
