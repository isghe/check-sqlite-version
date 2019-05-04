#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>

#ifdef DEBUG
#include <string.h>
#include <assert.h>
#endif

int main(void){
	printf ("SQLITE_VERSION_NUMBER: %u;\n", SQLITE_VERSION_NUMBER);
	printf ("sqlite3_libversion_number(): %u;\n", sqlite3_libversion_number());

	#ifdef DEBUG
	/*
	* https://www.sqlite.org/c3ref/libversion.html
	*/

	assert( sqlite3_libversion_number()==SQLITE_VERSION_NUMBER );
	assert( strncmp(sqlite3_sourceid(),SQLITE_SOURCE_ID,80)==0 );
	assert( strcmp(sqlite3_libversion(),SQLITE_VERSION)==0 );
	#endif

	return EXIT_SUCCESS;
}
