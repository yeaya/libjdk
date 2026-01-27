#include <sun/text/resources/ext/JavaTimeSupplementary_en_NZ.h>

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

$MethodInfo _JavaTimeSupplementary_en_NZ_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_en_NZ, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_en_NZ, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_en_NZ_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_en_NZ",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_en_NZ_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_en_NZ($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_en_NZ));
}

void JavaTimeSupplementary_en_NZ::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_en_NZ::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"GGGG y MMMM d, EEEE"_s,
		"GGGG y MMMM d"_s,
		"d/MM/y GGGG"_s,
		"d/MM/y G"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"G y MMMM d, EEEE"_s,
		"G y MMMM d"_s,
		"d/MM/y G"_s,
		"d/MM/y GGGGG"_s
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
				"EEEE, MMMM d, y G"_s,
				"MMMM d, y G"_s,
				"d/MM/y G"_s,
				"d/MM/y GGGGG"_s
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

JavaTimeSupplementary_en_NZ::JavaTimeSupplementary_en_NZ() {
}

$Class* JavaTimeSupplementary_en_NZ::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_en_NZ, name, initialize, &_JavaTimeSupplementary_en_NZ_ClassInfo_, allocate$JavaTimeSupplementary_en_NZ);
	return class$;
}

$Class* JavaTimeSupplementary_en_NZ::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun