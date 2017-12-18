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
printf("enter a sides parameters:\n\n" );
    cout<<"side one: ";
    cin>>x;
    cout<<"side two: ";
    cin>>y;
    cout<<"\n";
         z=sqrt(x*x+y*y);
    cout<<"the hypotenuse value is:"
        <<z<<endl;
    return 0;
}
 float bise()
 {
     float x,y,z,b;
     int i;
     printf("enter a sides parameters a, b, c:\n");
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
return 0;
 }
 float per(){
  float x,y,z;
     int i;
     printf("enter a sides parameters a, b, c:\n");
     cin>>x;
     cin>>y;
     cin>>z;
     cout<<"side a:";
        cout<<x;
     cout<<" side b:";
        cout<<y;
     cout<<" side c:";
        cout<<z<<endl;
        cout<<"the perimeter value is:"
            <<x+y+z<<endl;
            return 0;
 }
float area(){
 float x,y,z,p,s;
    printf("enter a sides parameters a, b, c:\n");
     cin>>x;
     cin>>y;
     cin>>z;
     cout<<"side a:";
        cout<<x;
     cout<<" side b:";
        cout<<y;
     cout<<" side c:";
        cout<<z<<endl;
    p=(x+y+z)/2;
    s=sqrt(p*(p-x)*(p-y)*(p-z));
    cout<<"area of triangle is:"
        <<s<<endl;
        return 0;

}
};






int main()
{

    int i,v;
    char m,c;
     do{   printf("this program calculates some functions' value.");
        printf("what kind of function you need calculate?\n");
        cout<< "h- hypotenuse\n"
            << "b- bisector\n"
            << "p- perimeter\n"
            << "a- area\n";
            cin>>c;
            cout<<c<<endl;
            if ((c!='h')&&(c!='b')&&(c!='p')&&(c!='a')) //exception keeper
            {
                    break;
            }
        printf("how many values you need?\n");
            cin>>v;
            cout<<v<<endl;



switch (c){
case 'h':
    for (i=0; i<v; i++)//number of calculates
  {
    Calc foo;
    foo.hypo();
    }
    break;
case 'b':
     for (i=0; i<v; i++)//number of calculates
  {
    Calc foo;
    foo.bise();//our function's using here
    }
    break;
case 'p':
    for (i=0; i<v; i++)
    {
    Calc foo;
    foo.per();
    }
    break;
case 'a':
   for (i=0; i<v; i++)
    {
    Calc foo;
    foo.area();
    }
   break;
}


     printf("do you want to exit?  y / n\n" );//request of abort
            cin>>m;
     } while(m!='y');
    //this is time when you used a program
    time_t rawtime;
          struct tm * timeinfo;

          time ( &rawtime );
          timeinfo = localtime ( &rawtime );
              printf ( "Current local time and date: %s", asctime (timeinfo) );
  _getch();
  return 0;

}
