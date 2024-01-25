#include <stdio.h>
struct date{
	int day;
	int month;
	int year;
};
struct Taches{
	char tache_name[100];
	char description[50];
	char priority[50];
	struct date tacheDate;
};

void add_tache(struct Taches tache[], int taille){
	for(int i=0; i < taille ;i++){
		printf("++ Votre tache: ");
        gets(tache[i].tache_name);

        printf("+ Description :\n");
        gets(tache[i].description);

        printf("+ Priorite:\n");
        gets(tache[i].priority);

        printf("+ Date :\n");
        scanf("%d/%d/%d", &tache[i].tacheDate.day, &tache[i].tacheDate.month, &tache[i].tacheDate.year);
        printf("\n");
	}
}

void Affichage(struct Taches tache[], int taille){
	for(int i=0; i<taille;i++){ 
		printf("Task %d: %s\n", i + 1, tache[i].tache_name);
		printf("\t-Description :%s\n",tache[i].description);
		printf("\t-Priorite :%s\n",tache[i].priority);
		printf("\t-Date :%d/%d/%d\n",tache[i].tacheDate.day,tache[i].tacheDate.month,tache[i].tacheDate.year);
		printf("\n");
	}
		
}

int main(){
	int taille = 2;
	struct Taches tache[50];
	add_tache(tache, taille);
	Affichage(tache, taille);
	
		
}
	

	


