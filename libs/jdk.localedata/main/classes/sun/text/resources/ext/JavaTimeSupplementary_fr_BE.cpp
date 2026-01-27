#include <sun/text/resources/ext/JavaTimeSupplementary_fr_BE.h>

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

$MethodInfo _JavaTimeSupplementary_fr_BE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_fr_BE, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_fr_BE, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_fr_BE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_fr_BE",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_fr_BE_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_fr_BE($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_fr_BE));
}

void JavaTimeSupplementary_fr_BE::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_fr_BE::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"H \'h\' mm \'min\' ss \'s\' zzzz"_s,
		"HH:mm:ss z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE d MMMM y G"_s,
		"d MMMM y G"_s,
		"d MMM y G"_s,
		"d/MM/yy GGGGG"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE d MMMM y GGGG"_s,
				"d MMMM y GGGG"_s,
				"d MMM y GGGG"_s,
				"d/MM/yy G"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.TimePatterns"_s),
			$of(sharedTimePatterns)
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
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of($$new($StringArray, {
				"G y MMMM d, EEEE"_s,
				"G y MMMM d"_s,
				"G y MMM d"_s,
				"d/MM/yy GGGGG"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of($$new($StringArray, {
				"GGGG y MMMM d, EEEE"_s,
				"GGGG y MMMM d"_s,
				"GGGG y MMM d"_s,
				"d/MM/yy G"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.TimePatterns"_s),
			$of(sharedTimePatterns)
		})
	});
}

JavaTimeSupplementary_fr_BE::JavaTimeSupplementary_fr_BE() {
}

$Class* JavaTimeSupplementary_fr_BE::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_fr_BE, name, initialize, &_JavaTimeSupplementary_fr_BE_ClassInfo_, allocate$JavaTimeSupplementary_fr_BE);
	return class$;
}

$Class* JavaTimeSupplementary_fr_BE::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun