#include <stdio.h>
#define SolNum 3


typedef struct {
	char Wname[20];
	int bullet;
	float atk;
 }Weapon;

typedef struct {
	char name[20];
	int hp;
	Weapon wpn;
}Soldier;

void SetInfo(Soldier* s, char* filename);
void Display(Soldier* s);

main()
{
	Soldier sol[SolNum];
	SetInfo(sol, "file04.txt");
	Display(sol);
}

void SetInfo(Soldier* s, char* filename)
{
	FILE* fp;
	int i;
	if (fp = fopen(filename, "r")) {
		for (i = 0; i < SolNum; i++) {
			fscanf(fp, "%s%d%s%d%f", (s + i)->name, &(s + i)->hp, (s + i)->wpn.Wname, &(s + i)->wpn.bullet, &(s + i)->wpn.atk);
		}
		fclose(fp);
	}
	else printf("読み込みエラー\n");
	return;
}

void Display(Soldier* s)
{
	int i;
	for (i = 0; i < SolNum; i++) {
		printf("%s　体力：%d\n", (s + i)->name, (s + i)->hp);
		printf("武器：%s　弾数：%d　攻撃力：%.2f\n", (s + i)->wpn.Wname, (s + i)->wpn.bullet, (s + i)->wpn.atk);

	}
}