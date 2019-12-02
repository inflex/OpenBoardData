#!/bin/sh

for x in `find boards`; do
	 if [ -f ${x} ]; then 
		echo "Processing ${x}..."
		ID=`grep '^ID ' ${x} | cut -d' ' -f2`
		fi	

	done
