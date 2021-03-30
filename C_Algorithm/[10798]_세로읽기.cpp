#include <iostream>
#include <vector>

using uint = unsigned int;
 
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
	
    // 5
	std::vector<std::string> Words(5, "");

	uint MaxWord = 0;
	
	for(std::string& Word : Words)
	{
		std::cin >> Word;
		if(Word.length() > MaxWord)
		{
			MaxWord = Word.length();
		}
	}

	for(uint i = 0; i < MaxWord; ++i)
	{
		for(const std::string& Word : Words)
		{
			if(Word.length() > i)
			{
				std::cout << Word[i];
			}
		}
	}
	std::cout << '\n';
	
    return 0;
}