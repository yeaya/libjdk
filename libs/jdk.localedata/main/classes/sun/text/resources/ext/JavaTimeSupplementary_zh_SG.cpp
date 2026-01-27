#include <sun/text/resources/ext/JavaTimeSupplementary_zh_SG.h>

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

$MethodInfo _JavaTimeSupplementary_zh_SG_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_zh_SG, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_zh_SG, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_zh_SG_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_zh_SG",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_zh_SG_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_zh_SG($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_zh_SG));
}

void JavaTimeSupplementary_zh_SG::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_zh_SG::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		u"GGGGy年M月d日EEEE"_s,
		u"GGGGy年M月d日"_s,
		u"GGGGy年M月d日"_s,
		"GGGGd/M/yy"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		u"Gy年M月d日EEEE"_s,
		u"Gy年M月d日"_s,
		u"Gy年M月d日"_s,
		"Gd/M/yy"_s
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

JavaTimeSupplementary_zh_SG::JavaTimeSupplementary_zh_SG() {
}

$Class* JavaTimeSupplementary_zh_SG::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_zh_SG, name, initialize, &_JavaTimeSupplementary_zh_SG_ClassInfo_, allocate$JavaTimeSupplementary_zh_SG);
	return class$;
}

$Class* JavaTimeSupplementary_zh_SG::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun