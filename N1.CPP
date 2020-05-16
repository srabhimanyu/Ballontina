
#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include "stdlib.h"
#include "process.h"
#include "dos.h"
#include<time.h>

union REGS i,o;
   int f=0;
class coverpage
{

//     union REGS i,o;

   public:
     coverpage() { }
      void cov()
      {
	 int i,j;
       for(j=1;j<=2;j++)
       {
       for(i=1;i<=40;i++)
       {
	 setcolor(17);

	 rectangle(202+(i-1),292,207+(i-1),297);

	 rectangle(209+(i-1),292,214+(i-1),297);

	 rectangle(216+(i-1),292,221+(i-1),297);

	    setfillstyle(1,17);

	 floodfill((202+(i-1)+207+(i-1))/2,(292+297)/2,17);

	floodfill((209+(i-1)+214+(i-1))/2,(292+297)/2,17);
	floodfill((216+(i-1)+221+(i-1))/2,(292+297)/2,17);

	delay(50);

	  setcolor(0);

	rectangle(202+(i-1),292,207+(i-1),297);

	rectangle(209+(i-1),292,214+(i-1),297);

	 rectangle(216+(i-1),292,221+(i-1),297);

	 setfillstyle(1,0);

	 floodfill((202+(i-1)+207+(i-1))/2,(292+297)/2,0);

	floodfill((209+(i-1)+214+(i-1))/2,(292+297)/2,0);
	floodfill((216+(i-1)+221+(i-1))/2,(292+297)/2,0);





	}

	}



      }

     void login()
     {

   //   int gd=DETECT,gm
      int status, button, x, y;

      char array[50];


      int i,size,j;
     // initgraph(&gd,&gm,"");

	setcolor(17);

       //	rectangle(200,300,205,305);

     //	getimage(200,300,205,305,ptr);

       //	size=imagesize(200,300,205,305);

       //	ptr=malloc(size);

	 setcolor(4);
      arc(150,100,0,180,20);

      line(130,100,130,130);

      line(170,100,170,130);

      arc(150,130,0,180,20);

      setfillstyle(1,4);

      floodfill(150,100,4);

      setcolor(2);

      arc(200,85,180,360,20);

      line(180,85,180,125);

      line(220,85,220,125);

      arc(200,118,180,360,20);

       setfillstyle(1,2);

      floodfill(200,118,2);


      setcolor(17);

      arc(150,150,0,180,20);

      line(130,150,130,180);

      line(170,150,170,180);

      arc(150,180,0,180,20);

       setfillstyle(1,17);

      floodfill(150,150,17);

	setcolor(6);


	arc(200,140,180,360,20);

	line(180,140,180,180);

	line(220,140,220,180);

	arc(200,172,180,360,20);


	 setfillstyle(1,6);

	 floodfill(200,170,6);


	   setcolor(15);

	 settextstyle(1,0,5);
	 outtextxy(180,200,"Windows XP");

       settextstyle(0,0,0);

	 outtextxy(170,350,"@Microsoft Corporation");


	 line(200,300,280,300);
	 line(200,300,200,290);
	 line(280,300,280,290);

	 line(200,290,280,290);

	 cov();
       /*for(j=1;j<=2;j++)
       {
       for(i=1;i<=40;i++)
       {
	 setcolor(17);

	 rectangle(202+(i-1),292,207+(i-1),297);

	 rectangle(209+(i-1),292,214+(i-1),297);

	 rectangle(216+(i-1),292,221+(i-1),297);

	    setfillstyle(1,17);

	 floodfill((202+(i-1)+207+(i-1))/2,(292+297)/2,17);

	floodfill((209+(i-1)+214+(i-1))/2,(292+297)/2,17);
	floodfill((216+(i-1)+221+(i-1))/2,(292+297)/2,17);

	delay(100);

	  setcolor(0);

	rectangle(202+(i-1),292,207+(i-1),297);

	rectangle(209+(i-1),292,214+(i-1),297);

	 rectangle(216+(i-1),292,221+(i-1),297);

	 setfillstyle(1,0);

	 floodfill((202+(i-1)+207+(i-1))/2,(292+297)/2,0);

	floodfill((209+(i-1)+214+(i-1))/2,(292+297)/2,0);
	floodfill((216+(i-1)+221+(i-1))/2,(292+297)/2,0);





	}

	}*/


	 clearviewport();



	 setbkcolor(3);

	 setcolor(17);

	 line(0,150,1000,150);

	 setfillstyle(1,17);


	 line(0,350,1000,350);

	 setfillstyle(1,17);

	  floodfill(0,360,17);

	  setcolor(15);

	   settextstyle(0,0,3);

	  outtextxy(200,250,"Welcome");


	 floodfill(0,0,17);

	  delay(950);

	 clearviewport();


	  setbkcolor(0);


	  setbkcolor(3);

	 setcolor(17);

	 line(0,150,1000,150);

	 setfillstyle(1,17);


	 line(0,350,1000,350);

	 setfillstyle(1,17);

	  floodfill(0,360,17);

	  setcolor(15);

	   settextstyle(0,0,3);

	  outtextxy(200,250,"Loading");


	 floodfill(0,0,17);


	   delay(700);

	 clearviewport();


	  setbkcolor(0);


	  setbkcolor(3);

	 setcolor(17);

	 line(0,150,1000,150);

	 setfillstyle(1,17);


	 line(0,350,1000,350);

	 setfillstyle(1,17);

	  floodfill(0,360,17);

	 /* setcolor(15);

	   settextstyle(0,0,0);

	  outtextxy(250,200,"Login Password");


	 floodfill(0,0,17);


	 setcolor(15);

	 // line(250,220,300,220);









	  settextstyle(DEFAULT_FONT,0,2);

	 status = initmouse();  */

 /*  if ( status == 0 )
      printf("Mouse support not available.\n");
   else
   {
      showmouseptr();

      getmousepos(&button,&x,&y);

      while(!kbhit())
      {
	 getmousepos(&button,&x,&y);

	 if( button == 1 )
	 {
	    button = -1;
	    cleardevice();
	    sprintf(array,"Left Button clicked x = %d y = %d",x,y);
	    outtext(array);
	 }
	 else if( button == 2 )
	 {
	    button = -1;
	    cleardevice();
	    sprintf(array,"Right Button clicked x = %d y = %d",x,y);
	    outtext(array);
	 }


      }

      }*/

      }


   };


   class FloodFill1
   {
     public:
     int initmouse()
    {

      i.x.ax = 0;

   int86(0X33,&i,&o);

   return ( o.x.ax );
    }
    void restrictmouseptr(int x1,int y1,int x2,int y2)
    {
     i.x.ax=7;
     i.x.cx=x1;
     i.x.dx=x2;
     int86(0x33,&i,&o);
     i.x.ax=8;
     i.x.cx=y1;
     i.x.dx=y2;
     int86(0x33,&i,&o);
    }

    void showmouseptr()
  {
   i.x.ax = 1;
   int86(0X33,&i,&o);
   }

void getmousepos(int *button, int *x, int *y)
{
   i.x.ax = 3;
   int86(0X33,&i,&o);

   *button = o.x.bx;
   *x = o.x.cx;
   *y = o.x.dx;
}

  /*   int  perform()
     {
      int button,x,y;
     setcolor(15);

    line(0,460,getmaxx(),460);
    setfillstyle(1,17);
    floodfill(0,461,15);
    // setcolor(15);
    rectangle(0,460,60,480);
      setfillstyle(1,4);
     floodfill(1,470,15);

	  setcolor(3);

     setusercharsize(40,70,60,40);

     outtextxy(2,460,"start");

      time_t now=time(0);

      char *dt=ctime(&now);

      outtextxy(getmaxx()-200,465,dt);

      setfillstyle(1,3);

      floodfill(1,455,15);

      setcolor(4);
      rectangle(48,47,75,76);

       ellipse(60,61,0,360,7,12);
       line(60,73,60,77);
       setfillstyle(1,4);
       floodfill(60,61,4);
       setfillstyle(1,2);
       floodfill(52,61,4);
       if(initmouse()==0)
       {
	closegraph();
	restorecrtmode();
	cout<<"\n Mouse driver not loaded";
	exit(1);

	}

     restrictmouseptr(0,0,getmaxx(),getmaxy());
	showmouseptr();

	while(!kbhit())
	{
	getmousepos(&button,&x,&y);
	if(button==1)
	{
	if(x>=48&&x<=75&&y>=470&&y<=75)
	{  outtextxy(getmaxx()/2,getmaxy()/2,"Microsoft");
	   return 1; }
	 }
	}
	    return 0;

      } */

   };

  class Node:public coverpage,public FloodFill1
  {

   public:
   void move_arrow(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int k);

    void start1();

      void gameover();
     int draw_burst(int x,int y,int x2,int y2);

  };
    union  REGS ii,oo;

 struct link
  {
    int score;

    struct link *next;

  };

   typedef struct link node;

   node *ptr=NULL;


    void main()
    {

    int gd=DETECT,gm,k,p;

     initgraph(&gd,&gm,"");



     Node obj;

     obj.start1();

      k=50;


     p=random(getmaxy()-30);

   // if(f==1)
 obj.move_arrow(40,p,100,p,80,p-10,80,p+10,k);



     getch();


   }




    void Node::start1()
     {

	   login();// calling the windows startup pages
	   delay(100);
	 // int b=perform();
	       int i;

     //  int midx, midy, stangle=45, endangle=150, radius=200;

      int a[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};


       float octave[7] = { 130.81, 146.83, 164.81, 174.61, 196, 220, 246.94};


       setbkcolor(6);


for(i=0;i<120;i++)
{
setcolor(15);
ellipse(getmaxx()-50,getmaxy()-10-2*i,0,360,8,12);
line(getmaxx()-50,getmaxy()-10-2*i+12,getmaxx()-50,getmaxy()-10-2*i+24);

ellipse(getmaxx()-150,getmaxy()-10-2*i,0,360,8,12);
line(getmaxx()-150,getmaxy()-10-2*i+12,getmaxx()-150,getmaxy()-10-2*i+24);

ellipse(getmaxx()-250,getmaxy()-10-2*i,0,360,8,12);
line(getmaxx()-250,getmaxy()-10-2*i+12,getmaxx()-250,getmaxy()-10-2*i+24);


ellipse(getmaxx()-300,getmaxy()-10-2*i,0,360,8,12);
line(getmaxx()-300,getmaxy()-10-2*i+12,getmaxx()-300,getmaxy()-10-2*i+24);



ellipse(getmaxx()-450,getmaxy()-10-2*i,0,360,8,12);
line(getmaxx()-450,getmaxy()-10-2*i+12,getmaxx()-450,getmaxy()-10-2*i+24);

ellipse(getmaxx()-560,getmaxy()-10-2*i,0,360,8,12);
line(getmaxx()-560,getmaxy()-10-2*i+12,getmaxx()-560,getmaxy()-10-2*i+24);


ellipse(getmaxx()-477,getmaxy()-10-2*i,0,360,8,12);
line(getmaxx()-477,getmaxy()-10-2*i+12,getmaxx()-477,getmaxy()-10-2*i+24);



ellipse(getmaxx()-350,getmaxy()-10-2*i,0,360,8,12);
line(getmaxx()-350,getmaxy()-10-2*i+12,getmaxx()-350,getmaxy()-10-2*i+24);

		    delay(20);
clearviewport();
}


for(i=0 ; i<42 ; i++)
{
	setcolor(3);
	settextstyle(7,0,6);

	outtextxy(getmaxx()/2-260,getmaxy()/2-120,"Welcome to Balloontin ");

	settextstyle(1,0,0);
	outtextxy(getmaxx()/2-80,getmaxy()/2+10,"Loading");

	outtextxy(2*i+getmaxx()/2-80,getmaxy()/2+20,"....") ;
	delay(80) ;
	clearviewport();

	}

	outtextxy(getmaxx()/2-190,getmaxy()/2-15,"Press Any Key to Continue");







       setbkcolor(13);    // bg color


       setfillstyle(10,15);
       floodfill(70,50,12);


	setcolor(9);

	rectangle(0,0,getmaxx(),getmaxy());



       setcolor(2);             //ellipse color

       setfillstyle(1,2);

       fillellipse(50,50,150,150);



       line(50,200,50,208);

       settextstyle(0,0,0);
       setcolor(4);
       outtextxy(60,100," Anish");


       setcolor(11);             // ellipse color top right

       setfillstyle(1,11);


       fillellipse(580,50,150,150);

       line(580,200,580,208);

	setcolor(4);
       outtextxy(510,100," Abhimanyu");


       setcolor(9);     //ellipse color

       setfillstyle(1,9);


       fillellipse(50,450,150,150);

	setcolor(15);
       outtextxy(60,385," Chandan");


       setcolor(10);

       setfillstyle(1,10);


	fillellipse(580,450,150,150);

	setcolor(15);
       outtextxy(520,385,"Yash");


	// arrow
	setcolor(8);

	 setcolor(8);
	 setfillstyle(2,11);


	 line(600,250,500,300);      // head

	 line(600,250,500,200);

	 line(500,200,550,250);
       line(550,250,500,300);

	floodfill(590,250,8);



       line(550,250,120,250);

      setcolor(8);
       setfillstyle(6,11);   // tail

       line(120,250,20,200);
       line(120,250,20,300);

       line(20,200,20,300);
       floodfill(21,250,8);

	setcolor(14);

	setfillstyle(1,14);

	fillellipse(getmaxx()/2,getmaxy()/2,120,150);

	setcolor(1);            //balloon pattern
	setfillstyle(10,1);
	fillellipse(getmaxx()/2,getmaxy()/2,110,140);


	line(getmaxx()/2,getmaxy()/2+150,getmaxx()/2,getmaxy()/2+178);













	 setcolor(4);

	// midx=getmaxx()/2-10;
	// midy=getmaxy()/2-20;


       //	 arc(midx,midy,stangle,endangle,radius);






	settextstyle(8,0,0);

	outtextxy(10,400,"  Press Any Key To Continue....");

	settextstyle(1,0,0);


	while( !kbhit() )
	{




    sound( octave[ random(7) ]*4 );





	  setcolor(a[i%19]);


	  settextstyle(1,0,2);




	 outtextxy(getmaxx()/2-140,getmaxy()/2,"B");

	 outtextxy(getmaxx()/2-135,getmaxy()/2-40,"A");

	 outtextxy(getmaxx()/2-125,getmaxy()/2-80,"L");



	 outtextxy(getmaxx()/2-108,getmaxy()/2-120,"L");

	 outtextxy(330,68,"O");

	 outtextxy(265,78,"O");

	 outtextxy(400,105,"N");

	 outtextxy(425,150,"T");

	 outtextxy(440,190,"I");

	 outtextxy(445,240,"N");

	  delay(100);

	   i++;



	   }



		 nosound();


	    clearviewport();




       }


 void Node::move_arrow(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int k)
      {
	    int x=100,y=100;

      int  x11=460,y11,x22=400,y22,x33=420,y33,x44=420,y44;


	     int p,q,f;

		int c=1,i=0; char ch;

		int count=0;

		int count1=0;

		 int d=0;


       y11=random(getmaxy()-30);

       y22=y11;

       y33=y11-10;

       y44=y11+10;




	       setcolor(15);

	 rectangle(0,0,getmaxx()-30,getmaxy()-30);

	    setbkcolor(7);


	 while(1)
	{



	   count=0;

	   count1=0;

	   i++;
	if((c%2)==0&&(c%4)!=0)
	{
	setcolor(15);

	 p=random(getmaxx()-60);

	 q=random(getmaxy()-60);

	 setfillstyle(1,2);

	 circle(p,q,10);

	 floodfill(p,q,15);

	}

	c++;

	 while(x1<=(getmaxx()-30))
      {

	    setcolor(4);

	  line(x1,y1,x2,y2);

	  line(x2,y2,x3,y3);

	  line(x2,y2,x4,y4);

	  line(x3,y3,x4,y4);

	   delay(k);

	   setcolor(0);

	   line(x1,y1,x2,y2);

	   line(x2,y2,x3,y3);

	   line(x2,y2,x4,y4);

	   line(x3,y3,x4,y4);

	    setcolor(4);

	    line(x11,y11,x22,y22);

	    line(x22,y22,x33,y33);

	    line(x22,y22,x44,y44);

	    line(x33,y33,x44,y44);


	      delay(50);
	    setcolor(0);

	    line(x11,y11,x22,y22);

	    line(x22,y22,x33,y33);

	    line(x22,y22,x44,y44);

	    line(x33,y33,x44,y44);



	     x11-=15;

	     x22-=15;

	     x33-=15;

	     x44-=15;


	    x1+=15;

	    x2+=15;

	    x3+=15;

	    x4+=15;


	       setcolor(4);

	       setfillstyle(1,4);

	      fillellipse(x,y,9,12);


	      line(x,y+12,x,y+18);


	       if(kbhit())
	       {

		 setcolor(0);

		 ii.h.ah=0;

		 int86(22,&ii,&oo);

	      setfillstyle(1,0);

	       fillellipse(x,y,9,12);

	       line(x,y+12,x,y+18);



	       if(oo.h.ah==77) //for right
		x+=15;

		if(oo.h.ah==80) //for down
		  y+=15;

	       if(oo.h.ah==75) // for left
		 x-=15;

	      if(oo.h.ah==72) // for up
	       y-=15;

	       if(oo.h.ah==1)
		exit(0);

		}




  if(((x+9)>=(p-10)&& (x+9)<=(p+10))||((x-9)>=(p-10)&&(x-9)<=(p+10))&&((y+12)>=(q-10)&&(y+12)<=(q+10))||((y-12)>=(q-10)&&(y-12)<=(q+10)))
  {



	ptr->score+=10; // for collecting the coin

       // coin should disapper

       setcolor(0);

       setfillstyle(1,0);

       circle(p,q,10);

       floodfill(p,q,15);



      }



	  d=draw_burst(x,y,x2,y2);

	  if((d==1)&&(count==0))
	  {
	    count=1;

	   ptr->score+=5;

	  }

	  d=draw_burst(x,y,x22,y22);

	  if((d==1)&&(count1==0))
	  {
	    count1=1;

	    ptr->score+=5;

	 }
	    if((x2+15)>=(getmaxx()-30))
	      break;

	   }

	   if(c%4==0)
	   {
	   setcolor(0);

	   setfillstyle(1,0);

	   circle(p,q,10);

	   floodfill(p,q,0);

	   }

	   y11=random(getmaxy()-30);

	   y22=y11;

	   y33=y11-10;

	   y44=y11+10;

	   y1=random(getmaxy()-30);

	   y2=y1;

	   y3=y1-10;

	   y4=y1+10;

	   x1=40;

	    x2=100;

	    x3=80;

	    x4=80;


	    x11=460;

	    x22=400;

	    x33=420;

	    x44=420;


	   }


	   }


	    int Node::draw_burst(int x,int y,int x2,int y2)
	       {

	       char ch[10];

	       int t;

	if((x2>=(x-9)&&x2<=(x+9))&&(y2>=(y-12) &&y2<=(y+12)))
	       {

		    t=0;

		   setcolor(0);

		   setfillstyle(1,0);

		   circle(x,y,12);

		   floodfill(x,y,15);

		   setcolor(3);

		setlinestyle(0,0,1);

		  ptr->next=NULL;

	line ( x - 16, y - 12, x - 10, y - 2 ) ;
	line ( x - 10, y - 2, x - 16, y ) ;
	line ( x - 16, y, x - 10, y + 2 ) ;
	line ( x - 10, y + 2, x - 16, y + 12 ) ;

	line ( x - 16, y + 12, x - 6, y + 2 ) ;
	line ( x - 6, y + 2, x, y + 12 ) ;
	line ( x, y + 12, x + 6, y + 2 ) ;
	line ( x + 6, y + 2, x + 16, y + 12 ) ;

	line ( x - 16, y - 12, x - 6, y - 2 ) ;
	line ( x - 6, y - 2, x, y - 12 ) ;
	line ( x, y - 12, x + 6, y - 2 ) ;
	line ( x + 6, y - 2, x + 16, y - 12 ) ;

	line ( x + 16, y - 12, x + 10, y - 2 ) ;
	line ( x + 10, y - 2, x + 16, y ) ;
	line ( x + 16, y, x + 10, y + 2 ) ;
	line ( x + 10, y + 2, x + 16, y + 12);


	      getch();
	     gameover();

	     getch();

	     exit(0);
      }

	       else
	       {



		 t=1;
		}

		return t;
	      }


	       void Node::gameover()
	      {

	      int finish;

	      char ch[10];

	       itoa(ptr->score,ch,10);

	clearviewport();

	setbkcolor(9);

	setcolor(10);

	settextstyle(4,0,7);

	setusercharsize(120,50,120,40);

	outtextxy(getmaxx()/2-220,getmaxy()/2-180,"GAME OVER");

	settextstyle(8,0,1);

	setusercharsize(50,60,40,50);

	outtextxy(getmaxx()/2-120,getmaxy()/2-20,"YOUR SCORE IS : ");

	outtextxy(getmaxx()/2+150,getmaxy()/2-20,ch);

	outtextxy(getmaxx()/2-220,getmaxy()/2+20,"YOU REQUIRE TO PRACTICE MORE");


	settextstyle(1,0,1);

	setusercharsize(30,65,30,60);






	while( getch() != 'q')
	 finish=1;




	 }











