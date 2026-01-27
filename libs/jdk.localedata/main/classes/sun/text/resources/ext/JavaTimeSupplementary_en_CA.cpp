#include <sun/text/resources/ext/JavaTimeSupplementary_en_CA.h>

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

$MethodInfo _JavaTimeSupplementary_en_CA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_en_CA, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_en_CA, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_en_CA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_en_CA",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_en_CA_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_en_CA($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_en_CA));
}

void JavaTimeSupplementary_en_CA::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_en_CA::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE, MMMM d, y GGGG"_s,
		"MMMM d, y GGGG"_s,
		"MMM d, y GGGG"_s,
		"G y-MM-dd"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE, MMMM d, y G"_s,
		"MMMM d, y G"_s,
		"MMM d, y G"_s,
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

JavaTimeSupplementary_en_CA::JavaTimeSupplementary_en_CA() {
}

$Class* JavaTimeSupplementary_en_CA::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_en_CA, name, initialize, &_JavaTimeSupplementary_en_CA_ClassInfo_, allocate$JavaTimeSupplementary_en_CA);
	return class$;
}

$Class* JavaTimeSupplementary_en_CA::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun