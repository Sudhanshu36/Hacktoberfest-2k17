# A menu driven program to:
# i) Replace spaces with ‘*’ in a text file
# ii) Count the number of words starting with ‘a’/‘A’
# iii) Count the number of lines starting with ‘a’/’A’

#include <fstream.h>
#include <conio.h>
#include <string.h>
void main(){
clrscr();
cout<<"\n Press 1 to count the no. of words starting with 'a' or 'A'";
cout<<"\n Press 2 to count the no. of lines starting with 'a' or 'A'";
cout<<"\n Press 3 to replace all spaces with * \n";
int n;
cin>>n;
if(n==1){
fstream fin;
fin.open("test1.txt",ios::in);
char w[20];                      //word array
int ctr=0;
do{ fin>>w;
if(w[0]=='a' || w[0]=='A') ctr++;   //condition
}
while(!fin.eof());
 cout<<"No. of words: "<<ctr;       //output
 fin.close();
}
 if(n==2)
{
fstream fin;
fin.open("C:\\test1.txt",ios::in);
char line[100];
int ctr=0;
do{ fin.getline(line,80,'\n');
if(line[0]=='a' || line[0]=='A') ctr++;
}
while(!fin.eof());
 cout<<"No. of line: "<<ctr; fin.close();
}
 if(n==3)
{
 fstream fin;
fin.open("C:\\t.txt",ios::in | ios::out);
char ch;
 int a;
 do
{
 fin.get(ch);
 if(ch==' ')
{
 a=fin.tellp();
 fin.seekp(a-1,ios::beg);
fin.put('*');
 }
 }
while(!fin.eof());
cout<<"TASK SUCCESSFUL";
 fin.close();
 }
 getch();
}
