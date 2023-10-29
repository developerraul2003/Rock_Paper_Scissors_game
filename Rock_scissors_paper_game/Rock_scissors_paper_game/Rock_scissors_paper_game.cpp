#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
int main()
{
srand(time(nullptr));

string game[]{ "Paper","Rock","Scissors" };
 
cout << "Rock,Paper,Scissors game\n";
cout << "Let's go!\n";
cout << "Rock+Scissors-> Rock\n";
cout << "Paper+Scissors-> Scissors\n";
cout << "Rock+Paper-> Paper\n";
int user;

while (true)
{
	
	cout << "Paper=>0,Rock=>1, Scissors=>2,Quit=> -1\n";
	cout << "Choose one of them: User->";
	cin >> user;
	
	if (user == -1)
	{
		break;
	}
	if (user < 0 || user>2)
	{
		cout << "Invalid choice. Please choose 0, 1, or 2. \n";
		continue;
	}
	int robot = rand() % 3;
	cout << "User choose:"<< game[user]<<endl;
	cout << "Robot choose:" << game[robot]<<endl;
	if (user == robot)
	{
		cout << " it is tie\n";
		continue;
	}
	else if (
		  (user==0 && robot==1)||
		  (user==1 && robot==2)||
		  (user==2 && robot==0)) {
		cout << "User win!\n";
	      }
	else {
		cout << "Robot win!\n";
	}

}
return 0;
}


