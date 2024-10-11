#include <iostream>
#include <string>
using namespace std;

struct INFO
{
	string strName;
	int iHp;
	int iAttack;
};

INFO SelectJob();
void Render(INFO* pInfo);
void Field(INFO* pPlayer);
void DrawMap();
void CreateMonster(INFO* pInfo);
void Fight(INFO* pPlayer, INFO* pMonster);

void main()
{
	INFO tPlayer;
	// Implement the job selection function
	tPlayer = SelectJob();

	int iInput = 0;

	while (true)
	{
		system("cls");
		// Function to print player information
		// You can just pass it directly to print.
		// Passing it as a pointer makes it harder to hack.
		Render(&tPlayer);

		cout << "1. Hunting Ground 2. Exit " << endl;
		cin >> iInput;

		if (iInput == 1)
		{
			// Hunting Ground
			// Pass the player to the hunting ground.
			Field(&tPlayer);
		}
		else if (iInput == 2)
		{
			break;
		}
	}
}

INFO SelectJob()
{
	INFO tInfo = { "", };
	int iInput = 0;

	cout << "Select a job (1. Warrior 2. Mage 3. Thief): ";	
	cin >> iInput;

	switch (iInput)
	{
	case 1:
		tInfo.strName = "Warrior";
		tInfo.iHp = 100;
		tInfo.iAttack = 10;
		break;
	case 2:
		tInfo.strName = "Mage";
		tInfo.iHp = 100;
		tInfo.iAttack = 10;
		break;
	case 3:
		tInfo.strName = "Thief";
		tInfo.iHp = 100;
		tInfo.iAttack = 10;
		break;
	}

	return tInfo;
}

void Render(INFO* pInfo)
{
	cout << "Job Name: " << pInfo->strName << endl;
	cout << "HP: " << pInfo->iHp << "\tAttack: "
		<< pInfo->iAttack << endl;
	cout << "============================" << endl;
}

void Field(INFO* pPlayer)
{
	INFO tMonster[3] = { {"",} }; // 0 Beginner, 1 Intermediate, 2 Advanced
	
	//memset(tMonster, 0, sizeof(tMonster));
	//tMonster[0].strName = "";

	int iInput = 0;
	while (true)
	{
		system("cls");
		Render(pPlayer);
		DrawMap();
		cin >> iInput;

		if (iInput <= 3)
		{
			CreateMonster(tMonster);
			Fight(pPlayer, &tMonster[iInput - 1]);
		}

		if (iInput == 4)
		{
			break;
		}
	}
}

void DrawMap()
{
	cout << "1. Beginner Map" << endl;
	cout << "2. Intermediate Map" << endl;
	cout << "3. Advanced Map" << endl;
	cout << "4. Back" << endl;
	cout << "=======================" << endl;
	cout << "Select a map: ";
}

void CreateMonster(INFO* pInfo)
{
	pInfo[0].strName = "Beginner Monster";
	pInfo[1].strName = "Intermediate Monster";
	pInfo[2].strName = "Advanced Monster";

	for (int i = 0; i < 3; i++)
	{
		pInfo[i].iAttack = (i + 1) * 3;
		pInfo[i].iHp = (i + 1) * 30;
	}
}

void Fight(INFO* pPlayer, INFO* pMonster)
{
	int iInput = 0;

	while (true)
	{
		system("cls");
		Render(pPlayer);
		Render(pMonster);
		
		cout << "1. Attack 2. Run: ";
		cin >> iInput;

		if (iInput == 1)
		{
			pPlayer->iHp -= pMonster->iAttack;
			pMonster->iHp -= pPlayer->iAttack;

			if (pPlayer->iHp <= 0)
			{
				pPlayer->iHp = 100;
				break;
			}
		}

		if (iInput == 2 || pMonster->iHp <= 0)
		{
			break;
		}
	}
}
