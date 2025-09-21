// MadLibs.cpp
// Creates a short six lie story and asks the user for ~8 different words
// contains a main method and a helper method ask(string prompt) to fix repetition
//

#include <iostream>
#include <string>

std::string ask(std::string prompt) {
	std::string response;
	std::cout << prompt;
	while (response.empty()) {
		std::getline(std::cin, response);
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
