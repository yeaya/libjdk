#include <sun/text/resources/ext/FormatData_tr.h>

#include <sun/util/resources/ParallelListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParallelListResourceBundle = ::sun::util::resources::ParallelListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

$MethodInfo _FormatData_tr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_tr, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_tr, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_tr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_tr",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_tr_MethodInfo_
};

$Object* allocate$FormatData_tr($Class* clazz) {
	return $of($alloc(FormatData_tr));
}

void FormatData_tr::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_tr::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				"Ocak"_s,
				u"Şubat"_s,
				"Mart"_s,
				"Nisan"_s,
				u"Mayıs"_s,
				"Haziran"_s,
				"Temmuz"_s,
				u"Ağustos"_s,
				u"Eylül"_s,
				"Ekim"_s,
				u"Kasım"_s,
				u"Aralık"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				"Ocak"_s,
				u"Şubat"_s,
				"Mart"_s,
				"Nisan"_s,
				u"Mayıs"_s,
				"Haziran"_s,
				"Temmuz"_s,
				u"Ağustos"_s,
				u"Eylül"_s,
				"Ekim"_s,
				u"Kasım"_s,
				u"Aralık"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"Oca"_s,
				u"Şub"_s,
				"Mar"_s,
				"Nis"_s,
				"May"_s,
				"Haz"_s,
				"Tem"_s,
				u"Ağu"_s,
				"Eyl"_s,
				"Eki"_s,
				"Kas"_s,
				"Ara"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"Oca"_s,
				u"Şub"_s,
				"Mar"_s,
				"Nis"_s,
				"May"_s,
				"Haz"_s,
				"Tem"_s,
				u"Ağu"_s,
				"Eyl"_s,
				"Eki"_s,
				"Kas"_s,
				"Ara"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				"O"_s,
				u"Ş"_s,
				"M"_s,
				"N"_s,
				"M"_s,
				"H"_s,
				"T"_s,
				"A"_s,
				"E"_s,
				"E"_s,
				"K"_s,
				"A"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of($$new($StringArray, {
				"O"_s,
				u"Ş"_s,
				"M"_s,
				"N"_s,
				"M"_s,
				"H"_s,
				"T"_s,
				"A"_s,
				"E"_s,
				"E"_s,
				"K"_s,
				"A"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				"Pazar"_s,
				"Pazartesi"_s,
				u"Salı"_s,
				u"Çarşamba"_s,
				u"Perşembe"_s,
				"Cuma"_s,
				"Cumartesi"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of($$new($StringArray, {
				"Pazar"_s,
				"Pazartesi"_s,
				u"Salı"_s,
				u"Çarşamba"_s,
				u"Perşembe"_s,
				"Cuma"_s,
				"Cumartesi"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				"Paz"_s,
				"Pzt"_s,
				"Sal"_s,
				u"Çar"_s,
				"Per"_s,
				"Cum"_s,
				"Cmt"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of($$new($StringArray, {
				"Paz"_s,
				"Pzt"_s,
				"Sal"_s,
				u"Çar"_s,
				"Per"_s,
				"Cum"_s,
				"Cmt"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				"P"_s,
				"P"_s,
				"S"_s,
				u"Ç"_s,
				"P"_s,
				"C"_s,
				"C"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of($$new($StringArray, {
				"P"_s,
				"P"_s,
				"S"_s,
				u"Ç"_s,
				"P"_s,
				"C"_s,
				"C"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"Milattan Önce"_s,
				"Milattan Sonra"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				u"MÖ"_s,
				"MS"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###;-#,##0.###"_s,
				u"#,##0.00 ¤;-#,##0.00 ¤"_s,
				"% #,##0"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberElements"_s),
			$of($$new($StringArray, {
				","_s,
				"."_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"�"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				"HH:mm:ss z"_s,
				"HH:mm:ss z"_s,
				"HH:mm:ss"_s,
				"HH:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"dd MMMM yyyy EEEE"_s,
				"dd MMMM yyyy EEEE"_s,
				"dd.MMM.yyyy"_s,
				"dd.MM.yyyy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("GanjkHmsSEDFwWxhKzZ"_s)
		})
	});
}

FormatData_tr::FormatData_tr() {
}

$Class* FormatData_tr::load$($String* name, bool initialize) {
	$loadClass(FormatData_tr, name, initialize, &_FormatData_tr_ClassInfo_, allocate$FormatData_tr);
	return class$;
}

$Class* FormatData_tr::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun