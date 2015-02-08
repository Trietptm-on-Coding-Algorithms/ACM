/* strtok example */
#include <stdio.h>
#include <conio.h>
#include <string.h>

int checksum(char* s) {
  int i;
  int chk = 0x12345678;

  for (i = 0; s[i] != '\0'; i++) {
    chk += ((int)(s[i]) * (i + 1));
  }

  return chk;
}
int main()
{
  char *data[100], *dic[100];
  int n,m;
  char str[] ="ability, absence, actions, amazing, believe, browser, caption, captive, ceiling, degrees, denizen, develop, examine, example, exploit, fifteen, focused, fortune, forward, garbage, gasping, graphic, handgun, hastily, helpful, iceberg, impeach, inspect, jawbone, justify, keyword, kickoff, kneepad, lactose, latency, legible, madness, magical, manhunt, mission, nametag, nitrate, nowhere, officer, optical, outlook, oxidize, paradox, pathway, patient, payment, qualify, quality, quarrel, radical, railing, reduced, resolve, savings, sayings, scissor, shadows, tactics, teacher, terrify, tractor, unarmed, unmasks, updates, vaccine, valleys, walnuts, wealthy, whacked, willing, wizards, xysters, yielded, yoghurt, younger, zippers, zombies";
  char * pch;
  pch = strtok (str," ,.-");
  int k = -1;
  while (pch != NULL)
  {
    k++;
	dic[k] = pch;
    pch = strtok (NULL, " ,.-");
  }
  n = k;
	char str2[100];
	char *pch2;
	fflush(stdin);
  	printf ("\n> "); scanf("%[^\t\n]s",&str2);
	pch2 = strtok (str2," ,.-");
	int k2 = -1;
	while (pch2 != NULL)
	{
		k2++;
		data[k2] = pch2;
		pch2 = strtok (NULL, " ,.-");
	}
	m = k2;
	for (int i=0;i<=n;i++)
		for (int j=0;j<=m;j++)
			if (checksum(data[j]) == checksum(dic[i]))
				printf("%s, ",dic[i]); 
	printf("\n");
  return 0;
}
