/*by mohammad al-mohammad*/
#include <iostream>
#include<cstdlib>
#include<conio.h>
#include<windows.h>
char arr[3][4]={'*','*','*','*','*','*','*','*','*','*','*','*'};
int larrx=9,larry=4,oy=1,ox=8;
int yg,xg;
bool bo;
using namespace std;

void charr(){

for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
            if(i==xg&&j==yg&&(arr[i][j]=='*')){
                arr[i][j]=' ';
                yg=100;xg=100;
                break;
            }



    }}
}



void draw(){
     system("cls");
     cout<<"++++++++++++++\n";
for(int i=0;i<larrx;i++){
    for(int j=0;j<larry;j++){
            if((i==0||i==1||i==2||i==3||i==4||i==5||i==6||i==7||i==8||i==9)&&j==0){cout<<"+";}

           /* if(i==xg&&j==yg){
     cout<<" . ";
        xg--;
        charr();
        }*/
            if(i==xg&&j==yg){
     cout<<" . "; xg--;
        charr();

        }
           else if(i<3&&j<4)
     cout<<" "<<arr[i][j]<<" ";
     else if(i==ox&&j==oy)cout<<"<!>";


    else
        cout<<"   ";

           if((i==0||i==1||i==2||i==3||i==4||i==5||i==6||i==7||i==8||i==9)&&j==3){cout<<"+";}

    }

    cout<<endl;
}
 cout<<"++++++++++++++\n";
}


void moveo(){
    if(_kbhit()){
            char x=_getch();
    switch(x){
    case 'w':ox--;break;
    case 's':ox++;break;
    case 'a':oy--;break;
    case 'd':oy++;break;
    case ' ':yg=oy;xg=ox-1;break;
    case 'x':bo=true;break;

    }
    }



}

int chak(){ int x=0;
for(int i=0;i<13;i++){ if(*(*arr+i)==' '){x++;}}
return x;
}


int main()
{
cout<<"\n\n\n\n"<<"\t\t\t\t";
for(;chak()!=12;){
Sleep(40);
  //if(chak()==12){cout<<"you win.";break;}

 if(bo){break;}
    moveo();
    draw();


}
cout<<"you win.";

return 0;
}
