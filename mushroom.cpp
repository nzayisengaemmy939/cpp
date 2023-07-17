#include<iostream>
using namespace std;
int main()
{
 string answer;
cout<<"does your mushroom have gills?\n";
cin>>answer;
if(answer=="no")
{
 cout<<"your mushroom is cepe de bordeau\n";
 }
 else
 {
 	cout<<"does your mushroom grow in forest?\n"; 
cin>>answer;
if(answer=="no")
{
cout<<"does your mushroom have convex cup?\n";
cin>>answer;	
if(answer=="yes")
{
	cout<<"agaric jounesant\n";
}
else
{
	cout<<"coplin\n";
}
}
else
{
cout<<"does your convex cup?\n";
cin>>answer;
if(answer=="no")
{
	cout<<"girolle\n";
}
else
{
cout<<"does your mushroom have ring?\n";
cin>>answer;
if(answer=="yes")
{
	cout<<"your mushroom is amanite \n";
}
else
{
	cout<<"your mushroom is pied bleu\n";
}
}
}
}
return 0;
}
