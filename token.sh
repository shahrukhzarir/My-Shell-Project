#!/bin/bash
echo -n "Enter String: "
read text
var=$text

OLDIFS=$IFS
IFS=" "

read -a array <<< "$(printf "%s" "$var")"
IFS=$OLDIFS

printf "["
printf '%s,' "${array[@]}"
echo "]"
