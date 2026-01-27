#include <sun/text/resources/cldr/ext/FormatData_om_KE.h>

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

$MethodInfo _FormatData_om_KE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_om_KE, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_om_KE, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_om_KE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_om_KE",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_om_KE_MethodInfo_
};

$Object* allocate$FormatData_om_KE($Class* clazz) {
	return $of($alloc(FormatData_om_KE));
}

void FormatData_om_KE::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_om_KE::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		"A"_s,
		"G"_s,
		"B"_s,
		"E"_s,
		"C"_s,
		"W"_s,
		"A"_s,
		"H"_s,
		"F"_s,
		"O"_s,
		"S"_s,
		"M"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		"D"_s,
		"W"_s,
		"Q"_s,
		"R"_s,
		"K"_s,
		"J"_s,
		"S"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		"K1"_s,
		"K2"_s,
		"K3"_s,
		"K4"_s
	}));
	$var($StringArray, metaValue_long_Eras, $new($StringArray, {
		"KD"_s,
		"CE"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH:mm:ss zzzz"_s,
		"HH:mm:ss z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("buddhist.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of(metaValue_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("japanese.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("narrow.Eras"_s),
			$of(metaValue_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of(metaValue_long_Eras)
		})
	}));
	return data;
}

FormatData_om_KE::FormatData_om_KE() {
}

$Class* FormatData_om_KE::load$($String* name, bool initialize) {
	$loadClass(FormatData_om_KE, name, initialize, &_FormatData_om_KE_ClassInfo_, allocate$FormatData_om_KE);
	return class$;
}

$Class* FormatData_om_KE::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun