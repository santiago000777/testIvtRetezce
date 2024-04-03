#include <stdio.h>
#include <math.h>
#define SIZE	15



void ZretezeniDoJednoho1(char* pZ1, char* pZ2, char* pZ3) {
	int size1 = 0;
	int size2 = 0;
	int size3 = 0;
	while (pZ1[size1] != '\0') {
		size1++;
	}
	while (pZ2[size2] != '\0') {
		size2++;
	}
	while (pZ3[size3] != '\0') {
		size3++;
	}

	if (size3 < size1 + size2)
		return;
	for (int i = 0; i < size1; i++) {
		pZ3[i] = pZ1[i];
	}
	for (int i = size1; i < size1 + size2; i++) {
		pZ3[i] = pZ2[i - size1];
	}
	pZ3[size1 + size2] = '\0';
}

void ZretezeniDoJednoho2(char* pZ1, char* pZ2) {
	int size1 = 0;
	int size2 = 0;
	while (pZ1[size1] != '\0') {
		size1++;
	}
	while (pZ2[size2] != '\0') {
		size2++;
	}
	
	for (int i = size1; i < size1 + size2; i++) {
		pZ1[i] = pZ2[i - size1];
	}
	pZ1[size1 + size2] = '\0';
}

void ZdvojeniZnakuVedleSebe(char* pZ) {
	int size = 0;
	while (pZ[size] != '\0')
		size++;

	for (int i = 0; i < size; i++) {
		printf("%c", pZ[i]);
		printf("%c", pZ[i]);
	}
}

void Podretezec(char* pZ1, char* pZ2, int start, int end) {
	int size1 = 0;
	while (pZ1[size1] != '\0')
		size1++;

		// tvorba podretezce
	if (start >= 0 && start <= size1
		&& end >= 0 && end <= size1
		&& end >= start) {

		for (int i = start; i <= end; i++) {
			pZ2[i - start] = pZ1[i];
		}
		pZ2[end - start + 1] = '\0';
	}
}

int VyzkytPismena(char* pZ, char znak) {
	int size = 0;
	while (pZ[size] != '\0')
		size++;

	int poc = 0;
	for (int i = 0; i < size; i++) {
		if (pZ[i] == znak)
			poc++;
	}
	return poc;
}

void Pozpatku(char* pZ) {
	int size = 0;
	while (pZ[size] != '\0')
		size++;

	for (int i = size; i >= 0; i--) {
		printf("%c", pZ[i]);
	}
}

void Priklad7(char* pZ1, char* pZ2) {
	int size1 = 0;
	while (pZ1[size1] != '\0')
		size1++;

	for (int i = 0; i < size1; i++) {
		pZ2[i] = pZ1[i];
	}
	int k = size1;
	for (int i = (size1 * 2) - 1; i >= size1; i--) {
		pZ2[k] = pZ1[(i % size1)];
		k++;
	}
	pZ2[size1 * 2] = '\0';
}

void VymenaPismenaAZaH(char* pZ) {
	int size = 0;
	while (pZ[size] != '\0') {
		size++;
	}

	for (int i = 0; i < size; i++) {
		if (pZ[i] == 'a')
			pZ[i] = '*';
	}
	pZ[size] = '\0';
}

void Kopie(char* pZ1, char* pZ2) {
	int size1 = 0;
	while (pZ1[size1] != '\0')
		size1++;
	for (int i = 0; i < size1; i++) {
		pZ2[i] = pZ1[i];
	}
	pZ2[size1] = '\0';
}

void OpacnaKopie(char* pZ1, char* pZ2) {
	int size = 0;
	while (pZ1[size] != '\0')
		size++;
	for (int i = size - 1; i >= 0; i--) {
		pZ2[i] = pZ1[size - 1 - i];
	}
	pZ2[size] = '\0';
}

void Prohod(char* pZ) {
	int size = 0;
	while (pZ[size] != '\0')
		size++;
	char pom = pZ[0];
	pZ[0] = pZ[size - 1];
	pZ[size - 1] = pom;

}

void DoDvojkove(int cis, char* pZ) {
	int cislo = cis;
	int vys = 0;
	int poc = 0;
	int sum = 0;
	for (int i = 128; i >= 1; i /= 2) {
		vys *= 10;
		vys += cislo / i;
		cislo %= i;
		poc++;
	}

	for (int i = 8; i >= 0; i--) {
		int ch = (vys % 10) + 48;
		pZ[i] = (char)ch;
		vys /= 10;
	}
	pZ[9] = '\0';
}

void Priklad13(char* pZ1, char* pZ2, char* pZ3) {
	int size1 = 0;
	while (pZ1[size1] != '\0')
		size1++;
	int pos1 = 0;
	int pos2 = 0;
	for (int i = 0; i < size1; i++) {
		if ((char)pZ1[i] >= 65 && (char)pZ1[i] <= 90) {
			pZ3[pos1] = pZ1[i];
			pos1++;
		}
		else if ((char)pZ1[i] >= 97 && (char)pZ1[i] <= 122){
			pZ2[pos2] = pZ1[i];
			pos2++;
		}
	}
	pZ3[pos1] = '\0';
	pZ2[pos2] = '\0';
}

int JeSlozenZPismen(char* pZ) {
	int size = 0;
	while (pZ[size] != '\0')
		size++;
	for (int i = 0; i < size; i++) {
		if ((char)pZ[i] < 65 || (char)pZ[i] > 90
			&& (char)pZ[i] < 97 || (char)pZ[i] > 122) {
			return 0;
		}
	}
	return 1;
}

void Prikalad15(char* pZ) {
	int size = 0;
	while (pZ[size] != '\0')
		size++;
	char pom;
	for (int i = 0; i < size / 2; i++) {
		pom = pZ[i];
		pZ[i] = pZ[size - 1 - i];
		pZ[size - 1 - i] = pom;
	}
}

int Priklad16(char* pZ) {
	int size = 0;
	
	while (pZ[size] != '\0')
		size++;
	char* pomText[SIZE];
	char pom;
	int result = 0;
	for (int i = 0; i < size / 2; i++) {
		pom = pZ[i];
		pomText[i] = pZ[size - 1 - i];
		pomText[size - 1 - i] = pom;
		if (pomText[i] == pZ[i] && pomText[size - 1 - i] == pZ[size - 1 - i])
			result = 1;
		else
			result = 0;
	}

	return result;
}

void Priklad17(char* pZ) {
	int size = 0;
	while (pZ[size] != '\0')
		size++;
	
	for (int i = 0; i < size; i++) {
		if (pZ[i] >= 97 && pZ[i] <= 122) {
			printf("%c", pZ[i]);
			printf("%c", pZ[i]);
		}
		else
			printf("%c", pZ[i]);
	}
}

void Priklad18(char* pZ) {
	int size = 0;
	while (pZ[size] != '\0')
		size++;
	int rozdil = (int)'a' - (int)'A';

	for (int i = 0; i < size; i++) {
		if (pZ[i] >= 97 && pZ[i] <= 122) {
			int pom = (int)pZ[i] - rozdil;
			pZ[i] = (char)pom;
		}
	}
}

void Priklad19(char* pZ, char znak1, char znak2) {
	int size = 0;
	while (pZ[size] != '\0')
		size++;

	for (int i = 0; i < size; i++) {
		if (pZ[i] == znak1)
			pZ[i] = znak2;
	}
}

void Priklad20(char* pZ) {
	int size = 0;
	while (pZ[size] != '\0')
		size++;

	for (int i = 0; i < size; i++) {
		if ((int)pZ[i] >= 48 && (int)pZ[i] <= 57) {
			pZ[i] = '*';
		}
	}
}

void Priklad21(char* pZ) {
	int size = 0;
	while (pZ[size] != '\0')
		size++;

	for (int i = 1; i <= size; i++) {
		pZ[i - 1] = pZ[i];
	}
}

int Priklad22(char* pZ) {
	int size = 0;
	while (pZ[size] != '\0')
		size++;

	int result = 0;
	for (int i = 0; i < size; i++) {
		if ((int)pZ[i] >= 65 && (int)pZ[i] <= 90)
			result++;
	}
	return result;
}

int Priklad23(char* pZ) {
	int size = 0;
	while (pZ[size] != 0) {
		size++;
	}

	for (int i = 0; i < size; i++) {
		if (pZ[i] < 65 || pZ[i] > 90 && pZ[i] < 97 || pZ[i] > 122) {
			return 0;
		}
	}
	return 1;
}

void Priklad24(char* pZ, int sekvence, char znak1, char znak2) {
	int size = 0;
	while (pZ[size] != 0) {
		size++;
	}

	if (sekvence * 2 > size)
		sekvence = size;

	for (int i = 0; i < sekvence; i++) {
		if (i < sekvence / 2) {
			pZ[i] = znak1;
		}
		else
			pZ[i] = znak2;
	}
	pZ[sekvence] = '\0';
	printf("%s\n", pZ);

	for (int i = 0; i < sekvence; i++) {
		if (i % 2 == 0) {
			pZ[i] = znak1;
		}
		else
			pZ[i] = znak2;
	}
	pZ[sekvence] = '\0';
	printf("%s\n", pZ);

	for (int i = 0; i < sekvence; i+=3) {
		pZ[i] = znak1;
		pZ[i + 1] = znak2;
		pZ[i + 2] = znak2;
	}
	pZ[sekvence] = '\0';
	printf("%s\n", pZ);
}

int Priklad25(char* pZ) {
	int size = 0;
	while (pZ[size] != '\0')
		size++;

	int maxIndex = 0;
	int maxHodnota = (char)pZ[0];

	for (int i = 1; i < size; i++) {
		if((char)pZ[i] > maxHodnota)
		{
			maxHodnota = (char)pZ[i];
			maxIndex = i;
		}
	}

	return maxIndex;
}

int main() {
		//1. Napište funkci, která vezme dva řetězce A a B. Zřetězí je do třetího řetězce C.
	/*
	char retezecA[SIZE], retezecB[SIZE], retezecC[2*SIZE];
	printf("Zadej dva retezce:\n");
	scanf_s("%s", retezecA, 14);
	scanf_s("%s", retezecB, 14);

	ZretezeniDoJednoho1(retezecA, retezecB, retezecC);

	printf("%s", retezecC);
	*/

		//2. Napište funkci, která vezme dva řetězce A a B a zřetězí je, ale do A.
	/*char retezecA[SIZE * 2], retezecB[SIZE], retezecC[2 * SIZE];
	printf("Zadej dva retezce:\n");
	scanf_s("%s", retezecA, 14);
	scanf_s("%s", retezecB, 14);

	ZretezeniDoJednoho2(retezecA, retezecB);

	printf("%s", retezecA);*/

		//3. Napište funkci, která vezme řetězec a vypíše ho tak, že každý znak zdvojí. Př. A = "Ahoj", výstup: AAhhoojj.
	/*char retezecA[SIZE];
	printf("Zadej retezc:\n");
	scanf_s("%s", retezecA, 14);
	ZdvojeniZnakuVedleSebe(retezecA);*/

		// 4. Napište funkci , která vezme řetězec a vytiskne z něj podřetězec, který určíte pomocí parametru a) pozice, od které se má tisknout, b) počet znaků.
	/*char retezecA[SIZE * 2], retezecB[SIZE];
	printf("Zadej retezc:\n");
	scanf_s("%s", retezecA, 29);
	Podretezec(retezecA, retezecB, 2, 7);

	printf("%s", retezecB);*/

		// 5. Napište funkci, která vezme řetězec a znak z a vrátí počet výskytů daného znaku z.
	/*char retezecA[SIZE];
	printf("Zadej retezc:\n");
	scanf_s("%s", retezecA, 14);
	printf("Jaky znak hledate\n");
	char znak;
	scanf_s(" %c", &znak);

	printf("V retezci ""%s"" se vyzkytuje %d zadanych pismen : %c", retezecA, VyzkytPismena(retezecA, znak), znak);*/

		// 6. Napište funkci, která vezme řetězec a vypíše ho pozpátku.
	/*char retezecA[SIZE];
	printf("Zadej retezc:\n");
	scanf_s("%s", retezecA, 14);

	Pozpatku(retezecA);*/

		// 7. Napište funkci, která vezme dva řetězce A a B 
		// (jeden vstupní a druhý výstupní) a do výstupního řetězce (který je 2× delší než vstupní )
		//  vloží znaky z prvního řetězce takto:  a) A=“ahoj“ B=“ahojahoj“ , b) B=“ahojjoha“
	/*char retezecA[SIZE], retezecB[SIZE*2];
	printf("Zadej dva retezce:\n");
	scanf_s("%s", retezecA, 14);

	Priklad7(retezecA, retezecB);

	printf("%s", retezecB);*/

		//8. Napište funkci, která vezme řetězec a všechny znaky 'a' nahradí znakem '*';
	/*char* retezecA[SIZE];
	printf("Zadej retezec:\n");
	scanf_s("%[^\n]", retezecA, SIZE - 1);
	VymenaPismenaAZaH(retezecA);

	printf("%s", retezecA);*/

		//9. Napište funkci, která vezme dva řetězce a zkopíruje první řetězec do druhého.
	/*char retezecA[SIZE], retezecB[SIZE];
	printf("Zadej retezec:\n");

	scanf_s("%[^\n]", retezecA, SIZE - 1);
	Kopie(retezecA, retezecB);
	printf("%s", retezecB);*/

		//10. Napište funkci, která vezme dva řetězce a zkopíruje první řetězec do druhého, ale v opačném pořadí. KONEC -> CENOK
	/*char retezecA[SIZE], retezecB[SIZE];
	printf("Zadej retezec:\n");

	scanf_s("%[^\n]", retezecA, SIZE - 1);
	OpacnaKopie(retezecA, retezecB);
	printf("%s", retezecB);*/

		//11. Napište funkci, která vezme řetězec a přehodí v něm první a poslední znak.
	/*char* retezecA[SIZE];
	printf("Zadej retezec:\n");
	scanf_s("%[^\n]", retezecA, SIZE - 1);
	Prohod(retezecA);

	printf("%s", retezecA);*/

		//12. Napište funkci, která vezme celé číslo a řetězec a do řetězce vloží to číslo převedené do dvojkové soustavy.
	/*char* retezecA[SIZE];
	int cis;
	printf("Zadej cislo:\n");
	scanf_s("%d", &cis);
	DoDvojkove(cis, retezecA);

	printf("%s", retezecA);*/

		//13. Máme slovo: rozdělte je do dvou dalších řetězců podle malých a velkých písmen. př.: A = "Ahoj" , B = "hoj", C = "A".
	/*char retezecA[SIZE * 2], retezecB[SIZE], retezecC[SIZE];
	printf("Zadej retezec:\n");
	scanf_s("%s", retezecA, (SIZE *2) - 1);
	
	Priklad13(retezecA, retezecB, retezecC);
	printf("\nmale: %s\n", retezecB);
	printf("velke : %s\n", retezecC);*/

		// 14. Napište funkci, která vezme řetězec a vrátí 1, pokud se řetězec skládá jen z písmen nebo vrátí 0 pokud ne.
	/*char* retezecA[SIZE];
	printf("Zadej retezec:\n");
	scanf_s("%s", retezecA, SIZE - 1);

	int result = JeSlozenZPismen(retezecA);

	printf("\nvysledek: %d", result);*/

		//15. Napište funkci, která vezme řetězec a otočí v něm znaky bez pomocného pole. Př. slovo → ovols
	
	
	
	
	/*char retezecA[SIZE];
	printf("Zadej retezc:\n");
	scanf_s("%s", retezecA, 14);

	Prikalad15(retezecA);
	
	printf("%s", retezecA);*/
	
	
		// 16. Napište funkci, která vezme řetězec a vrátí 1, pokud je  řetězec palindromem, jinak vrátí 0? (oko, radar).
	/*char* retezecA[SIZE];
	printf("Zadej retezc:\n");
	scanf_s("%s", retezecA, SIZE - 1);
	
	int result = Priklad16(retezecA);
	printf("Je palindromem: %d", result);*/


		//17. Napište funkci, která vezme řetězec a vytiskne ho tak, že všechna malá písmena vytiskne dvakrát. Ahoj -> Ahhoojj
	
	/*char retezecA[SIZE];
	printf("Zadej retezc:\n");
	scanf_s("%s", retezecA, SIZE - 1);

	Priklad17(retezecA);*/
	
		// 18. Napište funkci, která vezme řetězec a každé malé písmeno nahradí příslušným velkým písmenem. Př. A = "Dnes je krasne!", výstup: A = "DNES JE KRASNE!"
	/*char retezecA[SIZE];
	printf("Zadej retezc:\n");
	scanf_s("%s", retezecA, SIZE - 1);

	Priklad18(retezecA);
	printf("%s", retezecA);*/

		// 19. Napište funkci, která vezme řetězec a dva znaky z1 a z2. Všechny znaky z1 v řetězci zamění za znaky z2.
	/*char retezecA[SIZE];
	printf("Zadej retezc:\n");
	scanf_s("%s", retezecA, SIZE - 1);

	Priklad19(retezecA, 'a', 'o');
	printf("%s", retezecA);*/

		// 20. Napište funkci, která vezme řetězec a nahradí v něm všechny číslice hvězdičkou.
	/*char retezecA[SIZE];
	printf("Zadej retezc:\n");
	scanf_s("%s", retezecA, SIZE - 1);

	Priklad20(retezecA);
	printf("%s", retezecA);*/
	
		// 21. Napište funkci, která vezme řetězec a vymaže z něj první znak.
	/*char retezecA[SIZE];
	printf("Zadej retezc:\n");
	scanf_s("%s", retezecA, SIZE - 1);

	Priklad21(retezecA);
	printf("%s", retezecA);*/
	
		// 22. Napište funkci, která vezme řetězec a vrátí počet velkých písmen.
	/*char* retezecA[SIZE];
	printf("Zadej retezc:\n");
	scanf_s("%s", retezecA, SIZE - 1);
	
	int result = Priklad22(retezecA);
	printf("Velka pismena: %d", result);*/
	
		// 23. Napište funkci, která vezme řetězec a vrátí 1, pokud se řetězec skládá jen z písmen (malá a velká písmena anglické abecedy) jinak vrátí 0.
	/*char* retezecA[SIZE];
	printf("Zadej retezc:\n");
	scanf_s("%s", retezecA, SIZE - 1);
	
	int result = Priklad23(retezecA);
	printf("Vysledek: %d", result);*/
	
	
		// 24. Napište funkci, která vyplní řetězec dvěma znaky takto: a) aaabbb, b) ababab, c) abbabbabb. Funkce bude mít parametr n, který udává počet sekvencí.
	
	/*char* retezecA[SIZE + 20];
	printf("Zadej pocet opakovani:\n");
	int pocOpakovani;
	scanf_s("%d", &pocOpakovani);

	printf("Zadej znaky:\n");
	char z1, z2;
	scanf_s(" %c", &z1);
	scanf_s(" %c", &z2);

	Priklad24(retezecA, pocOpakovani, z1, z2);*/

	
		// 25. Napište funkci, která vezme řetězec a vrátí index znaku s nejvyšším ordinálním číslem (číslem v ASCII tabulce). Př.: Ahoj -> 2 (index znaku 'o').
	
	char* retezecA[SIZE];
	printf("Zadej retezc:\n");
	scanf_s("%s", retezecA, SIZE - 1);
	
	int result = Priklad25(retezecA);
	printf("Index pismena s nejvetsi hodnotou: %d", result);

	return 0;
}
