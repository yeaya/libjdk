#include <ContextMonthNamesTest.h>

#include <java/text/SimpleDateFormat.h>
#include <java/util/Calendar.h>
#include <java/util/Date.h>
#include <java/util/GregorianCalendar.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef CZECH
#undef EXPECTED
#undef JAN30
#undef JANUARY
#undef PATTERNS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $Calendar = ::java::util::Calendar;
using $Date = ::java::util::Date;
using $GregorianCalendar = ::java::util::GregorianCalendar;
using $Locale = ::java::util::Locale;

$FieldInfo _ContextMonthNamesTest_FieldInfo_[] = {
	{"CZECH", "Ljava/util/Locale;", nullptr, $STATIC, $staticField(ContextMonthNamesTest, CZECH)},
	{"JAN30", "Ljava/util/Date;", nullptr, $STATIC, $staticField(ContextMonthNamesTest, JAN30)},
	{"PATTERNS", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(ContextMonthNamesTest, PATTERNS)},
	{"EXPECTED", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(ContextMonthNamesTest, EXPECTED)},
	{}
};

$MethodInfo _ContextMonthNamesTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ContextMonthNamesTest, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ContextMonthNamesTest, main, void, $StringArray*)},
	{}
};

$ClassInfo _ContextMonthNamesTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ContextMonthNamesTest",
	"java.lang.Object",
	nullptr,
	_ContextMonthNamesTest_FieldInfo_,
	_ContextMonthNamesTest_MethodInfo_
};

$Object* allocate$ContextMonthNamesTest($Class* clazz) {
	return $of($alloc(ContextMonthNamesTest));
}

$Locale* ContextMonthNamesTest::CZECH = nullptr;
$Date* ContextMonthNamesTest::JAN30 = nullptr;
$StringArray* ContextMonthNamesTest::PATTERNS = nullptr;
$StringArray* ContextMonthNamesTest::EXPECTED = nullptr;

void ContextMonthNamesTest::init$() {
}

void ContextMonthNamesTest::main($StringArray* args) {
	$init(ContextMonthNamesTest);
	$useLocalCurrentObjectStackCache();
	$var($SimpleDateFormat, fmt, $new($SimpleDateFormat, ""_s, ContextMonthNamesTest::CZECH));
	for (int32_t i = 0; i < $nc(ContextMonthNamesTest::PATTERNS)->length; ++i) {
		fmt->applyPattern($nc(ContextMonthNamesTest::PATTERNS)->get(i));
		$var($String, str, fmt->format(ContextMonthNamesTest::JAN30));
		if (!$nc($nc(ContextMonthNamesTest::EXPECTED)->get(i))->equals(str)) {
			$throwNew($RuntimeException, $$str({"bad result: got \'"_s, str, "\', expected \'"_s, $nc(ContextMonthNamesTest::EXPECTED)->get(i), "\'"_s}));
		}
	}
}

void clinit$ContextMonthNamesTest($Class* class$) {
	$assignStatic(ContextMonthNamesTest::CZECH, $new($Locale, "cs"_s));
	$assignStatic(ContextMonthNamesTest::JAN30, $$new($GregorianCalendar, 2012, $Calendar::JANUARY, 30)->getTime());
	$assignStatic(ContextMonthNamesTest::PATTERNS, $new($StringArray, {
		"d. MMMM yyyy"_s,
		"d. MMM yyyy"_s,
		"MMMM"_s,
		"MMM"_s,
		"d. LLLL yyyy"_s,
		"d. LLL yyyy"_s
	}));
	$assignStatic(ContextMonthNamesTest::EXPECTED, $new($StringArray, {
		"30. ledna 2012"_s,
		"30. led 2012"_s,
		"leden"_s,
		"led"_s,
		"30. leden 2012"_s,
		"30. led 2012"_s
	}));
}

ContextMonthNamesTest::ContextMonthNamesTest() {
}

$Class* ContextMonthNamesTest::load$($String* name, bool initialize) {
	$loadClass(ContextMonthNamesTest, name, initialize, &_ContextMonthNamesTest_ClassInfo_, clinit$ContextMonthNamesTest, allocate$ContextMonthNamesTest);
	return class$;
}

$Class* ContextMonthNamesTest::class$ = nullptr;