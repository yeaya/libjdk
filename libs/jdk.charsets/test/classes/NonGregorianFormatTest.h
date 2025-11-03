#ifndef _NonGregorianFormatTest_h_
#define _NonGregorianFormatTest_h_
//$ class NonGregorianFormatTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BUDDHIST_EN")
#undef BUDDHIST_EN
#pragma push_macro("BUDDHIST_JA")
#undef BUDDHIST_JA
#pragma push_macro("EXCEPTION_JAPANESE_EN")
#undef EXCEPTION_JAPANESE_EN
#pragma push_macro("EXCEPTION_JAPANESE_JA")
#undef EXCEPTION_JAPANESE_JA
#pragma push_macro("FULL_DATE_FORMAT_JA")
#undef FULL_DATE_FORMAT_JA
#pragma push_macro("JAPANESE_EN")
#undef JAPANESE_EN
#pragma push_macro("JAPANESE_JA")
#undef JAPANESE_JA

namespace java {
	namespace text {
		class DateFormat;
	}
}
namespace java {
	namespace util {
		class Date;
		class Locale;
	}
}

class $export NonGregorianFormatTest : public ::java::lang::Object {
	$class(NonGregorianFormatTest, 0, ::java::lang::Object)
public:
	NonGregorianFormatTest();
	void init$();
	static void error($String* msg);
	static void error($String* fmt, $ObjectArray* args);
	static void main($StringArray* args);
	static void test(::java::util::Locale* locale);
	static void testParseExceptions(::java::util::Locale* calendarLocale, $Array<::java::lang::Object, 2>* data);
	static void testRoundTrip(::java::util::Locale* calendarLocale);
	static void testRoundTrip(::java::text::DateFormat* df, ::java::util::Date* orig);
	static void testRoundTripSimple(::java::util::Locale* calendarLocale, $Array<::java::lang::Object, 2>* data);
	static int32_t errors;
	static $Array<::java::lang::Object, 2>* JAPANESE_EN;
	static $Array<::java::lang::Object, 2>* EXCEPTION_JAPANESE_EN;
	static $Array<::java::lang::Object, 2>* BUDDHIST_EN;
	static $String* FULL_DATE_FORMAT_JA;
	static $Array<::java::lang::Object, 2>* JAPANESE_JA;
	static $Array<::java::lang::Object, 2>* EXCEPTION_JAPANESE_JA;
	static $Array<::java::lang::Object, 2>* BUDDHIST_JA;
};

#pragma pop_macro("BUDDHIST_EN")
#pragma pop_macro("BUDDHIST_JA")
#pragma pop_macro("EXCEPTION_JAPANESE_EN")
#pragma pop_macro("EXCEPTION_JAPANESE_JA")
#pragma pop_macro("FULL_DATE_FORMAT_JA")
#pragma pop_macro("JAPANESE_EN")
#pragma pop_macro("JAPANESE_JA")

#endif // _NonGregorianFormatTest_h_