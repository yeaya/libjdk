#include <sun/text/resources/cldr/ext/FormatData_sr_Cyrl_BA.h>
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

void FormatData_sr_Cyrl_BA::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_sr_Cyrl_BA::getContents() {
	$useLocalObjectStack();
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"недјеља"_s,
		u"понедјељак"_s,
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
			"japanese.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"japanese.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"japanese.DayAbbreviations"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"мјесец"_s
		}),
		$$new($ObjectArray, {
			"islamic.narrow.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"недјеља"_s
		}),
		$$new($ObjectArray, {
			"DayAbbreviations"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"abbreviated.AmPmMarkers"_s,
			metaValue_abbreviated_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat.standard"_s,
			u"{0}, стандардно вријеме"_s
		}),
		$$new($ObjectArray, {
			"japanese.abbreviated.AmPmMarkers"_s,
			metaValue_abbreviated_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"buddhist.narrow.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"buddhist.abbreviated.AmPmMarkers"_s,
			metaValue_abbreviated_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"standalone.DayAbbreviations"_s,
			$$new($StringArray, {
				u"нед"_s,
				u"пон"_s,
				u"уто"_s,
				u"сри"_s,
				u"чет"_s,
				u"пет"_s,
				u"суб"_s
			})
		}),
		$$new($ObjectArray, {
			"roc.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.abbreviated.AmPmMarkers"_s,
			metaValue_abbreviated_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"long.Eras"_s,
			$$new($StringArray, {
				u"прије нове ере"_s,
				u"нове ере"_s
			})
		}),
		$$new($ObjectArray, {
			"islamic.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat.daylight"_s,
			u"{0}, љетње вријеме"_s
		}),
		$$new($ObjectArray, {
			"buddhist.DayAbbreviations"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"дан у недјељи"_s
		}),
		$$new($ObjectArray, {
			"standalone.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"narrow.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"japanese.narrow.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"buddhist.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"islamic.DayAbbreviations"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"buddhist.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"прије подне/по подне"_s
		}),
		$$new($ObjectArray, {
			"roc.abbreviated.AmPmMarkers"_s,
			metaValue_abbreviated_AmPmMarkers
		})
	}));
	return data;
}

FormatData_sr_Cyrl_BA::FormatData_sr_Cyrl_BA() {
}

$Class* FormatData_sr_Cyrl_BA::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_sr_Cyrl_BA, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_sr_Cyrl_BA, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.cldr.ext.FormatData_sr_Cyrl_BA",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_sr_Cyrl_BA, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_sr_Cyrl_BA);
	});
	return class$;
}

$Class* FormatData_sr_Cyrl_BA::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun