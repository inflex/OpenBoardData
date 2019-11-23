# OpenBoardData
Data for board repairs, including network volt, diode, and resistance measurements

![Initial work](https://github.com/inflex/OpenBoardData/blob/master/resources/ss1.png)

### Format of data
* Each board has its own data file containing the nets for the board
* Lines prefixed with a '#' character at the start are ignored
* The header of the data file should contain the following fields
	- ID ( Unique ID for the board. *No spaces*. this is used to prefix the data in the generated database )
	- BRAND ( Used for reference, not actively used currently )
	- TYPE ( Laptop, desktop, phone, etc, not actively used currently )
	- COMMENT ( General comment, useful for guiding other people adding data perhaps )
* Each net is defined as a single line, fields are SINGLE-SPACE separated except for the comment;
* Diode, Voltage and Resistance readings can be also declared as 'na' (Not-applicable) and 'ol' (Over-limit / open )
* Line format is as follows;
* > NET_NAME  DIODE_READING  VOLTAGE_READING  RESISTANCE_READING  COMMENT
* Net aliases can be done by prefixing '===' to the name of the aliased network
* > PPVBAT_G3H_CHGR_REG ===PPBUS_G3H

### How to contribute (in order of preferred method...)
1 You can fork this repo, make the changes, and then perform a PR/Pull-Request to send your changes back to here
2 Create a new "issue" and submit your data
3 Diff, or the entire updated file via email to pldaniels@gmail.com

### The board I want isn't in the repo --- halp!
* Copy an existing file, edit the contents as required, and place it in an appropriate folder.   If unsure, raise an issue and ask

### Building and cooking the data
OBData build system is written for Linux, since for the most part people will only be using the cooked OBData.txt file, there isn't a compelling need to go beyond the current linux build system ( I will however see if I can create a Travis CI for this job ).

#### How to build OBData.txt
* clone the repo
> git clone https://github.com/inflex/OpenBoardData
* Change in to the newly created git folder for OpenBoardData
> cd OpenBoardData
* Run the build script
> ./build-obdata.sh



