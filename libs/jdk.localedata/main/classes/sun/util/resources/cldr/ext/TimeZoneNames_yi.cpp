#include <sun/util/resources/cldr/ext/TimeZoneNames_yi.h>
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

void TimeZoneNames_yi::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_yi::getContents() {
	$useLocalObjectStack();
	$var($StringArray, EMPTY_ZONE, $new($StringArray, {
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"UTC"_s,
			EMPTY_ZONE
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Saigon"_s,
			u"הא טשי מין שטאָט"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Etc/Unknown"_s,
			u"אומבאַוואוסטע שטאָט"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Tunis"_s,
			u"טוניס"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Asmera"_s,
			u"אַסמאַראַ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Abidjan"_s,
			u"אַבידזשאַן"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Windhoek"_s,
			u"ווינטהוק"_s
		})
	}));
	return data;
}

TimeZoneNames_yi::TimeZoneNames_yi() {
}

$Class* TimeZoneNames_yi::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_yi, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_yi, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.TimeZoneNames_yi",
		"sun.util.resources.TimeZoneNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeZoneNames_yi, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNames_yi);
	});
	return class$;
}

$Class* TimeZoneNames_yi::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun