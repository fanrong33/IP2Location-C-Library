# IP2Location C Library

IP2Location is a C library that enables the user to find the country, region, city, latitude, longitude, 
zip code, time zone, ISP, domain name, connection type, area code, weather, mobile network, elevation, 
usage type by IP address or hostname originates from. The library reads the geo location information
from **IP2Location BIN data** file.

Supported IPv4 and IPv6 address.

For more details, please visit:
[http://www.ip2location.com/developers/c](http://www.ip2location.com/developers/c)

# Installation
###  Unix/Linux
    autoreconf -i -v --force
    ./configure
    make
    cd data
    perl ip-country.pl

### Windows
    Execute "vcvarsall.bat". (This file is part of Microsoft Visual C, not ip2location code) 
    nmake -f Makefile.win
    cd data
    perl ip-country.pl

### MacOS
    autoreconf -i -v --force
    export CFLAGS=-I/usr/include/malloc 
    ./configure
    make
    cd data
    perl ip-country.pl

# Testing
    cd test
    test-IP2Location

# Sample Code
安装路径/usr/local/bin/IP2Location-C-Library-master，设置LD_LIBRARY_PATH环境变量

    vi /etc/profile
    export LD_LIBRARY_PATH=/usr/local/bin/IP2Location-C-Library-master/libIP2Location/.libs:$LD_LIBRARY_PATH
    source /etc/profile
将ip2location.c 放在与IP2Location-C-Library-master/目录同级，编译第一个命令是示例，使用第二个命令进行编译

    gcc -o sample sample.c -I../libIP2Location -L../libIP2Location/.libs -lIP2Location
    gcc -o ip2location ip2location.c -IIP2Location-C-Library-master/libIP2Location -LIP2Location-C-Library-master/libIP2Location/.libs -lIP2Location

测试

    /usr/local/bin/ip2location 8.8.8.8
    "US","United States","California","Mountain View","37.405991","-122.078514","Google Inc.","google.com","-","-","-","SES"


# Sample BIN Databases
* Download free IP2Location LITE databases at [http://lite.ip2location.com](http://lite.ip2location.com)  
* Download IP2Location sample databases at [http://www.ip2location.com/developers](http://www.ip2location.com/developers)

# Support
Email: support@ip2location.com.  
URL: [http://www.ip2location.com](http://www.ip2location.com)
