#include <sun/text/resources/cldr/ext/FormatData_fr_RE.h>
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

void FormatData_fr_RE::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_fr_RE::getContents() {
	$useLocalObjectStack();
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		"min."_s,
		"midi"_s,
		"mat."_s,
		""_s,
		"ap.m."_s,
		""_s,
		"soir"_s,
		""_s,
		"nuit"_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"narrow.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"japanese.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"buddhist.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"japanese.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"buddhist.narrow.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"buddhist.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		})
	}));
	return data;
}

FormatData_fr_RE::FormatData_fr_RE() {
}

$Class* FormatData_fr_RE::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_fr_RE, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_fr_RE, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.cldr.ext.FormatData_fr_RE",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_fr_RE, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_fr_RE);
	});
	return class$;
}

$Class* FormatData_fr_RE::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun