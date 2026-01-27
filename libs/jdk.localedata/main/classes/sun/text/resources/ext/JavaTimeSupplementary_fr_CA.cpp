#include <sun/text/resources/ext/JavaTimeSupplementary_fr_CA.h>

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

$MethodInfo _JavaTimeSupplementary_fr_CA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_fr_CA, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_fr_CA, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_fr_CA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_fr_CA",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_fr_CA_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_fr_CA($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_fr_CA));
}

void JavaTimeSupplementary_fr_CA::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_fr_CA::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		"a"_s,
		"p"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE d MMMM y G"_s,
		"d MMMM y G"_s,
		"d MMM y G"_s,
		"yy-MM-dd GGGGG"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE d MMMM y GGGG"_s,
				"d MMMM y GGGG"_s,
				"d MMM y GGGG"_s,
				"y-MM-dd G"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE d MMMM y G"_s,
				"d MMMM y G"_s,
				"d MMM y G"_s,
				"y-MM-dd GGGGG"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of($$new($StringArray, {
				"G y MMMM d, EEEE"_s,
				"G y MMMM d"_s,
				"G y MMM d"_s,
				"yy-MM-dd GGGGG"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of($$new($StringArray, {
				"GGGG y MMMM d, EEEE"_s,
				"GGGG y MMMM d"_s,
				"GGGG y MMM d"_s,
				"yy-MM-dd G"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
		})
	});
}

JavaTimeSupplementary_fr_CA::JavaTimeSupplementary_fr_CA() {
}

$Class* JavaTimeSupplementary_fr_CA::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_fr_CA, name, initialize, &_JavaTimeSupplementary_fr_CA_ClassInfo_, allocate$JavaTimeSupplementary_fr_CA);
	return class$;
}

$Class* JavaTimeSupplementary_fr_CA::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun