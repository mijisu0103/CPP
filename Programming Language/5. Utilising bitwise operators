#include <iostream>

using namespace std;

// Equipment enumeration
enum Equip // Automatically assigns sequential values from 0 onward.
{
	kHead = 1, // Head    0000 0001
	kLArm = 2, // Left Arm    0000 0010
	kRArm = 4, // Right Arm  0000 0100
	kBody = 8, // Body       0000 1000
	kLLeg = 16, // Left Leg  0001 0000
	kRLeg = 32 // Right Leg  0010 0000
};

// Variable to store the current player's equipment
int player_equip;

// Acquire equipment
void EquipGet(int* _char, int _equip)
{
	*_char |= _equip;
}

// Drop equipment
void EquipDrop(int* _char, int _equip)
{
	*_char ^= _equip;
}

// Print current equipment
void PrintEquip(int _equip)
{
	printf(" = Current equipped items = \n");
	if (_equip & kHead)
	{
		printf("You are wearing a headpiece. \n");
	}

	if (_equip & kLArm)
	{
		printf("You are wearing a left arm piece. \n");
	}

	if (_equip & kRArm)
	{
		printf("You are wearing a right arm piece. \n");
	}

	if (_equip & kBody)
	{
		printf("You are wearing a body armor. \n");
	}

	if (_equip & kLLeg)
	{
		printf("You are wearing a left leg piece. \n");
	}

	if (_equip & kRLeg)
	{
		printf("You are wearing a right leg piece. \n");
	}
	printf("\n");
}

// The enumeration assigns numbers starting from 0 in order.
// If you set Head = 1, it starts counting from 1 onward.
// If you set Head = 1 and RArm = 10, it will count as 1, 2, 10, 11, 12, 13, and so on.
// It is also possible to use inside the main function.

void main()
{
	cout << kHead << endl;
	cout << kLArm << endl;
	cout << kRArm << endl;
	cout << kBody << endl;
	cout << kLLeg << endl;
	cout << kRLeg << endl;

	EquipGet(&player_equip, (kHead | kBody | kLArm));
	PrintEquip(player_equip);

	//1011

	EquipDrop(&player_equip, (kHead | kBody));
	PrintEquip(player_equip);
	
	//1011
	//0001
}
