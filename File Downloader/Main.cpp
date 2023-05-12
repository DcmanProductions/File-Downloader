// LFInteractive LLC. - All Rights Reserved
#include <cstdlib>
int main()
{
#ifdef _WIN32
	std::system("pause");
#else
	std::system("read -p 'Press Enter to continue...' key");
#endif
	return 0;
}