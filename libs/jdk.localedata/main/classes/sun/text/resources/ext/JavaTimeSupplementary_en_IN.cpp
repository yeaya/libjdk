#include <sun/text/resources/ext/JavaTimeSupplementary_en_IN.h>

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

$MethodInfo _JavaTimeSupplementary_en_IN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_en_IN, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_en_IN, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_en_IN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_en_IN",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_en_IN_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_en_IN($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_en_IN));
}

void JavaTimeSupplementary_en_IN::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_en_IN::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE d MMMM y GGGG"_s,
		"GGGG y MMMM d"_s,
		"dd-MMM-y GGGG"_s,
		"G y-MM-dd"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE d MMMM y G"_s,
		"G y MMMM d"_s,
		"dd-MMM-y G"_s,
		"GGGGG y-MM-dd"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(sharedDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE d MMMM y G"_s,
				"MMMM d, y G"_s,
				"dd-MMM-y G"_s,
				"M/d/y GGGGG"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of(sharedDatePatterns)
		})
	});
}

JavaTimeSupplementary_en_IN::JavaTimeSupplementary_en_IN() {
}

$Class* JavaTimeSupplementary_en_IN::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_en_IN, name, initialize, &_JavaTimeSupplementary_en_IN_ClassInfo_, allocate$JavaTimeSupplementary_en_IN);
	return class$;
}

$Class* JavaTimeSupplementary_en_IN::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun