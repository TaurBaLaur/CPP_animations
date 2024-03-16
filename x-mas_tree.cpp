#include <iostream>
#include <graphics.h>
#include <windows.h>
using namespace std;

int main()
{
    int v[20];
    v[1]=v[6]=v[11]=12;
    v[2]=v[7]=v[12]=14;
    v[3]=v[8]=v[13]=1;
    v[4]=v[9]=v[14]=13;
    v[5]=v[10]=v[15]=4;
    DWORD lung=GetSystemMetrics(SM_CXSCREEN);
    DWORD lat=GetSystemMetrics(SM_CYSCREEN);
    initwindow(lung,lat);
    for(int i=1;i<=15;i++)
    {
        settextstyle(8,0,5);
        setcolor(i);
        outtextxy(100,200,"Merry Christmas!");

        setcolor(COLOR(9, 79, 27));
        ellipse(900,700,180,360,400,50);
        ellipse(500,600,270,360,350,100);
        ellipse(1300,600,180,270,350,100);

        ellipse(900,600,180,360,350,50);
        ellipse(550,500,270,360,310,100);
        ellipse(1250,500,180,270,310,100);

        ellipse(900,500,180,360,300,50);
        ellipse(600,400,270,360,270,100);
        ellipse(1200,400,180,270,270,100);

        ellipse(900,400,180,360,250,50);
        ellipse(650,300,270,360,230,100);
        ellipse(1150,300,180,270,230,100);

        ellipse(900,300,180,360,200,50);
        ellipse(700,200,270,360,190,100);
        ellipse(1100,200,180,270,190,100);

        ellipse(900,200,180,360,150,50);
        ellipse(750,100,270,360,150,100);
        ellipse(1050,100,180,270,150,100);

        setfillstyle(SOLID_FILL,COLOR(9, 79, 27));
        floodfill(900,725,COLOR(9, 79, 27));
        floodfill(900,625,COLOR(9, 79, 27));
        floodfill(900,525,COLOR(9, 79, 27));
        floodfill(900,425,COLOR(9, 79, 27));
        floodfill(900,325,COLOR(9, 79, 27));
        floodfill(900,225,COLOR(9, 79, 27));

        setcolor(COLOR(68,27,0));
        setfillstyle(SOLID_FILL,COLOR(68,27,0));
        rectangle(860,750,940,830);
        floodfill(862,752,COLOR(68,27,0));

        setcolor(YELLOW);
        line(877,112,900,40);
        line(900,40,923,112);
        line(923,112,862,68);
        line(862,68,938,68);
        line(938,68,877,112);

        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(880,109,YELLOW);
        floodfill(920,109,YELLOW);
        floodfill(870,70,YELLOW);
        floodfill(930,70,YELLOW);
        floodfill(900,45,YELLOW);
        floodfill(900,90,YELLOW);

        setcolor(v[i]);

        circle(960,185,5);
        circle(940,190,5);
        circle(920,195,5);
        circle(900,200,5);
        circle(880,205,5);
        circle(860,210,5);
        circle(840,215,5);
        circle(820,220,5);
        circle(800,225,5);

        circle(980,280,5);
        circle(960,285,5);
        circle(940,290,5);
        circle(920,295,5);
        circle(900,300,5);
        circle(880,305,5);
        circle(860,310,5);
        circle(840,315,5);
        circle(820,320,5);
        circle(800,325,5);
        circle(780,330,5);

        circle(980,380,5);
        circle(960,385,5);
        circle(940,390,5);
        circle(920,395,5);
        circle(900,400,5);
        circle(880,405,5);
        circle(860,410,5);
        circle(840,415,5);
        circle(820,420,5);
        circle(800,425,5);
        circle(780,430,5);

        circle(1000,475,5);
        circle(980,480,5);
        circle(960,485,5);
        circle(940,490,5);
        circle(920,495,5);
        circle(900,500,5);
        circle(880,505,5);
        circle(860,510,5);
        circle(840,515,5);
        circle(820,520,5);
        circle(800,525,5);
        circle(780,530,5);
        circle(760,535,5);

        circle(1020,570,5);
        circle(1000,575,5);
        circle(980,580,5);
        circle(960,585,5);
        circle(940,590,5);
        circle(920,595,5);
        circle(900,600,5);
        circle(880,605,5);
        circle(860,610,5);
        circle(840,615,5);
        circle(820,620,5);
        circle(800,625,5);
        circle(780,630,5);
        circle(760,635,5);

        circle(1020,670,5);
        circle(1000,675,5);
        circle(980,680,5);
        circle(960,685,5);
        circle(940,690,5);
        circle(920,695,5);
        circle(900,700,5);
        circle(880,705,5);
        circle(860,710,5);
        circle(840,715,5);
        circle(820,720,5);
        circle(800,725,5);
        circle(780,730,5);
        circle(760,735,5);

        setfillstyle(SOLID_FILL,v[i]);

        floodfill(960,185,v[i]);
        floodfill(940,190,v[i]);
        floodfill(920,195,v[i]);
        floodfill(900,200,v[i]);
        floodfill(880,205,v[i]);
        floodfill(860,210,v[i]);
        floodfill(840,215,v[i]);
        floodfill(820,220,v[i]);
        floodfill(800,225,v[i]);

        floodfill(980,280,v[i]);
        floodfill(960,285,v[i]);
        floodfill(940,290,v[i]);
        floodfill(920,295,v[i]);
        floodfill(900,300,v[i]);
        floodfill(880,305,v[i]);
        floodfill(860,310,v[i]);
        floodfill(840,315,v[i]);
        floodfill(820,320,v[i]);
        floodfill(800,325,v[i]);
        floodfill(780,330,v[i]);

        floodfill(980,380,v[i]);
        floodfill(960,385,v[i]);
        floodfill(940,390,v[i]);
        floodfill(920,395,v[i]);
        floodfill(900,400,v[i]);
        floodfill(880,405,v[i]);
        floodfill(860,410,v[i]);
        floodfill(840,415,v[i]);
        floodfill(820,420,v[i]);
        floodfill(800,425,v[i]);
        floodfill(780,430,v[i]);

        floodfill(1000,475,v[i]);
        floodfill(980,480,v[i]);
        floodfill(960,485,v[i]);
        floodfill(940,490,v[i]);
        floodfill(920,495,v[i]);
        floodfill(900,500,v[i]);
        floodfill(880,505,v[i]);
        floodfill(860,510,v[i]);
        floodfill(840,515,v[i]);
        floodfill(820,520,v[i]);
        floodfill(800,525,v[i]);
        floodfill(780,530,v[i]);
        floodfill(760,535,v[i]);

        floodfill(1020,570,v[i]);
        floodfill(1000,575,v[i]);
        floodfill(980,580,v[i]);
        floodfill(960,585,v[i]);
        floodfill(940,590,v[i]);
        floodfill(920,595,v[i]);
        floodfill(900,600,v[i]);
        floodfill(880,605,v[i]);
        floodfill(860,610,v[i]);
        floodfill(840,615,v[i]);
        floodfill(820,620,v[i]);
        floodfill(800,625,v[i]);
        floodfill(780,630,v[i]);
        floodfill(760,635,v[i]);

        floodfill(1020,670,v[i]);
        floodfill(1000,675,v[i]);
        floodfill(980,680,v[i]);
        floodfill(960,685,v[i]);
        floodfill(940,690,v[i]);
        floodfill(920,695,v[i]);
        floodfill(900,700,v[i]);
        floodfill(880,705,v[i]);
        floodfill(860,710,v[i]);
        floodfill(840,715,v[i]);
        floodfill(820,720,v[i]);
        floodfill(800,725,v[i]);
        floodfill(780,730,v[i]);
        floodfill(760,735,v[i]);

        setcolor(RED);
        setfillstyle(SOLID_FILL,RED);
        circle(900,150,10);
        floodfill(900,150,RED);

        setcolor(YELLOW);
        setfillstyle(SOLID_FILL,YELLOW);
        circle(865,175,10);
        floodfill(865,175,YELLOW);

        setcolor(MAGENTA);
        setfillstyle(SOLID_FILL,MAGENTA);
        circle(935,175,10);
        floodfill(935,175,MAGENTA);

        setcolor(BLUE);
        setfillstyle(SOLID_FILL,BLUE);
        circle(830,200,10);
        floodfill(830,200,BLUE);

        setcolor(LIGHTGRAY);
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        circle(970,200,10);
        floodfill(970,200,LIGHTGRAY);

        setcolor(CYAN);
        setfillstyle(SOLID_FILL,CYAN);
        circle(780,215,10);
        floodfill(780,215,CYAN);

        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        circle(1020,215,10);
        floodfill(1020,215,WHITE);

        setcolor(YELLOW);
        setfillstyle(SOLID_FILL,YELLOW);
        circle(900,238,10);
        floodfill(900,238,YELLOW);

        setcolor(LIGHTGRAY);
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        circle(865,275,10);
        floodfill(865,275,LIGHTGRAY);

        setcolor(RED);
        setfillstyle(SOLID_FILL,RED);
        circle(935,275,10);
        floodfill(935,275,RED);

        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        circle(800,300,10);
        floodfill(800,300,WHITE);

        setcolor(BLUE);
        setfillstyle(SOLID_FILL,BLUE);
        circle(1000,300,10);
        floodfill(1000,300,BLUE);

        setcolor(MAGENTA);
        setfillstyle(SOLID_FILL,MAGENTA);
        circle(740,310,10);
        floodfill(740,310,MAGENTA);

        setcolor(CYAN);
        setfillstyle(SOLID_FILL,CYAN);
        circle(1060,310,10);
        floodfill(1060,310,CYAN);

        setcolor(BLUE);
        setfillstyle(SOLID_FILL,BLUE);
        circle(900,338,10);
        floodfill(900,338,BLUE);

        setcolor(YELLOW);
        setfillstyle(SOLID_FILL,YELLOW);
        circle(855,370,10);
        floodfill(855,370,YELLOW);

        setcolor(CYAN);
        setfillstyle(SOLID_FILL,CYAN);
        circle(945,370,10);
        floodfill(945,370,CYAN);

        setcolor(LIGHTGRAY);
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        circle(790,400,10);
        floodfill(790,400,LIGHTGRAY);

        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        circle(1010,400,10);
        floodfill(1010,400,WHITE);

        setcolor(RED);
        setfillstyle(SOLID_FILL,RED);
        circle(720,410,10);
        floodfill(720,410,RED);

        setcolor(MAGENTA);
        setfillstyle(SOLID_FILL,MAGENTA);
        circle(1080,410,10);
        floodfill(1080,410,MAGENTA);

        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        circle(900,438,10);
        floodfill(900,438,WHITE);

        setcolor(MAGENTA);
        setfillstyle(SOLID_FILL,MAGENTA);
        circle(860,470,10);
        floodfill(860,470,MAGENTA);

        setcolor(LIGHTGRAY);
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        circle(940,470,10);
        floodfill(940,470,LIGHTGRAY);

        setcolor(CYAN);
        setfillstyle(SOLID_FILL,CYAN);
        circle(780,500,10);
        floodfill(780,500,CYAN);

        setcolor(RED);
        setfillstyle(SOLID_FILL,RED);
        circle(1020,500,10);
        floodfill(1020,500,RED);

        setcolor(YELLOW);
        setfillstyle(SOLID_FILL,YELLOW);
        circle(690,520,10);
        floodfill(690,520,YELLOW);

        setcolor(BLUE);
        setfillstyle(SOLID_FILL,BLUE);
        circle(1110,520,10);
        floodfill(1110,520,BLUE);

        setcolor(CYAN);
        setfillstyle(SOLID_FILL,CYAN);
        circle(900,538,10);
        floodfill(900,538,CYAN);

        setcolor(RED);
        setfillstyle(SOLID_FILL,RED);
        circle(860,570,10);
        floodfill(860,570,RED);

        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        circle(940,570,10);
        floodfill(940,570,WHITE);

        setcolor(MAGENTA);
        setfillstyle(SOLID_FILL,MAGENTA);
        circle(780,600,10);
        floodfill(780,600,MAGENTA);

        setcolor(YELLOW);
        setfillstyle(SOLID_FILL,YELLOW);
        circle(1020,600,10);
        floodfill(1020,600,YELLOW);

        setcolor(BLUE);
        setfillstyle(SOLID_FILL,BLUE);
        circle(670,620,10);
        floodfill(670,620,BLUE);

        setcolor(LIGHTGRAY);
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        circle(1130,620,10);
        floodfill(1130,620,LIGHTGRAY);

        setcolor(LIGHTGRAY);
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        circle(900,638,10);
        floodfill(900,638,LIGHTGRAY);

        setcolor(BLUE);
        setfillstyle(SOLID_FILL,BLUE);
        circle(850,670,10);
        floodfill(850,670,BLUE);

        setcolor(RED);
        setfillstyle(SOLID_FILL,RED);
        circle(950,670,10);
        floodfill(950,670,RED);

        setcolor(CYAN);
        setfillstyle(SOLID_FILL,CYAN);
        circle(750,700,10);
        floodfill(750,700,CYAN);

        setcolor(MAGENTA);
        setfillstyle(SOLID_FILL,MAGENTA);
        circle(1050,700,10);
        floodfill(1050,700,MAGENTA);

        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        circle(650,720,10);
        floodfill(650,720,WHITE);

        setcolor(YELLOW);
        setfillstyle(SOLID_FILL,YELLOW);
        circle(1150,720,10);
        floodfill(1150,720,YELLOW);

        delay(500);
    }
    getch();
    closegraph();
}
