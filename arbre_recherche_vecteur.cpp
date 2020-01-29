#include <iostream>
#include <vector>
#include <memory>
#include <utility>
#include <list>


using namespace std;

/*std::vector<int> arbre(1000000000);
std::list<int> file;


int search(int val)
{
	int pos=0;
	while(1)
	{	if(pos>arbre.size())
			return 0;
		if(arbre[pos]==val)
			return 1;
		if(arbre[pos]>val){
			pos=pos*2+1;
			continue;
		}
		if(arbre[pos]<val)
			pos=pos*2+2;
	}
}


void add_val(int val)
{	int pos=0;
	if(search(val))
	{
		cout<<"existe deja"<<endl;
		return ;
	}
	while(1)
	{	
		if(arbre[pos]==0){
			arbre[pos]=val;
			return;
		}
		if(arbre[pos]>val){
			pos = pos * 2 + 1 ;
			if(pos>=arbre.size())
				arbre.resize(pos+1);
			cout<<pos<<endl;
		}
		else{
			pos = pos * 2 + 2 ;
			if(pos>=arbre.size	())
				arbre.resize(pos+1);
			cout<<pos<<endl;
		}
	}
}

void affiche(int i){
	if(i<arbre.size())
		{	
			affiche(2*i+1);
			if(arbre[i]!=0)
				cout<<arbre[i]<<endl;
			affiche(2*i+2);
		}
}
void parcour_largeur(int i){
	if(i>arbre.size() ||arbre[i]==0)
		return;
	file.push_back(i*2+1);
	file.push_back(i*2+2);
	cout<<i<<" : "<<arbre[i]<<endl;
	while(!file.empty())
	{   
		int val=file.front();
		file.pop_front();
		if(val==0)
			return;
		parcour_largeur(val);
	}
}
int main(int argc, char const *argv[])
{	/*
	add_val(10);
	add_val(2);
	add_val(-2);
	add_val(-20);
	add_val(3);
	add_val(100);
	add_val(200);
	add_val(90);	
	for (int i = 0; i < 200; ++i)
		{	if(i%2==0){
				add_val(i*2+3);
				cout<<"valeur pair ajouté "<<i<<"  :"<<i*2+3<<endl;
				}
			else{	
				add_val(i+1);
				cout<<"valeur pair ajouté "<<i<<"  :"<<i+1<<endl;

			}
		}	
	
	if(search(2))
		cout<<"trouve"<<endl;
	else
		cout<<"pas trouve"<<endl;
	affiche(0);
	cout<<"\n\n\n\n"<<endl;
	parcour_largeur(0);
	cout<<"taille est de "<<arbre.size()<<endl;
	cout<<"capacite est de "<<arbre.capacity()<<endl;
	*/
int main(int argc, char const *argv[])
{

	unsigned long long a=0;
	a--;
	cout<<a<<endl;
	return 0;

}