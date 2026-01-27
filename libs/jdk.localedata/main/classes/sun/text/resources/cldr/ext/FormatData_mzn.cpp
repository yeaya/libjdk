#include <sun/text/resources/cldr/ext/FormatData_mzn.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _FormatData_mzn_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_mzn, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_mzn, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_mzn_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_mzn",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_mzn_MethodInfo_
};

$Object* allocate$FormatData_mzn($Class* clazz) {
	return $of($alloc(FormatData_mzn));
}

void FormatData_mzn::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_mzn::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"ژانویه"_s,
		u"فوریه"_s,
		u"مارس"_s,
		u"آوریل"_s,
		u"مه"_s,
		u"ژوئن"_s,
		u"ژوئیه"_s,
		u"اوت"_s,
		u"سپتامبر"_s,
		u"اکتبر"_s,
		u"نوامبر"_s,
		u"دسامبر"_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"پ.م"_s,
		u"م."_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"سال"_s)
		}),
		$$new($ObjectArray, {
			$of("arabext.NumberElements"_s),
			$of($$new($StringArray, {
				u"٫"_s,
				u"٬"_s,
				u"؛"_s,
				u"٪"_s,
				u"۰"_s,
				"#"_s,
				u"\u200e-\u200e"_s,
				u"×۱۰^"_s,
				u"؉"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"زمونی منقطه"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"ماه"_s)
		}),
		$$new($ObjectArray, {
			$of("arabext.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"¤ #,##0.00"_s,
				"#,##0%"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"ثانیه"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("narrow.Eras"_s),
			$of(metaValue_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"هفته"_s)
		}),
		$$new($ObjectArray, {
			$of("DefaultNumberingSystem"_s),
			$of("arabext"_s)
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of(metaValue_Eras)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"قبل میلاد"_s,
				u"بعد میلاد"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"هفته\u200cی ِروز"_s)
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"ساعِت"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"دقیقه"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"تقویم"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"صواحی/ظُر"_s)
		})
	}));
	return data;
}

FormatData_mzn::FormatData_mzn() {
}

$Class* FormatData_mzn::load$($String* name, bool initialize) {
	$loadClass(FormatData_mzn, name, initialize, &_FormatData_mzn_ClassInfo_, allocate$FormatData_mzn);
	return class$;
}

$Class* FormatData_mzn::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun