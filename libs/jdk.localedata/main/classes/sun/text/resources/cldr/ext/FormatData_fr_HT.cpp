#include <sun/text/resources/cldr/ext/FormatData_fr_HT.h>

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

$MethodInfo _FormatData_fr_HT_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_fr_HT, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_fr_HT, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_fr_HT_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_fr_HT",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_fr_HT_MethodInfo_
};

$Object* allocate$FormatData_fr_HT($Class* clazz) {
	return $of($alloc(FormatData_fr_HT));
}

void FormatData_fr_HT::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_fr_HT::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		"minuit"_s,
		"midi"_s,
		"du matin"_s,
		""_s,
		u"de l’après-midi"_s,
		""_s,
		"du soir"_s,
		""_s,
		"de la nuit"_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("japanese.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
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
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		})
	}));
	return data;
}

FormatData_fr_HT::FormatData_fr_HT() {
}

$Class* FormatData_fr_HT::load$($String* name, bool initialize) {
	$loadClass(FormatData_fr_HT, name, initialize, &_FormatData_fr_HT_ClassInfo_, allocate$FormatData_fr_HT);
	return class$;
}

$Class* FormatData_fr_HT::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun