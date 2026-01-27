#ifndef _com_sun_org_apache_xalan_internal_lib_ExsltDatetime_h_
#define _com_sun_org_apache_xalan_internal_lib_ExsltDatetime_h_
//$ class com.sun.org.apache.xalan.internal.lib.ExsltDatetime
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("EMPTY_STR")
#undef EMPTY_STR

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace objects {
							class XObject;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Date;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace lib {

class ExsltDatetime : public ::java::lang::Object {
	$class(ExsltDatetime, 0, ::java::lang::Object)
public:
	ExsltDatetime();
	void init$();
	static $String* date($String* datetimeIn);
	static $String* date();
	static $String* dateTime();
	static $String* dayAbbreviation($String* datetimeIn);
	static $String* dayAbbreviation();
	static double dayInMonth($String* datetimeIn);
	static double dayInMonth();
	static double dayInWeek($String* datetimeIn);
	static double dayInWeek();
	static double dayInYear($String* datetimeIn);
	static double dayInYear();
	static $String* dayName($String* datetimeIn);
	static $String* dayName();
	static double dayOfWeekInMonth($String* datetimeIn);
	static double dayOfWeekInMonth();
	static $String* formatDate($String* dateTime, $String* pattern);
	static $String* formatDigits(int32_t q);
	static $StringArray* getEraDatetimeZone($String* in);
	static $String* getNameOrAbbrev($String* in, $StringArray* formatsIn, $String* formatOut);
	static $String* getNameOrAbbrev($String* format);
	static double getNumber($String* in, $StringArray* formats, int32_t calField);
	static int32_t getZoneStart($String* datetime);
	static double hourInDay($String* datetimeIn);
	static double hourInDay();
	static ::com::sun::org::apache::xpath::internal::objects::XObject* leapYear($String* datetimeIn);
	static bool leapYear();
	static double minuteInHour($String* datetimeIn);
	static double minuteInHour();
	static $String* monthAbbreviation($String* datetimeIn);
	static $String* monthAbbreviation();
	static double monthInYear($String* datetimeIn);
	static double monthInYear();
	static $String* monthName($String* datetimeIn);
	static $String* monthName();
	static double secondInMinute($String* datetimeIn);
	static double secondInMinute();
	static $String* strip($String* symbols, $String* pattern);
	static ::java::util::Date* testFormats($String* in, $StringArray* formats);
	static $String* time($String* timeIn);
	static $String* time();
	static double weekInYear($String* datetimeIn);
	static double weekInYear();
	static double year($String* datetimeIn);
	static double year();
	static $String* dt;
	static $String* d;
	static $String* gym;
	static $String* gy;
	static $String* gmd;
	static $String* gm;
	static $String* gd;
	static $String* t;
	static $String* EMPTY_STR;
};

						} // lib
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("EMPTY_STR")

#endif // _com_sun_org_apache_xalan_internal_lib_ExsltDatetime_h_