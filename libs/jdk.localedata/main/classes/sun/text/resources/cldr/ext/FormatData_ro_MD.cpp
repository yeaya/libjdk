#include <sun/text/resources/cldr/ext/FormatData_ro_MD.h>

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

$MethodInfo _FormatData_ro_MD_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ro_MD, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ro_MD, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_ro_MD_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ro_MD",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ro_MD_MethodInfo_
};

$Object* allocate$FormatData_ro_MD($Class* clazz) {
	return $of($alloc(FormatData_ro_MD));
}

void FormatData_ro_MD::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ro_MD::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		"Dum"_s,
		"Lun"_s,
		"Mar"_s,
		"Mie"_s,
		"Joi"_s,
		"Vin"_s,
		u"Sâm"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		"D"_s,
		"L"_s,
		"Ma"_s,
		"Mi"_s,
		"J"_s,
		"V"_s,
		"S"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		"trimestrul 1"_s,
		"trimestrul 2"_s,
		"trimestrul 3"_s,
		"trimestrul 4"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		"trim. 1"_s,
		"trim. 2"_s,
		"trim. 3"_s,
		"trim. 4"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		"a.m."_s,
		"p.m."_s,
		u"miezul nopții"_s,
		u"amiază"_s,
		u"dimineața"_s,
		""_s,
		u"după-amiaza"_s,
		""_s,
		"seara"_s,
		""_s,
		"noaptea"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		"a.m."_s,
		"p.m."_s,
		u"miezul nopții"_s,
		u"amiază"_s,
		u"dimineață"_s,
		""_s,
		u"după-amiază"_s,
		""_s,
		u"seară"_s,
		""_s,
		"noapte"_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("buddhist.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
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
			$of("standalone.QuarterAbbreviations"_s),
			$of($$new($StringArray, {
				"Trim. 1"_s,
				"Trim. 2"_s,
				"Trim. 3"_s,
				"Trim. 4"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
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
			$of("islamic.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterNames"_s),
			$of($$new($StringArray, {
				"Trimestrul 1"_s,
				"Trimestrul 2"_s,
				"Trimestrul 3"_s,
				"Trimestrul 4"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		})
	}));
	return data;
}

FormatData_ro_MD::FormatData_ro_MD() {
}

$Class* FormatData_ro_MD::load$($String* name, bool initialize) {
	$loadClass(FormatData_ro_MD, name, initialize, &_FormatData_ro_MD_ClassInfo_, allocate$FormatData_ro_MD);
	return class$;
}

$Class* FormatData_ro_MD::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun