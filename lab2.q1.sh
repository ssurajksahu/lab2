#!/bin/sh
echo what is yuor first name?
read Fname
echo what is your last name?
read Lname
echo yuor name is $Fname $Lname
mkdir $Fname
cd $Fname
touch $Fname.cpp 


