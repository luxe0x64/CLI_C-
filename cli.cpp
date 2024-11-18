#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <chrono>
#include <math.h> // for pow()
#include <stdlib.h> // for drand48()


// Hello, this cli script was written by nobody3132/luxe0x64.
// Enjoy this
// this is my first "program" on C++



using namespace std;

void RootPrompt() {
	while (true) {
		string KaliInput;
		cout << "root@kali:~# ";
		cin >> KaliInput;
		

		if (KaliInput == "exit") {
			system("clear");
			break; // to stop the script.
		} else if (KaliInput == "hello_world") {
			cout << "hello world!" << endl;
		} else if (KaliInput == "clear") {
			system("clear");
		} else if (KaliInput == "ls") {
			system("ls");
		} else if (KaliInput == "date") {
			auto now = chrono::system_clock::now();
			
			// Convert the time point to a time_t, which represents the time in seconds
			time_t currentTime = chrono::system_clock::to_time_t(now);
			cout << "Current time: " << ctime(&currentTime);
		} else if (KaliInput == "random") {
			int randomNum = rand() % 11;
			cout << randomNum << endl;
		} else if (KaliInput == "help") {
			cout << "Available commands: " << "\n";
			cout << "hello_world: prints 'hello world!'" << "\n";
			cout << "clear: clears the screen. " << "\n";
			cout << "exit: close the cli. " << "\n";
			cout << "random: prints random number. " << "\n";
			cout << "ls: shows what is in current directory. " << "\n";
			cout << "whoami: shows 'You are C++ developer. " << "\n";
		} else if (KaliInput == "whoami") {
			cout << "You're C++ developer. " << endl;
		} else if (KaliInput == "pwd") {
			system("pwd");
		} else if (KaliInput == "system") {
			system("neofetch");
		} else {
			cout << KaliInput << ": command not found. " << "\n";
		}
	}
}



int main() {
	system("clear");

	RootPrompt();
return 0;
}
