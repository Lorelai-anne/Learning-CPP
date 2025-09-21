// MadLibs.cpp
// 
//

#include <iostream>
#include <string>
#include <cstdio>

int main() {
	std::string adjective = "happy";
	std::string noun = "spoon";
	std::string adverb = "running";
	std::string animal = "hippo";
	std::string verb = "run";
	std::string color = "purple";
	std::string pluralNoun = "spoons";

	std::cout << "This morning I grabbed my " << adjective << " backpack and ran to the " << noun << ".\n";
	std::cout << "On my way, a " << color << " " << animal << " jumped out and tried to " << verb << " my " << noun << "!\n";
	std::cout << "I shouted " << adjective << " words and chased it " << adverb << " down the street.\n";
	std::cout << "Then I tripped over a " << adjective << " " << noun << " and landedd right on a pile of " << pluralNoun << ".\n";
	std::cout << "Everyone around started to " << verb << " while pointing at my " << color << " shoes.\n";
}
