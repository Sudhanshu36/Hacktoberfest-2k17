#This program appends the contents of a text file to another.
#include <fstream.h>
#include <conio.h>

void main(){
clrscr();
fstream fin,fout;
char ch;
fin.open("text1.txt",ios::in);   //file from the data is copied
fout.open("text2.txt",ios::app); //file to which changes are made

	while(!fin.eof()){      //loop to append
	fin.get(ch);
	fout.put(ch);
	}
cout<<"APPENDED SUCCESSFULLY";  //checkpoint
fin.close();
fout.close();                   //closing files
getch();
}
