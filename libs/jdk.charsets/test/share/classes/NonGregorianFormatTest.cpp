#include <NonGregorianFormatTest.h>

#include <java/text/DateFormat.h>
#include <java/text/ParseException.h>
#include <java/text/SimpleDateFormat.h>
#include <java/util/Calendar.h>
#include <java/util/Date.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef BUDDHIST_EN
#undef BUDDHIST_JA
#undef ENGLISH
#undef EXCEPTION_JAPANESE_EN
#undef EXCEPTION_JAPANESE_JA
#undef FULL
#undef FULL_DATE_FORMAT_JA
#undef JAPAN
#undef JAPANESE_EN
#undef JAPANESE_JA

using $LocaleArray = $Array<::java::util::Locale>;
using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DateFormat = ::java::text::DateFormat;
using $ParseException = ::java::text::ParseException;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $Calendar = ::java::util::Calendar;
using $Date = ::java::util::Date;
using $Locale = ::java::util::Locale;

$FieldInfo _NonGregorianFormatTest_FieldInfo_[] = {
	{"errors", "I", nullptr, $STATIC, $staticField(NonGregorianFormatTest, errors)},
	{"JAPANESE_EN", "[[Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticField(NonGregorianFormatTest, JAPANESE_EN)},
	{"EXCEPTION_JAPANESE_EN", "[[Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticField(NonGregorianFormatTest, EXCEPTION_JAPANESE_EN)},
	{"BUDDHIST_EN", "[[Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticField(NonGregorianFormatTest, BUDDHIST_EN)},
	{"FULL_DATE_FORMAT_JA", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(NonGregorianFormatTest, FULL_DATE_FORMAT_JA)},
	{"JAPANESE_JA", "[[Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticField(NonGregorianFormatTest, JAPANESE_JA)},
	{"EXCEPTION_JAPANESE_JA", "[[Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticField(NonGregorianFormatTest, EXCEPTION_JAPANESE_JA)},
	{"BUDDHIST_JA", "[[Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticField(NonGregorianFormatTest, BUDDHIST_JA)},
	{}
};

$MethodInfo _NonGregorianFormatTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NonGregorianFormatTest::*)()>(&NonGregorianFormatTest::init$))},
	{"error", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&NonGregorianFormatTest::error))},
	{"error", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<void(*)($String*,$ObjectArray*)>(&NonGregorianFormatTest::error))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NonGregorianFormatTest::main)), "java.text.ParseException"},
	{"test", "(Ljava/util/Locale;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Locale*)>(&NonGregorianFormatTest::test))},
	{"testParseExceptions", "(Ljava/util/Locale;[[Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Locale*,$ObjectArray2*)>(&NonGregorianFormatTest::testParseExceptions))},
	{"testRoundTrip", "(Ljava/util/Locale;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Locale*)>(&NonGregorianFormatTest::testRoundTrip))},
	{"testRoundTrip", "(Ljava/text/DateFormat;Ljava/util/Date;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($DateFormat*,$Date*)>(&NonGregorianFormatTest::testRoundTrip))},
	{"testRoundTripSimple", "(Ljava/util/Locale;[[Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Locale*,$ObjectArray2*)>(&NonGregorianFormatTest::testRoundTripSimple))},
	{}
};

$ClassInfo _NonGregorianFormatTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NonGregorianFormatTest",
	"java.lang.Object",
	nullptr,
	_NonGregorianFormatTest_FieldInfo_,
	_NonGregorianFormatTest_MethodInfo_
};

$Object* allocate$NonGregorianFormatTest($Class* clazz) {
	return $of($alloc(NonGregorianFormatTest));
}

int32_t NonGregorianFormatTest::errors = 0;
$ObjectArray2* NonGregorianFormatTest::JAPANESE_EN = nullptr;
$ObjectArray2* NonGregorianFormatTest::EXCEPTION_JAPANESE_EN = nullptr;
$ObjectArray2* NonGregorianFormatTest::BUDDHIST_EN = nullptr;
$String* NonGregorianFormatTest::FULL_DATE_FORMAT_JA = nullptr;
$ObjectArray2* NonGregorianFormatTest::JAPANESE_JA = nullptr;
$ObjectArray2* NonGregorianFormatTest::EXCEPTION_JAPANESE_JA = nullptr;
$ObjectArray2* NonGregorianFormatTest::BUDDHIST_JA = nullptr;

void NonGregorianFormatTest::init$() {
}

void NonGregorianFormatTest::main($StringArray* args) {
	$init(NonGregorianFormatTest);
	$useLocalCurrentObjectStackCache();
	$var($Locale, defaultLocale, $Locale::getDefault());
	$var($LocaleArray, locales, $new($LocaleArray, {
		$Locale::ENGLISH,
		$Locale::JAPAN
	}));
	{
		$var($Throwable, var$0, nullptr);
		try {
			{
				$var($LocaleArray, arr$, locales);
				int32_t len$ = arr$->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($Locale, locale, arr$->get(i$));
					{
						test(locale);
					}
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Locale::setDefault(defaultLocale);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (NonGregorianFormatTest::errors > 0) {
		$throwNew($RuntimeException, $$str({"FAILED: "_s, $$str(NonGregorianFormatTest::errors), " error(s)"_s}));
	}
}

void NonGregorianFormatTest::test($Locale* locale) {
	$init(NonGregorianFormatTest);
	$Locale::setDefault(locale);
	$var($Locale, calendarLocale, $new($Locale, "ja"_s, "JP"_s, "JP"_s));
	testRoundTrip(calendarLocale);
	testRoundTripSimple(calendarLocale, locale == $Locale::ENGLISH ? NonGregorianFormatTest::JAPANESE_EN : NonGregorianFormatTest::JAPANESE_JA);
	testParseExceptions(calendarLocale, locale == $Locale::ENGLISH ? NonGregorianFormatTest::EXCEPTION_JAPANESE_EN : NonGregorianFormatTest::EXCEPTION_JAPANESE_JA);
	$assign(calendarLocale, $new($Locale, "th"_s, "TH"_s));
	testRoundTrip(calendarLocale);
	testRoundTripSimple(calendarLocale, locale == $Locale::ENGLISH ? NonGregorianFormatTest::BUDDHIST_EN : NonGregorianFormatTest::BUDDHIST_JA);
}

void NonGregorianFormatTest::testRoundTrip($Locale* calendarLocale) {
	$init(NonGregorianFormatTest);
	$useLocalCurrentObjectStackCache();
	$var($DateFormat, df, $DateFormat::getDateTimeInstance($DateFormat::FULL, $DateFormat::FULL, calendarLocale));
	int64_t t = $System::currentTimeMillis();
	t = (t / 1000) * 1000;
	testRoundTrip(df, $$new($Date, t));
	testRoundTrip(df, $$new($Date, 1989 - 1900, 7, 9));
	testRoundTrip(df, $$new($Date, 2005 - 1900, 5, 13));
}

void NonGregorianFormatTest::testRoundTrip($DateFormat* df, $Date* orig) {
	$init(NonGregorianFormatTest);
	$useLocalCurrentObjectStackCache();
	try {
		$var($String, s, $nc(df)->format(orig));
		$var($Date, parsed, df->parse(s));
		if (!$nc(orig)->equals(parsed)) {
			error("testRoundTrip: bad date: origianl: \'%s\', parsed \'%s\'%n"_s, $$new($ObjectArray, {
				$of(orig),
				$of(parsed)
			}));
		}
	} catch ($Exception& e) {
		error("Unexpected exception: %s%n"_s, $$new($ObjectArray, {$of(e)}));
	}
}

void NonGregorianFormatTest::testRoundTripSimple($Locale* calendarLocale, $ObjectArray2* data) {
	$init(NonGregorianFormatTest);
	$useLocalCurrentObjectStackCache();
	try {
		{
			$var($ObjectArray2, arr$, data);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($ObjectArray, item, arr$->get(i$));
				{
					$var($String, pattern, $cast($String, $nc(item)->get(0)));
					$var($String, str, $cast($String, item->get(1)));
					$var($Date, date, $cast($Date, item->get(2)));
					$var($SimpleDateFormat, sdf, $new($SimpleDateFormat, pattern));
					$var($Calendar, cal, $Calendar::getInstance(calendarLocale));
					sdf->setCalendar(cal);
					$var($String, s, sdf->format(date));
					if (!$nc(s)->equals(str)) {
						error("testRoundTripSimple: Got \'%s\', expected \'%s\'%n"_s, $$new($ObjectArray, {
							$of(s),
							$of(str)
						}));
					}
					$var($Date, d, sdf->parse(str));
					if (!$nc(d)->equals(date)) {
						error("testRoundTripSimple: Got \'%s\', expected \'%s\'%n"_s, $$new($ObjectArray, {
							$of(d),
							$of(date)
						}));
					}
				}
			}
		}
	} catch ($Exception& e) {
		error("Unexpected exception: %s%n"_s, $$new($ObjectArray, {$of(e)}));
	}
}

void NonGregorianFormatTest::testParseExceptions($Locale* calendarLocale, $ObjectArray2* data) {
	$init(NonGregorianFormatTest);
	$useLocalCurrentObjectStackCache();
	{
		$var($ObjectArray2, arr$, data);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ObjectArray, item, arr$->get(i$));
			{
				$var($String, pattern, $cast($String, $nc(item)->get(0)));
				$var($String, str, $cast($String, item->get(1)));
				$var($SimpleDateFormat, sdf, $new($SimpleDateFormat, pattern));
				$var($Calendar, cal, $Calendar::getInstance(calendarLocale));
				sdf->setCalendar(cal);
				sdf->setLenient(false);
				try {
					$var($Date, d, sdf->parse(str));
					error("testParseExceptions: parsing \'%s\' doesn\'t throw a ParseException.%n"_s, $$new($ObjectArray, {$of(str)}));
				} catch ($ParseException& e) {
				}
			}
		}
	}
}

void NonGregorianFormatTest::error($String* msg) {
	$init(NonGregorianFormatTest);
	$nc($System::out)->println(msg);
	++NonGregorianFormatTest::errors;
}

void NonGregorianFormatTest::error($String* fmt, $ObjectArray* args) {
	$init(NonGregorianFormatTest);
	$nc($System::out)->printf(fmt, args);
	++NonGregorianFormatTest::errors;
}

void clinit$NonGregorianFormatTest($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(NonGregorianFormatTest::FULL_DATE_FORMAT_JA, u"GGGGyyyy\'\u5e74\'M\'\u6708\'d\'\u65e5\'"_s);
	$assignStatic(NonGregorianFormatTest::JAPANESE_EN, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("GGGG yyyy MMMM d"_s),
			$of("Showa 1 December 31"_s),
			$of($$new($Date, 1926 - 1900, 11, 31))
		}),
		$$new($ObjectArray, {
			$of("GGGG yyyy MMMM d"_s),
			$of("Showa 64 January 6"_s),
			$of($$new($Date, 1989 - 1900, 0, 6))
		}),
		$$new($ObjectArray, {
			$of("GGGG yyyy MMMM d"_s),
			$of("Heisei 1 August 9"_s),
			$of($$new($Date, 1989 - 1900, 7, 9))
		}),
		$$new($ObjectArray, {
			$of("GGGG yyyy MMMM d"_s),
			$of("Heisei 17 June 10"_s),
			$of($$new($Date, 2005 - 1900, 5, 10))
		}),
		$$new($ObjectArray, {
			$of("Gy.MM.dd"_s),
			$of("S1.12.31"_s),
			$of($$new($Date, 1926 - 1900, 11, 31))
		}),
		$$new($ObjectArray, {
			$of("Gy.MM.dd"_s),
			$of("S64.01.06"_s),
			$of($$new($Date, 1989 - 1900, 0, 6))
		}),
		$$new($ObjectArray, {
			$of("Gyy.MM.dd"_s),
			$of("H01.08.09"_s),
			$of($$new($Date, 1989 - 1900, 7, 9))
		}),
		$$new($ObjectArray, {
			$of("Gy.M.d"_s),
			$of("H1.8.9"_s),
			$of($$new($Date, 1989 - 1900, 7, 9))
		}),
		$$new($ObjectArray, {
			$of("Gy.MM.dd"_s),
			$of("H17.06.10"_s),
			$of($$new($Date, 2005 - 1900, 5, 10))
		})
	}));
	$assignStatic(NonGregorianFormatTest::EXCEPTION_JAPANESE_EN, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("GGGG yyyy MMMM d"_s),
			$of("Showa 1 December 10"_s)
		}),
		$$new($ObjectArray, {
			$of("GGGG yyyy MMMM d"_s),
			$of("Showa 64 January 16"_s)
		}),
		$$new($ObjectArray, {
			$of("GGGG yyyy MMMM d"_s),
			$of("Heisei 1 January 1"_s)
		}),
		$$new($ObjectArray, {
			$of("Gy.MM.dd"_s),
			$of("S1.12.10"_s)
		}),
		$$new($ObjectArray, {
			$of("Gy.MM.dd"_s),
			$of("S64.01.16"_s)
		}),
		$$new($ObjectArray, {
			$of("Gyy.MM.dd"_s),
			$of("H01.01.01"_s)
		})
	}));
	$assignStatic(NonGregorianFormatTest::BUDDHIST_EN, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("GGGG yyyy MMMM d"_s),
			$of("B.E. 2469 December 31"_s),
			$of($$new($Date, 1926 - 1900, 11, 31))
		}),
		$$new($ObjectArray, {
			$of("GGGG yyyy MMMM d"_s),
			$of("B.E. 2532 January 6"_s),
			$of($$new($Date, 1989 - 1900, 0, 6))
		}),
		$$new($ObjectArray, {
			$of("GGGG yyyy MMMM d"_s),
			$of("B.E. 2532 August 8"_s),
			$of($$new($Date, 1989 - 1900, 7, 8))
		}),
		$$new($ObjectArray, {
			$of("GGGG yyyy MMMM d"_s),
			$of("B.E. 2548 June 10"_s),
			$of($$new($Date, 2005 - 1900, 5, 10))
		}),
		$$new($ObjectArray, {
			$of("Gyyyy/MM/dd"_s),
			$of("B.E.2469/12/31"_s),
			$of($$new($Date, 1926 - 1900, 11, 31))
		}),
		$$new($ObjectArray, {
			$of("Gyyyy/MM/dd"_s),
			$of("B.E.2532/01/06"_s),
			$of($$new($Date, 1989 - 1900, 0, 6))
		}),
		$$new($ObjectArray, {
			$of("Gyyyy/MM/dd"_s),
			$of("B.E.2532/08/09"_s),
			$of($$new($Date, 1989 - 1900, 7, 9))
		}),
		$$new($ObjectArray, {
			$of("Gyyyy/MM/dd"_s),
			$of("B.E.2548/06/10"_s),
			$of($$new($Date, 2005 - 1900, 5, 10))
		})
	}));
	$assignStatic(NonGregorianFormatTest::JAPANESE_JA, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of(NonGregorianFormatTest::FULL_DATE_FORMAT_JA),
			$of(u"\u662d\u548c\u5143\u5e7412\u670831\u65e5"_s),
			$of($$new($Date, 1926 - 1900, 11, 31))
		}),
		$$new($ObjectArray, {
			$of(NonGregorianFormatTest::FULL_DATE_FORMAT_JA),
			$of(u"\u662d\u548c64\u5e741\u67086\u65e5"_s),
			$of($$new($Date, 1989 - 1900, 0, 6))
		}),
		$$new($ObjectArray, {
			$of(NonGregorianFormatTest::FULL_DATE_FORMAT_JA),
			$of(u"\u5e73\u6210\u5143\u5e748\u67089\u65e5"_s),
			$of($$new($Date, 1989 - 1900, 7, 9))
		}),
		$$new($ObjectArray, {
			$of(NonGregorianFormatTest::FULL_DATE_FORMAT_JA),
			$of(u"\u5e73\u621017\u5e746\u670810\u65e5"_s),
			$of($$new($Date, 2005 - 1900, 5, 10))
		}),
		$$new($ObjectArray, {
			$of("Gyy.MM.dd"_s),
			$of("S01.12.31"_s),
			$of($$new($Date, 1926 - 1900, 11, 31))
		}),
		$$new($ObjectArray, {
			$of("Gyy.MM.dd"_s),
			$of("S64.01.06"_s),
			$of($$new($Date, 1989 - 1900, 0, 6))
		}),
		$$new($ObjectArray, {
			$of("Gyy.MM.dd"_s),
			$of("H01.08.09"_s),
			$of($$new($Date, 1989 - 1900, 7, 9))
		}),
		$$new($ObjectArray, {
			$of("Gy.M.d"_s),
			$of("H1.8.9"_s),
			$of($$new($Date, 1989 - 1900, 7, 9))
		}),
		$$new($ObjectArray, {
			$of("Gyy.MM.dd"_s),
			$of("H17.06.10"_s),
			$of($$new($Date, 2005 - 1900, 5, 10))
		})
	}));
	$assignStatic(NonGregorianFormatTest::EXCEPTION_JAPANESE_JA, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of(NonGregorianFormatTest::FULL_DATE_FORMAT_JA),
			$of(u"\u662d\u548c\u5143\u5e7412\u670810\u65e5"_s)
		}),
		$$new($ObjectArray, {
			$of(NonGregorianFormatTest::FULL_DATE_FORMAT_JA),
			$of(u"\u662d\u548c64\u5e741\u670816\u65e5"_s)
		}),
		$$new($ObjectArray, {
			$of(NonGregorianFormatTest::FULL_DATE_FORMAT_JA),
			$of(u"\u5e73\u6210\u5143\u5e741\u67081\u65e5"_s)
		}),
		$$new($ObjectArray, {
			$of("Gyy.MM.dd"_s),
			$of("S01.12.10"_s)
		}),
		$$new($ObjectArray, {
			$of("Gyy.MM.dd"_s),
			$of("S64.01.16"_s)
		}),
		$$new($ObjectArray, {
			$of("Gyy.MM.dd"_s),
			$of("H01.01.01"_s)
		})
	}));
	$assignStatic(NonGregorianFormatTest::BUDDHIST_JA, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of(NonGregorianFormatTest::FULL_DATE_FORMAT_JA),
			$of(u"\u4ecf\u66a62469\u5e7412\u670831\u65e5"_s),
			$of($$new($Date, 1926 - 1900, 11, 31))
		}),
		$$new($ObjectArray, {
			$of(NonGregorianFormatTest::FULL_DATE_FORMAT_JA),
			$of(u"\u4ecf\u66a62532\u5e741\u67086\u65e5"_s),
			$of($$new($Date, 1989 - 1900, 0, 6))
		}),
		$$new($ObjectArray, {
			$of(NonGregorianFormatTest::FULL_DATE_FORMAT_JA),
			$of(u"\u4ecf\u66a62532\u5e748\u67089\u65e5"_s),
			$of($$new($Date, 1989 - 1900, 7, 9))
		}),
		$$new($ObjectArray, {
			$of(NonGregorianFormatTest::FULL_DATE_FORMAT_JA),
			$of(u"\u4ecf\u66a62548\u5e746\u670810\u65e5"_s),
			$of($$new($Date, 2005 - 1900, 5, 10))
		}),
		$$new($ObjectArray, {
			$of("Gyyyy/MM/dd"_s),
			$of("B.E.2469/12/31"_s),
			$of($$new($Date, 1926 - 1900, 11, 31))
		}),
		$$new($ObjectArray, {
			$of("Gyyyy/MM/dd"_s),
			$of("B.E.2532/01/06"_s),
			$of($$new($Date, 1989 - 1900, 0, 6))
		}),
		$$new($ObjectArray, {
			$of("Gyyyy/MM/dd"_s),
			$of("B.E.2532/08/09"_s),
			$of($$new($Date, 1989 - 1900, 7, 9))
		}),
		$$new($ObjectArray, {
			$of("Gyyyy/MM/dd"_s),
			$of("B.E.2548/06/10"_s),
			$of($$new($Date, 2005 - 1900, 5, 10))
		})
	}));
}

NonGregorianFormatTest::NonGregorianFormatTest() {
}

$Class* NonGregorianFormatTest::load$($String* name, bool initialize) {
	$loadClass(NonGregorianFormatTest, name, initialize, &_NonGregorianFormatTest_ClassInfo_, clinit$NonGregorianFormatTest, allocate$NonGregorianFormatTest);
	return class$;
}

$Class* NonGregorianFormatTest::class$ = nullptr;