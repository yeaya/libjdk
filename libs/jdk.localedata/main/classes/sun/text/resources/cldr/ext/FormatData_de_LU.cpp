#include <sun/text/resources/cldr/ext/FormatData_de_LU.h>
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

void FormatData_de_LU::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_de_LU::getContents() {
	$useLocalObjectStack();
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		"vorm."_s,
		"nachm."_s,
		"Mitternacht"_s,
		""_s,
		"morgens"_s,
		"vorm."_s,
		"mittags"_s,
		"nachm."_s,
		"abends"_s,
		""_s,
		"nachts"_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"narrow.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"japanese.narrow.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.narrow.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"buddhist.narrow.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
		})
	}));
	return data;
}

FormatData_de_LU::FormatData_de_LU() {
}

$Class* FormatData_de_LU::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_de_LU, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_de_LU, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.cldr.ext.FormatData_de_LU",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_de_LU, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_de_LU);
	});
	return class$;
}

$Class* FormatData_de_LU::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun