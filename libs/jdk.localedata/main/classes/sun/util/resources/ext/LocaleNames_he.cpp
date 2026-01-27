#include <sun/util/resources/ext/LocaleNames_he.h>

#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _LocaleNames_he_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_he, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_he, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_he_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_he",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_he_MethodInfo_
};

$Object* allocate$LocaleNames_he($Class* clazz) {
	return $of($alloc(LocaleNames_he));
}

void LocaleNames_he::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_he::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"ישראל"_s)
		}),
		$$new($ObjectArray, {
			$of("iw"_s),
			$of(u"עברית"_s)
		})
	});
}

LocaleNames_he::LocaleNames_he() {
}

$Class* LocaleNames_he::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_he, name, initialize, &_LocaleNames_he_ClassInfo_, allocate$LocaleNames_he);
	return class$;
}

$Class* LocaleNames_he::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun