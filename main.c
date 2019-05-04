#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>

int main(void){
	printf ("SQLITE_VERSION_NUMBER: %u;\n", SQLITE_VERSION_NUMBER);
	printf ("sqlite3_libversion_number(): %u;\n", sqlite3_libversion_number());
	return EXIT_SUCCESS;
}
