# include <iostream>
# include <fstream>
using namespace std;
int main()
{


fstream myfile ;
myfile.open("device.csv",ios::app);

string code[5];
string name[5];
double salary[5];
int i;int ent;

cout<<"ENTERING INTO THE FILE ."<<endl;
cout<<"How many do you want to add? ";
cin>>ent;
for (i=0;i<=ent;i++)
{
    cout<<"Enter the name of device :";
    cin>>name[i];
    cout<<"Enter the code  :";
    cin>>code[i];
    cout<<"Enter the price of the device :";
    cin>>salary[i];
    cout<<endl;
    cout<<endl;
}

cout<<"SAVING INTO THE FILE "<<endl;

for (i=0;i<=ent;i++)
{
cout<<endl;
    myfile<<" "<<name[i]<<" , "<<code[i]<<" , "<<salary[i]<<endl;;

}

myfile.close();
{
    if(!myfile.is_open())
    {
        cout<<"file is closed succesfully";
    }
}
system("pause");
}
