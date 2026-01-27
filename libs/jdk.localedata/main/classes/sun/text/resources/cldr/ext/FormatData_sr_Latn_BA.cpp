#include <sun/text/resources/cldr/ext/FormatData_sr_Latn_BA.h>

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

$MethodInfo _FormatData_sr_Latn_BA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_sr_Latn_BA, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_sr_Latn_BA, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_sr_Latn_BA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_sr_Latn_BA",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_sr_Latn_BA_MethodInfo_
};

$Object* allocate$FormatData_sr_Latn_BA($Class* clazz) {
	return $of($alloc(FormatData_sr_Latn_BA));
}

void FormatData_sr_Latn_BA::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_sr_Latn_BA::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		"nedjelja"_s,
		"ponedjeljak"_s,
		"utorak"_s,
		"srijeda"_s,
		u"četvrtak"_s,
		"petak"_s,
		"subota"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		"prije podne"_s,
		"po podne"_s,
		u"ponoć"_s,
		"podne"_s,
		"ujutro"_s,
		""_s,
		"po podne"_s,
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
	$var($StringArray, metaValue_abbreviated_AmPmMarkers, $new($StringArray, {
		"prije podne"_s,
		"po podne"_s,
		u"ponoć"_s,
		"podne"_s,
		"jutro"_s,
		""_s,
		"po pod."_s,
		""_s,
		u"veče"_s,
		""_s,
		u"noću"_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("japanese.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayAbbreviations"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of("mjesec"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of("nedjelja"_s)
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of("{0}, standardno vrijeme"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of($$new($StringArray, {
				"ned"_s,
				"pon"_s,
				"uto"_s,
				"sri"_s,
				u"čet"_s,
				"pet"_s,
				"sub"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				"prije nove ere"_s,
				"nove ere"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of("{0}, ljetnje vrijeme"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayAbbreviations"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of("dan u nedjelji"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of(metaValue_DayNames)
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
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("prije podne/po podne"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		})
	}));
	return data;
}

FormatData_sr_Latn_BA::FormatData_sr_Latn_BA() {
}

$Class* FormatData_sr_Latn_BA::load$($String* name, bool initialize) {
	$loadClass(FormatData_sr_Latn_BA, name, initialize, &_FormatData_sr_Latn_BA_ClassInfo_, allocate$FormatData_sr_Latn_BA);
	return class$;
}

$Class* FormatData_sr_Latn_BA::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun