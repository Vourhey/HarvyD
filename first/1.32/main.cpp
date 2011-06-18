#include <iostream>
#include <cstdlib>

int main(int argc, char **argv)
{
    if(argc != 3) return 1;

    int a1 = atoi(argv[1]);
    int a2 = atoi(argv[2]);

    std::cout << a1 << (a1 % a2 ? " не кратно " : " кратно " ) 
	      << a2 << std::endl;

    return 0;
}

