# OpenBoardData
Data for board repairs, including network volt, diode, and resistance measurements

![Initial work](https://github.com/inflex/OpenBoardData/blob/master/resources/ss1.png)

###Format of data
* Each board has its own data file containing the nets for the board
* Lines prefixed with a '#' character at the start are ignored
* The header of the data file should contain the following fields
* * ID ( Unique ID for the board. *No spaces*. this is used to prefix the data in the generated database )
	* * BRAND ( Used for reference, not actively used currently )
	* * TYPE ( Laptop, desktop, phone, etc, not actively used currently )
	* * COMMENT ( General comment, useful for guiding other people adding data perhaps )
* Each net is defined as a single line, fields are SINGLE-SPACE separated except for the comment;
* Diode, Voltage and Resistance readings can be also declared as 'na' (Not-applicable) and 'ol' (Over-limit / open )
* Line format is as follows;
> NET_NAME DIODE_READING VOLTAGE_READING RESISTANCE_READING COMMENT
