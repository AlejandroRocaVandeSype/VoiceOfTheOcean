
Put this in DonNavigationManager.cpp for some reason this was left out from Unreal 5.4:

#include "Engine/OverlapResult.h"

Error on line 2007 of DonNavigationManager.cpp REMOVE "%s's"  from that line

Then you will get an error on line 786.. ADD "//" and a space to comment out.

I am not very good at c++ and have no time to fis those errors, They are for debugging anyway
and do not affect the running of plugin..

Enjoy and Have fun.. Redistribute if you want..