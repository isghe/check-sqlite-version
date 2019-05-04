#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>
#include <string.h>

#ifdef DEBUG
#include <assert.h>
#endif

int main(void){
	int ret = EXIT_FAILURE;

	printf ("SQLITE_VERSION_NUMBER: %u;\n", SQLITE_VERSION_NUMBER);
	printf ("sqlite3_libversion_number(): %u;\n", sqlite3_libversion_number());

	#ifdef DEBUG
	/*
	* https://www.sqlite.org/c3ref/libversion.html
	*/

	assert( sqlite3_libversion_number()==SQLITE_VERSION_NUMBER );
	assert( strncmp(sqlite3_sourceid(),SQLITE_SOURCE_ID,80)==0 );
	assert( strcmp(sqlite3_libversion(),SQLITE_VERSION)==0 );
	ret = EXIT_SUCCESS;
	#else
	if ((sqlite3_libversion_number()==SQLITE_VERSION_NUMBER)
		&& (strncmp(sqlite3_sourceid(),SQLITE_SOURCE_ID,80)==0)
		&& (strcmp(sqlite3_libversion(),SQLITE_VERSION)==0)){
		ret = EXIT_SUCCESS;
	}
	printf ("ret: %d;\n", ret);
	#endif

	return ret;
}
