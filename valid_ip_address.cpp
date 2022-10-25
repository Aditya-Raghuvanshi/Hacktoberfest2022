#include<iostream>
#include<string.h>
#include<stdlib.h>

int main()
{
    char ip[3][20]={"12.13.14.15","131.111.321.123","1.123.3.4"};
    int i,count=-1;
    char* p;
    for(i=0;i<3;i++)
    {
        count=-1;
        p=strtok(ip[i],".");
        while(p!=NULL)
        {
            int x= atoi(p);
            if(x>=0&&x<=255)
            {
                count++;
            }    
            cout<<x;
            p=strtok(NULL,".");
        }
        if(count==3)
        {
            cout<<"valid"<<endl; 
        }  
        else
            cout<<"NOt valid"<<endl;  
    }

    return 0;
}
