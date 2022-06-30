#!/usr/bin/bash

empty="{}"
one="{'c': 'fun'}"
multiple="{'python': 'awesome', 'c': 'fun'}"
with_colliding="{'mentioner': 'value2', 'hetairas': 'value', 'python': 'awesome', 'c': 'fun'}"
mixed_colliding="{'bar': 'candy', 'mentioner': 'value2', 'hetairas': 'value', 'python': 'awesome', 'c': 'fun', 'neurospora': 'h2-value', 'heliotropes': 'h-value'}"

expected="$empty\n$one\n$multiple\n$with_colliding\n$mixed_colliding"
file=$(echo $RANDOM | md5sum | head -c 5)

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/5-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c -o "$file"

actual=$(./"$file")

if [ $? != 0 ]; then
    echo "Runtime error, compile manually to check the error"
else
    printf "List printing: "
    diff=$(diff <(printf "$actual") <(printf "$expected"))
    if [ "$diff" = "" ]; then
        echo "success"
    else
        echo "failed"
        echo "Expected:"
        printf "$expected\n"
        echo "Got:"
        printf "$actual\n"
    fi
fi

if [ -f "$file" ]; then
    rm "$file"
fi
