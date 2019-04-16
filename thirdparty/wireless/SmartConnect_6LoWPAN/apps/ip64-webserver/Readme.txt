
To include binary buffer data for webserver html files:

1. Download and install Active Perl
2. The perl script, thirdparty\wireless\SmartConnect_6LoWPAN\apps\ip64-webserver\makefsdata.pl is to be used.
3. The script consumes the html files placed in "httpd-fs" folder and generates the httpd-fsdata.c file with binary(array) definitions for the html files.
4. For our project we won't use this auto-generated .c file but instead append its content to httpd-fsdata.h.


