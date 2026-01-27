#include <sun/util/resources/ext/LocaleNames_hu.h>

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

$MethodInfo _LocaleNames_hu_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_hu, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_hu, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_hu_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_hu",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_hu_MethodInfo_
};

$Object* allocate$LocaleNames_hu($Class* clazz) {
	return $of($alloc(LocaleNames_hu));
}

void LocaleNames_hu::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_hu::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Magyarország"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("magyar"_s)
		})
	});
}

LocaleNames_hu::LocaleNames_hu() {
}

$Class* LocaleNames_hu::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_hu, name, initialize, &_LocaleNames_hu_ClassInfo_, allocate$LocaleNames_hu);
	return class$;
}

$Class* LocaleNames_hu::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun