#include <sun/text/resources/cldr/ext/FormatData_sr_Cyrl_ME.h>

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

$MethodInfo _FormatData_sr_Cyrl_ME_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_sr_Cyrl_ME, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_sr_Cyrl_ME, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_sr_Cyrl_ME_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_sr_Cyrl_ME",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_sr_Cyrl_ME_MethodInfo_
};

$Object* allocate$FormatData_sr_Cyrl_ME($Class* clazz) {
	return $of($alloc(FormatData_sr_Cyrl_ME));
}

void FormatData_sr_Cyrl_ME::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_sr_Cyrl_ME::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"јан"_s,
		u"феб"_s,
		u"март"_s,
		u"апр"_s,
		u"мај"_s,
		u"јун"_s,
		u"јул"_s,
		u"авг"_s,
		u"септ"_s,
		u"окт"_s,
		u"нов"_s,
		u"дец"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"недјеља"_s,
		u"понедељак"_s,
		u"уторак"_s,
		u"сриједа"_s,
		u"четвртак"_s,
		u"петак"_s,
		u"субота"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"прије подне"_s,
		u"по подне"_s,
		u"поноћ"_s,
		u"подне"_s,
		u"ујутро"_s,
		""_s,
		u"по подне"_s,
		""_s,
		u"увече"_s,
		""_s,
		u"ноћу"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		"a"_s,
		"p"_s,
		u"поноћ"_s,
		u"подне"_s,
		u"јутро"_s,
		""_s,
		u"по под."_s,
		""_s,
		u"вече"_s,
		""_s,
		u"ноћ"_s,
		""_s
	}));
	$var($StringArray, metaValue_abbreviated_AmPmMarkers, $new($StringArray, {
		u"прије подне"_s,
		u"по подне"_s,
		u"поноћ"_s,
		u"подне"_s,
		u"јутро"_s,
		""_s,
		u"по под."_s,
		""_s,
		u"вече"_s,
		""_s,
		u"ноћу"_s,
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
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
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
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
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
				u"прије нове ере"_s,
				u"нове ере"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayAbbreviations"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
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
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
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
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		})
	}));
	return data;
}

FormatData_sr_Cyrl_ME::FormatData_sr_Cyrl_ME() {
}

$Class* FormatData_sr_Cyrl_ME::load$($String* name, bool initialize) {
	$loadClass(FormatData_sr_Cyrl_ME, name, initialize, &_FormatData_sr_Cyrl_ME_ClassInfo_, allocate$FormatData_sr_Cyrl_ME);
	return class$;
}

$Class* FormatData_sr_Cyrl_ME::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun