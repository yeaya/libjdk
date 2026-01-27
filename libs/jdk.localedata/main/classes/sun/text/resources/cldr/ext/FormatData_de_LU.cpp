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

$MethodInfo _FormatData_de_LU_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_de_LU, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_de_LU, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_de_LU_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_de_LU",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_de_LU_MethodInfo_
};

$Object* allocate$FormatData_de_LU($Class* clazz) {
	return $of($alloc(FormatData_de_LU));
}

void FormatData_de_LU::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_de_LU::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		})
	}));
	return data;
}

FormatData_de_LU::FormatData_de_LU() {
}

$Class* FormatData_de_LU::load$($String* name, bool initialize) {
	$loadClass(FormatData_de_LU, name, initialize, &_FormatData_de_LU_ClassInfo_, allocate$FormatData_de_LU);
	return class$;
}

$Class* FormatData_de_LU::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun