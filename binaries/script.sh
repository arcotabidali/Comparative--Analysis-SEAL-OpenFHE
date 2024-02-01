#!/bin/bash

# Check if the correct number of arguments is provided
if [ "$#" -ne 1 ]; then
    echo "Usage: $0 <binary> "
    exit 1
fi


# Assign the filename to a variable
binary="$1"
file="input.txt"
counter = 1


# Read each line from the file and run the binary
while IFS= read -r line; do
    # Check if the line is not empty
    if [ -z "$line" ]; then
        exit 1
    fi

     ((counter++))
     echo ""
     echo ""

    # Run the binary with the parameters from the line
    for i in {1..10}
    do
      ./$binary $line
    done

   
    

    # Print a message indicating that the binary has been executed for the current line
done < "$file"

