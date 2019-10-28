#include<bits/stdc++.h>
using namespace std;
#define ine 9999999
int main()
{

    int d[5][5]={0,ine,ine,ine,ine,
                 ine,0,ine,ine,ine,
                 ine,ine,0,ine,ine,
                 ine,ine,ine,0,ine,
                 ine,ine,ine,ine,0};
    fstream file;
    file.open("edge.txt",ios::in);
    int a,b,c;
    while(file>>a>>b>>c)
    {   cout<<a<<" "<<b<<" "<<c<<endl;
        d[a-1][b-1]=c;
    }
    int p[5][5];

    //*** initializing predessesor matrix **********
    for(int x=0;x<5;x++)
    {
        for(int y=0;y<5;y++)
        {

            if(d[x][y]==0||d[x][y]==ine)p[x][y]=0;
            else p[x][y]=x+1;
        }
    }

//main floyed warshell algorithm
 for(int x=0;x<5;x++)
    {
        for(int y=0;y<5;y++)
        {

            for(int z=0;z<5;z++)
            {

                if(d[y][z]>d[y][x]+d[x][z])
                {
                  d[y][z]=d[y][x]+d[x][z] ;
                  p[y][z]=p[x][z];
                }
            }
        }


        cout<<"D matrix("<<x+1<<") is : \n";
        for(int y=0;y<5;y++)
        {

            for(int z=0;z<5;z++)
            {

               if(d[y][z]==ine)
                cout<<"INF ";
               else
               cout<<" "<<d[y][z]<<" ";
            }
           cout<<endl;
       }


        cout<<"Predesessor matrix("<<x+1<<") is : \n";

         for(int y=0;y<5;y++)
        {

            for(int z=0;z<5;z++)
            {


              cout<<p[y][z]<<" ";
                          }

         cout<<endl;
        }
    }



}
