class calci
{
int a,b,c;
public:
void add()
{
cout<<"Enter first no";
cin>>a;
cout<<"Enter second no";
cin>>b;
c=a+b;
cout<<"Addition="<<c;
 
}
void sub()
{
 cout<<"Enter 2 nos"
 cin>>a>>b;
 c=a-b;
 cout<<"subtraction="<<c;
}

};
int main()
{
calci c;
c.add();
c.sub();
return 0;

}
