#include <iostream>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
using namespace std;
//block of function. you can enter another one function here.
class Calc {
public:
 float hypo()
{
float x,y,z;
printf("enter a sides parameters:\n" );
 cin>>x;
 cin>>y;
    cout<<"side one:";
    cout<<x;
    cout<<" side two:";
    cout<<y  <<endl;
         z=sqrt(x*x+y*y);
            return z;
}
 float bise()
 {
     float x,y,z,b;
     int i;
     printf("enter a sides parametrs a, b, c:\n");
     cin>>x;
     cin>>y;
     cin>>z;
     cout<<"side a:";
        cout<<x;
     cout<<" side b:";
        cout<<y;
     cout<<" side c:";
        cout<<z<<endl;
    printf("choose location of bisector:\n between a and b- 1\n between b and c- 2\n between a and c- 3\n");
        cin>>i;
    switch(i){
case 1:
    b=(1/(x+y))*sqrt(x*y*(x+y+z)*(x+y-z));
    cout<<"value of bisector between a and b is:\n";
    cout<<b<<endl;
    break;
case 2:
    b=(1/(y+z))*sqrt(y*z*(y+z+x)*(y+z-x));
    cout<<"value of bisector between b and c is:\n";
    cout<<b<<endl;
    break;
case 3:
    b=(1/(x+z))*sqrt(x*z*(x+z+y)*(x+z-y));
    cout<<"value of bisector between a and c is:\n";
    cout<<b<<endl;
    break;
    }

 }
};
int main()
{

    int i,v;
    char m,c;
        printf("this program calculates some functions' value.");
        printf("what kind of function you need calculate?\n");
        cout<< "h- hypotenuse\n"
            << "b- bisector\n";
            cin>>c;
            cout<<c<<endl;
        printf("how many values you need?\n");
            cin>>v;
            cout<<v<<endl;
        printf("do you want to continue?  y / n\n" );//request of abort
            cin>>m;

if (m=='y')
{switch (c){
case 'h':
    for (i=0; i<v; i++)//number of calculates
  {
       Calc foo;
    cout<<"value of hypotenuse is:"//results
        <<foo.hypo()<<endl;//our function's using here
    }
    break;
case 'b':
     for (i=0; i<v; i++)//number of calculates
  {
       Calc foo;
      foo.bise();//our function's using here
    }
    break;
}
}
    else
    {
    printf("ok\n"); //abort way
    }
    //this is time when you used a program
    time_t rawtime;
          struct tm * timeinfo;

          time ( &rawtime );
          timeinfo = localtime ( &rawtime );
              printf ( "Current local time and date: %s", asctime (timeinfo) );
  _getch();
  return 0;

}
