#!/usr/bin/bash

printf "\n\n--- hash_table_create ---\n\n"
gcc -Wall -Werror -pedantic -Wextra -std=gnu89 tests/0-main.c 0-hash_table_create.c -o a
./a
sleep 2

printf "\n\n--- djb2 algorithm ---\n\n"
# we run it
# feel free to implement the tests
gcc -Wall -Werror -pedantic -Wextra -std=gnu89 tests/1-djb2.c 1-djb2.c -o a
./a
sleep 2


printf "\n\n--- key_index ---\n\n"
gcc -Wall -Werror -pedantic -Wextra -std=gnu89 tests/2-main.c 1-djb2.c 2-key_index.c -o a
./a
sleep 2


printf "\n\n--- hash_table_set ---\n\n"
gcc -pedantic -Werror -Wextra -std=gnu89 tests/3-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c -o a
./a
sleep 2


printf "\n\n--- hash_table_get ---\n\n"
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/4-main.c tests/test_utils.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c -o a
./a
sleep 2


printf "\n\n--- hash_table_print ---\n\n"
./tests/test_printing.sh
sleep 2


printf "\n\n--- hash_table_delete ---\n\n"
gcc -Wall -pedantic -Werror -Wextra tests/6-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c 6-hash_table_delete.c tests/test_utils.c -o a
./a
sleep 2


printf "\n\n--- sorted_hash_table ---\n\n"
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/100-main.c 100-sorted_hash_table.c 1-djb2.c 2-key_index.c -o a
./a

# cleanup

if [ -f 'a' ]; then
    rm 'a'
fi
