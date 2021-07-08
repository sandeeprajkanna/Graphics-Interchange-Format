#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
 int main(){
int page=0;
 int x,y;
  int gd = DETECT, gm;


   initgraph(&gd, &gm, "C:\\TC\\BGI");
 double m=3.14/100;
for(int i=0;i<1000;i++){
setactivepage(page);
setvisualpage(1-page);
cleardevice();
setfillstyle(SOLID_FILL,WHITE);
floodfill(1,1,14);
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
circle(200,200,100);
;
floodfill(200,200,BLACK);

 x=200-50*sin(i*m);
 y=200+50*cos(i*m);

 for(int j=0;j<8;j++){
 double w=j*3.14/4;
 setcolor(WHITE);
 setfillstyle(SOLID_FILL,WHITE);
 circle(x+45*sin(w-i/4),y-45*cos(w-i/4),5);
 floodfill(x+45*sin(w-i/4),y-45*cos(w-i/4),WHITE);

                   }
delay(40);
page=1-page;
 }
 getch();
}
