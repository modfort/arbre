#include <stdlib.h>
#include <stdio.h>
#define TAILLE 2

typedef struct arbre
{
	int val;
	struct arbre *Next[TAILLE]; 
}arbre;

arbre *tete;

void init(int val){
	tete=malloc(sizeof(arbre));
	tete->val=val;
	printf("element %d cree\n",val);
	tete->Next[0]=NULL;
	tete->Next[1]=NULL;
}

int search(arbre*t,int val)
{	

	while(t){	
		if(t->val==val){
			return 1;
		}
		if(val>t->val && t->Next[1])
			t=t->Next[1];
		else if(t->val>val && t->Next[0])	
			t=t->Next[0];
		else 
			return 0;

	}

}

void add(arbre*tete,int val)
{	if(!tete)
		init(val);
	else{	
		if(search(tete,val))
		{
			printf("already in\n");
			return;
		}
		arbre* nouvel_element;
		nouvel_element=malloc(sizeof(arbre));
		nouvel_element->val=val;
		nouvel_element->Next[0]=NULL;
		nouvel_element->Next[1]=NULL;
		while(tete)
		{	
			if(tete->val>val)
			{
				if(tete->Next[0])
					tete=tete->Next[0];
				else{
					printf("element %d cree\n",val);
					tete->Next[0]=nouvel_element;
					return;	
				}
			}
			else if (tete->val<val)
			{
				if(tete->Next[1])
					tete=tete->Next[1];
				else{
					printf("element %d cree\n",val);
					tete->Next[1]=nouvel_element;
					return;
				}
			}
		}
	}	
}
void affiche(arbre *t)
{
	if(t==NULL)
		return;
	if(t->Next[0])	affiche(t->Next[0]);
	printf("%d\n",t->val );
	if(t->Next[1])	affiche(t->Next[1]);

}

void clean(arbre *t)
{
	if(t==NULL)
		return;
		if(t->Next[0]) clean(t->Next[0]);
		if(t->Next[1]) clean(t->Next[1]);
	printf("a été effacé %d\n",t->val );
	free(t);
}
int nbr_element(arbre *tete){
	if(tete){
		 return 1 +  nbr_element(tete->Next[0])+nbr_element(tete->Next[1]);
		
	}
	return 0;
}
int main(int argc, char const *argv[])
{
	init(2);
	add(tete,1);
	add(tete,10);
	add(tete,3);
	add(tete,5);
	add(tete,11);
	printf("debut de recherche\n");
	
	
	for (int i = 0; i < atoi(argv[1]); ++i)
		{	if(i%2==0){
				add(tete,i*2+3);
				printf("valeur pair ajouté %d : %d\n", i,i*2+3);
				}
			else{	
				add(tete,i+1);
				printf("valeur impair ajouté %d : %d\n", i,i+1);

			}
		}	
	printf("nombre element %d\n",nbr_element(tete) );
	affiche(tete);
	clean(tete);
	return 0;
}