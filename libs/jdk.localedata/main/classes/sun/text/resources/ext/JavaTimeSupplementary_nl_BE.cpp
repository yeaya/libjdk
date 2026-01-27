#include <sun/text/resources/ext/JavaTimeSupplementary_nl_BE.h>

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

$MethodInfo _JavaTimeSupplementary_nl_BE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_nl_BE, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_nl_BE, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_nl_BE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_nl_BE",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_nl_BE_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_nl_BE($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_nl_BE));
}

void JavaTimeSupplementary_nl_BE::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_nl_BE::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE d MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"d MMM y GGGG"_s,
		"d/MM/yy G"_s
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
			$of(sharedJavaTimeDatePatterns)
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

JavaTimeSupplementary_nl_BE::JavaTimeSupplementary_nl_BE() {
}

$Class* JavaTimeSupplementary_nl_BE::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_nl_BE, name, initialize, &_JavaTimeSupplementary_nl_BE_ClassInfo_, allocate$JavaTimeSupplementary_nl_BE);
	return class$;
}

$Class* JavaTimeSupplementary_nl_BE::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun