#The following line was originally #!/bin/sh, but I'm running this on Ubuntu hence the change.
#!/bin/bash

INPUTS=("first input" "second input" "third input")

echo "Executing ./c-echo ${INPUTS[2]}"
./c-echo ${INPUTS[2]}
echo "Executing ./c-echo ${INPUTS[1]}"
./c-echo ${INPUTS[1]}
echo "Executing ./c-echo ${INPUTS[0]}"
./c-echo ${INPUTS[0]}
