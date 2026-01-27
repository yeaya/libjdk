#include <Bug8139572.h>

#include <java/text/SimpleDateFormat.h>
#include <java/util/Calendar.h>
#include <java/util/Date.h>
#include <java/util/GregorianCalendar.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef APPLIED
#undef EXPECTED
#undef PATTERNS
#undef RUSSIAN
#undef SEPT12
#undef SEPTEMBER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $Calendar = ::java::util::Calendar;
using $Date = ::java::util::Date;
using $GregorianCalendar = ::java::util::GregorianCalendar;
using $Locale = ::java::util::Locale;

$FieldInfo _Bug8139572_FieldInfo_[] = {
	{"RUSSIAN", "Ljava/util/Locale;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Bug8139572, RUSSIAN)},
	{"SEPT12", "Ljava/util/Date;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Bug8139572, SEPT12)},
	{"PATTERNS", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Bug8139572, PATTERNS)},
	{"APPLIED", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Bug8139572, APPLIED)},
	{"EXPECTED", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Bug8139572, EXPECTED)},
	{}
};

$MethodInfo _Bug8139572_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Bug8139572, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Bug8139572, main, void, $StringArray*), "java.text.ParseException"},
	{}
};

$ClassInfo _Bug8139572_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug8139572",
	"java.lang.Object",
	nullptr,
	_Bug8139572_FieldInfo_,
	_Bug8139572_MethodInfo_
};

$Object* allocate$Bug8139572($Class* clazz) {
	return $of($alloc(Bug8139572));
}

$Locale* Bug8139572::RUSSIAN = nullptr;
$Date* Bug8139572::SEPT12 = nullptr;
$StringArray* Bug8139572::PATTERNS = nullptr;
$StringArray* Bug8139572::APPLIED = nullptr;
$StringArray* Bug8139572::EXPECTED = nullptr;

void Bug8139572::init$() {
}

void Bug8139572::main($StringArray* args) {
	$init(Bug8139572);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(Bug8139572::PATTERNS)->length; ++i) {
		$var($SimpleDateFormat, fmt, $new($SimpleDateFormat, $nc(Bug8139572::PATTERNS)->get(i), Bug8139572::RUSSIAN));
		$var($Date, standAloneDate, fmt->parse($nc(Bug8139572::APPLIED)->get(i)));
		$var($String, str, fmt->format(standAloneDate));
		if (!$nc($nc(Bug8139572::EXPECTED)->get(i))->equals(str)) {
			$throwNew($RuntimeException, $$str({"bad result: got \'"_s, str, "\', expected \'"_s, $nc(Bug8139572::EXPECTED)->get(i), "\'"_s}));
		}
	}
	$var($SimpleDateFormat, fmt, $new($SimpleDateFormat, ""_s, Bug8139572::RUSSIAN));
	for (int32_t j = 0; j < $nc(Bug8139572::PATTERNS)->length; ++j) {
		fmt->applyPattern($nc(Bug8139572::PATTERNS)->get(j));
		$var($String, str, fmt->format(Bug8139572::SEPT12));
		if (!$nc($nc(Bug8139572::EXPECTED)->get(j))->equals(str)) {
			$throwNew($RuntimeException, $$str({"bad result: got \'"_s, str, "\', expected \'"_s, $nc(Bug8139572::EXPECTED)->get(j), "\'"_s}));
		}
	}
}

void clinit$Bug8139572($Class* class$) {
	$assignStatic(Bug8139572::RUSSIAN, $new($Locale, "ru"_s));
	$assignStatic(Bug8139572::SEPT12, $$new($GregorianCalendar, 2015, $Calendar::SEPTEMBER, 12)->getTime());
	$assignStatic(Bug8139572::PATTERNS, $new($StringArray, {
		"L"_s,
		"dd L"_s,
		"dd L yy"_s,
		"dd L yyyy"_s,
		"LL"_s,
		"dd LL"_s,
		"dd LL yy"_s,
		"dd LL yyyy"_s,
		"LLL"_s,
		"dd LLL"_s,
		"dd LLL yy"_s,
		"dd LLL yyyy"_s,
		"LLLL"_s,
		"dd LLLL"_s,
		"dd LLLL yy"_s,
		"dd LLLL yyyy"_s
	}));
	$assignStatic(Bug8139572::APPLIED, $new($StringArray, {
		"9"_s,
		"12 09"_s,
		"12 09 15"_s,
		"12 09 2015"_s,
		"09"_s,
		"12 09"_s,
		"12 09 15"_s,
		"12 09 2015"_s,
		u"сентября"_s,
		u"12 сентября"_s,
		u"12 сентября 15"_s,
		u"12 сентября 2015"_s,
		u"сентября"_s,
		u"12 сентября"_s,
		u"12 сентября 15"_s,
		u"12 сентября 2015"_s
	}));
	$assignStatic(Bug8139572::EXPECTED, $new($StringArray, {
		"9"_s,
		"12 9"_s,
		"12 9 15"_s,
		"12 9 2015"_s,
		"09"_s,
		"12 09"_s,
		"12 09 15"_s,
		"12 09 2015"_s,
		u"сент."_s,
		u"12 сент."_s,
		u"12 сент. 15"_s,
		u"12 сент. 2015"_s,
		u"сентябрь"_s,
		u"12 сентябрь"_s,
		u"12 сентябрь 15"_s,
		u"12 сентябрь 2015"_s
	}));
}

Bug8139572::Bug8139572() {
}

$Class* Bug8139572::load$($String* name, bool initialize) {
	$loadClass(Bug8139572, name, initialize, &_Bug8139572_ClassInfo_, clinit$Bug8139572, allocate$Bug8139572);
	return class$;
}

$Class* Bug8139572::class$ = nullptr;