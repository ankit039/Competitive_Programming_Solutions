/*
 program link:https://www.hackerearth.com/practice/algorithms/string-algorithm/string-searching/practice-problems/algorithm/lost-in-strings-11fa4a5d/
 */
package helloworld;

import java .util.Scanner;
public class HelloWorld {

    
    public static void main(String[] args) {
       
        Scanner sc=new Scanner(System.in);
    String str,d,str1=" ",str2,stra;
    String[] strArray1 = new String[1000000]; 
    int t,a,b,c,m=1,ans;
    str=sc.next();
    strArray1[0]=str;
    t=sc.nextInt();
    while(t-->=0)
    {
        a=sc.nextInt();
       
        
        if(a==1)
        {
            b=sc.nextInt();
        c=sc.nextInt();d=sc.next();
           for(int i=0;i<b-1;i++)
           {
               str1+=(strArray1[c-1].charAt(i));
           }
           str1=str1+d;
           strArray1[m]=str1;
           m++;
           str1="";
        }
        else if(a==2)
        { b=sc.nextInt();
        c=sc.nextInt();
            for(int i=0;i<b;i++)
            {
                str1=str1+(strArray1[c-1].charAt(i));
            }
            strArray1[m]=str1;
            m++;str1="";
        }
        else if(a==3)
        {
            b=sc.nextInt();
        c=sc.nextInt();
        d=sc.next();
            ans=d.length(); 
            for(int i=b-1;i<c;i++)
            {
             stra=strArray1[i].substring(0,ans+1); 
                if(stra.equals(d))
                        {
               
                    System.out.println("yes");
                }
                
                   
            }
             System.out.println("no");
        }
        
    }
    
    }
    
}

