#include <IP2Location.h>
#include <string.h>
#include <stdio.h>

int main (int argc, char *argv[]) {
    if(argc != 2){
        return 1;
    }
    IP2Location *IP2LocationObj=IP2Location_open("/usr/local/bin/IP2Location-C-Library-master/data/IPV6-COUNTRY-REGION-CITY-LATITUDE-LONGITUDE-ISP-DOMAIN-MOBILE-USAGETYPE.BIN");
    IP2LocationRecord *record=IP2Location_get_all(IP2LocationObj, argv[1]);
    printf("\"%s\",\"%s\",\"%s\",\"%s\",\"%f\",\"%f\",\"%s\",\"%s\",\"%s\",\"%s\",\"%s\",\"%s\"\n",
        record->country_short,
        record->country_long,
        record->region,
        record->city,
        record->latitude,
        record->longitude,
        record->domain,
        record->isp,
        record->mcc,
        record->mnc,
        record->mobilebrand,
        record->usagetype);
    IP2Location_free_record(record);
    IP2Location_close(IP2LocationObj);
    return 1;
}
