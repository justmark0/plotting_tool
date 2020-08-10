#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;
#define PI 3.1415926535
float setka=(PI/6)*120;
int mashtab=120;

void coordinats_x()
{
    setcolor(0);
    int ind=0;
    for(int x=250+setka;x<=1050;x+=setka)
    {
        ind++;
        if(ind%3==0)
            line(x,317,x,303);
        else
        line(x,312,x,308);
    }
    ind=0;
    for(int x=250-setka;x>=10;x-=setka)//x
    {
        ind++;
        if(ind%3==0)
        line(x,317,x,303);
        else
        line(x,312,x,308);
    }
}

void coordinats_y()
{
    setcolor(0);
    for(int y=253;y>=50 ;y-=setka)//x
        line(245,y,255,y);
    for(int y=253;y<=570;y+=setka)//x
        line(245,y,255,y);
}

void printsin(float ind,int cooefy,int color)
{
    const float xmin=0,xmax=2*PI;
    float xm,ym;
    int x,y;
    bool m=true;
    setcolor(color);
    for(xm=xmin;xm<=xmax;xm+=ind)
    {
        ym=-cooefy*sin(xm);
        x=xm*mashtab+250;
        y=ym*mashtab+310;
        cout << "ind=" << ind << " xm=" << xm << " ym=" << ym << " x=" << x << " y=" << y << endl;
        putpixel(x,y,12);
        if(m==true)
        {
            moveto(x,y);
            m=false;
        }
        else
        lineto(x,y);
    }

    m=true;
    for(xm=0;x>=29,xm>=-PI/2;xm-=ind)
    {
        ym=-cooefy*sin(xm);
        x=xm*mashtab+250;
        y=ym*mashtab+310;
        cout << "ind=" << ind << " xm=" << xm << " ym=" << ym << " x=" << x << " y=" << y << endl;
        putpixel(x,y,12);
        if(m==true)
        {
            moveto(x,y);
            m=false;
        }
        else
        lineto(x,y);
    }
}

void colorful_printsin(float ind,int mn);

void printtg(float ind,int cooefy)
{
    const float xmin=0,xmax=2*PI;
    float xm,ym;
    int x,y;
    bool m=true;
    setcolor(5);
    for(xm=xmin;xm<=xmax;xm+=ind)
    {
        ym=cooefy*tan(xm);
        x=xm*mashtab+250;
        y=ym*mashtab+310;
        cout << "ind=" << ind << " xm=" << xm << " ym=" << ym << " x=" << x << " y=" << y << endl;
        putpixel(x,y,12);
        if(m==true)
        {
            moveto(x,y);
            m=false;
        }
        else
        lineto(x,y);
    }

    m=true;
    for(xm=0;x>=29,xm>=-PI/2;xm-=ind)
    {
        ym=cooefy*tan(xm);
        x=xm*mashtab+250;
        y=ym*mashtab+310;
        cout << "ind=" << ind << " xm=" << xm << " ym=" << ym << " x=" << x << " y=" << y << endl;
        putpixel(x,y,12);
        if(m==true)
        {
            moveto(x,y);
            m=false;
        }
        else
        lineto(x,y);
    }
}

void printcos(float ind,int cooefy,int color)
{
    const float xmin=0,xmax=2*PI;
    float xm,ym;
    int x,y;
    bool m=true;
    setcolor(color);
    for(xm=xmin;xm<=xmax;xm+=ind)
    {
        ym=-cooefy*cos(xm);
        x=xm*mashtab+250;
        y=ym*mashtab+310;
        cout << "ind=" << ind << " xm=" << xm << " ym=" << ym << " x=" << x << " y=" << y << endl;
        putpixel(x,y,12);
        if(m==true)
        {
            moveto(x,y);
            m=false;
        }
        else
        lineto(x,y);
    }

    m=true;
    for(xm=0;x>=29,xm>=-PI/2;xm-=ind)
    {
        ym=-cooefy*cos(xm);
        x=xm*mashtab+250;
        y=ym*mashtab+310;
        cout << "ind=" << ind << " xm=" << xm << " ym=" << ym << " x=" << x << " y=" << y << endl;
        putpixel(x,y,12);
        if(m==true)
        {
            moveto(x,y);
            m=false;
        }
        else
        lineto(x,y);
    }
}

void colorful_printcos(float ind,int mn);

int main()
{
    setlocale( LC_ALL,"Russian" );
    initwindow(1080,610);
    setfillstyle(1,15);
    floodfill(1,1,15);

    setcolor(0);
    line(240,40,250,20);//y ctrelka
    line(250,20,260,40);//y ctrelka

    line(1050,300,1070,310);//x ctrelka
    line(1070,310,1050,320);//x ctrelka

    line(250,20,250,580);//y
    line(1070,310,10,310);//x
    //lines

    coordinats_x();
    coordinats_y();

    setcolor(15);
    outtextxy(980,320,"X");
    outtextxy(260,20,"Y");
    outtextxy(250,310,"O");


    outtextxy(240+3*setka,315,"Pi/2");
    outtextxy(245+6*setka,315,"Pi");
    outtextxy(232+9*setka,315,"3Pi/2");
    outtextxy(245+12*setka,315,"2Pi");
    outtextxy(230-3*setka,315,"-(Pi/2)");
    outtextxy(220,315-setka,"0.5");
    outtextxy(230,315-2*setka,"1");
    outtextxy(215,315+setka,"-0.5");
    outtextxy(230,315+2*setka,"-1");

    printsin(0.01,1,12);
    printsin(0.01,-1,5);
    printcos(0.01,1,10);
    printcos(0.01,-1,6);
    printtg(0.01,1);

    getch();
    closegraph();
    return 0;
}

void colorful_printsin(float ind,int mn)
{
    const float xmin=0,xmax=2*PI;
    float xm,ym,c=0,kj=0;
    int x,y;
    bool m=true;
    setcolor(0);
    for(xm=xmin;xm<=xmax;xm+=ind)
    {
        kj++;
        if(kj==mn)
        {c++;kj-=mn;}
        if(c>15)
            c-=15;
        setcolor(c);
        ym=-sin(xm);
        x=xm*mashtab+250;
        y=ym*mashtab+310;
        cout << "ind=" << ind << " xm=" << xm << " ym=" << ym << " x=" << x << " y=" << y << endl;
        putpixel(x,y,12);
        if(m==true)
        {
            moveto(x,y);
            m=false;
        }
        else
        lineto(x,y);
    }

    m=true;
    for(xm=0;x>=29,xm>=-PI/2;xm-=ind)
    {
        kj++;
        if(kj==mn)
        {c++;kj-=mn;}
        if(c>15)
            c-=15;
            setcolor(c);
        ym=-sin(xm);
        x=xm*mashtab+250;
        y=ym*mashtab+310;
        cout << "ind=" << ind << " xm=" << xm << " ym=" << ym << " x=" << x << " y=" << y << endl;
        putpixel(x,y,12);
        if(m==true)
        {
            moveto(x,y);
            m=false;
        }
        else
        lineto(x,y);
    }
}

void colorful_printcos(float ind,int mn)
{
    const float xmin=0,xmax=2*PI;
    float xm,ym,kj=0,c=0;
    int x,y;
    bool m=true;
    setcolor(10);
    for(xm=xmin;xm<=xmax;xm+=ind)
    {
        kj++;
        if(kj==mn)
        {c++;kj-=mn;}
        if(c>15)
            c-=15;
            setcolor(c);
        ym=-cos(xm);
        x=xm*mashtab+250;
        y=ym*mashtab+310;
        cout << "ind=" << ind << " xm=" << xm << " ym=" << ym << " x=" << x << " y=" << y << endl;
        putpixel(x,y,12);
        if(m==true)
        {
            moveto(x,y);
            m=false;
        }
        else
        lineto(x,y);
    }

    m=true;
    for(xm=0;x>=29,xm>=-PI/2;xm-=ind)
    {
        kj++;
        if(kj==mn)
        {c++;kj-=mn;}
        if(c>15)
            c-=15;
            setcolor(c);
        ym=-cos(xm);
        x=xm*mashtab+250;
        y=ym*mashtab+310;
        cout << "ind=" << ind << " xm=" << xm << " ym=" << ym << " x=" << x << " y=" << y << endl;
        putpixel(x,y,12);
        if(m==true)
        {
            moveto(x,y);
            m=false;
        }
        else
        lineto(x,y);
    }
}
