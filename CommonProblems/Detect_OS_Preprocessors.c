#include <stdio.h>

int main() {
	#ifdef _WIN32
	    printf("Windows\n");
	#elif __linux__
	    printf("Linux\n");
	#elif __unix__
	    printf("Other unix OS\n");
    #elif __APPLE__
        printf("Apple OS\n");
	#else
	    printf("Unidentified OS\n");
	#endif
	return 0;
}
