#include <sun/util/resources/ext/LocaleNames_sq.h>

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

$MethodInfo _LocaleNames_sq_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_sq, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_sq, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_sq_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_sq",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_sq_MethodInfo_
};

$Object* allocate$LocaleNames_sq($Class* clazz) {
	return $of($alloc(LocaleNames_sq));
}

void LocaleNames_sq::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_sq::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Shqipëria"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("shqip"_s)
		})
	});
}

LocaleNames_sq::LocaleNames_sq() {
}

$Class* LocaleNames_sq::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_sq, name, initialize, &_LocaleNames_sq_ClassInfo_, allocate$LocaleNames_sq);
	return class$;
}

$Class* LocaleNames_sq::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun