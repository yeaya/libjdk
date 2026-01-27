#include <sun/text/resources/ext/JavaTimeSupplementary_ro.h>

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

$MethodInfo _JavaTimeSupplementary_ro_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_ro, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_ro, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_ro_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_ro",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_ro_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_ro($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_ro));
}

void JavaTimeSupplementary_ro::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_ro::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"trim. I"_s,
		"trim. II"_s,
		"trim. III"_s,
		"trim. IV"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		"trimestrul I"_s,
		"trimestrul al II-lea"_s,
		"trimestrul al III-lea"_s,
		"trimestrul al IV-lea"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		"a.m."_s,
		"p.m."_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE, d MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"dd.MM.y GGGG"_s,
		"dd.MM.y G"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"dum."_s,
		"lun."_s,
		"mar."_s,
		"mie."_s,
		"joi"_s,
		"vin."_s,
		u"sâm."_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"duminică"_s,
		"luni"_s,
		u"marți"_s,
		"miercuri"_s,
		"joi"_s,
		"vineri"_s,
		u"sâmbătă"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"D"_s,
		"L"_s,
		"M"_s,
		"M"_s,
		"J"_s,
		"V"_s,
		"S"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE, d MMMM y G"_s,
		"d MMMM y G"_s,
		"dd.MM.y G"_s,
		"dd.MM.y GGGGG"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of("calendar budist"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of("calendar gregorian"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of("calendar gregorian"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of("calendar islamic"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of("calendar islamic civil"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of("calendar japonez"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of("calendarul Republicii Chineze"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("a.m/p.m."_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"Eră"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"Oră"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of("Minut"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"Lună"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"Secundă"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"Săptămână"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"Zi a săptămânii"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of("An"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of("Fus orar"_s)
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
			$of("islamic.DayAbbreviations"_s),
			$of(sharedDayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNames"_s),
			$of(sharedDayNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNarrows"_s),
			$of(sharedDayNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNames"_s),
			$of(sharedQuarterNames)
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
			$of("java.time.buddhist.long.Eras"_s),
			$of($$new($StringArray, {
				"BC"_s,
				u"era budistă"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.short.Eras"_s),
			$of($$new($StringArray, {
				"BC"_s,
				"e.b."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of($$new($StringArray, {
				u"înainte de Hristos"_s,
				u"după Hristos"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				"d.C."_s,
				u"î.d.C."_s
			}))
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
			$of("roc.DayAbbreviations"_s),
			$of(sharedDayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNames"_s),
			$of(sharedDayNames)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNarrows"_s),
			$of(sharedDayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"ian."_s,
				"feb."_s,
				"mar."_s,
				"apr."_s,
				"mai"_s,
				"iun."_s,
				"iul."_s,
				"aug."_s,
				"sept."_s,
				"oct."_s,
				"nov."_s,
				"dec."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
				"ianuarie"_s,
				"februarie"_s,
				"martie"_s,
				"aprilie"_s,
				"mai"_s,
				"iunie"_s,
				"iulie"_s,
				"august"_s,
				"septembrie"_s,
				"octombrie"_s,
				"noiembrie"_s,
				"decembrie"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
				"I"_s,
				"F"_s,
				"M"_s,
				"A"_s,
				"M"_s,
				"I"_s,
				"I"_s,
				"A"_s,
				"S"_s,
				"O"_s,
				"N"_s,
				"D"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNames"_s),
			$of(sharedQuarterNames)
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

JavaTimeSupplementary_ro::JavaTimeSupplementary_ro() {
}

$Class* JavaTimeSupplementary_ro::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_ro, name, initialize, &_JavaTimeSupplementary_ro_ClassInfo_, allocate$JavaTimeSupplementary_ro);
	return class$;
}

$Class* JavaTimeSupplementary_ro::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun