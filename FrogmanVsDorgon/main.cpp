#include <iostream>
#include <string>
#include <random>
#include <ctime>

using namespace std;

int main()
{
	float frogman_hp = 50.0f;
	float dorgon_hp = 100.0f;
	string reply;

	cout << "================================================\n";
	cout << "||||||||||||||||||Froggy Tales||||||||||||||||||\n";
	cout << "||||----------------------------------------||||\n";
	cout << "|||||The Rise of Dorgon the Dragon of Flame|||||\n";

	while (true)
	{
		cout << "================================================\n";
		cout << "<1> Play\n";
		cout << "<2> Info\n";
		cout << "<3> Exit\n";
		cout << "================================================\n";

		cin >> reply;
		if (reply == "1")
		{
			break;
		}
		else if (reply == "2")
		{
			cout << "================================================\n";
			cout << "Created in C++ by Alex Patterson\n";
			cout << "Github: github.com/alex501212\n";
			cout << "Porfolio: alex501212.github.io/alexpatterson/\n";
		}
		else if (reply == "3")
		{
			cout << "================================================";
			exit(0);
		}
		else
		{
			cout << "*Invalid Input*\n";
		}
	}

	cout << "===========================================================\n";
	cout << "This is a tale of one heroic frog reigning from the land\n";
	cout << "of Toadsville.\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "A mercenary for the triganomic toadpole clan.\n";
	cout << "...\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "A father of 2 and husband to a lovely toadess.\n";
	cout << "...\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "And the chosen one to wield the fire-belly gold sword.\n";
	cout << "...\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "His name is...\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "||||||||||||||||||||||||||FROGMAN||||||||||||||||||||||||||\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "Frogman is found in the throne room of Toadsville Palace on\n";
	cout << "the pure marble floor kneeling respectivly towards King\n";
	cout << "Froggly.\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "King Froggly towers over frogman on his red cushioned\n";
	cout << "throne...\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "King Froggly: I hold a proposition, one that only you can\n";
	cout << "fufill Frogman\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "Frogman lifts his head in sheer suprise.\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "Frogman: What might this propostion entail sire\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "King Froggly clears his throat and corrects his posture\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "King Froggly: This may not be an easy task, but alass I\n";
	cout << "request for you to banish Dorgon the Dragon of Flame from\n";
	cout << "this land\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "Frogman: As in the dragon Dorgon?\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "King Froggly palms his forehead and shakes his head\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "King Froggly: Who else Frogman? The shop armour merchant\n";
	cout << "on Lily Street? Of course the dragon!\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "King Froggly: That aside, Dorgon has been terrorizing\n";
	cout << "the land of ToadsVille for too many years, too many ToadsVille\n";
	cout << "folk have lost friends, family and their cherrished lovedones\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "King Froggly:Therefore before the people of ToadsVille\n";
	cout << "are completly wiped out Dorgon needs to be expelled and quickly\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "Frogman looks blankly at king ??\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "Frogman: But why me sire? Couldnt any of the higher ups in\n";
	cout << "the Triganomic Toadpole Clan do a better job?\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "King Froggly leans forward and looks Frogman dead in the\n";
	cout << "eyes\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "King Froggly: Silly boy, there is one difference between\n";
	cout << "you and any of the other member of the Triganomic Toadpole\n";
	cout << "Clan\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "Frogman tilts his head in a attempt to understand the\n";
	cout << "situation\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "Frogman: What might that be sire\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "King Froggly: You see Frogman you are the one that was \n";
	cout << "chosen to weild the fire-belly gold sword.\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "King Froggly: Nobody but you holds that immense power, a\n";
	cout << "power strong enough that it might just be able to defeat\n";
	cout << "Dorgon once and for all\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "Frogman sits still as if he were hunting for flys\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "Frogman: I see..\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "King Froggly: So Frogman with everything considered are you\n";
	cout << "willing to accept this quest?\n";
	cout << "===========================================================\n";

	while (true)
	{
		cin >> reply;

		if ((reply == "no") || (reply == "No"))
		{
			cout << "===========================================================\n";
			cout << "King Froggly: WHAT DO YOU MEAN NO FROGMAN!!! IF YOU DON'T\n";
			cout << "ACCEPT TOADSVILLE COULD CEAST TO EXIST!!!\n";
			cout << "===========================================================\n";
		}
		else if ((reply == "Yes") || (reply == "yes"))
		{
			cout << "===========================================================\n";
			cout << "King Froggly: This is splended news Frogman! I knew you\n";
			cout << "would accept!\n";
			cout << "===========================================================\n";
			break;
		}
		else
		{
			cout << "===========================================================\n";
			cout << "King Froggly: Sorry I can't quite hear you Frogman speak up\n";
			cout << "boy\n";
			cout << "===========================================================\n";
		}
	}

	system("pause");
	cout << "===========================================================\n";
	cout << "frogman: Now sire where might I find this Dorgon fellow?\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "King Froggly abruplty clears his throat\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "King Froggly: Dorgon is located in the deepest depths of\n";
	cout << "the Conraua Caverns, north-east from frogsville. It will\n";
	cout << "take you roughly 2 hours by toadback of you leave before\n";
	cout << "sundown\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "Frogman shoots up from his kneeling position\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "frogman: Alright understood, I will depart right away\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "King Froggly: Thanks again Frogman all of Frogsville is\n";
	cout << "counting on you!\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "Frogman turns towards the grand throne room doors, swiftly\n";
	cout << "makes his way out of Frogville Palace and sets off on his\n";
	cout << "heroic journey for Conraua Caverns in hopes to take down\n";
	cout << "the mighty Dorgon the Dragon of Flame\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "2 hours of tears and sweat frogman finally finds his way to\n";
	cout << "the entrance of Conraua Caverns and cautiously creeps in\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "The dimly lit cavern bears scarcely scattered pickaxes and\n";
	cout << "half mined ores. The cavern seemed as if it had been\n";
	cout << "abruptly abandoned not so long ago\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "As Frogman makes his way down the cavern the lighting gets\n";
	cout << "dimmer and dimmer...\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "-_-_-_-_-_-RUMBLE-_-_-_-_-_-\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "-_-_-_-_-_-RUMBLE-_-_-_-_-_-\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "-_-_-_-_-_-RUMBLE-_-_-_-_-_-\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "Frogman stops in his tracks as a large earthquake type\n";
	cout << "vibration rattles below his feet\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "Suddenly large figure swoops down towards Frogman\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "The figure now becomes distinguishable to Frogman, he knows\n";
	cout << "clearly that it is Dorgon his greatest foe\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "Dorgon lets out a grand roar\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "Dorgon: Who dare inturrupt me in my slumber!!!\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "Frogman: It is I Frogman the merencary sent from the mighty\n";
	cout << "Toadsville, I am here to slay you once and for all\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "Dorgon: Slay me!?\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "Dorgon chuckles to himself\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "Dorgon: No man on Earth has the power to defeat me. I have\n";
	cout << "proven this time and time again as I have perished your\n";
	cout << "precious little 'Mercenarys' one by one in their weak\n";
	cout << "attempts to defeat me. What makes you think this time will\n";
	cout << "be different?\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "Dorgon chuckles to himself again\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "Frogman equips his Fire-Belly Gold Sword.\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "The sword glistens showing off it's greatness\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "Frogman: I wouldn't be so sure\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "Frogman smirks\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "Dorgon: Hmph, this will be quick\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "Dorgon and Frogman get into battle stance\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "Dorgon and Frogman get into battle stance\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "++++++++++++++++++ THE BATTLE COMMENCES ++++++++++++++++++\n";
	cout << "===========================================================\n";
	system("pause");
	cout << "===========================================================\n";
	cout << "<1> Golden Sword Swipe\n";
	cout << "<2> Hibernate\n";
	cout << "<3> Frog Flurry\n";
	cout << "<4> Fire-Belly Flame Buster\n";
	cout << "===========================================================\n";
	cin >> reply;

	while (true)
	{
		if (reply == "1")
		{

		}
		else if (reply == "2")
		{

		}
		else if (reply == "3")
		{

		}
		else if (reply == "4")
		{

		}
		else
		{
			cout << "*Invalid Input*\n";
		}
	}

	/*bool continue_ = true;
	string num_guess;
	default_random_engine rand(time(NULL));

	cout << "Think of a number between 1 and 10\n";
	cout << "Ready? (Type anything to start)\n";
	string reply;
	cin >> reply;
	cout << "\n";

	while (continue_ == true)
	{
		uniform_int_distribution<int> roll(1, 10);
		cout << "Was it '" << roll(rand) << "'?\n";
		cin >> num_guess;
		cout << "\n";

		if ((num_guess == "yes") || (num_guess == "Yes"))
		{
			continue_ = false;
		}
		else if ((num_guess == "no") || (num_guess == "No"))
		{

		}

	}
	cout << "Game Over, GG\n";*/

	system("PAUSE");
	return 0;
}