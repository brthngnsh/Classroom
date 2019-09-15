MAX_NO=0

echo -n "Enter Number between (5 to 9) : "
read MAX_NO

clear

for (( i=1; i<=MAX_NO; i++ ))
do
    for (( s=MAX_NO; s>=i; s-- ))
    do
       echo -n " "
    done
    for (( j=1; j<=i;  j++ ))
    do
     echo -n " $i" 
    done
    echo ""
done

