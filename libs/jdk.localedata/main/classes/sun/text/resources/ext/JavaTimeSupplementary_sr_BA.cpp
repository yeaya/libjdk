#include <sun/text/resources/ext/JavaTimeSupplementary_sr_BA.h>

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

$MethodInfo _JavaTimeSupplementary_sr_BA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_sr_BA, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_sr_BA, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_sr_BA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_sr_BA",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_sr_BA_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_sr_BA($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_sr_BA));
}

void JavaTimeSupplementary_sr_BA::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_sr_BA::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"HH:mm:ss zzzz"_s,
		"HH:mm:ss z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("islamic.TimePatterns"_s),
			$of(sharedTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.TimePatterns"_s),
			$of(sharedTimePatterns)
		})
	});
}

JavaTimeSupplementary_sr_BA::JavaTimeSupplementary_sr_BA() {
}

$Class* JavaTimeSupplementary_sr_BA::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_sr_BA, name, initialize, &_JavaTimeSupplementary_sr_BA_ClassInfo_, allocate$JavaTimeSupplementary_sr_BA);
	return class$;
}

$Class* JavaTimeSupplementary_sr_BA::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun