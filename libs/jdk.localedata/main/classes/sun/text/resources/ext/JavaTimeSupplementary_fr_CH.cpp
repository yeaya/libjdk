#include <sun/text/resources/ext/JavaTimeSupplementary_fr_CH.h>

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

$MethodInfo _JavaTimeSupplementary_fr_CH_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_fr_CH, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_fr_CH, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_fr_CH_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_fr_CH",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_fr_CH_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_fr_CH($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_fr_CH));
}

void JavaTimeSupplementary_fr_CH::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_fr_CH::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"HH.mm:ss \'h\' zzzz"_s,
		"HH:mm:ss z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE, d MMMM y G"_s,
		"d MMMM y G"_s,
		"d MMM y G"_s,
		"dd.MM.yy GGGGG"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d MMMM y GGGG"_s,
				"d MMMM y GGGG"_s,
				"d MMM y GGGG"_s,
				"dd.MM.yy G"_s
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
				"EEEE, d MMMM y G"_s,
				"G y MMMM d"_s,
				"G y MMM d"_s,
				"dd.MM.yy GGGGG"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d MMMM y GGGG"_s,
				"GGGG y MMMM d"_s,
				"GGGG y MMM d"_s,
				"dd.MM.yy G"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.TimePatterns"_s),
			$of(sharedTimePatterns)
		})
	});
}

JavaTimeSupplementary_fr_CH::JavaTimeSupplementary_fr_CH() {
}

$Class* JavaTimeSupplementary_fr_CH::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_fr_CH, name, initialize, &_JavaTimeSupplementary_fr_CH_ClassInfo_, allocate$JavaTimeSupplementary_fr_CH);
	return class$;
}

$Class* JavaTimeSupplementary_fr_CH::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun