#!/bin/bash

cat /etc/passwd | sed "/^#/d" | awk 'NR%2 == 0' | rev | cut -d ':' -f7 | sort -r | sed -n "$FT_LINE1, $FT_LINE2 p" | sed "s/$/, /g" | tr -d "\n" | sed "s/, $//" | tr -d '\n' && printf "." 
