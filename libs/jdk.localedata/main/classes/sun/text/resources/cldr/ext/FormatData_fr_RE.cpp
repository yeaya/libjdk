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

$MethodInfo _FormatData_fr_RE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_fr_RE, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_fr_RE, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_fr_RE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_fr_RE",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_fr_RE_MethodInfo_
};

$Object* allocate$FormatData_fr_RE($Class* clazz) {
	return $of($alloc(FormatData_fr_RE));
}

void FormatData_fr_RE::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_fr_RE::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		})
	}));
	return data;
}

FormatData_fr_RE::FormatData_fr_RE() {
}

$Class* FormatData_fr_RE::load$($String* name, bool initialize) {
	$loadClass(FormatData_fr_RE, name, initialize, &_FormatData_fr_RE_ClassInfo_, allocate$FormatData_fr_RE);
	return class$;
}

$Class* FormatData_fr_RE::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun