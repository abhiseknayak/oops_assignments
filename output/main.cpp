#include<iostream>
#include<cstring>
using namespace std;


class strin
{
    char s1[100];
public:
    void get_string();
    void show_string();
    static int comp_string(strin,strin);
};


void strin::get_string() {
    cout<<"enter the string :";
    cin>>s1;
}

void strin::show_string() {
    cout<<s1<<'\n';
}

int strin::comp_string(strin a, strin b)
{
    int flag=1;
    int i;
    if(strlen(a.s1)!=strlen(b.s1))
        return -1;
    else
    {
        for(i=0;i<strlen(a.s1);i++)
        {
            if(a.s1[i]==b.s1[i])
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            return 1;
        else
            return -1;
    }
}


int main()
{
    int val;
    strin one,two;
    one.get_string();
    two.get_string();
    one.show_string();
    two.show_string();
    val=strin::comp_string(one,two);
    if(val==1)
        cout<<"the strings are equal\n";
    else
        cout<<"the strings are not equal\n";
    return 0;
}
