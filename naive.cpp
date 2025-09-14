#include<iostream>
#include<string>
using namespace::std;
int main()
{
for(int test=1;test<=4;test++)
{
    cout<<"Test case "<<test<<" : "<<endl;
    string pattern;
    string line="Hi i am rayyan";
    cout<<"Enter the word youre searching for: ";
    cin>>pattern;
    bool found=true;
    int j;

    for(int i=0;i<line.length();i++)
    {
        found=true;
        for(j=0; j<pattern.length()&&i+j<line.length()&&found;j++)
        {
            if(pattern[j]==line[i+j])
            {
                found=true;
                continue;
            }
            else
            {
                found=false;
                break;
            }
        }
        
        if(found)
        {
            cout<<"found at: "<< i<<endl;
            break;
        }
    } 
    if(!found)
    cout<<"Not found";
    
}
}