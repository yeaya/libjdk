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

void JavaTimeSupplementary_ro::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_ro::getContents() {
	$useLocalObjectStack();
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
			"QuarterAbbreviations"_s,
			sharedQuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"QuarterNames"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			"calendar budist"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			"calendar gregorian"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			"calendar gregorian"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			"calendar islamic"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			"calendar islamic civil"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			"calendar japonez"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			"calendarul Republicii Chineze"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			"a.m/p.m."_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"Eră"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			u"Oră"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			"Minut"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"Lună"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			u"Secundă"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"Săptămână"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"Zi a săptămânii"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			"An"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			"Fus orar"_s
		}),
		$$new($ObjectArray, {
			"islamic.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.DatePatterns"_s,
			sharedDatePatterns
		}),
		$$new($ObjectArray, {
			"islamic.DayAbbreviations"_s,
			sharedDayAbbreviations
		}),
		$$new($ObjectArray, {
			"islamic.DayNames"_s,
			sharedDayNames
		}),
		$$new($ObjectArray, {
			"islamic.DayNarrows"_s,
			sharedDayNarrows
		}),
		$$new($ObjectArray, {
			"islamic.QuarterAbbreviations"_s,
			sharedQuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"islamic.QuarterNames"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"islamic.abbreviated.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.narrow.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.long.Eras"_s,
			$$new($StringArray, {
				"BC"_s,
				u"era budistă"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.short.Eras"_s,
			$$new($StringArray, {
				"BC"_s,
				"e.b."_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.islamic.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.japanese.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.long.Eras"_s,
			$$new($StringArray, {
				u"înainte de Hristos"_s,
				u"după Hristos"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				"d.C."_s,
				u"î.d.C."_s
			})
		}),
		$$new($ObjectArray, {
			"roc.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.DatePatterns"_s,
			sharedDatePatterns
		}),
		$$new($ObjectArray, {
			"roc.DayAbbreviations"_s,
			sharedDayAbbreviations
		}),
		$$new($ObjectArray, {
			"roc.DayNames"_s,
			sharedDayNames
		}),
		$$new($ObjectArray, {
			"roc.DayNarrows"_s,
			sharedDayNarrows
		}),
		$$new($ObjectArray, {
			"roc.MonthAbbreviations"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"roc.QuarterAbbreviations"_s,
			sharedQuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"roc.QuarterNames"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"roc.abbreviated.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			sharedAmPmMarkers
		})
	});
}

JavaTimeSupplementary_ro::JavaTimeSupplementary_ro() {
}

$Class* JavaTimeSupplementary_ro::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_ro, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_ro, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_ro",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_ro, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_ro);
	});
	return class$;
}

$Class* JavaTimeSupplementary_ro::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun