#!/bin/sh
make
if [ -f cook ]; then
	OBD=OBData.txt
	if [ -f ${OBD} ]; then
		echo "Renaming ${OBD} to ${OBD}.old"
		mv ${OBD} ${OBD}.old
		fi

	for x in `find boards -name \*.txt`; do
		printf "Cooking ${x}..."
		./cook ${x} >> ${OBD}
		printf "done.\n"
		done

	echo "Finished."

	fi
