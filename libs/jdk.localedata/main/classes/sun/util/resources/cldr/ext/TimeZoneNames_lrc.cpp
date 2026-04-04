#include <sun/util/resources/cldr/ext/TimeZoneNames_lrc.h>
#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

#undef EMPTY_ZONE

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZoneNamesBundle = ::sun::util::resources::TimeZoneNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

void TimeZoneNames_lrc::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_lrc::getContents() {
	$useLocalObjectStack();
	$var($StringArray, EMPTY_ZONE, $new($StringArray, {
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, America_Central, $new($StringArray, {
		u"گاٛت مینجاٛیی ئستاٛنداٛرد"_s,
		""_s,
		u"روٙشنایی نئهادار روٙز"_s,
		""_s,
		u"گاٛت مینجاٛیی"_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"America/Chicago"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"UTC"_s,
			EMPTY_ZONE
		}),
		$$new($ObjectArray, {
			"CST"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"CST6CDT"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"SystemV/CST6"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Belize"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Merida"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Regina"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Managua"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"SystemV/CST6CDT"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Resolute"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Winnipeg"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Guatemala"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Matamoros"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Menominee"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Monterrey"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Costa_Rica"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/El_Salvador"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Mexico_City"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Rainy_River"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Tegucigalpa"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Indiana/Knox"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Rankin_Inlet"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Swift_Current"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Bahia_Banderas"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Indiana/Tell_City"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/North_Dakota/Beulah"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/North_Dakota/Center"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"timezone.excity.Etc/Unknown"_s,
			u"نادیار"_s
		}),
		$$new($ObjectArray, {
			"America/North_Dakota/New_Salem"_s,
			America_Central
		})
	}));
	return data;
}

TimeZoneNames_lrc::TimeZoneNames_lrc() {
}

$Class* TimeZoneNames_lrc::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_lrc, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_lrc, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.TimeZoneNames_lrc",
		"sun.util.resources.TimeZoneNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeZoneNames_lrc, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNames_lrc);
	});
	return class$;
}

$Class* TimeZoneNames_lrc::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun