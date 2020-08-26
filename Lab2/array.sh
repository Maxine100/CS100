#The following line was originally #!/bin/sh, but I'm running this on Ubuntu hence the change.
#!/bin/bash

INPUTS=("first input" "second input" "third input")

for input in "${INPUTS[@]}"
do
	echo "./c-echo ${input}"
	output=$(./c-echo ${input})
	echo "Output: \"${output}\""
	echo "Input: \"${input}\""
	if [ "${output}" = "${input}" ]
	then
		echo "Test passed"
	else
		echo "Test failed"
	fi
done
