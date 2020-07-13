echo "Valid"
./a.out "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"

echo "Space in front"
./a.out " 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"

echo "Space in back"
./a.out "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2 "

echo "Alpha 1"
./a.out "a 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"

echo "Alpha 2"
./a.out "4 3 2 1 1 2 2 2 4 3 2 1 1a2 2 2"

echo "Negative"
./a.out "-4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"

echo "Zero"
./a.out "4 3 0 1 1 2 2 2 4 3 2 1 1 2 2 2"

echo "Bigger"
./a.out "5 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"

echo "Too short"
./a.out "3 0 1 1 2 2 2 4 3 2 1 1 2 2 2"

echo "Too long"
./a.out "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2 1"

echo "What?"
./a.out "fjdsklfldsaf"

echo "Nothing"
./a.out

echo "Space"
./a.out " "

echo "No Spaces"
./a.out "4321122243211222"

echo "Empty String"
./a.out ""

echo "duplicate?"
./a.out "3 1 2 2 2 3 3 1 2 3 1 2 2 2 3 1"
