// MadLibs.cpp
// Creates a short six lie story and asks the user for ~8 different words
// Contains :
//		main method to run project and print mad lib
//		ask method which requests user input, contains error handling
//

#include <iostream>
#include <string>
#include <algorithm>

std::string ask(std::string prompt) {
	std::string response;
	std::cout << prompt;
	bool valid = false;
	while (!valid) { //if iuser input is invalid
		std::getline(std::cin, response);
		if (response.empty() || std::all_of(response.begin(),response.end(),isspace)) { //if input string is empty or just contains strings
			std::cout << "Invalid input, please enter " << prompt.substr(6, prompt.length()); //re-request input answer
		}
		else {
			valid = true;
		}
	}
	return response;
}

int main() {
	std::string adjective = ask("Enter a adjective: ");
	std::string noun = ask("Enter a noun: ");
	std::string adverb = ask("Enter an adverb: ");
	std::string animal = ask("Enter an animal: ");
	std::string verb = ask("Enter a verb: ");
	std::string color = ask("Enter a color: ");
	std::string pluralNoun = ask("Enter a plural noun: ");
	std::string celebrity = ask("Enter a celebrity: ");

	std::cout << "This morning I grabbed my " << adjective << " backpack and ran to the " << noun << ".\n";
	std::cout << "On my way, a " << color << " " << animal << " jumped out and tried to " << verb << " my " << noun << "!\n";
	std::cout << "I shouted " << adjective << " words and chased it " << adverb << " down the street.\n";
	std::cout << "Then I tripped over a " << adjective << " " << noun << " and landed right on a pile of " << pluralNoun << ".\n";
	std::cout << "Everyone around started to " << verb << " while pointing at my " << color << " shoes.\n";
	std::cout << "Thankfully, as I was sprawled across the floor " << celebrity << " came to my rescue and we ran into the sunset together\n";
}
