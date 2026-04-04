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
	$useLocalObjectStack();
	$var($Locale, defaultLocale, $Locale::getDefault());
	$var($LocaleArray, locales, $new($LocaleArray, {
		$Locale::ENGLISH,
		$Locale::JAPAN
	}));
	$var($Throwable, var$0, nullptr);
	try {
		$var($LocaleArray, arr$, locales);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($Locale, locale, arr$->get(i$));
			{
				test(locale);
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
	$useLocalObjectStack();
	$var($DateFormat, df, $DateFormat::getDateTimeInstance($DateFormat::FULL, $DateFormat::FULL, calendarLocale));
	int64_t t = $System::currentTimeMillis();
	t = (t / 1000) * 1000;
	testRoundTrip(df, $$new($Date, t));
	testRoundTrip(df, $$new($Date, 1989 - 1900, 7, 9));
	testRoundTrip(df, $$new($Date, 2005 - 1900, 5, 13));
}

void NonGregorianFormatTest::testRoundTrip($DateFormat* df, $Date* orig) {
	$init(NonGregorianFormatTest);
	$useLocalObjectStack();
	try {
		$var($String, s, $nc(df)->format(orig));
		$var($Date, parsed, df->parse(s));
		if (!$nc(orig)->equals(parsed)) {
			error("testRoundTrip: bad date: origianl: \'%s\', parsed \'%s\'%n"_s, $$new($ObjectArray, {
				orig,
				parsed
			}));
		}
	} catch ($Exception& e) {
		error("Unexpected exception: %s%n"_s, $$new($ObjectArray, {e}));
	}
}

void NonGregorianFormatTest::testRoundTripSimple($Locale* calendarLocale, $ObjectArray2* data) {
	$init(NonGregorianFormatTest);
	$useLocalObjectStack();
	try {
		$var($ObjectArray2, arr$, data);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
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
						s,
						str
					}));
				}
				$var($Date, d, sdf->parse(str));
				if (!$nc(d)->equals(date)) {
					error("testRoundTripSimple: Got \'%s\', expected \'%s\'%n"_s, $$new($ObjectArray, {
						d,
						date
					}));
				}
			}
		}
	} catch ($Exception& e) {
		error("Unexpected exception: %s%n"_s, $$new($ObjectArray, {e}));
	}
}

void NonGregorianFormatTest::testParseExceptions($Locale* calendarLocale, $ObjectArray2* data) {
	$init(NonGregorianFormatTest);
	$useLocalObjectStack();
	$var($ObjectArray2, arr$, data);
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
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
				error("testParseExceptions: parsing \'%s\' doesn\'t throw a ParseException.%n"_s, $$new($ObjectArray, {str}));
			} catch ($ParseException& e) {
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

void NonGregorianFormatTest::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(NonGregorianFormatTest::FULL_DATE_FORMAT_JA, u"GGGGyyyy\'年\'M\'月\'d\'日\'"_s);
	$assignStatic(NonGregorianFormatTest::JAPANESE_EN, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"GGGG yyyy MMMM d"_s,
			"Showa 1 December 31"_s,
			$$new($Date, 1926 - 1900, 11, 31)
		}),
		$$new($ObjectArray, {
			"GGGG yyyy MMMM d"_s,
			"Showa 64 January 6"_s,
			$$new($Date, 1989 - 1900, 0, 6)
		}),
		$$new($ObjectArray, {
			"GGGG yyyy MMMM d"_s,
			"Heisei 1 August 9"_s,
			$$new($Date, 1989 - 1900, 7, 9)
		}),
		$$new($ObjectArray, {
			"GGGG yyyy MMMM d"_s,
			"Heisei 17 June 10"_s,
			$$new($Date, 2005 - 1900, 5, 10)
		}),
		$$new($ObjectArray, {
			"Gy.MM.dd"_s,
			"S1.12.31"_s,
			$$new($Date, 1926 - 1900, 11, 31)
		}),
		$$new($ObjectArray, {
			"Gy.MM.dd"_s,
			"S64.01.06"_s,
			$$new($Date, 1989 - 1900, 0, 6)
		}),
		$$new($ObjectArray, {
			"Gyy.MM.dd"_s,
			"H01.08.09"_s,
			$$new($Date, 1989 - 1900, 7, 9)
		}),
		$$new($ObjectArray, {
			"Gy.M.d"_s,
			"H1.8.9"_s,
			$$new($Date, 1989 - 1900, 7, 9)
		}),
		$$new($ObjectArray, {
			"Gy.MM.dd"_s,
			"H17.06.10"_s,
			$$new($Date, 2005 - 1900, 5, 10)
		})
	}));
	$assignStatic(NonGregorianFormatTest::EXCEPTION_JAPANESE_EN, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"GGGG yyyy MMMM d"_s,
			"Showa 1 December 10"_s
		}),
		$$new($ObjectArray, {
			"GGGG yyyy MMMM d"_s,
			"Showa 64 January 16"_s
		}),
		$$new($ObjectArray, {
			"GGGG yyyy MMMM d"_s,
			"Heisei 1 January 1"_s
		}),
		$$new($ObjectArray, {
			"Gy.MM.dd"_s,
			"S1.12.10"_s
		}),
		$$new($ObjectArray, {
			"Gy.MM.dd"_s,
			"S64.01.16"_s
		}),
		$$new($ObjectArray, {
			"Gyy.MM.dd"_s,
			"H01.01.01"_s
		})
	}));
	$assignStatic(NonGregorianFormatTest::BUDDHIST_EN, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"GGGG yyyy MMMM d"_s,
			"B.E. 2469 December 31"_s,
			$$new($Date, 1926 - 1900, 11, 31)
		}),
		$$new($ObjectArray, {
			"GGGG yyyy MMMM d"_s,
			"B.E. 2532 January 6"_s,
			$$new($Date, 1989 - 1900, 0, 6)
		}),
		$$new($ObjectArray, {
			"GGGG yyyy MMMM d"_s,
			"B.E. 2532 August 8"_s,
			$$new($Date, 1989 - 1900, 7, 8)
		}),
		$$new($ObjectArray, {
			"GGGG yyyy MMMM d"_s,
			"B.E. 2548 June 10"_s,
			$$new($Date, 2005 - 1900, 5, 10)
		}),
		$$new($ObjectArray, {
			"Gyyyy/MM/dd"_s,
			"B.E.2469/12/31"_s,
			$$new($Date, 1926 - 1900, 11, 31)
		}),
		$$new($ObjectArray, {
			"Gyyyy/MM/dd"_s,
			"B.E.2532/01/06"_s,
			$$new($Date, 1989 - 1900, 0, 6)
		}),
		$$new($ObjectArray, {
			"Gyyyy/MM/dd"_s,
			"B.E.2532/08/09"_s,
			$$new($Date, 1989 - 1900, 7, 9)
		}),
		$$new($ObjectArray, {
			"Gyyyy/MM/dd"_s,
			"B.E.2548/06/10"_s,
			$$new($Date, 2005 - 1900, 5, 10)
		})
	}));
	$assignStatic(NonGregorianFormatTest::JAPANESE_JA, $new($ObjectArray2, {
		$$new($ObjectArray, {
			NonGregorianFormatTest::FULL_DATE_FORMAT_JA,
			u"昭和元年12月31日"_s,
			$$new($Date, 1926 - 1900, 11, 31)
		}),
		$$new($ObjectArray, {
			NonGregorianFormatTest::FULL_DATE_FORMAT_JA,
			u"昭和64年1月6日"_s,
			$$new($Date, 1989 - 1900, 0, 6)
		}),
		$$new($ObjectArray, {
			NonGregorianFormatTest::FULL_DATE_FORMAT_JA,
			u"平成元年8月9日"_s,
			$$new($Date, 1989 - 1900, 7, 9)
		}),
		$$new($ObjectArray, {
			NonGregorianFormatTest::FULL_DATE_FORMAT_JA,
			u"平成17年6月10日"_s,
			$$new($Date, 2005 - 1900, 5, 10)
		}),
		$$new($ObjectArray, {
			"Gyy.MM.dd"_s,
			"S01.12.31"_s,
			$$new($Date, 1926 - 1900, 11, 31)
		}),
		$$new($ObjectArray, {
			"Gyy.MM.dd"_s,
			"S64.01.06"_s,
			$$new($Date, 1989 - 1900, 0, 6)
		}),
		$$new($ObjectArray, {
			"Gyy.MM.dd"_s,
			"H01.08.09"_s,
			$$new($Date, 1989 - 1900, 7, 9)
		}),
		$$new($ObjectArray, {
			"Gy.M.d"_s,
			"H1.8.9"_s,
			$$new($Date, 1989 - 1900, 7, 9)
		}),
		$$new($ObjectArray, {
			"Gyy.MM.dd"_s,
			"H17.06.10"_s,
			$$new($Date, 2005 - 1900, 5, 10)
		})
	}));
	$assignStatic(NonGregorianFormatTest::EXCEPTION_JAPANESE_JA, $new($ObjectArray2, {
		$$new($ObjectArray, {
			NonGregorianFormatTest::FULL_DATE_FORMAT_JA,
			u"昭和元年12月10日"_s
		}),
		$$new($ObjectArray, {
			NonGregorianFormatTest::FULL_DATE_FORMAT_JA,
			u"昭和64年1月16日"_s
		}),
		$$new($ObjectArray, {
			NonGregorianFormatTest::FULL_DATE_FORMAT_JA,
			u"平成元年1月1日"_s
		}),
		$$new($ObjectArray, {
			"Gyy.MM.dd"_s,
			"S01.12.10"_s
		}),
		$$new($ObjectArray, {
			"Gyy.MM.dd"_s,
			"S64.01.16"_s
		}),
		$$new($ObjectArray, {
			"Gyy.MM.dd"_s,
			"H01.01.01"_s
		})
	}));
	$assignStatic(NonGregorianFormatTest::BUDDHIST_JA, $new($ObjectArray2, {
		$$new($ObjectArray, {
			NonGregorianFormatTest::FULL_DATE_FORMAT_JA,
			u"仏暦2469年12月31日"_s,
			$$new($Date, 1926 - 1900, 11, 31)
		}),
		$$new($ObjectArray, {
			NonGregorianFormatTest::FULL_DATE_FORMAT_JA,
			u"仏暦2532年1月6日"_s,
			$$new($Date, 1989 - 1900, 0, 6)
		}),
		$$new($ObjectArray, {
			NonGregorianFormatTest::FULL_DATE_FORMAT_JA,
			u"仏暦2532年8月9日"_s,
			$$new($Date, 1989 - 1900, 7, 9)
		}),
		$$new($ObjectArray, {
			NonGregorianFormatTest::FULL_DATE_FORMAT_JA,
			u"仏暦2548年6月10日"_s,
			$$new($Date, 2005 - 1900, 5, 10)
		}),
		$$new($ObjectArray, {
			"Gyyyy/MM/dd"_s,
			"B.E.2469/12/31"_s,
			$$new($Date, 1926 - 1900, 11, 31)
		}),
		$$new($ObjectArray, {
			"Gyyyy/MM/dd"_s,
			"B.E.2532/01/06"_s,
			$$new($Date, 1989 - 1900, 0, 6)
		}),
		$$new($ObjectArray, {
			"Gyyyy/MM/dd"_s,
			"B.E.2532/08/09"_s,
			$$new($Date, 1989 - 1900, 7, 9)
		}),
		$$new($ObjectArray, {
			"Gyyyy/MM/dd"_s,
			"B.E.2548/06/10"_s,
			$$new($Date, 2005 - 1900, 5, 10)
		})
	}));
}

NonGregorianFormatTest::NonGregorianFormatTest() {
}

$Class* NonGregorianFormatTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NonGregorianFormatTest, init$, void)},
		{"error", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(NonGregorianFormatTest, error, void, $String*)},
		{"error", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $staticMethod(NonGregorianFormatTest, error, void, $String*, $ObjectArray*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NonGregorianFormatTest, main, void, $StringArray*), "java.text.ParseException"},
		{"test", "(Ljava/util/Locale;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(NonGregorianFormatTest, test, void, $Locale*)},
		{"testParseExceptions", "(Ljava/util/Locale;[[Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(NonGregorianFormatTest, testParseExceptions, void, $Locale*, $ObjectArray2*)},
		{"testRoundTrip", "(Ljava/util/Locale;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(NonGregorianFormatTest, testRoundTrip, void, $Locale*)},
		{"testRoundTrip", "(Ljava/text/DateFormat;Ljava/util/Date;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(NonGregorianFormatTest, testRoundTrip, void, $DateFormat*, $Date*)},
		{"testRoundTripSimple", "(Ljava/util/Locale;[[Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(NonGregorianFormatTest, testRoundTripSimple, void, $Locale*, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"NonGregorianFormatTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NonGregorianFormatTest, name, initialize, &classInfo$$, NonGregorianFormatTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NonGregorianFormatTest);
	});
	return class$;
}

$Class* NonGregorianFormatTest::class$ = nullptr;