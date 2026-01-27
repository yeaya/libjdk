#include <sun/util/resources/ext/LocaleNames_et.h>

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

$MethodInfo _LocaleNames_et_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_et, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_et, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_et_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_et",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_et_MethodInfo_
};

$Object* allocate$LocaleNames_et($Class* clazz) {
	return $of($alloc(LocaleNames_et));
}

void LocaleNames_et::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_et::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Eesti"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("Eesti"_s)
		})
	});
}

LocaleNames_et::LocaleNames_et() {
}

$Class* LocaleNames_et::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_et, name, initialize, &_LocaleNames_et_ClassInfo_, allocate$LocaleNames_et);
	return class$;
}

$Class* LocaleNames_et::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun