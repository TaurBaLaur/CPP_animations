#include <iostream>
#include <graphics.h>
#include <windows.h>
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
    DWORD lung=GetSystemMetrics(SM_CXSCREEN);
    DWORD lat=GetSystemMetrics(SM_CYSCREEN);
    initwindow(lung,lat,"paint",-3,0);

    int x=lung/2,y=lat/2,i, page=0;
    for(i=0;i<=361;i++)
    {
        setactivepage(page);
        setvisualpage(1-page);
        if(i<361)
            cleardevice();
        circle(x,y,30);
        //circle(x,y,100);
        //circle(x,y,200);
        //circle(x,y,300);
        ///---------------12 o'clock---------------
        line(x+100*cos((105+i)*M_PI/180),y-100*sin((105+i)*M_PI/180),x+300*cos((90+i)*M_PI/180),y-300*sin((90+i)*M_PI/180));
        line(x+100*cos((75+i)*M_PI/180),y-100*sin((75+i)*M_PI/180),x+300*cos((90+i)*M_PI/180),y-300*sin((90+i)*M_PI/180));
        ///---------------1 o'clock---------------
        line(x+100*cos((75+i)*M_PI/180),y-100*sin((75+i)*M_PI/180),x+300*cos((60+i)*M_PI/180),y-300*sin((60+i)*M_PI/180));
        line(x+100*cos((45+i)*M_PI/180),y-100*sin((45+i)*M_PI/180),x+300*cos((60+i)*M_PI/180),y-300*sin((60+i)*M_PI/180));
        ///---------------2 o'clock---------------
        line(x+100*cos((45+i)*M_PI/180),y-100*sin((45+i)*M_PI/180),x+300*cos((30+i)*M_PI/180),y-300*sin((30+i)*M_PI/180));
        line(x+100*cos((15+i)*M_PI/180),y-100*sin((15+i)*M_PI/180),x+300*cos((30+i)*M_PI/180),y-300*sin((30+i)*M_PI/180));
        ///---------------3 o'clock---------------
        line(x+100*cos((15+i)*M_PI/180),y-100*sin((15+i)*M_PI/180),x+300*cos((0+i)*M_PI/180),y-300*sin((0+i)*M_PI/180));
        line(x+100*cos((345+i)*M_PI/180),y-100*sin((345+i)*M_PI/180),x+300*cos((0+i)*M_PI/180),y-300*sin((0+i)*M_PI/180));
        ///---------------4 o'clock---------------
        line(x+100*cos((345+i)*M_PI/180),y-100*sin((345+i)*M_PI/180),x+300*cos((330+i)*M_PI/180),y-300*sin((330+i)*M_PI/180));
        line(x+100*cos((315+i)*M_PI/180),y-100*sin((315+i)*M_PI/180),x+300*cos((330+i)*M_PI/180),y-300*sin((330+i)*M_PI/180));
        ///---------------5 o'clock---------------
        line(x+100*cos((315+i)*M_PI/180),y-100*sin((315+i)*M_PI/180),x+300*cos((300+i)*M_PI/180),y-300*sin((300+i)*M_PI/180));
        line(x+100*cos((285+i)*M_PI/180),y-100*sin((285+i)*M_PI/180),x+300*cos((300+i)*M_PI/180),y-300*sin((300+i)*M_PI/180));
        ///---------------6 o'clock---------------
        line(x+100*cos((285+i)*M_PI/180),y-100*sin((285+i)*M_PI/180),x+300*cos((270+i)*M_PI/180),y-300*sin((270+i)*M_PI/180));
        line(x+100*cos((255+i)*M_PI/180),y-100*sin((255+i)*M_PI/180),x+300*cos((270+i)*M_PI/180),y-300*sin((270+i)*M_PI/180));
        ///---------------7 o'clock---------------
        line(x+100*cos((255+i)*M_PI/180),y-100*sin((255+i)*M_PI/180),x+300*cos((240+i)*M_PI/180),y-300*sin((240+i)*M_PI/180));
        line(x+100*cos((225+i)*M_PI/180),y-100*sin((225+i)*M_PI/180),x+300*cos((240+i)*M_PI/180),y-300*sin((240+i)*M_PI/180));
        ///---------------8 o'clock---------------
        line(x+100*cos((225+i)*M_PI/180),y-100*sin((225+i)*M_PI/180),x+300*cos((210+i)*M_PI/180),y-300*sin((210+i)*M_PI/180));
        line(x+100*cos((195+i)*M_PI/180),y-100*sin((195+i)*M_PI/180),x+300*cos((210+i)*M_PI/180),y-300*sin((210+i)*M_PI/180));
        ///---------------9 o'clock---------------
        line(x+100*cos((195+i)*M_PI/180),y-100*sin((195+i)*M_PI/180),x+300*cos((180+i)*M_PI/180),y-300*sin((180+i)*M_PI/180));
        line(x+100*cos((165+i)*M_PI/180),y-100*sin((165+i)*M_PI/180),x+300*cos((180+i)*M_PI/180),y-300*sin((180+i)*M_PI/180));
        ///---------------10 o'clock---------------
        line(x+100*cos((165+i)*M_PI/180),y-100*sin((165+i)*M_PI/180),x+300*cos((150+i)*M_PI/180),y-300*sin((150+i)*M_PI/180));
        line(x+100*cos((135+i)*M_PI/180),y-100*sin((135+i)*M_PI/180),x+300*cos((150+i)*M_PI/180),y-300*sin((150+i)*M_PI/180));
        ///---------------11 o'clock---------------
        line(x+100*cos((135+i)*M_PI/180),y-100*sin((135+i)*M_PI/180),x+300*cos((120+i)*M_PI/180),y-300*sin((120+i)*M_PI/180));
        line(x+100*cos((105+i)*M_PI/180),y-100*sin((105+i)*M_PI/180),x+300*cos((120+i)*M_PI/180),y-300*sin((120+i)*M_PI/180));

        page=1-page;
        delay(10);
    }

    getch();
    closegraph();
}
