//bubble sort algorithm
//i will iterate from 0 to array length -1
//j will iterate from 0 to array length-1-i  ( this is because last element gets sorted i.e. max value)
//Have a flag to break out of the loop if there are no swap operations

#include<iostream>
using namespace std;

void Bubble(int A[],int n)
{
    int i,j,temp;

    for(i=0;i<n-1;i++)
    {
        int flag=0;
        for(j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
               temp = A[j];
               A[j]=A[j+1];
               A[j+1]=temp;
               flag=1; 
            }
        }
        if(flag==0){ 
        cout<<"ALREADY SORTED"<<endl;
        break;}
    }
}

int main()
{
    int myarray[] ={0,2,4,5,6,7,8,3,2,1};
    Bubble(myarray,10);
    for(int i=0;i<10;i++){
          cout<<myarray[i]<<endl;  
    }
    return 0;
}