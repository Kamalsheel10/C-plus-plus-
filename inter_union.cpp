#include <iostream>
using namespace std;
int main(){
    int set1[5],set2[5],set3[10],flag;
    int n=10;
    cout<<"FOR SET A"<<endl;
    for (int i = 1; i <= 5; i++)
    {
        cout<<"Enter for "<<i<<" element"<<endl;
        cin>>set1[i];
    }
    for (int i = 1; i <= 5; i++)
    {
        cout<<set1[i]<<"\t";
    }
    cout<<"\nFOR SET B"<<endl;
    for (int i = 1; i <= 5; i++)
    {
        cout<<"Enter for "<<i<<" element"<<endl;
        cin>>set2[i];
    }
    for (int i = 1; i <= 5; i++)
    {
        cout<<set2[i]<<"\t";
    }
    for(int i=1; i<=5; i++){
        set3[i]=set1[i];
    }
    for(int i=1; i<=5; i++){
        set3[i+5]=set2[i];
    }
    cout<<endl;
    for(int i=1; i<=10; i++){
        cout<<set3[i]<<"\t";
    }
    cout<<endl;
    cout<<"FOR UNION"<<endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i+1; j <= n; j++)
        {
                if(set3[i]==set3[j]){
                    for(int k=j; k<n; k++){
                        set3[k]=set3[k+1];
                    }
                    n--;
                    j--;
                }
        }
        
    }
    
    for (int i = 1; i <= n; i++)
    {
        cout<<set3[i]<<"\t";
    }

    cout<<endl<<"FOR INTERSECTION"<<endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if(set1[i]==set2[j]){
                cout<<set2[j]<<"\t";
            }
        }
        
    }
    
    
    return 0;
}