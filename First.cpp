#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<process.h>
#include<stdio.h>

//first game..//
void find_out(int c,char name[20])
{
  clrscr();
  randomize();
  int number,guess,ch=10,choice;
    textcolor(c);
    cprintf("                   **** * *   * ***    **** *   * *****               ");
    cout<<endl;
    cprintf("                   *    * **  * *  *   *  * *   *   *                 ");
    cout<<endl;
    cprintf("                   ***  * * * * *  *   *  * *   *   *                 ");
    cout<<endl;
    cprintf("                   *    * *  ** *  *   *  * *   *   *                 ");
    cout<<endl;
    cprintf("                   *    * *   * ***    **** *****   *                 ");
    cout<<endl<<endl<<endl<<endl<<endl;
        cprintf("Welcome %s",name);
        cprintf(".......");
        cout<<endl;
        cprintf("           The Objectives of the game are :");
        cout<<endl;
        cprintf("  This is a number based game.When the game starts,The system will select a random number from 0 to 100 number.The system will provide you with a clue about the digit.The player will have to guess the number.If your guess is correct,you win the game.Else you lose.You have a total of 10 chances.So make use of your chances and prove that you are wise");
        delay(15000);
    clrscr();
    replay:
    number=random(101);
    ch=10;
    cout<<endl;
        cprintf("CLUE........");
        cout<<endl;
    if(number<=9)
    {
       cprintf(" # The number is a one digit number....");
       cout<<endl;
    }
        else
        {
           cprintf(" # The number is a two digit number....");
           cout<<endl;
             if(number<51)
              {
             cprintf(" # The number is two digit number between 10 and 50....");
             cout<<endl;
              }
              else
              {
                 cprintf(" # The number is a two digit number between 51 and 100....");
                 cout<<endl<<endl;
              }
        }
       cprintf("  Okay %s",name);
       cprintf(" ,now start to guess the number.....");
       cout<<endl;
       delay(5000);
        next:
        clrscr();
        cprintf("                                                                CHANCE LEFT = %d",c);
        ch=ch--;
        cout<<endl;
            cprintf("Enter your guess....");
            cout<<endl;
            cin>>guess;
            if(guess==number)
            {
               textcolor(14);
               cprintf("                              Your guess was correct");
               cout<<endl;
               cprintf("                                      YOU WIN ");
               delay(5000);
               goto reenter;
            }
                else if(guess<number)
                {
                   textcolor(12);
                   cprintf("Your guess is lower than the actuall number....");
                   delay(2000);
                }
                    else
                    {
                       textcolor(10);
                       cprintf("Your guess is higher than the actuall number....");
                       delay(2000);
                    }
        if(ch>=0)
        {
           goto next;
        }
            else
            {
               cout<<endl;
               cprintf("The number was %d",number);
               reenter:
               textcolor(14);
               cout<<endl<<endl;
               cprintf("Your game is over....");
               cout<<endl<<endl<<endl;
               cprintf("                          Do you want to play newgame");
               cout<<endl;
               textcolor(10);
               cprintf("                                 1-------->newgame");
               cout<<endl;
               textcolor(12);
               cprintf("                                 0-------->quit");
               cout<<endl;
               textcolor(c);
               cprintf("                                 choice--->");
               cin>>choice;
               clrscr();
                if(choice ==1)
                {
                   goto replay;
                }
                    else if(choice ==0)
                    {
                       exit(0);
                    }
                        else
                        {
                            cprintf("INVALID ENTRY");
                            goto reenter;
                        }
            }
 getch();
}
//second game
void oracle(int c,char name[20])
{
  clrscr();
  char arr[]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ    "};
  int pos1[20];
  int pos2[20];
  int i,no,j,z,choice;
    textcolor(c);
    cprintf("        ****  ****  ****  ****  *     ****");
    cout<<endl;
    cprintf("        *  *  *  *  *  *  *     *     *   ");
    cout<<endl;
    cprintf("        *  *  **    ****  *     *     **  ");
    cout<<endl;
    cprintf("        *  *  * *   *  *  *     *     *   ");
    cout<<endl;
    cprintf("        ****  *  *  *  *  ****  ****  ****");
    cout<<endl;
    cout<<endl<<endl<<endl<<endl;
        cprintf("          Welcome %s",name);
        cprintf(".......");
        cout<<endl;
        cprintf("This if a program that can find the word you are thinking in your mind.You will have to answer a set of questions.Then the system will find that word you have been thinking of.");
    replay:
    cout<<endl<<endl;
    cprintf("\n\n\rEnter Total Number of letters in the word you are thinking of:");
    cin>>no;
        for(i=0;i<101;i++)
        {
           textcolor(2);
           cout<<endl<<endl<<endl<<endl;
           cprintf("                                        LOADING");
           cout<<endl;
           cprintf("                                           %d",i);
           delay(30);
           clrscr();
        }
    textcolor(c);
    cprintf("                                            ");
    cout<<endl;
        for(i=0;i<5;i++)
        {
           cprintf("%d ",i+1);
        }
            for(i=0;i<30;i++)
             {
                 if(i%5==0)
                 cout<<endl;
                 cprintf("%c ",arr[i]);
             }
        for(i=0;i<no;i++)
        {
           cprintf("\n\n\rEnter Letter %d Coloumn number:",i+1);
           cin>>pos1[i];
           pos1[i]-=1;
        }
        clrscr();
    cprintf("Step 2:\n\rTabel 2:\n\r");
        for(i=0;i<6;i++)
        cprintf("%d ",i+1);

            for(i=0;i<no;i++)
            {
               printf("\n");
               for(j=pos1[i];j<30;j+=5)
               cprintf("%c ",arr[j]);
            }
                for(i=0;i<no;i++)
                {
                   cprintf("\n\n\rEnter the  %d Letter's Coloumn number:",i+1);
                   cin>>pos2[i];
                   pos2[i]-=1;
                }
    clrscr();
    cprintf("                          The word in your mind was.......");
    cout<<endl<<"\t\t          ";
        for(i=0;i<no;i++)
        {
           cprintf("%c",arr[pos2[i]*5+pos1[i]]);
        }
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    reenter:
        cprintf("                          Do you want to play newgame");
        cout<<endl;
        textcolor(10);
        cprintf("                                 1-------->newgame");
        cout<<endl;
        textcolor(12);
        cprintf("                                 0-------->quit");
        cout<<endl;
        textcolor(c);
        cprintf("                                 choice--->");
        cin>>choice;
        clrscr();
            if(choice ==1)
            {
               goto replay;
            }
                else if(choice ==0)
                {
                   exit(0);
                }
                    else
                    {
                        textcolor(10);
                         cprintf("INVALID ENTRY");
                         goto reenter;
                    }
 getch();
}
//third game
void memory_champ(int c,char name[20])
{
    clrscr();
    randomize();
    int scr=0,i,k,a[10],b[10],t=0,s,d,co=0,r=0,cs,l=0,ttl=0,p=1,choice;
    textcolor(c);
    cprintf("               *   * **** *   * **** *** * *     **** *  *  *  *   * ***");
    cout<<endl;
    cprintf("               ** ** *    ** ** *  * * * * *     *    *  * * * ** ** * *");
    cout<<endl;
    cprintf("               * * * ***  * * * *  * **   *      *    **** *** * * * *** ");
    cout<<endl;
    cprintf("               *   * *    *   * *  * * *  *      *    *  * * * *   * *  ");
    cout<<endl;
    cprintf("               *   * **** *   * **** * *  *      **** *  * * * *   * *  ");
    cout<<endl<<endl;
        textcolor(c);
        cout<<endl<<endl<<endl;
        cprintf("           Welcome %s",name);
        cprintf("....");
        cout<<endl<<"\t";
        cprintf("%s",name);
        cprintf(", This is a game to test your memory.When the game starts,you will be shown a number.you have to enter the same number to continue.If you are able to memorise the number and enter it,you will be taken to the next level.As the level increase,the number of numbers displayed will increase.When your entry is wrong,you will not be eligible to continue....");
        delay(15000);
    replay:
        p=p+1;
        scr=0;
        l=l+1;
            clrscr();
            cout<<"level\n"<<l;
        scr=scr+0;
        ttl=ttl+scr;
        t=t+1;
        d=t*1000;
            textcolor(c);
            cout<<"\n\t\t\t\t";
            cprintf("MEMORY CHAMP");
            cout<<"\n\n\t\t\t";
            textcolor(c);
            cprintf(name);
            cprintf(" your terms are");
            cout<<endl;
            cout<<"\n\n\t\t\t";
            for(i=0;i<1;i++)
            {
                  for(i=0;i<t;i++)
                  {
                      a[i]=random(100);
                      cout<<a[i]<<"\t";
                  }
               delay(d);
               clrscr();
             }
            cout<<"\t\t\t\t";
            cprintf("\n\n\nMEMORY GAME");
            cout<<"\n\n\n";
              textcolor(c);
              cprintf("Now its your turn,try to enter the previously displayed numbers");
              cout<<endl;
                for(i=0;i<t;i++)
                {
                  cin>>b[i];
                  cout<<endl;
                }
                     for(i=0;i<t;i++)
                     {
                    if(a[i]==b[i])
                    {
                      scr=scr+100;
                      co++;

                    }
                           else
                           {
                        scr=scr+0;
                        r++;
                           }
                     }
        cprintf("the number of correct answers ");
        delay(500);
        cout<<":"<<co<<endl;
        cprintf("the number of wrong answers ");
        delay(500);
        cout<<":"<<r<<endl;
        cprintf(name);
        cprintf(" your score is ");
        delay(500);
        cout<<":"<<scr<<endl;
        textcolor(c);
        cprintf(name);
        cprintf(" your total score is :");
        delay(500);
        ttl=ttl+scr;
        cout<<ttl<<endl;
        textcolor(c);
        delay(500);
        if(co>=l)
         {
            cout<<endl<<endl;
            reenter:
            cprintf("                          Do you want to play newgame");
            cout<<endl;
            textcolor(10);
            cprintf("                                 1-------->newgame");
            cout<<endl;
            textcolor(12);
            cprintf("                                 0-------->quit");
            cout<<endl;
            textcolor(c);
            cprintf("                                 choice--->");
            cin>>choice;
            clrscr();
            if(choice ==1)
            {
            goto replay;
            }
                else if(choice ==0)
                {
                   exit(0);
                }
                    else
                    {
                       textcolor(10);
                       cprintf("INVALID ENTRY");
                       goto reenter;
                    }
         }

            else
            {
                 cprintf("YOU ARE NOT ELIGIBLE TO CONTINUE");
                 delay(2000);
            }
 getch();
}
//fourth game
void lucky_racer(int c)
{
    clrscr();
    randomize();
    int i,bef=0,aft=0,dice,j=0,bef2=0,aft2=0,dice2,ch,m=0,choice;
    char name1[10],name2[10];
    textbackground(0);
    textcolor(c);
    cprintf("              *     *  *  ****  *  *  *   *   ****  ****  ****  ****  ****");
    cout<<endl;
    cprintf("              *     *  *  *     * *    * *    * *   *  *  *     *     * *");
    cout<<endl;
    cprintf("              *     *  *  *     **      *     **    ****  *     ***   ** ");
    cout<<endl;
    cprintf("              *     *  *  *     * *     *     * *   *  *  *     *     * *");
    cout<<endl;
    cprintf("              ****  ****  ****  *  *    *     *  *  *  *  ****  ****  *  *");
    cout<<endl<<endl<<endl;
        textcolor(12);
        cprintf("Enter player 1's name :");
        cout<<endl;
        cin>>name1;
        textcolor(9);
        cprintf("enter player 2's name :");
        cout<<endl;
        cin>>name2;
    textcolor(c);
    cprintf("Welcome %s ",name1);
    cprintf(" and %s ",name2);
    cout<<endl;
    cprintf("            THE OBJECTIVES OF THE GAME ARE:");cout<<endl;
    cprintf("  This is a dice based game for two players.You have a total of fifteen moves.  The dice will be tossed by the computer and the players will get their corresponding numbers. The number on the dice and the total distance covered will be displayed under the names of the player.After each round,you must press 1 to continue,After fifteen moves,the one who has covered the maximum distance wins the game.");
    delay(15000);
    replay:
    again:
    clrscr();
    m=14-j;
    textcolor(2);
    cprintf("                                                                  Moves left:%d ",m);
    cout<<endl<<endl;
    dice=random(6);
    dice=dice+1;

        bef=bef+dice;
        textcolor(12);
        textbackground(0);
        cprintf(name1);
        cout<<endl<<endl;
        cprintf("dice = %d ",dice);
        cout<<endl;
        cprintf("distance = %d",bef);
        cout<<endl;



        for(i=0;i<bef;i++)
        {
           cprintf("-");
           delay(2);
        }
    cprintf("%c",name1[0]);
        aft=79-bef;
            for(i=0;i<aft;i++)
            {
              cprintf("_");
            }
        cout<<endl<<endl<<endl<<endl;
    dice2=random(6);
    dice2=dice2+1;
    bef2=bef2+dice2;
        textcolor(9);
        textbackground(0);
        cprintf(name2);
        cout<<endl<<endl;
        cprintf("dice = %d",dice2);
        cout<<endl;
        cprintf("distance = %d",bef2);
        cout<<endl;



        for(i=0;i<bef2;i++)
        {
          cprintf("-");
          delay(2);
        }
        cprintf("%c",name2[0]);
        aft2=79-bef2;
            for(i=0;i<aft2;i++)
            {
              cprintf("_");
            }
      j=j++;
        if(j==15)
        {
             if(bef<bef2)
             {
              clrscr();
              cout<<"\n\n\n\n\n\n\n\n\n";
              cprintf("                             The winner is %s",name2);
              delay(5000);
              goto reenter;
             }
                 else
                 {
                   clrscr();
                   cout<<"\n\n\n\n\n\n\n\n\n";
                  cprintf("                              The winner is %s",name1);
                  delay(5000);
                  goto reenter;
                 }
        }
                else
                {
                 textcolor(3);
                 cout<<endl;
                 cprintf("Enter 1 to continue :");
                 cout<<endl;
                 textcolor(12);
                 cprintf("Press other keys to exit");
                 cin>>ch;
                    if(ch==1)
                    {
                     delay(100);
                     goto again;
                    }
                        else
                        {
                         exit(0);
                        }

                }
       reenter:
       textcolor(c);
       cout<<endl;
       cprintf("                          Do you want to play newgame");
       cout<<endl;
       textcolor(10);
       cprintf("                                 1-------->newgame");
       cout<<endl;
       textcolor(12);
       cprintf("                                 0-------->quit");
       cout<<endl;
       textcolor(c);
       cprintf("                                 choice--->");
       cin>>choice;
       clrscr();
            if(choice ==1)
            {
             goto replay;
            }
                else if(choice ==0)
                {
                 exit(0);
                }
                    else
                    {
                     textcolor(10);
                     cprintf("INVALID ENTRY");
                     goto reenter;
                    }
 getch();
}
//fifth game
void toss_n_guess(int c,char name[20])
{
    clrscr();
    int co=0,toss,choice;
    textcolor(c);
    cprintf(" *****  ****  ****  ****                *****  *   *  ****  ****  **** ");
    cout<<endl;
    cprintf("   *    *  *  *     *     *          *  *      *   *  *     *     *    ");
    cout<<endl;
    cprintf("   *    *  *  ****  ****   *  ****  *   * ***  *   *  ***   ****  **** ");
    cout<<endl;
    cprintf("   *    *  *     *     *      *  *      *   *  *   *  *        *     * ");
    cout<<endl;
    cprintf("   *    ****  ****  ****      *  *      *****  *****  ****  ****  **** ");
    cout<<endl<<endl<<endl<<endl;
        cprintf("Welcome %s",name);
        cprintf(".....");
        cout<<endl;
        cprintf("        This is a game to test your luck.When the game starts,The coin willbe tossed.You must predict the result be 'HEADS' or 'TAILS' in the given time.After you guess the toss,the result willbe shown to you.If you are lucky,Your guess will be correct.Else you are unlucky today.");
        delay(15000);
    clrscr();
    replay:
    co=random(100);
    cprintf("Okay %s",name);
    cprintf(",now guess the toss.....");
    cprintf(".....");
    cout<<endl;
    cprintf("                                           ENTER ");
    cout<<endl;
    cprintf("                                     heads----------->1");
    cout<<endl;
    cprintf("                                     tails----------->0");
    cout<<endl;
    cprintf("                                     guess----------->");
    cin>>toss;
    cout<<endl<<endl;
        if(co%2==0)
        {
          switch(toss)
          {
           case 1:
            cprintf("                                    YOUR GUESS WAS CORRECT");
            cout<<endl;
            cprintf("                                      THE TOSS WAS HEADS");
           break;
               case 0:
                 cprintf("                                   YOUR GUESS WAS WRONG");
                 cout<<endl;
                 cprintf("                                    THE TOSS WAS HEADS");
               break;
             default:
              cprintf("                                        INVALID ENTRY");
          }
        }
            else
            {
              switch(toss)
              {
                case 0:
                 cprintf("                                    YOUR GUESS WAS CORRECT");
                 cout<<endl;
                 cprintf("                                      THE TOSS WAS TAILS");
                break;
                  case 1:
                   cprintf("                                    YOUR GUESS WAS WRONG");
                   cout<<endl;
                   cprintf("                                      THE TOSS WAS TAILS");
                  break;
                default:
                 cout<<endl;
                 cprintf("                                        INVALID ENTRY");
              }
    cout<<endl<<endl;
    reenter:
    cprintf("Your game is over....");
    cout<<endl<<endl;
    cprintf("                          Do you want to play newgame");
    cout<<endl;
    textcolor(10);
    cprintf("                                 1-------->newgame");
    cout<<endl;
    textcolor(12);
    cprintf("                                 0-------->quit");
    cout<<endl;
    textcolor(c);
    cprintf("                                 choice--->");
    cin>>choice;
    clrscr();
        if(choice ==1)
        {
         goto replay;
        }
            else if(choice ==0)
            {
             exit(0);
            }
                else
                {
                 cprintf("INVALID ENTRY");
                 goto reenter;
                }
        }
 getch();
}
//main menu
void menu(int c,char name[20])
{
    clrscr();
    int i,jun;
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    textcolor(10);
    cprintf("                                     LOADING.....");
    cout<<endl;

        for(i=0;i<80;i++)
        {
          textcolor(10);
          cprintf("#");
          delay(20);
        }
    re:
    clrscr();
    textcolor(11);
    cout<<endl<<endl;
    cprintf("                   **** * *   * ***    **** *   * *****               ");
    cout<<endl;
    cprintf("                   *    * **  * *  *   *  * *   *   *                 ");
    cout<<endl;
    cprintf("                   ***  * * * * *  *   *  * *   *   *                 ");
    cout<<endl;
    cprintf("                   *    * *  ** *  *   *  * *   *   *                 ");
    cout<<endl;
    cprintf("                   *    * *   * ***    **** *****   *                 ");
    cout<<endl<<endl<<endl<<endl;
        textcolor(10);
        cprintf("       Enter 1 to play this game....");
        cout<<endl;
        textcolor(12);
        cprintf("       Enter 2 for the next game....");
        cin>>jun;
            if(jun==1)
            {
             clrscr();
             find_out(c,name);
            }
                     else if(jun==2)
                     {
                      clrscr();
                      goto next;
                     }
                      else
                      {
                       cprintf("                                   INVALID ENTRY !!!");
                       delay(1000);
                       cout<<endl;
                       goto re;
                      }


    next:
    clrscr();
    textcolor(11);
    cout<<endl<<endl;
    cprintf("                   ****  ****  ****  ****  *     ****");
    cout<<endl;
    cprintf("                   *  *  *  *  *  *  *     *     *   ");
    cout<<endl;
    cprintf("                   *  *  **    ****  *     *     *** ");
    cout<<endl;
    cprintf("                   *  *  * *   *  *  *     *     *   ");
    cout<<endl;
    cprintf("                   ****  *  *  *  *  ****  ****  ****");
    cout<<endl<<endl<<endl<<endl;
        textcolor(10);
        cprintf("       Enter 1 to play this game....");
        cout<<endl;
        textcolor(12);
        cprintf("       Enter 2 for the next game....");
        cin>>jun;
            if(jun==1)
            {
             clrscr();
             oracle(c,name);
            }
                     else if(jun==2)
                     {
                      clrscr();
                      goto next1;
                     }
                          else
                          {
                           cprintf("                                   INVALID ENTRY !!!");
                           delay(1000);
                           cout<<endl;
                           goto next;
                          }


    next1:
    clrscr();
    textcolor(11);
    cout<<endl<<endl;
    cprintf("               *   * **** *   * **** *** * *     **** *  *  *  *   * ***");
    cout<<endl;
    cprintf("               ** ** *    ** ** *  * * * * *     *    *  * * * ** ** * *");
    cout<<endl;
    cprintf("               * * * ***  * * * *  * **   *      *    **** *** * * * *** ");
    cout<<endl;
    cprintf("               *   * *    *   * *  * * *  *      *    *  * * * *   * *  ");
    cout<<endl;
    cprintf("               *   * **** *   * **** * *  *      **** *  * * * *   * *  ");
    cout<<endl<<endl<<endl<<endl;
        textcolor(10);
        cprintf("       Enter 1 to play this game....");
        cout<<endl;
        textcolor(12);
        cprintf("       Enter 2 for the next game....");
        cin>>jun;
            if(jun==1)
            {
             clrscr();
             memory_champ(c,name);
            }
                     else if(jun==2)
                     {
                      clrscr();
                      goto next2;
                     }
                         else
                         {
                          cprintf("                                   INVALID ENTRY !!!");
                          delay(1000);
                          cout<<endl;
                          goto next1;
                         }

    next2:
    clrscr();
    textcolor(11);
    cout<<endl<<endl;
    cprintf("              *     *  *  ****  *  *  *   *   ****  ****  ****  ****  ****");
    cout<<endl;
    cprintf("              *     *  *  *     * *    * *    * *   *  *  *     *     * *");
    cout<<endl;
    cprintf("              *     *  *  *     **      *     **    ****  *     ***   ** ");
    cout<<endl;
    cprintf("              *     *  *  *     * *     *     * *   *  *  *     *     * *");
    cout<<endl;
    cprintf("              ****  ****  ****  *  *    *     *  *  *  *  ****  ****  *  *");
    cout<<endl<<endl<<endl<<endl;
        textcolor(10);
        cprintf("       Enter 1 to play this game....");
        cout<<endl;
        textcolor(12);
        cprintf("       Enter 2 for the next game....");
        cin>>jun;
            if(jun==1)
            {
             clrscr();
             lucky_racer(c);
            }
                     else if(jun==2)
                     {
                      clrscr();
                      goto next3;
                     }
                      else
                      {
                       cprintf("                                   INVALID ENTRY !!!");
                       delay(1000);
                       cout<<endl;
                       goto next2;
                      }

    next3:
    clrscr();
    textcolor(11);
    cout<<endl<<endl;
    cprintf("      *****  ****  ****  ****                *****  *   *  ****  ****  **** ");
    cout<<endl;
    cprintf(    "        *    *  *  *     *     *          *  *      *   *  *     *     *    ");
    cout<<endl;
    cprintf("        *    *  *  ****  ****   *  ****  *   * ***  *   *  ***   ****  **** ");
    cout<<endl;
    cprintf("        *    *  *     *     *      *  *      *   *  *   *  *        *     * ");
    cout<<endl;
    cprintf("        *    ****  ****  ****      *  *      *****  *****  ****  ****  **** ");
    cout<<endl<<endl<<endl<<endl;
        textcolor(10);
        cprintf("       Enter 1 to play this game....");
        cout<<endl;
        textcolor(12);
        cprintf("       Enter 2 for the next game....");
        cin>>jun;
            if(jun==1)
            {
             clrscr();
             toss_n_guess(c,name);
            }
                     else if(jun==2)
                     {
                      clrscr();
                      goto re;
                     }
                      else
                      {
                       cprintf("                                   INVALID ENTRY !!!");
                       cout<<endl;
                       goto next3;
                      }
 getch();
}
//main program
void main()
{
     clrscr();
     int c;
     char name[20];
    textcolor(12);
    textbackground(0);
    cout<<endl<<endl;
    cprintf("        *******************************************");
    cout<<endl;
    cprintf("        *                                          ");
    cout<<endl;
    cprintf("        *            ******  ** **  *  **  *  *****");
    cout<<endl;
    cprintf("        *      ****  *    *  * * *  *  * * *  *   *");
    cout<<endl;
    cprintf("        *         *  ******  *   *  *  *  **  *   *");
    cout<<endl;
    cprintf("        ***********  *    *  *   *  *  *   *  *****");
    cout<<endl;
    cprintf("                                                  *                   ");
    cout<<endl;
    cprintf("                                                  *                   ");
    textcolor(9);
    cout<<endl;
    cprintf("                                                  *                   ");
    cout<<endl;
    cprintf("                                                  *                   ");
    cout<<endl;
    cprintf("                                                  *    *  *   *  *    ");
    cout<<endl;
    cprintf("                                                  *    *  *   *  *    ");
    cout<<endl;
    cprintf("                                                  ******  *   *  *****");
    cout<<endl;
    cprintf("                                                  *    *  *   *  *   *");
    cout<<endl;
    cprintf("                                                  *    *  *****  *****");
    cout<<endl<<endl;
    delay(5000);
    clrscr();
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        textcolor(10);
        cprintf("                                     LOADING.....");
        cout<<endl;
            for(int i=0;i<80;i++)
            {
              textcolor(10);
              cprintf("#");
              delay(20);
            }
        clrscr();
        cout<<endl<<endl<<endl;
    textcolor(11);
    cprintf("Please enter your name.....");
    cout<<endl;
    cin>>name;
    cout<<endl;
    cprintf("%s ,please choose your favorite color from the options given below.....",name);
    cout<<endl<<endl;
        textcolor(9);
        cprintf("   Blue ----------> 1");
        cout<<endl;
        textcolor(10);
        cprintf("   Green ---------> 2");
        cout<<endl;
        textcolor(11);
        cprintf("   Cyan ----------> 3");
        cout<<endl;
        textcolor(12);
        cprintf("   Red -----------> 4");
        cout<<endl;
        textcolor(13);
        cprintf("   Magentta ------> 5");
        cout<<endl;
        textcolor(14);
        cprintf("   Yellow --------> 6");
        cout<<endl;
        textcolor(15);
        cprintf("   White ---------> 7");
        cout<<endl;
        textcolor(7);
        cprintf("   Choice --------> ");
        cin>>c;
    c=c+8;
    menu(c,name);
 getch();
}

