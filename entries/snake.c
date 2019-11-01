#include             <time.h>
#include            <conio.h>
#include           <stdlib.h>
#include           <windows.h>
                   const int W=
                24,H=16;R(){system
              ("cls");}; G(int x,int
             y ) { COORD c = {x , y};
             SetConsoleCursorPosition
             (GetStdHandle(0xfffffff5
             ),c);}; B(void ) {static
             CONSOLE_CURSOR_INFO i;i.
              bVisible=0;i.dwSize=9;
               SetConsoleCursorInfo
                  (GetStdHandle(
                   0xfffffff5),
                   &i);} ;A(){
                   for(int h=0
                  ;h<H ; h++)
                  for(int w=0
                 ;w<W; w++){
                 putchar((h>
                 0&&h<(H-1))
                ?((w>0&&w<(
                W-1 )) ?32:
                219): 219);
                if(!(w-(W-1
               )))putchar(
               '\n') ;} };
               char*T="41"
               "121222121"
               "141142111"
               "121111121"
                "441112141"
                "233511121"
                "112111112"
                "144112111"
                 "21112114J"
                 ;main(void){
                 srand(0);B();
                  int i=0, j=0;
                   while(*(T+i))                                 {for(int l=0;
                   l<*(T+i)-48;l++)                           {putchar((i&1)?176:
                     219);if(!(j%25-24))                   putchar (10) ; j++;} i++;}
                        printf("<< Press E"            "NTER to " "game >>");while(getch()
                          !=13);int SX[256],SY     [256],SL,SD,SG,SA [2] ;GAME:for(int i=0 ;i<
                           256;i++)SX[i]=W/2,SY[i]=H/2;SL=1;SD=77;SG=0 ; SA[0]=1+rand()%(W-2);SA[1
                              ]=1+rand()%(H-2);R();B();A();time_t t=clock();int p=0;for(;;){SG=0;for(
                                  int i=0;i<SL;i++){G(SX[i],SY[i]              );putchar(32);} for(int i=SL                       ;i>0;i--)
                                     {SX[i]=SX[i-1];SY[i]=SY                      [i-1] ; }if ( kbhit()&&getch()==            224) {int n=getch
                                        ();if((SD!=77||n                              !=75) && ( SD != 72 || n!= 80)&&(SD!=75||n!=77)&&(SD!=80||n!=72
                                             ))SD=n;                                          }switch(SD) { case 75:  SX [0] --; break; case 72: SY[0]--;
                                                                                                    break;case 77 : SX[0]++;break;case 80:SY[0]++;break;}if(
                                                                                                       SX[0]==SA[0]&&SY[0]==SA          [1]){SL++, p++ ; int tx=1+
                                                                                                           rand()%(W-2),ty                    =1+rand()%(H-2);for(int i=0;i<
                                                                                                                                                     SL;i++){if(SX[i]==tx&&SY[i]==ty)tx=1
                                                                                                                                                             +rand()%(W-2),ty=1+rand()%(H-2),i=-1;}SA[0]
                                                                                                                                                                    =tx,SA[1]=ty;}if(p==100){SG=2;break;}for(int i=0;i<SL
                                                                                                                                                                            ;i++) {G(SX[i],SY[i]); putchar(i % 26+ 65);}for(int i=1;i<SL;i
                                                                                                                                                                                     ++){if(SX[0]==SX[i]&&SY[0]==SY[i])SG=1;}if(SX[0]==0||SY[0]==0||SX[0]==W-1||
                                                                                                                                                                                                   SY[0]==H-1)SG=1;if(SG)break;G(SA[0],SA [1]); putchar(SL%26+65);G(W/2-6,H+1),printf(
                                                                                                                                                                                                                       "Points: %04d",p);while(clock()-t<250);t=clock(),B();}G(W/2-5,H),printf((SG-1)
                                                                                                                                                                                                                                                  ?" YOU WIN!":"GAME OVER!");while(getch()!=13);goto GAME;}
                                                                                                                                                                                                                                                                                 /*2019 David Macintosh*/
