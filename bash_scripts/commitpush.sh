#!/bin/bash
if [[ "$#" -ne 3 ]]
then
    echo "Illegal number of parameters"
    echo "Usage: "
    echo "./commitpush.sh <COMMIT MESSAGE> <TAG VERSION> <TAG MESSAGE>"
else
    git add .
    git status
    git commit -m $1
    git tag -a $2 -m $3
    git push origin main --tags
fi