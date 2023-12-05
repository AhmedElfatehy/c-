
#include <iostream>

#include<stdlib.h>

#include<ctime>

#include<windows.h>

using namespace std;

int d,r,b,m;  //d is the no of quest  ,b to the answer ,r to error

void inst ()
{
    cout<<"                                      ------------------------\n";
        cout<<"                                      | Instructions for use |\n";
        cout<<"                                      ------------------------\n";
        cout<<"1-press (1) or (2) or (3) or (4) to choice the answer \n"<<"2-if you choice any NO. else The question will be repeated\n";
        cout<<"3-press (0) to exit\n"<<"4-press (5) to delete two answer[you can`\n"<<"5-press (6) to asks the audience\n";
        cout<<"6-you can use the option 4 && 5 for only once\n"<<"7-if you used  the option 4 && 5 More than once in the same quest ,the option will be removed\n";
        cout<<"\n\n\n\n";
}

void retry() //to try the quest again
{
    char o;//exit
    o='n';
    if (b==0)
    {
        cout <<"Are you sure you want to get out(y/n)\n";
        cin >>o;
        if (o=='y')
      exit(0);
    }
    while(o!='y'){
    system("cls");
    if(b!=0&&b!=5&&b!=6){
    cout <<"\n"<<"\n"<<"\n"<<"\n";
    cout<<"                                    ---------\n";
    cout<<"                                    | error |\n";
    cout<<"                                    ---------\n";
    Sleep(2000);
    system("cls");}
    cout <<"try again\n";
    o='y';
    }
}

void used()
{
    system("cls");
             cout<<"                      -------------------------------------\n";
             cout<<"                      | you have used this option already |\n";
             cout<<"                      -------------------------------------\n";
          Sleep(2500);
}

void False()  //if the answer false
{
    system("cls");
            cout <<"                                          ---------------------------\n";
            cout <<"                                          |        Game Over        |\n";
            cout <<"                                          | Unfortunately, you lost |\n";
            cout <<"                                          ---------------------------\n";
          Sleep(3000);
          system("cls");
}

void True () //if the answer true
{
    cout <<"great\n";
    Sleep(900);
            if (m==0)
                m=100;
            else if (m==100)
                m=200;
            else if (m==200)
                m=300;
            else if (m==300)
                m=500;
            else if (m==500)
                m=1000;
            else if (m==1000)
                m=5000;
            else if (m==5000)
                m=10000;
            else if (m==10000)
                m=50000;
            else if (m==50000)
                m=100000;
            else if (m==100000)
                m=250000;
            else if (m==250000)
                m=500000;
            else if (m==500000)
                m=1000000;
          cout<<"you have won"<<m<<"$\n";
          Sleep(1500);
            system("cls");
}

void ywon () //if the user won
{
    cout <<"                      --------------------------------------------------------------------\n";
    cout <<"                      | Congratulations ,Now you have proven that you are truly a genius |\n";
    cout <<"                      --------------------------------------------------------------------\n";
    Sleep(3000);
    system("cls");
}

class quest
{
private:
    int c;
public:
    void quiz(int n)
    {
        c=n;
 int e=0 ,q=0; //e to delete to answer ,q to ask the people
        {

          switch(c)
          {
          case 1 :do{inst ();
              cout <<"What is the original brie cheese?\n"<<"1-France\n"<< "2-Italy\n"<< "3-Spain\n"<< "4-Malaysia\n";
          cin>>b;
          if (b==5&&e==0)
          {
              system("cls");
              cout <<"\n"<<"What is the original brie cheese?\n"<<"1-France\n"<<"2-\n"<<"3-\n"<< "4-Malaysia\n";
              cin >>b;
              e=1;
          }
          while (b==5&&e!=0){
            used();
           retry();
           cout <<"What is the original brie cheese?\n"<<"1-France\n"<< "2-Italy\n"<< "3-Spain\n"<< "4-Malaysia\n";
           cin >>b;
           }
          if (b==6&&q==0)
          {
              cout <<"Public opinion :1-France\n";
              cin >>b;
              q=1;
          }
          while (b==6&&q!=0)
          {
           used();
           retry();
           cout <<"What is the original brie cheese?\n"<<"1-France\n"<< "2-Italy\n"<< "3-Spain\n"<< "4-Malaysia\n";
           cin >>b;
          }

          if (b!=1&&b!=2&&b!=3&&b!=4){
            retry();
            r=1;
            }
            else
                r=0;
          }while(r!=0);
          if(b!=1){
            False();
            break;}
          else
          {
            True ();
            d++;

            if (d==12){
                ywon ();
            break;}
            cout <<"the next question\n";
          }
            case 2 :do{inst ();
                cout<<"What is the name of the capital of Iceland?\n"<<"1-Ankara\n"<<"2-Reykjavik\n"<<"3-Antananarivo\n"<<"4-Asmara\n";
          cin>>b;
          if (b==5&&e==0)
          {
              system("cls");
              cout <<"\n"<<"What is the name of the capital of Iceland?\n"<<"1-\n"<<"2-Reykjavik\n"<<"3-\n"<<"4-Asmara\n";
              cin >>b;
              e=1;
          }
          while (b==5&&e!=0){
            used();
           retry();
           cout <<"What is the name of the capital of Iceland?\n"<<"1-Ankara\n"<<"2-Reykjavik\n"<<"3-Antananarivo\n"<<"4-Asmara\n";
           cin >>b;}
          if (b==6&&q==0)
          {
              cout <<"Public opinion :2-Reykjavik\n";
              cin>> b;
              q=1;
          }
          while (b==6&&q!=0)
          {
           used();
           retry();
           cout <<"What is the name of the capital of Iceland?\n"<<"1-Ankara\n"<<"2-Reykjavik\n"<<"3-Antananarivo\n"<<"4-Asmara\n";
           cin >>b;;
          }
          if (b!=1&&b!=2&&b!=3&&b!=4){
            retry();
            r=1;
            }
            else
                r=0;
          }while(r!=0);
          if(b!=2)
            {False();
            break;}
          else
          {
            True ();
            d++;
            if (d==12){
                ywon ();
            break;}
            cout <<"the next question\n";
          }
          case 3 :do{inst ();
              cout <<"What is the name of the largest country in the world?\n"<<"1-America\n"<<"2-Algeria\n"<<"3-Russia\n"<<"4-Japan\n";
           cin>>b;
           if (b==5&&e==0)
          {
              system("cls");
              cout <<"\n"<<"What is the name of the largest country in the world?\n"<<"1-America\n"<<"2-\n"<<"3-Russia\n"<<"4-\n";
              cin >>b;
              e=1;
          }
          while (b==5&&e!=0){
           used();
           retry();
           cout <<"What is the name of the largest country in the world?\n"<<"1-America\n"<<"2-Algeria\n"<<"3-Russia\n"<<"4-Japan\n";
           cin >>b;}
          if (b==6&&q==0)
          {
              cout <<"Public opinion :3-Russia\n";
              cin >>b;
              q=1;
          }
          while (b==6&&q!=0)
          {
           used();
           retry();
           cout <<"What is the name of the largest country in the world?\n"<<"1-America\n"<<"2-Algeria\n"<<"3-Russia\n"<<"4-Japan\n";
           cin >>b;
          }
           if (b!=1&&b!=2&&b!=3&&b!=4){
            retry();
            r=1;
            }
            else
                r=0;
          }while(r!=0);
          if(b!=3)
           {False();
            break;}
          else
          {
            True ();
            d++;
            if (d==12){
                ywon ();
            break;}
            cout <<"the next question\n";
          }
          case 4 :do{inst ();
              cout <<"What is the name of the smallest country in the world?\n"<<"1-Egypt\n"<<"2-Algeria\n"<<"3-Palestine\n"<<"4-Vatican\n";
           cin>>b;
            if (b==5&&e==0)
          {
              system("cls");
              cout <<"\n"<<"What is the name of the smallest country in the world?\n"<<"1-\n"<<"2-\n"<<"3-Palestine\n"<<"4-Vatican\n";
              cin >>b;
              e=1;
          }
          while (b==5&&e!=0){
           used();
           retry();
           cout <<"What is the name of the smallest country in the world?\n"<<"1-Egypt\n"<<"2-Algeria\n"<<"3-Palestine\n"<<"4-Vatican\n";
           cin >>b;}
          if (b==6&&q==0)
          {
              cout <<"Public opinion :4-Vatican\n";
              cin >>b;
              q=1;
          }
          while (b==6&&q!=0)
          {
           used();
           retry();
           cout <<"What is the name of the smallest country in the world?\n"<<"1-Egypt\n"<<"2-Algeria\n"<<"3-Palestine\n"<<"4-Vatican\n";
           cin >>b;
          }
           if (b!=1&&b!=2&&b!=3&&b!=4){
            retry();
            r=1;
            }
            else
                r=0;
          }while(r!=0);
          if(b!=4)
            {False();
            break;}
          else
          {
            True ();
            d++;
            if (d==12){
                ywon ();
            break;}
            cout <<"the next question\n";
          }
          case 5 :do{inst ();
              cout <<"How many kilometers are in a mile?\n"<<"1-1.6\n"<<"2-2\n"<<"3-2.6\n"<<"4-0.6\n";
            cin>>b;
            if (b==5&&e==0)
          {
              system("cls");
              cout <<"\n"<<"How many kilometers are in a mile?\n"<<"1-1.6\n"<<"2-\n"<<"3-2.6\n"<<"4-\n";
              cin >>b;
              e=1;
          }
          while (b==5&&e!=0){
           used();
           retry();
           cout <<"How many kilometers are in a mile?\n"<<"1-1.6\n"<<"2-2\n"<<"3-2.6\n"<<"4-0.6\n";
           cin >>b;}
          if (b==6&&q==0)
          {
              cout <<"Public opinion :1-1.6\n";
              cin >>b;
              q=1;
          }
          while (b==6&&q!=0)
          {
           used();
           retry();
           cout <<"How many kilometers are in a mile?\n"<<"1-1.6\n"<<"2-2\n"<<"3-2.6\n"<<"4-0.6\n";
           cin >>b;
          }
            if (b!=1&&b!=2&&b!=3&&b!=4){
            retry();
            r=1;
            }
            else
                r=0;
          }while(r!=0);
          if(b!=1)
            {False();
            break;}
          else
          {
           True ();
            d++;
            if (d==12){
                ywon ();
            break;}
            cout <<"the next question\n";
          }
          case 6 :do{inst ();
              cout <<"How many time zones are there in Russia?\n"<<"1-10\n"<<"2-11\n"<<"3-12/n"<<"4-13\n";
             cin>>b;
              if (b==5&&e==0)
          {
              system("cls");
              cout <<"\n"<<"How many time zones are there in Russia?\n"<<"1-\n"<<"2-11\n"<<"3-12/n"<<"4-\n";
              cin >>b;
              e=1;
          }
          while (b==5&&e!=0){
           used();
           retry();
           cout <<"How many time zones are there in Russia?\n"<<"1-10\n"<<"2-11\n"<<"3-12/n"<<"4-13\n";
           cin >>b;}
          if (b==6&&q==0)
          {
              cout <<"Public opinion :2-11\n";
              cin >>b;
              q=1;
          }
          while (b==6&&q!=0)
          {
           used();
           retry();
           cout <<"How many time zones are there in Russia?\n"<<"1-10\n"<<"2-11\n"<<"3-12/n"<<"4-13\n";
           cin >>b;
          }
             if (b!=1&&b!=2&&b!=3&&b!=4){
            retry();
            r=1;
            }
            else
                r=0;
          }while(r!=0);
          if(b!=2)
           {False();
            break;}
          else
          {
            True ();
            d++;
            if (d==12){
                ywon ();
            break;}
            cout <<"the next question\n";
          }
          case 7 :do{inst ();
              cout <<"Who is the inventor of the web?\n"<<"1-Tim Berners-Lee\n"<<"2-Vincent van Gogh\n"<<"3-Oscar Wilde\n"<<"4-Michael Jackson\n";
            cin>>b;
            if (b==5&&e==0)
          {
              system("cls");
              cout <<"\n"<<"Who is the inventor of the web?\n"<<"1-Tim Berners-Lee\n"<<"2-Vincent van Gogh\n"<<"3-\n"<<"4-\n";
              cin >>b;
              e=1;
          }
          while (b==5&&e!=0){
           used();
           retry();
           cout <<"Who is the inventor of the web?\n"<<"1-Tim Berners-Lee\n"<<"2-Vincent van Gogh\n"<<"3-Oscar Wilde\n"<<"4-Michael Jackson\n";
           cin >>b;}
          if (b==6&&q==0)
          {
              cout <<"Public opinion :1-Tim Berners-Lee\n";
              cin >>b;
              q=1;
          }
          while (b==6&&q!=0)
          {
           used();
           retry();
           cout <<"Who is the inventor of the web?\n"<<"1-Tim Berners-Lee\n"<<"2-Vincent van Gogh\n"<<"3-Oscar Wilde\n"<<"4-Michael Jackson\n";
           cin >>b;
          }
            if (b!=1&&b!=2&&b!=3&&b!=4){
            retry();
            r=1;
            }
            else
                r=0;
          }while(r!=0);
          if(b!=1)
            {
                False();
              break;
              }
          else
          {
            True ();
            d++;
            if (d==12){
                ywon ();
            break;}
            cout <<"the next question\n";
          }

          case 8 :do{inst ();
              cout<<"How many valves are there in the heart muscle?\n"<<"1-2\n"<<"2-3\n"<<"3-4\n"<<"4-5\n";
              cin>>b;
               if (b==5&&e==0)
          {
              system("cls");
              cout <<"\n"<<"How many valves are there in the heart muscle?\n"<<"1-2\n"<<"2-\n"<<"3-4\n"<<"4-\n";
              cin >>b;
              e=1;
          }
          while (b==5&&e!=0){
           used();
           retry();
           cout <<"How many valves are there in the heart muscle?\n"<<"1-2\n"<<"2-3\n"<<"3-4\n"<<"4-5\n";
           cin >>b;}
          if (b==6&&q==0)
          {
              cout <<"Public opinion :3-4\n";
              cin >>b;
              q=1;
          }
          while (b==6&&q!=0)
          {
           used();
           retry();
           cout <<"How many valves are there in the heart muscle?\n"<<"1-2\n"<<"2-3\n"<<"3-4\n"<<"4-5\n";
           cin >>b;
          }
              if (b!=1&&b!=2&&b!=3&&b!=4){
            retry();
            r=1;
            }
            else
                r=0;
          }while(r!=0);
          if(b!=3)
            {False();
            break;}
          else
          {
            True ();
            d++;
            if (d==12){
                ywon ();
            break;}
            cout <<"the next question\n";
          }
          case 9 :do{inst ();
              cout<<"What is the name of the most powerful muscle in the human body?\n"<<"1-jaw\n"<<"2-the heart\n"<<"3-the nose\n"<<"4-Ears\n";
              cin>>b;
               if (b==5&&e==0)
          {
              system("cls");
              cout <<"\n"<<"What is the name of the most powerful muscle in the human body?\n"<<"1-jaw\n"<<"2-\n"<<"3-the nose\n"<<"4-\n";
              cin >>b;
              e=1;
          }
           while(b==5&&e!=0){
           used();
           retry();
           cout <<"What is the name of the most powerful muscle in the human body?\n"<<"1-jaw\n"<<"2-the heart\n"<<"3-the nose\n"<<"4-Ears\n";
           cin >>b;}
          if (b==6&&q==0)
          {
              cout <<"Public opinion :1-jaw\n";
              cin >>b;
              q=1;
          }
          while (b==6&&q!=0)
          {
           used();
           retry();
           cout <<"What is the name of the most powerful muscle in the human body?\n"<<"1-jaw\n"<<"2-the heart\n"<<"3-the nose\n"<<"4-Ears\n";
           cin >>b;
          }
              if (b!=1&&b!=2&&b!=3&&b!=4){
            retry();
            r=1;
            }
            else
                r=0;
          }while(r!=0);
          if(b!=1)
            {False();
            break;}
          else
          {
            True ();
            d++;
            if (d==12){
                ywon ();
            break;}
            cout <<"the next question\n";
          }
          case 10 :do{inst ();
              cout<<"How many elements does the periodic table contain?\n"<<"1-110\n"<<"2-118\n"<<"3-120\n"<<"4-130\n";
              cin>>b;
                if (b==5&&e==0)
          {
              system("cls");
              cout <<"\n"<<"How many elements does the periodic table contain?\n"<<"1-\n"<<"2-118\n"<<"3-120\n"<<"4-\n";
              cin >>b;
              e=1;
          }
          while (b==5&&e!=0){
           used();
           retry();
           cout <<"How many elements does the periodic table contain?\n"<<"1-110\n"<<"2-118\n"<<"3-120\n"<<"4-130\n";
           cin >>b;}
          if (b==6&&q==0)
          {
              cout <<"Public opinion :2-118\n";
              cin >>b;
              q=1;
          }
          while (b==6&&q!=0)
          {
           used();
           retry();
           cout <<"How many elements does the periodic table contain?\n"<<"1-110\n"<<"2-118\n"<<"3-120\n"<<"4-130\n";
           cin >>b;
          }
              if (b!=1&&b!=2&&b!=3&&b!=4){
            retry();
            r=1;
            }
            else
                r=0;
          }while(r!=0);

          if(b!=2)
            {
              False();
            break;}
          else
          {
            True ();
            d++;
            if (d==12){
                ywon ();
            break;}
            cout <<"the next question\n";
          }
           case 11 :do{inst ();
               cout<<"What color is produced by combining green and yellow?\n"<<"1-Lemmy\n"<<"2-grean\n"<<"3-yellow\n"<<"4-black\n";
              cin>>b;
               if (b==5&&e==0)
          {
              system("cls");
              cout <<"\n"<<"What color is produced by combining green and yellow?\n"<<"1-Lemmy\n"<<"2-\n"<<"3-\n"<<"4-black\n";
              cin >>b;
              e=1;
          }
          while (b==5&&e!=0){
           used();
           retry();
           cout <<"What color is produced by combining green and yellow?\n"<<"1-Lemmy\n"<<"2-grean\n"<<"3-yellow\n"<<"4-black\n";
           cin >>b;}
          if (b==6&&q==0)
          {
              cout <<"Public opinion :1-Lemmy\n";
              cin >>b;
              q=1;
          }
          while (b==6&&q!=0)
          {
           used();
           retry();
           cout <<"What color is produced by combining green and yellow?\n"<<"1-Lemmy\n"<<"2-grean\n"<<"3-yellow\n"<<"4-black\n";
           cin >>b;
          }
              if (b!=1&&b!=2&&b!=3&&b!=4){
            retry();
            r=1;
            }
            else
                r=0;
          }while(r!=0);
          if(b!=1)
            {
               False();
            break;}
          else
          {
            True ();
            d++;
            if (d==12){
                ywon ();
            break;}
            cout <<"the next question\n";
          }
           case 12 :do{inst ();
               cout<<"How many medals did China win at the Beijing Olympics?\n"<<"1-500\n"<<"2-400\n"<<"3-150\n"<<"4-100\n";
              cin>>b;
                if (b==5&&e==0)
          {
              system("cls");
              cout <<"\n"<<"How many medals did China win at the Beijing Olympics?\n"<<"1-\n"<<"2-400\n"<<"3-\n"<<"4-100\n";
              cin >>b;
              e=1;
          }
          while (b==5&&e!=0){
           used();
           retry();
           cout <<"How many medals did China win at the Beijing Olympics?\n"<<"1-500\n"<<"2-400\n"<<"3-150\n"<<"4-100\n";
           cin >>b;}
          if (b==6&&q==0)
          {
              cout <<"Public opinion :4-100\n";
              cin >>b;
              q=1;
          }
          while (b==6&&q!=0)
          {
           used();
           retry();
           cout <<"How many medals did China win at the Beijing Olympics?\n"<<"1-500\n"<<"2-400\n"<<"3-150\n"<<"4-100\n";
           cin >>b;
          }
              if (b!=1&&b!=2&&b!=3&&b!=4){
            retry();
            r=1;
            }
            else
                r=0;
          }while(r!=0);
          if(b!=4)
            {
              False();
            break;}
          else
          {
            True ();
            d++;
            if (d==12){
                ywon ();
            break;}
            cout <<"the next question\n";
          }
            case 13 :do{inst ();
                cout<<"How long is a marathon?\n"<<"1-40.5\n"<<"2-42.16\n"<<"3-45.21\n"<<"4-52.16\n";
              cin>>b;
                if (b==5&&e==0)
          {
              system("cls");
              cout <<"\n"<<"How long is a marathon?\n"<<"1-\n"<<"2-42.16\n"<<"3-\n"<<"4-52.16\n";
              cin >>b;
              e=1;
          }
          while (b==5&&e!=0){
           used();
           retry();
           cout <<"How long is a marathon?\n"<<"1-40.5\n"<<"2-42.16\n"<<"3-45.21\n"<<"4-52.16\n";
           cin >>b;}
          if (b==6&&q==0)
          {
              cout <<"Public opinion :2-42.16\n";
              cin >>b;
              q=1;
          }
          while (b==6&&q!=0)
          {
           used();
           retry();
           cout <<"How long is a marathon?\n"<<"1-40.5\n"<<"2-42.16\n"<<"3-45.21\n"<<"4-52.16\n";
           cin >>b;
          }
              if (b!=1&&b!=2&&b!=3&&b!=4){
            retry();
            r=1;
            }
            else
                r=0;
          }while(r!=0);
          if(b!=2)
            {
             False();
            break;}
          else
          {
            True ();
             d++;
            if (d==12){
                ywon ();
            break; }
            cout <<"the next question\n";
          }
           case 14 :do{inst ();
               cout<<"How many players are on a baseball team?\n"<<"1-11\n"<<"2-10\n"<<"3-8\n"<<"4-9\n";
              cin>>b;
                if (b==5&&e==0)
          {
              system("cls");
              cout<<"\n"<<"How many players are on a baseball team?\n"<<"1-\n"<<"2-\n"<<"3-8\n"<<"4-9\n";
              cin >>b;
              e=1;
          }
          while (b==5&&e!=0){
           used();
           retry();
           cout <<"How many players are on a baseball team?\n"<<"1-11\n"<<"2-10\n"<<"3-8\n"<<"4-9\n";
           cin >>b;}
          if (b==6&&q==0)
          {
              cout <<"Public opinion :4-9\n";
              cin >>b;
              q=1;
          }
          while (b==6&&q!=0)
          {
          used();
           retry();
           cout <<"How many players are on a baseball team?\n"<<"1-11\n"<<"2-10\n"<<"3-8\n"<<"4-9\n";
           cin >>b;
          }
              if (b!=1&&b!=2&&b!=3&&b!=4){
            retry();
            r=1;
            }
            else
                r=0;
          }while(r!=0);
          if(b!=4)
            {
             False();
            break;}
          else
          {
            True ();
            d++;
            if (d==12){
                ywon ();
            break;}
            cout <<"the next question\n";
          }
           case 15 :do{inst ();
               cout<<"Who is the inventor of the car?"<<"1-Whitney Houston\n"<<"2-Friedrich Nietzsche\n"<<"3-Nicholas Joseph\n"<<"4-Michael Jackson\n";
              cin>>b;
                if (b==5&&e==0)
          {
              system("cls");
              cout<<"\n"<<"Who is the inventor of the car?"<<"1-\n"<<"2-Friedrich Nietzsche\n"<<"3-Nicholas Joseph\n"<<"4-\n";
              cin >>b;
              e=1;
          }
          while (b==5&&e!=0){
           used();
           retry();
           cout <<"Who is the inventor of the car?"<<"1-Whitney Houston\n"<<"2-Friedrich Nietzsche\n"<<"3-Nicholas Joseph\n"<<"4-Michael Jackson\n";
           cin >>b;}
          if (b==6&&q==0)
          {
              cout <<"Public opinion :2-Friedrich Nietzsche\n";
              cin >>b;
              q=1;
          }
          while (b==6&&q!=0)
          {
           used();
           retry();
           cout <<"Who is the inventor of the car?"<<"1-Whitney Houston\n"<<"2-Friedrich Nietzsche\n"<<"3-Nicholas Joseph\n"<<"4-Michael Jackson\n";
           cin >>b;
          }
              if (b!=1&&b!=2&&b!=3&&b!=4){
            retry();
            r=1;
            }
            else
                r=0;
          }while(r!=0);
          if(b!=3)
            {
              False();
            break;}
          else
          {
           True ();
            d++;
            if (d==12){
                ywon ();
            break;}
            cout <<"the next question\n";
          }
           case 16 :do{inst ();
               cout<<"What is the closest planet to the sun among the planets in the solar system?\n"<<"1-Planet Mercury\n"<<"2-Venus\n"<<"3-Planet Earth\n"<<"4-Jupiter\n";
              cin>>b;
                if (b==5&&e==0)
          {
              system("cls");
              cout<<"\n"<<"What is the closest planet to the sun among the planets in the solar system?\n"<<"1-Planet Mercury\n"<<"2-Venus\n"<<"3-\n"<<"4-\n";
              cin >>b;
              e=1;
          }
          while (b==5&&e!=0){
           used();
           retry();
           cout <<"What is the closest planet to the sun among the planets in the solar system?\n"<<"1-Planet Mercury\n"<<"2-Venus\n"<<"3-Planet Earth\n"<<"4-Jupiter\n";
           cin >>b;}
          if (b==6&&q==0)
          {
              cout <<"Public opinion :1-Planet Mercury\n";
              cin >>b;
              q=1;
          }
          while (b==6&&q!=0)
          {
           used();
           retry();
           cout <<"What is the closest planet to the sun among the planets in the solar system?\n"<<"1-Planet Mercury\n"<<"2-Venus\n"<<"3-Planet Earth\n"<<"4-Jupiter\n";
           cin >>b;
          }
              if (b!=1&&b!=2&&b!=3&&b!=4){
            retry();
            r=1;
            }
            else
                r=0;
          }while(r!=0);
          if(b!=1)
            {
             False();
            break;}
          else
          {
            True ();
            d++;
            if (d==12){
                ywon ();
            break;}

          }
           case 17 :do{inst ();
               cout<<"Who is the artist who painted the Mona Lisa?\n"<<"1-Wolfgang Amadeus Mozart\n"<<"2-Friedrich Nietzsche\n"<<"3-William Blake\n"<<"4-Leonardo Da Vinci\n";
              cin>>b;
                if (b==5&&e==0)
          {
              system("cls");
              cout<<"\n"<<"Who is the artist who painted the Mona Lisa?\n"<<"1-\n"<<"2-\n"<<"3-William Blake\n"<<"4-Leonardo Da Vinci\n";
              cin >>b;
              e=1;
          }
          while (b==5&&e!=0){
           used();
           retry();
           cout <<"Who is the artist who painted the Mona Lisa?\n"<<"1-Wolfgang Amadeus Mozart\n"<<"2-Friedrich Nietzsche\n"<<"3-William Blake\n"<<"4-Leonardo Da Vinci\n";
           cin >>b;}
          if (b==6&&q==0)
          {
              cout <<"Public opinion :4-Leonardo Da Vinci\n";
              cin >>b;
              q=1;
          }
          while (b==6&&q!=0)
          {
           used();
           retry();
           cout <<"Who is the artist who painted the Mona Lisa?\n"<<"1-Wolfgang Amadeus Mozart\n"<<"2-Friedrich Nietzsche\n"<<"3-William Blake\n"<<"4-Leonardo Da Vinci\n";
           cin >>b;
          }
              if (b!=1&&b!=2&&b!=3&&b!=4){
            retry();
            r=1;
            }
            else
                r=0;
          }while(r!=0);
          if(b!=4)
            {
             False();
            break;}
          else
          {
            True ();
            d++;
            if (d==12){
                ywon ();
            break;}
          }
          cout <<"the next question\n";
           case 18 :do{inst ();
               cout<<"Which animal has the strongest bite among mammals?\n"<<"1-lion\n"<<"2-tiger\n"<<"3-hippopotamus\n"<<"4-Cheetah\n";
              cin>>b;
               if (b==5&&e==0)
          {
              system("cls");
              cout<<"\n"<<"Which animal has the strongest bite among mammals?\n"<<"1-lion\n"<<"2-\n"<<"3-hippopotamus\n"<<"4-\n";
              cin >>b;
              e=1;
          }
          while (b==5&&e!=0){
           used();
           retry();
           cout <<"Which animal has the strongest bite among mammals?\n"<<"1-lion\n"<<"2-tiger\n"<<"3-hippopotamus\n"<<"4-Cheetah\n";
           cin >>b;}
          if (b==6&&q==0)
          {
              cout <<"Public opinion :3-hippopotamus\n";
              cin >>b;
              q=1;
          }
          while (b==6&&q!=0)
          {
           used();
           retry();
           cout <<"Which animal has the strongest bite among mammals?\n"<<"1-lion\n"<<"2-tiger\n"<<"3-hippopotamus\n"<<"4-Cheetah\n";
           cin >>b;
          }
              if (b!=1&&b!=2&&b!=3&&b!=4){
            retry();
            r=1;
            }
            else
                r=0;
          }while(r!=0);
          if(b!=3)
            {
              False();
            break;}
          else
          {
            True ();
            d++;
            if (d==12){
                ywon ();
            break;}
          }
          cout <<"the next question\n";
           case 19 :do{inst ();
               cout<<"What is the fastest animal in the world?\n"<<"1-tiger\n"<<"2-lion\n"<<"3-hippopotamus\n"<<"4-Cheetah\n";
              cin>>b;
               if (b==5&&e==0)
          {
              system("cls");
              cout<<"\n"<<"What is the fastest animal in the world?\n"<<"1-tiger\n"<<"2-\n"<<"3-\n"<<"4-Cheetah\n";
              cin >>b;
              e=1;
          }
          while (b==5&&e!=0){
           used();
           retry();
           cout <<"What is the fastest animal in the world?\n"<<"1-tiger\n"<<"2-lion\n"<<"3-hippopotamus\n"<<"4-Cheetah\n";
           cin >>b;}
          if (b==6&&q==0)
          {
              cout <<"Public opinion :4-Cheetah\n";
              cin >>b;
              q=1;
          }
          while (b==6&&q!=0)
          {
           used();
           retry();
           cout <<"What is the fastest animal in the world?\n"<<"1-tiger\n"<<"2-lion\n"<<"3-hippopotamus\n"<<"4-Cheetah\n";
           cin >>b;
          }
              if (b!=1&&b!=2&&b!=3&&b!=4){
            retry();
            r=1;
            }
            else
                r=0;
          }while(r!=0);
          if(b!=4)
            {
             False();
            break;}
          else
          {
            True ();
            d++;
            if (d==12){
                ywon ();
            break;}
          }
          cout <<"the next question\n";

           case 20 :do{inst ();
               cout<<"What is the bravest animal according to the Guinness Book of World Records?\n"<<"1-lion\n"<<"2-Honey badger\n"<<"3-tiger\n"<<"4-Gorilla\n";
              cin>>b;
               if (b==5&&e==0)
          {
              system("cls");
              cout<<"\n"<<"What is the bravest animal according to the Guinness Book of World Records?\n"<<"1-\n"<<"2-Honey badger\n"<<"3-\n"<<"4-Gorilla\n";
              cin >>b;
              e=1;
          }
          while (b==5&&e!=0){
           used();
           retry();
           cout <<"What is the bravest animal according to the Guinness Book of World Records?\n"<<"1-lion\n"<<"2-Honey badger\n"<<"3-tiger\n"<<"4-Gorilla\n";
           cin >>b;}

          if (b==6&&q==0)
          {
              cout <<"Public opinion :2-Honey badger\n";
              cin >>b;
              q=1;
          }
          while (b==6&&q!=0)
          {
          used();
           retry();
           cout <<"What is the bravest animal according to the Guinness Book of World Records?\n"<<"1-lion\n"<<"2-Honey badger\n"<<"3-tiger\n"<<"4-Gorilla\n";
           cin >>b;
          }
              if (b!=1&&b!=2&&b!=3&&b!=4){
            retry();
            r=1;
            }
            else
                r=0;
          }while(r!=0);
          if(b!=2)
            {
              False();
            break;}
          else
          {
            True ();
            d++;
            if (d==12){
                ywon ();
                break;}
          }
          cout <<"the next question\n";

           case 21 :do{inst ();
               cout<<"What Is The Capital Of Palestine?\n"<<"1-Elkods Elsharif\n";
              cin>>b;
              if (b!=1){
            system("cls");
    cout <<"\n"<<"\n"<<"\n"<<"\n";
    cout<<"                                    -------------------------\n";
    cout<<"                                    | are you a zionism?!!! |\n";
    cout<<"                                    -------------------------\n";
    Sleep(2000);
    system("cls");
    cout <<"try again\n";
            r=1;
            }
            else
                r=0;
          }while(r!=0);
          if(b!=1)
            {
             False();
            break;}
          else
          {
            True ();
            system("cls");
            cout <<"                             -----------------------\n";
            cout <<"                             | Long live Palestine |\n";
            cout <<"                             -----------------------\n";
            Sleep(3000);
            system("cls");
            d++;
            if (d==12){
                ywon ();
            break;}
          }

          cout <<"the next question\n";
           case 22 :do{inst ();
               cout<<"How many Surah are there in the Holy Qur'an??\n"<<"1-120\n"<<"2-115\n"<<"3-114\n"<<"4-116\n";
              cin>>b;
                if (b==5&&e==0)
          {
              system("cls");
              cout<<"\n"<<"How many Surah are there in the Holy Qur'an??\n"<<"1-\n"<<"2-\n"<<"3-114\n"<<"4-116\n";
              cin >>b;
              e=1;
          }
          while (b==5&&e!=0){
           used();
           retry();
           cout <<"How many Surah are there in the Holy Qur'an??\n"<<"1-120\n"<<"2-115\n"<<"3-114\n"<<"4-116\n";
           cin >>b;}
          if (b==6&&q==0)
          {
              cout <<"Public opinion :3-114\n";
              cin >>b;
              q=1;
          }
          while (b==6&&q!=0)
          {
           used();
           retry();
           cout <<"How many Surah are there in the Holy Qur'an??\n"<<"1-120\n"<<"2-115\n"<<"3-114\n"<<"4-116\n";
           cin >>b;
          }
              if (b!=1&&b!=2&&b!=3&&b!=4){
            retry();
            r=1;
            }
            else
                r=0;
          }while(r!=0);
          if(b!=3)
            {
            False();
            break;}
          else
          {
            True ();
            d++;
            if (d==12){
                ywon ();
            break;}
          }
          cout <<"the next question\n";
           case 23 :do{inst ();
               cout<<"How many years did it take for the Holy Quran to be revealed?\n"<<"1-25\n"<<"2-23\n"<<"3-22\n"<<"4-21\n";
              cin>>b;
                if (b==5&&e==0)
          {
              system("cls");
              cout<<"\n"<<"How many years did it take for the Holy Quran to be revealed?\n"<<"1-\n"<<"2-23\n"<<"3-\n"<<"4-21\n";
              cin >>b;
              e=1;
          }
          while (b==5&&e!=0){
           used();
           retry();
           cout <<"How many years did it take for the Holy Quran to be revealed?\n"<<"1-25\n"<<"2-23\n"<<"3-22\n"<<"4-21\n";
           cin >>b;}
          if (b==6&&q==0)
          {
              cout <<"Public opinion :2-23\n";
              cin >>b;
              q=1;
          }
          while (b==6&&q!=0)
          {
           used();
           retry();
           cout <<"How many years did it take for the Holy Quran to be revealed?\n"<<"1-25\n"<<"2-23\n"<<"3-22\n"<<"4-21\n";
           cin >>b;
          }
              if (b!=1&&b!=2&&b!=3&&b!=4){
            retry();
            r=1;
            }
            else
                r=0;
          }while(r!=0);
          if(b!=2)
            {
            False();
            break;}
          else
          {
            True ();
            d++;
            if (d==12){
                ywon ();
            break;}
          }
          cout <<"the next question\n";
           case 24 :do{inst ();
               cout<<"How old was the Prophet - may God bless him and grant him peace - when the message was sent down to him, in years??\n"<<"1-40\n"<<"2-50\n"<<"3-41\n"<<"4-51\n";
              cin>>b;
                if (b==5&&e==0)
          {
              system("cls");
              cout<<"\n"<<"How old was the Prophet - may God bless him and grant him peace - when the message was sent down to him, in years??\n"<<"1-40\n"<<"2-\n"<<"3-41\n"<<"4-\n";
              cin >>b;
              e=1;
          }
          while (b==5&&e!=0){
           used();
           retry();
           cout <<"How old was the Prophet - may God bless him and grant him peace - when the message was sent down to him, in years??\n"<<"1-40\n"<<"2-50\n"<<"3-41\n"<<"4-51\n";
           cin >>b;}
          if (b==6&&q==0)
          {
              cout <<"Public opinion :1-40\n";
              cin >>b;
              q=1;
          }
          while (b==6&&q!=0)
          {
           used();
           retry();
           cout <<"How old was the Prophet - may God bless him and grant him peace - when the message was sent down to him, in years??\n"<<"1-40\n"<<"2-50\n"<<"3-41\n"<<"4-51\n";
           cin >>b;
          }
              if (b!=1&&b!=2&&b!=3&&b!=4){
            retry();
            r=1;
            }
            else
                r=0;
          }while(r!=0);
          if(b!=1)
            {
             False();
            break;}
          else
          {
            True ();
            d++;
            if (d==12){
                ywon ();
            break;}
          }
          cout <<"the next question\n";
           case 25 :do{inst ();
               cout<<"When was fasting imposed on Muslims (in the Hijri years)?\n"<<"1-2\n"<<"2-3\n"<<"3-4\n"<<"4-5\n";
              cin>>b;
                if (b==5&&e==0)
          {
              system("cls");
              cout<<"\n"<<"When was fasting imposed on Muslims (in the Hijri years)?\n"<<"1-2\n"<<"2-3\n"<<"3-\n"<<"4-\n";
              cin >>b;
              e=1;
          }
          while (b==5&&e!=0){
           used();
           retry();
           cout <<"When was fasting imposed on Muslims (in the Hijri years)?\n"<<"1-2\n"<<"2-3\n"<<"3-4\n"<<"4-5\n";
           cin >>b;}
          if (b==6&&q==0)
          {
              cout <<"Public opinion :1-2\n";
              cin >>b;
              q=1;
          }
          while (b==6&&q!=0)
          {
           used();
           retry();
           cout <<"When was fasting imposed on Muslims (in the Hijri years)?\n"<<"1-2\n"<<"2-3\n"<<"3-4\n"<<"4-5\n";
           cin >>b;
          }
              if (b!=1&&b!=2&&b!=3&&b!=4){
            retry();
            r=1;
            }
            else
                r=0;
          }while(r!=0);
          if(b!=1)
            {
            False();
            break;}
          else
          {
            True ();
            d++;
            if (d==12){
                ywon ();
            break;}
          }
          cout <<"the next question\n";

           case 26 :do{inst ();
               cout<<"What is the capital of Algeria?\n"<<"1-Algeria\n"<<"2-cairo\n"<<"3-Kuwait\n"<<"4-Beirut\n";
              cin>>b;
                if (b==5&&e==0)
          {
              system("cls");
              cout<<"\n"<<"What is the capital of Algeria?\n"<<"1-Algeria\n"<<"2-\n"<<"3-\n"<<"4-Beirut\n";
              cin >>b;
              e=1;
          }
          while (b==5&&e!=0){
           used();
           retry();
           cout <<"What is the capital of Algeria?\n"<<"1-Algeria\n"<<"2-cairo\n"<<"3-Kuwait\n"<<"4-Beirut\n";
           cin >>b;}
          if (b==6&&q==0)
          {
              cout <<"Public opinion :1-Algeria\n";
              cin >>b;
              q=1;
          }
          while (b==6&&q!=0)
          {
           used();
           retry();
           cout <<"What is the capital of Algeria?\n"<<"1-Algeria\n"<<"2-cairo\n"<<"3-Kuwait\n"<<"4-Beirut\n";
           cin >>b;
          }
              if (b!=1&&b!=2&&b!=3&&b!=4){
            retry();
            r=1;
            }
            else
                r=0;
          }while(r!=0);
          if(b!=1)
            {
            False();
            break;}
          else
          {
            True ();
            d++;
            quiz(1);
            if (d==12){
                ywon ();
            break;}

          }
          cout <<"the next question\n";
          quiz(1);
    }
        }


    }
};


int main()
{
    cout <<"                              --------------------------------------------------\n";
    cout <<"                              | Welcome to the Geniuses program with Al-Fatihi |\n";
    cout <<"                              --------------------------------------------------\n";
    char n; //to start the game
        inst ();
        cout<<"do you want start?(y/n)\n";
        cin >>n;


    while(n!='n'){
            d=0; //to ywon
            m=0;
        system("cls");
    cout <<"                              --------------------------------------------------\n";
    cout <<"                              | Welcome to the Geniuses program with Al-Fatihi |\n";
    cout <<"                              --------------------------------------------------\n";
    quest q1;
    srand(time(0));
    q1.quiz(rand()%26+1);

    cout <<"do you want a new game(y/n)\n";
    cin >>n;
    }
}




