# Check SQLite version

Very simple program in `C` to check SQLite header version against SQLite library version

## Install
```
$ mkdir out
$ make
gcc -Wall -ansi -pedantic -Wextra -O3 main.c -lsqlite3 -o out/check-sqlite-version.out
gcc -Wall -ansi -pedantic -Wextra -g -D_DEBUG main.c -lsqlite3 -o out/check-sqlite-version_d.out
```
## Run
```
$ ./out/check-sqlite-version.out
SQLITE_VERSION_NUMBER: 3024000;
sqlite3_libversion_number(): 3024000;
$ ./out/check-sqlite-version_d.out
SQLITE_VERSION_NUMBER: 3024000;
sqlite3_libversion_number(): 3024000;
```

See also https://www.sqlite.org/c3ref/libversion.html

---
Donations are welcome `1SQL1ifUuKy8WA9PvBoMj9EHDn16VDyAR`
