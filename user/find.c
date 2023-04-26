#include "kernel/types.h"
#include "user/user.h"
#include "kernel/fcntl.h"
#include "kernel/fs.h"
#include "kernel/stat.h"
#include "user/ulib.c"

int main(int argc, char *argv[])
{
	if(argc < 2) {
		printf("Not enough arguments.");
	} else if (argc == 2) {
		find(".", argv[1];
		//Pfad uebergeben
	} else {		
		for(k = 2; i < argc; k++) {
			find(argv[1], argv[k]);
		}	
	}
	exit(0);
}
