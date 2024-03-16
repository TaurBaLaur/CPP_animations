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
    initwindow(lung,lat);
    int page=0;
    //shoot
    for(int i=0;i<=46;i++)
    {
        setactivepage(page);
        setvisualpage(1-page);
        if(i<46)
        {
            cleardevice();
        }
        //pantof stang
        ellipse(50,590+50,270,360,65,10);
        ellipse(55,600+50,90,180,5,20);
        ellipse(115,580+50,180,270,45,10);
        //pantof drept
        ellipse(130,600+50,270,360,65,10);
        ellipse(135,610+50,90,180,5,20);
        ellipse(195,590+50,180,270,45,10);
        //ciucuri
        line(40,580+50,95,580+50);
        line(120,590+50,175,590+50);
        line(40,580+50,55,380+50);
        line(95,580+50,110,380+50);
        line(110,380+50,120,590+50);
        line(165,380+50,175,590+50);
        //trunchi
        ellipse(110,375+50,180,360,65,5);
        line(45,375+50,55,175+50);
        line(175,375+50,165,175+50);
        line(55,175+50,95,160+50);
        line(165,175+50,125,160+50);
        //gat
        line(95,160+50,95,140+50);
        line(125,160+50,125,150+50);
        arc(135,150+50,70,180,10);
        //cap
        arc(140,130+50,260,360,10);
        line(150,130+50,150,125+50);
        line(150,125+50,155,125+50);
        line(155,125+50,150,120+50);
        ellipse(95,100+50,180,270,5,40);
        line(150,120+50,150,100+50);
        arc(140,110+50,315,45,5);
        //palarie
        line(70,100+50,170,100+50);
        arc(100,100+50,90,180,30);
        arc(140,100+50,0,90,30);
        ellipse(90,50+50,270,360,10,40);
        ellipse(150,50+50,180,270,10,40);
        line(100,50+50,140,50+50);
        //brat
        struct arccoordstype arc1;
        arc(110,190+50,0+i,180+i,20);
        getarccoords(&arc1);
        line(arc1.xend,arc1.yend,90+100*sin(i*3.14159/180)+i/7.5,290-(100-100*cos(i*3.14159/180))+i/3.214285+50);
        line(arc1.xstart,arc1.ystart,130+80*sin(i*3.14159/180)-i/7.5,270-(80-80*cos(i*3.14159/180))-i/3.214285+50);
        //antebrat
        line(90+100*sin(i*3.14159/180)+i/7.5,290-(100-100*cos(i*3.14159/180))+i/3.214285+50,90+184*sin((22.49+i)*3.14159/180)+i/7.5,374-(184-184*cos((22.49+i)*3.14159/180))+i/3.214285+50);
        line(130+80*sin(i*3.14159/180)-i/7.5,270-(80-80*cos(i*3.14159/180))-i/3.214285+50,130+153*sin((23.0889+i)*3.14159/180)-i/7.5,343-(153-153*cos((23.0889+i)*3.14159/180))-i/3.214285+50);
        line(90+184*sin((22.49+i)*3.14159/180)+i/7.5,374-(184-184*cos((22.49+i)*3.14159/180))+i/3.214285+50,130+153*sin((23.0889+i)*3.14159/180)-i/7.5,343-(153-153*cos((23.0889+i)*3.14159/180))-i/3.214285+50);
        //palma+pistol
        struct arccoordstype arc2;
        arc(110+177*sin((28.87+i)*3.14159/180),367-(177-177*cos((28.87+i)*3.14159/180))+50,45+i,135+i,15);
        getarccoords(&arc2);
        struct arccoordstype arc3;
        arc(110+192*sin((32.797+i)*3.14159/180),382-(192-192*cos((32.797+i)*3.14159/180))+50,225+i,45+i,5);
        getarccoords(&arc3);
        line(arc2.xstart,arc2.ystart,arc3.xend,arc3.yend);
        line(110+180*sin((30+i)*3.14159/180),370-(180-180*cos((30+i)*3.14159/180))+50,110+256*sin((34.5+i)*3.14159/180),446-(256-256*cos((34.5+i)*3.14159/180))+50);
        line(110+180*sin((30+i)*3.14159/180),370-(180-180*cos((30+i)*3.14159/180))+50,110+184*sin((26+i)*3.14159/180),374-(184-184*cos((26+i)*3.14159/180))+50);
        line(110+256*sin((34.5+i)*3.14159/180),446-(256-256*cos((34.5+i)*3.14159/180))+50,110+259*sin((31.5+i)*3.14159/180),449-(259-259*cos((31.5+i)*3.14159/180))+50);
        line(110+184*sin((26+i)*3.14159/180),374-(184-184*cos((26+i)*3.14159/180))+50,110+259*sin((31.5+i)*3.14159/180),449-(259-259*cos((31.5+i)*3.14159/180))+50);
        arc(110+215*sin((27.8+i)*3.14159/180),405-(215-215*cos((27.8+i)*3.14159/180))+50,225+i,45+i,5);
        line(110+217*sin((26.7+i)*3.14159/180),407-(217-217*cos((26.7+i)*3.14159/180))+50,110+202*sin((25+i)*3.14159/180),392-(202-202*cos((25+i)*3.14159/180))+50);
        struct arccoordstype arc4;
        arc(110+204*sin((23.3+i)*3.14159/180),394-(204-204*cos((23.3+i)*3.14159/180))+50,225+i,45+i,5);
        getarccoords(&arc4);
        struct arccoordstype arc5;
        arc(110+208*sin((19.9+i)*3.14159/180),398-(208-208*cos((19.9+i)*3.14159/180))+50,225+i,45+i,5);
        getarccoords(&arc5);
        line(arc4.xstart,arc4.ystart,arc5.xend,arc5.yend);
        arc(110+190*sin((24+i)*3.14159/180),380-(190-190*cos((24+i)*3.14159/180))+50,174+i,255+i,28);

        page=1-page;
        delay(10);
    }
    //bullet top out
    int s=342,e=18,c=2;
    page=0;
    for(int i=18;i<=90;i=i+18)
    {
        setactivepage(page);
        setvisualpage(1-page);
        if(i<90)
        {
            cleardevice();
        }
        //pantof stang
        ellipse(50,590+50,270,360,65,10);
        ellipse(55,600+50,90,180,5,20);
        ellipse(115,580+50,180,270,45,10);
        //pantof drept
        ellipse(130,600+50,270,360,65,10);
        ellipse(135,610+50,90,180,5,20);
        ellipse(195,590+50,180,270,45,10);
        //ciucuri
        line(40,580+50,95,580+50);
        line(120,590+50,175,590+50);
        line(40,580+50,55,380+50);
        line(95,580+50,110,380+50);
        line(110,380+50,120,590+50);
        line(165,380+50,175,590+50);
        //trunchi
        ellipse(110,375+50,180,360,65,5);
        line(45,375+50,55,175+50);
        line(175,375+50,165,175+50);
        line(55,175+50,95,160+50);
        line(165,175+50,125,160+50);
        //gat
        line(95,160+50,95,140+50);
        line(125,160+50,125,150+50);
        arc(135,150+50,70,180,10);
        //cap
        arc(140,130+50,260,360,10);
        line(150,130+50,150,125+50);
        line(150,125+50,155,125+50);
        line(155,125+50,150,120+50);
        ellipse(95,100+50,180,270,5,40);
        line(150,120+50,150,100+50);
        arc(140,110+50,315,45,5);
        //palarie
        line(70,100+50,170,100+50);
        arc(100,100+50,90,180,30);
        arc(140,100+50,0,90,30);
        ellipse(90,50+50,270,360,10,40);
        ellipse(150,50+50,180,270,10,40);
        line(100,50+50,140,50+50);
        //brat
        struct arccoordstype arc1;
        arc(110,190+50,0+45,180+45,20);
        getarccoords(&arc1);
        line(arc1.xend,arc1.yend,90+100*sin(45*3.14159/180)+45/7.5,290-(100-100*cos(45*3.14159/180))+45/3.214285+50);
        line(arc1.xstart,arc1.ystart,130+80*sin(45*3.14159/180)-45/7.5,270-(80-80*cos(45*3.14159/180))-45/3.214285+50);
        //antebrat
        line(90+100*sin(45*3.14159/180)+45/7.5,290-(100-100*cos(45*3.14159/180))+45/3.214285+50,90+184*sin((22.49+45)*3.14159/180)+45/7.5,374-(184-184*cos((22.49+45)*3.14159/180))+45/3.214285+50);
        line(130+80*sin(45*3.14159/180)-45/7.5,270-(80-80*cos(45*3.14159/180))-45/3.214285+50,130+153*sin((23.0889+45)*3.14159/180)-45/7.5,343-(153-153*cos((23.0889+45)*3.14159/180))-45/3.214285+50);
        line(90+184*sin((22.49+45)*3.14159/180)+45/7.5,374-(184-184*cos((22.49+45)*3.14159/180))+45/3.214285+50,130+153*sin((23.0889+45)*3.14159/180)-45/7.5,343-(153-153*cos((23.0889+45)*3.14159/180))-45/3.214285+50);
        //palma+pistol
        struct arccoordstype arc2;
        arc(110+177*sin((28.87+45)*3.14159/180),367-(177-177*cos((28.87+45)*3.14159/180))+50,45+45,135+45,15);
        getarccoords(&arc2);
        struct arccoordstype arc3;
        arc(110+192*sin((32.797+45)*3.14159/180),382-(192-192*cos((32.797+45)*3.14159/180))+50,225+45,45+45,5);
        getarccoords(&arc3);
        line(arc2.xstart,arc2.ystart,arc3.xend,arc3.yend);
        line(110+180*sin((30+45)*3.14159/180),370-(180-180*cos((30+45)*3.14159/180))+50,110+256*sin((34.5+45)*3.14159/180),446-(256-256*cos((34.5+45)*3.14159/180))+50);
        line(110+180*sin((30+45)*3.14159/180),370-(180-180*cos((30+45)*3.14159/180))+50,110+184*sin((26+45)*3.14159/180),374-(184-184*cos((26+45)*3.14159/180))+50);
        line(110+256*sin((34.5+45)*3.14159/180),446-(256-256*cos((34.5+45)*3.14159/180))+50,110+259*sin((31.5+45)*3.14159/180),449-(259-259*cos((31.5+45)*3.14159/180))+50);
        line(110+184*sin((26+45)*3.14159/180),374-(184-184*cos((26+45)*3.14159/180))+50,110+259*sin((31.5+45)*3.14159/180),449-(259-259*cos((31.5+45)*3.14159/180))+50);
        arc(110+215*sin((27.8+45)*3.14159/180),405-(215-215*cos((27.8+45)*3.14159/180))+50,225+45,45+45,5);
        line(110+217*sin((26.7+45)*3.14159/180),407-(217-217*cos((26.7+45)*3.14159/180))+50,110+202*sin((25+45)*3.14159/180),392-(202-202*cos((25+45)*3.14159/180))+50);
        struct arccoordstype arc4;
        arc(110+204*sin((23.3+45)*3.14159/180),394-(204-204*cos((23.3+45)*3.14159/180))+50,225+45,45+45,5);
        getarccoords(&arc4);
        struct arccoordstype arc5;
        arc(110+208*sin((19.9+45)*3.14159/180),398-(208-208*cos((19.9+45)*3.14159/180))+50,225+45,45+45,5);
        getarccoords(&arc5);
        line(arc4.xstart,arc4.ystart,arc5.xend,arc5.yend);
        arc(110+190*sin((24+45)*3.14159/180),380-(190-190*cos((24+45)*3.14159/180))+50,174+45,255+45,28);

        arc(355+c,243+50,s,e,5);
        c++;
        s=s-18;
        e=e+18;

        page=1-page;
        delay(10);
    }
    //bullet out
    page=0;
    for(int i=1;i<=10;i++)
    {
        setactivepage(page);
        setvisualpage(1-page);
        if(i<10)
        {
            cleardevice();
        }
        //pantof stang
        ellipse(50,590+50,270,360,65,10);
        ellipse(55,600+50,90,180,5,20);
        ellipse(115,580+50,180,270,45,10);
        //pantof drept
        ellipse(130,600+50,270,360,65,10);
        ellipse(135,610+50,90,180,5,20);
        ellipse(195,590+50,180,270,45,10);
        //ciucuri
        line(40,580+50,95,580+50);
        line(120,590+50,175,590+50);
        line(40,580+50,55,380+50);
        line(95,580+50,110,380+50);
        line(110,380+50,120,590+50);
        line(165,380+50,175,590+50);
        //trunchi
        ellipse(110,375+50,180,360,65,5);
        line(45,375+50,55,175+50);
        line(175,375+50,165,175+50);
        line(55,175+50,95,160+50);
        line(165,175+50,125,160+50);
        //gat
        line(95,160+50,95,140+50);
        line(125,160+50,125,150+50);
        arc(135,150+50,70,180,10);
        //cap
        arc(140,130+50,260,360,10);
        line(150,130+50,150,125+50);
        line(150,125+50,155,125+50);
        line(155,125+50,150,120+50);
        ellipse(95,100+50,180,270,5,40);
        line(150,120+50,150,100+50);
        arc(140,110+50,315,45,5);
        //palarie
        line(70,100+50,170,100+50);
        arc(100,100+50,90,180,30);
        arc(140,100+50,0,90,30);
        ellipse(90,50+50,270,360,10,40);
        ellipse(150,50+50,180,270,10,40);
        line(100,50+50,140,50+50);
        //brat
        struct arccoordstype arc1;
        arc(110,190+50,0+45,180+45,20);
        getarccoords(&arc1);
        line(arc1.xend,arc1.yend,90+100*sin(45*3.14159/180)+45/7.5,290-(100-100*cos(45*3.14159/180))+45/3.214285+50);
        line(arc1.xstart,arc1.ystart,130+80*sin(45*3.14159/180)-45/7.5,270-(80-80*cos(45*3.14159/180))-45/3.214285+50);
        //antebrat
        line(90+100*sin(45*3.14159/180)+45/7.5,290-(100-100*cos(45*3.14159/180))+45/3.214285+50,90+184*sin((22.49+45)*3.14159/180)+45/7.5,374-(184-184*cos((22.49+45)*3.14159/180))+45/3.214285+50);
        line(130+80*sin(45*3.14159/180)-45/7.5,270-(80-80*cos(45*3.14159/180))-45/3.214285+50,130+153*sin((23.0889+45)*3.14159/180)-45/7.5,343-(153-153*cos((23.0889+45)*3.14159/180))-45/3.214285+50);
        line(90+184*sin((22.49+45)*3.14159/180)+45/7.5,374-(184-184*cos((22.49+45)*3.14159/180))+45/3.214285+50,130+153*sin((23.0889+45)*3.14159/180)-45/7.5,343-(153-153*cos((23.0889+45)*3.14159/180))-45/3.214285+50);
        //palma+pistol
        struct arccoordstype arc2;
        arc(110+177*sin((28.87+45)*3.14159/180),367-(177-177*cos((28.87+45)*3.14159/180))+50,45+45,135+45,15);
        getarccoords(&arc2);
        struct arccoordstype arc3;
        arc(110+192*sin((32.797+45)*3.14159/180),382-(192-192*cos((32.797+45)*3.14159/180))+50,225+45,45+45,5);
        getarccoords(&arc3);
        line(arc2.xstart,arc2.ystart,arc3.xend,arc3.yend);
        line(110+180*sin((30+45)*3.14159/180),370-(180-180*cos((30+45)*3.14159/180))+50,110+256*sin((34.5+45)*3.14159/180),446-(256-256*cos((34.5+45)*3.14159/180))+50);
        line(110+180*sin((30+45)*3.14159/180),370-(180-180*cos((30+45)*3.14159/180))+50,110+184*sin((26+45)*3.14159/180),374-(184-184*cos((26+45)*3.14159/180))+50);
        line(110+256*sin((34.5+45)*3.14159/180),446-(256-256*cos((34.5+45)*3.14159/180))+50,110+259*sin((31.5+45)*3.14159/180),449-(259-259*cos((31.5+45)*3.14159/180))+50);
        line(110+184*sin((26+45)*3.14159/180),374-(184-184*cos((26+45)*3.14159/180))+50,110+259*sin((31.5+45)*3.14159/180),449-(259-259*cos((31.5+45)*3.14159/180))+50);
        arc(110+215*sin((27.8+45)*3.14159/180),405-(215-215*cos((27.8+45)*3.14159/180))+50,225+45,45+45,5);
        line(110+217*sin((26.7+45)*3.14159/180),407-(217-217*cos((26.7+45)*3.14159/180))+50,110+202*sin((25+45)*3.14159/180),392-(202-202*cos((25+45)*3.14159/180))+50);
        struct arccoordstype arc4;
        arc(110+204*sin((23.3+45)*3.14159/180),394-(204-204*cos((23.3+45)*3.14159/180))+50,225+45,45+45,5);
        getarccoords(&arc4);
        struct arccoordstype arc5;
        arc(110+208*sin((19.9+45)*3.14159/180),398-(208-208*cos((19.9+45)*3.14159/180))+50,225+45,45+45,5);
        getarccoords(&arc5);
        line(arc4.xstart,arc4.ystart,arc5.xend,arc5.yend);
        arc(110+190*sin((24+45)*3.14159/180),380-(190-190*cos((24+45)*3.14159/180))+50,174+45,255+45,28);

        arc(361+i,243+50,270,90,5);
        line(361,238+50,361+i,238+50);
        line(361,248+50,361+i,248+50);

        page=1-page;
        delay(0.5);
    }
    //speed
    page=0;
    for(int i=1;i<=801;i++)
    {
       setactivepage(page);
       setvisualpage(1-page);
       if(i<801)
        {
            cleardevice();
        }
       //pantof stang
        ellipse(50,590+50,270,360,65,10);
        ellipse(55,600+50,90,180,5,20);
        ellipse(115,580+50,180,270,45,10);
        //pantof drept
        ellipse(130,600+50,270,360,65,10);
        ellipse(135,610+50,90,180,5,20);
        ellipse(195,590+50,180,270,45,10);
        //ciucuri
        line(40,580+50,95,580+50);
        line(120,590+50,175,590+50);
        line(40,580+50,55,380+50);
        line(95,580+50,110,380+50);
        line(110,380+50,120,590+50);
        line(165,380+50,175,590+50);
        //trunchi
        ellipse(110,375+50,180,360,65,5);
        line(45,375+50,55,175+50);
        line(175,375+50,165,175+50);
        line(55,175+50,95,160+50);
        line(165,175+50,125,160+50);
        //gat
        line(95,160+50,95,140+50);
        line(125,160+50,125,150+50);
        arc(135,150+50,70,180,10);
        //cap
        arc(140,130+50,260,360,10);
        line(150,130+50,150,125+50);
        line(150,125+50,155,125+50);
        line(155,125+50,150,120+50);
        ellipse(95,100+50,180,270,5,40);
        line(150,120+50,150,100+50);
        arc(140,110+50,315,45,5);
        //palarie
        line(70,100+50,170,100+50);
        arc(100,100+50,90,180,30);
        arc(140,100+50,0,90,30);
        ellipse(90,50+50,270,360,10,40);
        ellipse(150,50+50,180,270,10,40);
        line(100,50+50,140,50+50);
        //brat
        struct arccoordstype arc1;
        arc(110,190+50,0+45,180+45,20);
        getarccoords(&arc1);
        line(arc1.xend,arc1.yend,90+100*sin(45*3.14159/180)+45/7.5,290-(100-100*cos(45*3.14159/180))+45/3.214285+50);
        line(arc1.xstart,arc1.ystart,130+80*sin(45*3.14159/180)-45/7.5,270-(80-80*cos(45*3.14159/180))-45/3.214285+50);
        //antebrat
        line(90+100*sin(45*3.14159/180)+45/7.5,290-(100-100*cos(45*3.14159/180))+45/3.214285+50,90+184*sin((22.49+45)*3.14159/180)+45/7.5,374-(184-184*cos((22.49+45)*3.14159/180))+45/3.214285+50);
        line(130+80*sin(45*3.14159/180)-45/7.5,270-(80-80*cos(45*3.14159/180))-45/3.214285+50,130+153*sin((23.0889+45)*3.14159/180)-45/7.5,343-(153-153*cos((23.0889+45)*3.14159/180))-45/3.214285+50);
        line(90+184*sin((22.49+45)*3.14159/180)+45/7.5,374-(184-184*cos((22.49+45)*3.14159/180))+45/3.214285+50,130+153*sin((23.0889+45)*3.14159/180)-45/7.5,343-(153-153*cos((23.0889+45)*3.14159/180))-45/3.214285+50);
        //palma+pistol
        struct arccoordstype arc2;
        arc(110+177*sin((28.87+45)*3.14159/180),367-(177-177*cos((28.87+45)*3.14159/180))+50,45+45,135+45,15);
        getarccoords(&arc2);
        struct arccoordstype arc3;
        arc(110+192*sin((32.797+45)*3.14159/180),382-(192-192*cos((32.797+45)*3.14159/180))+50,225+45,45+45,5);
        getarccoords(&arc3);
        line(arc2.xstart,arc2.ystart,arc3.xend,arc3.yend);
        line(110+180*sin((30+45)*3.14159/180),370-(180-180*cos((30+45)*3.14159/180))+50,110+256*sin((34.5+45)*3.14159/180),446-(256-256*cos((34.5+45)*3.14159/180))+50);
        line(110+180*sin((30+45)*3.14159/180),370-(180-180*cos((30+45)*3.14159/180))+50,110+184*sin((26+45)*3.14159/180),374-(184-184*cos((26+45)*3.14159/180))+50);
        line(110+256*sin((34.5+45)*3.14159/180),446-(256-256*cos((34.5+45)*3.14159/180))+50,110+259*sin((31.5+45)*3.14159/180),449-(259-259*cos((31.5+45)*3.14159/180))+50);
        line(110+184*sin((26+45)*3.14159/180),374-(184-184*cos((26+45)*3.14159/180))+50,110+259*sin((31.5+45)*3.14159/180),449-(259-259*cos((31.5+45)*3.14159/180))+50);
        arc(110+215*sin((27.8+45)*3.14159/180),405-(215-215*cos((27.8+45)*3.14159/180))+50,225+45,45+45,5);
        line(110+217*sin((26.7+45)*3.14159/180),407-(217-217*cos((26.7+45)*3.14159/180))+50,110+202*sin((25+45)*3.14159/180),392-(202-202*cos((25+45)*3.14159/180))+50);
        struct arccoordstype arc4;
        arc(110+204*sin((23.3+45)*3.14159/180),394-(204-204*cos((23.3+45)*3.14159/180))+50,225+45,45+45,5);
        getarccoords(&arc4);
        struct arccoordstype arc5;
        arc(110+208*sin((19.9+45)*3.14159/180),398-(208-208*cos((19.9+45)*3.14159/180))+50,225+45,45+45,5);
        getarccoords(&arc5);
        line(arc4.xstart,arc4.ystart,arc5.xend,arc5.yend);
        arc(110+190*sin((24+45)*3.14159/180),380-(190-190*cos((24+45)*3.14159/180))+50,174+45,255+45,28);

        arc(371+i,243+50,270,90,5);
        line(361+i,238+50,371+i,238+50);
        line(361+i,248+50,371+i,248+50);
        line(361+i,238+50,361+i,248+50);

        page=1-page;
        delay(0.5);
    }
    //back
    page=0;
    for(int i=0;i<=400;i++)
    {
        setactivepage(page);
        setvisualpage(1-page);
        if(i<400)
        {
            cleardevice();
        }
        //pantof stang
        ellipse(50-i,590+50,270,360,65,10);
        ellipse(55-i,600+50,90,180,5,20);
        ellipse(115-i,580+50,180,270,45,10);
        //pantof drept
        ellipse(130-i,600+50,270,360,65,10);
        ellipse(135-i,610+50,90,180,5,20);
        ellipse(195-i,590+50,180,270,45,10);
        //ciucuri
        line(40-i,580+50,95-i,580+50);
        line(120-i,590+50,175-i,590+50);
        line(40-i,580+50,55-i,380+50);
        line(95-i,580+50,110-i,380+50);
        line(110-i,380+50,120-i,590+50);
        line(165-i,380+50,175-i,590+50);
        //trunchi
        ellipse(110-i,375+50,180,360,65,5);
        line(45-i,375+50,55-i,175+50);
        line(175-i,375+50,165-i,175+50);
        line(55-i,175+50,95-i,160+50);
        line(165-i,175+50,125-i,160+50);
        //gat
        line(95-i,160+50,95-i,140+50);
        line(125-i,160+50,125-i,150+50);
        arc(135-i,150+50,70,180,10);
        //cap
        arc(140-i,130+50,260,360,10);
        line(150-i,130+50,150-i,125+50);
        line(150-i,125+50,155-i,125+50);
        line(155-i,125+50,150-i,120+50);
        ellipse(95-i,100+50,180,270,5,40);
        line(150-i,120+50,150-i,100+50);
        arc(140-i,110+50,315,45,5);
        //palarie
        line(70-i,100+50,170-i,100+50);
        arc(100-i,100+50,90,180,30);
        arc(140-i,100+50,0,90,30);
        ellipse(90-i,50+50,270,360,10,40);
        ellipse(150-i,50+50,180,270,10,40);
        line(100-i,50+50,140-i,50+50);
        //brat
        struct arccoordstype arc1;
        arc(110-i,190+50,0+45,180+45,20);
        getarccoords(&arc1);
        line(arc1.xend,arc1.yend,90+100*sin(45*3.14159/180)+45/7.5-i,290-(100-100*cos(45*3.14159/180))+45/3.214285+50);
        line(arc1.xstart,arc1.ystart,130+80*sin(45*3.14159/180)-45/7.5-i,270-(80-80*cos(45*3.14159/180))-45/3.214285+50);
        //antebrat
        line(90+100*sin(45*3.14159/180)+45/7.5-i,290-(100-100*cos(45*3.14159/180))+45/3.214285+50,90+184*sin((22.49+45)*3.14159/180)+45/7.5-i,374-(184-184*cos((22.49+45)*3.14159/180))+45/3.214285+50);
        line(130+80*sin(45*3.14159/180)-45/7.5-i,270-(80-80*cos(45*3.14159/180))-45/3.214285+50,130+153*sin((23.0889+45)*3.14159/180)-45/7.5-i,343-(153-153*cos((23.0889+45)*3.14159/180))-45/3.214285+50);
        line(90+184*sin((22.49+45)*3.14159/180)+45/7.5-i,374-(184-184*cos((22.49+45)*3.14159/180))+45/3.214285+50,130+153*sin((23.0889+45)*3.14159/180)-45/7.5-i,343-(153-153*cos((23.0889+45)*3.14159/180))-45/3.214285+50);
        //palma+pistol
        struct arccoordstype arc2;
        arc(110+177*sin((28.87+45)*3.14159/180)-i,367-(177-177*cos((28.87+45)*3.14159/180))+50,45+45,135+45,15);
        getarccoords(&arc2);
        struct arccoordstype arc3;
        arc(110+192*sin((32.797+45)*3.14159/180)-i,382-(192-192*cos((32.797+45)*3.14159/180))+50,225+45,45+45,5);
        getarccoords(&arc3);
        line(arc2.xstart,arc2.ystart,arc3.xend,arc3.yend);
        line(110+180*sin((30+45)*3.14159/180)-i,370-(180-180*cos((30+45)*3.14159/180))+50,110+256*sin((34.5+45)*3.14159/180)-i,446-(256-256*cos((34.5+45)*3.14159/180))+50);
        line(110+180*sin((30+45)*3.14159/180)-i,370-(180-180*cos((30+45)*3.14159/180))+50,110+184*sin((26+45)*3.14159/180)-i,374-(184-184*cos((26+45)*3.14159/180))+50);
        line(110+256*sin((34.5+45)*3.14159/180)-i,446-(256-256*cos((34.5+45)*3.14159/180))+50,110+259*sin((31.5+45)*3.14159/180)-i,449-(259-259*cos((31.5+45)*3.14159/180))+50);
        line(110+184*sin((26+45)*3.14159/180)-i,374-(184-184*cos((26+45)*3.14159/180))+50,110+259*sin((31.5+45)*3.14159/180)-i,449-(259-259*cos((31.5+45)*3.14159/180))+50);
        arc(110+215*sin((27.8+45)*3.14159/180)-i,405-(215-215*cos((27.8+45)*3.14159/180))+50,225+45,45+45,5);
        line(110+217*sin((26.7+45)*3.14159/180)-i,407-(217-217*cos((26.7+45)*3.14159/180))+50,110+202*sin((25+45)*3.14159/180)-i,392-(202-202*cos((25+45)*3.14159/180))+50);
        struct arccoordstype arc4;
        arc(110+204*sin((23.3+45)*3.14159/180)-i,394-(204-204*cos((23.3+45)*3.14159/180))+50,225+45,45+45,5);
        getarccoords(&arc4);
        struct arccoordstype arc5;
        arc(110+208*sin((19.9+45)*3.14159/180)-i,398-(208-208*cos((19.9+45)*3.14159/180))+50,225+45,45+45,5);
        getarccoords(&arc5);
        line(arc4.xstart,arc4.ystart,arc5.xend,arc5.yend);
        arc(110+190*sin((24+45)*3.14159/180)-i,380-(190-190*cos((24+45)*3.14159/180))+50,174+45,255+45,28);

        arc(371+800-i,243+50,270,90,5);
        line(361+800-i,238+50,371+800-i,238+50);
        line(361+800-i,248+50,371+800-i,248+50);
        line(361+800-i,238+50,361+800-i,248+50);

        page=1-page;
        delay(0.5);
    }
    //close-up
    page=0;
    for(int i=0;i<=20;i++)
    {
        setactivepage(page);
        setvisualpage(1-page);
        if(i<20)
        {
            cleardevice();
        }
        arc(371+800-400+i,243+50,270,90,5+i);
        line(361+800-400-i,238+50-i,371+800-400+i,238+50-i);
        line(361+800-400-i,248+50+i,371+800-400+i,248+50+i);
        line(361+800-400-i,238+50-i,361+800-400-i,248+50+i);

        page=1-page;
        delay(150);
    }
    //turn bullet
    page=0;
    for(int i=1;i<=26;i++)
    {
        setactivepage(page);
        setvisualpage(1-page);
        if(i<26)
        {
            cleardevice();
        }
        arc(371+800-400+20-2*i,243+50,270,90,5+20);
        line(361+800-400-20,238+50-20,371+800-400+20-2*i,238+50-20);
        line(361+800-400-20,248+50+20,371+800-400+20-2*i,248+50+20);
        ellipse(361+800-400-20,243+50,0,360,i,25);

        page=1-page;
        delay(200);
    }
    //closer close-up
    page=0;
    for(int i=0;i<=256;i++)
    {
        setactivepage(page);
        setvisualpage(1-page);
        if(i<256)
        {
            cleardevice();
        }
        circle(361+800-400-20,243+50,25+i);

        page=1-page;
        delay(25);
    }
    //shrink
    page=0;
    for(int i=0;i<=30;i++)
    {
        setactivepage(page);
        setvisualpage(1-page);
        if(i<30)
        {
            cleardevice();
        }
        circle(361+800-400-20,243+50,280-i);

        page=1-page;
        delay(20);
    }
    //shrink more
    page=0;
    for(int i=0;i<=100;i++)
    {
        setactivepage(page);
        setvisualpage(1-page);
        if(i<100)
        {
            cleardevice();
        }
        circle(361+800-400-20,243+50,250-i);
        line(671,543,691,543);
        line(671,543,(671+12+i)-((12+i)-(12+i)*cos(78*3.14159/180)),543-(12+i)*sin(78*3.14159/180));
        line(691,543,(691+7+i)-((7+i)-(7+i)*cos(78*3.14159/180)),543-(7+i)*sin(78*3.14159/180));

        line(791,543,811,543);
        line(791,543,(791+7+i)-((7+i)-(7+i)*cos(102*3.14159/180)),543-(7+i)*sin(102*3.14159/180));
        line(811,543,(811+12+i)-((12+i)-(12+i)*cos(102*3.14159/180)),543-(12+i)*sin(102*3.14159/180));

        page=1-page;
        delay(20);
    }
    //shrink even more
    page=0;
    for(int i=0;i<=100;i++)
    {
        setactivepage(page);
        setvisualpage(1-page);
        if(i<100)
        {
            cleardevice();
        }
        circle(361+800-400-20,243+50,250-100-i);
        line(671,543,691,543);
        line(671,543,(671+12+100+i)-((12+100+i)-(12+100+i)*cos(78*3.14159/180)),543-(12+100+i)*sin(78*3.14159/180));
        line(691,543,(691+7+100+i)-((7+100+i)-(7+100+i)*cos(78*3.14159/180)),543-(7+100+i)*sin(78*3.14159/180));

        line(791,543,811,543);
        line(791,543,(791+7+100+i)-((7+100+i)-(7+100+i)*cos(102*3.14159/180)),543-(7+100+i)*sin(102*3.14159/180));
        line(811,543,(811+12+100+i)-((12+100+i)-(12+100+i)*cos(102*3.14159/180)),543-(12+100+i)*sin(102*3.14159/180));

        line(731,443,751,443);
        line(731,443,(731+1+i)-((1+i)-(1+i)*cos(88*3.14159/180)),443-(1+i)*sin(88*3.14159/180));
        line(751,443,(751+1+i)-((1+i)-(1+i)*cos(92*3.14159/180)),443-(1+i)*sin(92*3.14159/180));

        page=1-page;
        delay(20);
    }
    //target
    page=0;
    for(int i=0;i<=10;i++)
    {
        setactivepage(page);
        setvisualpage(1-page);
        if(i<10)
        {
            cleardevice();
        }
        circle(361+800-400-20,243+50,250-100-100-i);
        line(671,543,691,543);
        line(671,543,(671+12+100+100)-((12+100+100)-(12+100+100)*cos(78*3.14159/180)),543-(12+100+100)*sin(78*3.14159/180));
        line(691,543,(691+7+100+100)-((7+100+100)-(7+100+100)*cos(78*3.14159/180)),543-(7+100+100)*sin(78*3.14159/180));

        line(791,543,811,543);
        line(791,543,(791+7+100+100)-((7+100+100)-(7+100+100)*cos(102*3.14159/180)),543-(7+100+100)*sin(102*3.14159/180));
        line(811,543,(811+12+100+100)-((12+100+100)-(12+100+100)*cos(102*3.14159/180)),543-(12+100+100)*sin(102*3.14159/180));

        line(731,443,751,443);
        line(731,443,(731+1+100)-((1+100)-(1+100)*cos(88*3.14159/180)),443-(1+100)*sin(88*3.14159/180));
        line(751,443,(751+1+100)-((1+100)-(1+100)*cos(92*3.14159/180)),443-(1+100)*sin(92*3.14159/180));

        circle(361+800-400-20,243+50,250-100-100);

        page=1-page;
        delay(11);
    }
    page=0;
    for(int i=0;i<=10;i++)
    {
        setactivepage(page);
        setvisualpage(1-page);
        if(i<10)
        {
            cleardevice();
        }
        circle(361+800-400-20,243+50,250-100-100-10-i);
        line(671,543,691,543);
        line(671,543,(671+12+100+100)-((12+100+100)-(12+100+100)*cos(78*3.14159/180)),543-(12+100+100)*sin(78*3.14159/180));
        line(691,543,(691+7+100+100)-((7+100+100)-(7+100+100)*cos(78*3.14159/180)),543-(7+100+100)*sin(78*3.14159/180));

        line(791,543,811,543);
        line(791,543,(791+7+100+100)-((7+100+100)-(7+100+100)*cos(102*3.14159/180)),543-(7+100+100)*sin(102*3.14159/180));
        line(811,543,(811+12+100+100)-((12+100+100)-(12+100+100)*cos(102*3.14159/180)),543-(12+100+100)*sin(102*3.14159/180));

        line(731,443,751,443);
        line(731,443,(731+1+100)-((1+100)-(1+100)*cos(88*3.14159/180)),443-(1+100)*sin(88*3.14159/180));
        line(751,443,(751+1+100)-((1+100)-(1+100)*cos(92*3.14159/180)),443-(1+100)*sin(92*3.14159/180));

        circle(361+800-400-20,243+50,250-100-100);
        circle(361+800-400-20,243+50,250-100-100-10);
        if(i>0)
        {
            setcolor(WHITE);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(702,293,WHITE);
        }

        page=1-page;
        delay(11);
    }
    page=0;
    for(int i=0;i<=10;i++)
    {
        setactivepage(page);
        setvisualpage(1-page);
        if(i<10)
        {
            cleardevice();
        }
        circle(361+800-400-20,243+50,250-100-100-20-i);
        line(671,543,691,543);
        line(671,543,(671+12+100+100)-((12+100+100)-(12+100+100)*cos(78*3.14159/180)),543-(12+100+100)*sin(78*3.14159/180));
        line(691,543,(691+7+100+100)-((7+100+100)-(7+100+100)*cos(78*3.14159/180)),543-(7+100+100)*sin(78*3.14159/180));

        line(791,543,811,543);
        line(791,543,(791+7+100+100)-((7+100+100)-(7+100+100)*cos(102*3.14159/180)),543-(7+100+100)*sin(102*3.14159/180));
        line(811,543,(811+12+100+100)-((12+100+100)-(12+100+100)*cos(102*3.14159/180)),543-(12+100+100)*sin(102*3.14159/180));

        line(731,443,751,443);
        line(731,443,(731+1+100)-((1+100)-(1+100)*cos(88*3.14159/180)),443-(1+100)*sin(88*3.14159/180));
        line(751,443,(751+1+100)-((1+100)-(1+100)*cos(92*3.14159/180)),443-(1+100)*sin(92*3.14159/180));

        circle(361+800-400-20,243+50,250-100-100);
        circle(361+800-400-20,243+50,250-100-100-10);
        circle(361+800-400-20,243+50,250-100-100-10-10);
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(702,293,WHITE);

        page=1-page;
        delay(11);
    }
    page=0;
    for(int i=0;i<=10;i++)
    {
        setactivepage(page);
        setvisualpage(1-page);
        if(i<10)
        {
            cleardevice();
        }
        circle(361+800-400-20,243+50,250-100-100-30-i);
        line(671,543,691,543);
        line(671,543,(671+12+100+100)-((12+100+100)-(12+100+100)*cos(78*3.14159/180)),543-(12+100+100)*sin(78*3.14159/180));
        line(691,543,(691+7+100+100)-((7+100+100)-(7+100+100)*cos(78*3.14159/180)),543-(7+100+100)*sin(78*3.14159/180));

        line(791,543,811,543);
        line(791,543,(791+7+100+100)-((7+100+100)-(7+100+100)*cos(102*3.14159/180)),543-(7+100+100)*sin(102*3.14159/180));
        line(811,543,(811+12+100+100)-((12+100+100)-(12+100+100)*cos(102*3.14159/180)),543-(12+100+100)*sin(102*3.14159/180));

        line(731,443,751,443);
        line(731,443,(731+1+100)-((1+100)-(1+100)*cos(88*3.14159/180)),443-(1+100)*sin(88*3.14159/180));
        line(751,443,(751+1+100)-((1+100)-(1+100)*cos(92*3.14159/180)),443-(1+100)*sin(92*3.14159/180));

        circle(361+800-400-20,243+50,250-100-100);
        circle(361+800-400-20,243+50,250-100-100-10);
        circle(361+800-400-20,243+50,250-100-100-10-10);
        circle(361+800-400-20,243+50,250-100-100-10-10-10);
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(702,293,WHITE);
        if(i>0)
        {
            setcolor(WHITE);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(722,293,WHITE);
        }

        page=1-page;
        delay(11);
    }
    page=0;
    for(int i=0;i<=6;i++)
    {
        setactivepage(page);
        setvisualpage(1-page);
        if(i<6)
        {
            cleardevice();
        }
        circle(361+800-400-20,243+50,250-100-100-40-i);
        line(671,543,691,543);
        line(671,543,(671+12+100+100)-((12+100+100)-(12+100+100)*cos(78*3.14159/180)),543-(12+100+100)*sin(78*3.14159/180));
        line(691,543,(691+7+100+100)-((7+100+100)-(7+100+100)*cos(78*3.14159/180)),543-(7+100+100)*sin(78*3.14159/180));

        line(791,543,811,543);
        line(791,543,(791+7+100+100)-((7+100+100)-(7+100+100)*cos(102*3.14159/180)),543-(7+100+100)*sin(102*3.14159/180));
        line(811,543,(811+12+100+100)-((12+100+100)-(12+100+100)*cos(102*3.14159/180)),543-(12+100+100)*sin(102*3.14159/180));

        line(731,443,751,443);
        line(731,443,(731+1+100)-((1+100)-(1+100)*cos(88*3.14159/180)),443-(1+100)*sin(88*3.14159/180));
        line(751,443,(751+1+100)-((1+100)-(1+100)*cos(92*3.14159/180)),443-(1+100)*sin(92*3.14159/180));

        circle(361+800-400-20,243+50,250-100-100);
        circle(361+800-400-20,243+50,250-100-100-10);
        circle(361+800-400-20,243+50,250-100-100-20);
        circle(361+800-400-20,243+50,250-100-100-30);
        circle(361+800-400-20,243+50,250-100-100-40);
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(702,293,WHITE);
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(722,293,WHITE);

        page=1-page;
        delay(11);
    }
    setactivepage(1);
    delay(500);
    cleardevice();
    settextstyle(7,0,10);
    outtextxy(600,300,"The");
    outtextxy(700,400,"End");
    delay(100);
    circle(800,330,10);
    delay(100);
    circle(590,340,10);
    delay(100);
    circle(810,395,10);
    delay(100);
    circle(600,400,10);
    delay(100);
    circle(700,400,10);
    delay(100);
    circle(900,440,10);
    delay(100);
    circle(700,450,10);
    delay(100);
    circle(1000,450,10);
    delay(100);
    circle(650,500,10);
    delay(100);
    circle(800,500,10);
    getch();
    closegraph();
}
