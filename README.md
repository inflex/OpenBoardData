# OpenBoardData
Data for board repairs, including network volt, diode, and resistance measurements

![Initial work in FlexBV](https://github.com/inflex/OpenBoardData/blob/master/resources/ss1.png)

![Initial work in OpenBoardView](https://github.com/inflex/OpenBoardData/blob/master/resources/obv-obdata.png)

### Introduction
With board repairs, one thing that's often very useful to have on hand, aside from the boardview and schematic, is a set of known-good data values for networks, including diode-mode, resistance, or normal operating voltages; with this data complementing the boardview and schematic, it can facilitate the diagnosis and repair of faulty equipment.


OpenBoardData is a community contributed database of known good data values.  There are no (current) limitations on brands or types of boards.  New boards and categories can be added, and all data is in plain-text, easy to ready and add/ammend using only a text editor or even the Github web interface.

### Software currently supporting OpenBoardData
* FlexBV - http://pldaniels.com/flexbv  (alpha release, please contact pldaniels@gmail.com if you wish to paticipate and have an existing FlexBV licence)
* OpenBoardView - (PLD build) https://github.com/inflex/OpenBoardView/releases

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
* Diode and Voltage readings are to be in volts units, no suffixes/prefixes, just whole floating point only
* Resistance reading can be in the form of infix or suffixed numbers, ie, 1200.0, 1K2, 1.2K

### How to contribute (in order of preferred method...)
* You can fork this repo, make the changes, and then perform a PR/Pull-Request to send your changes back to here
* Create a new "issue" and submit your data
* Diff, or the entire updated file via email to pldaniels@gmail.com

### The board I want isn't in the repo --- halp!
* Copy an existing file, edit the contents as required, and place it in an appropriate folder.   If unsure, raise an issue and ask

