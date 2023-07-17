#include<iostream>
int main()
{
	int st,end,i,am1=0,am2=0,am3=0,tam;
std::cout<<"enter starting time\n";
std::cin>>st;
std::cout<<"enter ending time\n";
std::cin>>end;
if((st<end)&&(end-st<=24)&&(st>=0)&&(st<=23)&&(end>=1)&&(end<=24))
{
	for(i=st;i<end;i++){
	   if(((i>=0)&&(i<7))||((i>=21)&&(i<24))){
	   	am1=am1+500;
	   }
	   else if(((i>=7)&&(i<14))||((i>=19)&&(i<21))){
	   	am2=am2+1000;
	   }
	   else{
	   	am3=am3+1500;
	   }}   
tam=am1+am2+am3;
std::cout<<"you will pay:"<<tam<<"\n";
}
else{
	std::cout<<"error invalid input";
}
return 0;
}
