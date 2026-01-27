#include <sun/text/resources/ext/JavaTimeSupplementary_es_HN.h>

#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

$MethodInfo _JavaTimeSupplementary_es_HN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_es_HN, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_es_HN, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_es_HN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_es_HN",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_es_HN_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_es_HN($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_es_HN));
}

void JavaTimeSupplementary_es_HN::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_es_HN::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		"a.m."_s,
		"p.m."_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE dd \'de\' MMMM \'de\' y GGGG"_s,
		"dd \'de\' MMMM \'de\' y GGGG"_s,
		"GGGG y MMM d"_s,
		"G y-MM-dd"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"d"_s,
		"l"_s,
		"m"_s,
		"m"_s,
		"j"_s,
		"v"_s,
		"s"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"HH:mm:ss zzzz"_s,
		"HH:mm:ss z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE dd \'de\' MMMM \'de\' y G"_s,
		"dd \'de\' MMMM \'de\' y G"_s,
		"G y MMM d"_s,
		"GGGGG y-MM-dd"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("a.m./p.m."_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of("Zona horaria"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(sharedDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNarrows"_s),
			$of(sharedDayNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.TimePatterns"_s),
			$of(sharedTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE dd \'de\' MMMM \'de\' y G"_s,
				"dd \'de\' MMMM \'de\' y G"_s,
				"dd/MM/y G"_s,
				"dd/MM/yy GGGGG"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of(sharedDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNarrows"_s),
			$of(sharedDayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"ene."_s,
				"feb."_s,
				"mar."_s,
				"abr."_s,
				"may."_s,
				"jun."_s,
				"jul."_s,
				"ago."_s,
				"sep."_s,
				"oct."_s,
				"nov."_s,
				"dic."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
				"e"_s,
				"f"_s,
				"m"_s,
				"a"_s,
				"m"_s,
				"j"_s,
				"j"_s,
				"a"_s,
				"s"_s,
				"o"_s,
				"n"_s,
				"d"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.TimePatterns"_s),
			$of(sharedTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		})
	});
}

JavaTimeSupplementary_es_HN::JavaTimeSupplementary_es_HN() {
}

$Class* JavaTimeSupplementary_es_HN::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_es_HN, name, initialize, &_JavaTimeSupplementary_es_HN_ClassInfo_, allocate$JavaTimeSupplementary_es_HN);
	return class$;
}

$Class* JavaTimeSupplementary_es_HN::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun