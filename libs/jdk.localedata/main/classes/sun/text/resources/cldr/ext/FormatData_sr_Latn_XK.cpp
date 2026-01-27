#include <sun/text/resources/cldr/ext/FormatData_sr_Latn_XK.h>

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

$MethodInfo _FormatData_sr_Latn_XK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_sr_Latn_XK, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_sr_Latn_XK, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_sr_Latn_XK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_sr_Latn_XK",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_sr_Latn_XK_MethodInfo_
};

$Object* allocate$FormatData_sr_Latn_XK($Class* clazz) {
	return $of($alloc(FormatData_sr_Latn_XK));
}

void FormatData_sr_Latn_XK::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_sr_Latn_XK::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		"jan"_s,
		"feb"_s,
		"mart"_s,
		"apr"_s,
		"maj"_s,
		"jun"_s,
		"jul"_s,
		"avg"_s,
		"sept"_s,
		"okt"_s,
		"nov"_s,
		"dec"_s,
		""_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		"pre podne"_s,
		"po podne"_s,
		u"ponoć"_s,
		"podne"_s,
		"jutro"_s,
		""_s,
		"po pod."_s,
		""_s,
		u"uveče"_s,
		""_s,
		u"noću"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		"a"_s,
		"p"_s,
		u"ponoć"_s,
		"podne"_s,
		"jutro"_s,
		""_s,
		"po pod."_s,
		""_s,
		u"veče"_s,
		""_s,
		u"noć"_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("japanese.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		})
	}));
	return data;
}

FormatData_sr_Latn_XK::FormatData_sr_Latn_XK() {
}

$Class* FormatData_sr_Latn_XK::load$($String* name, bool initialize) {
	$loadClass(FormatData_sr_Latn_XK, name, initialize, &_FormatData_sr_Latn_XK_ClassInfo_, allocate$FormatData_sr_Latn_XK);
	return class$;
}

$Class* FormatData_sr_Latn_XK::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun