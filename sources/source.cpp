// Copyright 2018 Your Name <your_email>

#include <header.hpp>

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

int sub(int a ,int b)
{
    int c = a - b;
    return c;
}

int mult(int a, int b)
{
    int c = a * b;
    return c;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a,b,c;
        cin>>a>>b>>c;
        if(a == 1)
            cout<<sum(b,c);
        if(a==2)
            cout<<sub(b,c);
        if(a==3)
            cout<<mult(b,c);
    }
}

