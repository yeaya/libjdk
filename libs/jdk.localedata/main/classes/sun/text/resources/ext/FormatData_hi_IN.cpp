#include <sun/text/resources/ext/FormatData_hi_IN.h>

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

$MethodInfo _FormatData_hi_IN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_hi_IN, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_hi_IN, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_hi_IN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_hi_IN",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_hi_IN_MethodInfo_
};

$Object* allocate$FormatData_hi_IN($Class* clazz) {
	return $of($alloc(FormatData_hi_IN));
}

void FormatData_hi_IN::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_hi_IN::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"जनवरी"_s,
				u"फ़रवरी"_s,
				u"मार्च"_s,
				u"अप्रैल"_s,
				u"मई"_s,
				u"जून"_s,
				u"जुलाई"_s,
				u"अगस्त"_s,
				u"सितंबर"_s,
				u"अक्\u200dतूबर"_s,
				u"नवंबर"_s,
				u"दिसंबर"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"जनवरी"_s,
				u"फ़रवरी"_s,
				u"मार्च"_s,
				u"अप्रैल"_s,
				u"मई"_s,
				u"जून"_s,
				u"जुलाई"_s,
				u"अगस्त"_s,
				u"सितंबर"_s,
				u"अक्\u200dतूबर"_s,
				u"नवंबर"_s,
				u"दिसंबर"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				u"ज"_s,
				u"फ़"_s,
				u"मा"_s,
				u"अ"_s,
				u"म"_s,
				u"जू"_s,
				u"जु"_s,
				u"अ"_s,
				u"सि"_s,
				u"अ"_s,
				u"न"_s,
				u"दि"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"रविवार"_s,
				u"सोमवार"_s,
				u"मंगलवार"_s,
				u"बुधवार"_s,
				u"गुरुवार"_s,
				u"शुक्रवार"_s,
				u"शनिवार"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"रवि"_s,
				u"सोम"_s,
				u"मंगल"_s,
				u"बुध"_s,
				u"गुरु"_s,
				u"शुक्र"_s,
				u"शनि"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				u"र"_s,
				u"सो"_s,
				u"मं"_s,
				u"बु"_s,
				u"गु"_s,
				u"शु"_s,
				u"श"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of($$new($StringArray, {
				u"पूर्वाह्न"_s,
				u"अपराह्न"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				u"ईसापूर्व"_s,
				u"सन"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("short.Eras"_s),
			$of($$new($StringArray, {
				u"ईसापूर्व"_s,
				u"सन"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"०"_s,
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
				"h:mm:ss a z"_s,
				"h:mm:ss a z"_s,
				"h:mm:ss a"_s,
				"h:mm a"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d MMMM, yyyy"_s,
				"d MMMM, yyyy"_s,
				"d MMM, yyyy"_s,
				"d/M/yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("GyMdkHmsSEDFwWahKzZ"_s)
		})
	});
}

FormatData_hi_IN::FormatData_hi_IN() {
}

$Class* FormatData_hi_IN::load$($String* name, bool initialize) {
	$loadClass(FormatData_hi_IN, name, initialize, &_FormatData_hi_IN_ClassInfo_, allocate$FormatData_hi_IN);
	return class$;
}

$Class* FormatData_hi_IN::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun