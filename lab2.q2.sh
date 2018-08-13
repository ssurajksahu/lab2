#!/bin/sh
echo what is your name?
read name
echo your name is $name
mkdir $name
cd $name
for i in 1 2 3 4 5
do

 touch "$name $i.cpp"
done
