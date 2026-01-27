#include <sun/util/resources/ext/LocaleNames_ro.h>

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

$MethodInfo _LocaleNames_ro_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ro, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ro, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_ro_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_ro",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_ro_MethodInfo_
};

$Object* allocate$LocaleNames_ro($Class* clazz) {
	return $of($alloc(LocaleNames_ro));
}

void LocaleNames_ro::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_ro::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"România"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"română"_s)
		})
	});
}

LocaleNames_ro::LocaleNames_ro() {
}

$Class* LocaleNames_ro::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ro, name, initialize, &_LocaleNames_ro_ClassInfo_, allocate$LocaleNames_ro);
	return class$;
}

$Class* LocaleNames_ro::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun