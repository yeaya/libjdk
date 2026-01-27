#include <sun/util/resources/cldr/ext/LocaleNames_kl.h>

#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _LocaleNames_kl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_kl, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_kl, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_kl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_kl",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_kl_MethodInfo_
};

$Object* allocate$LocaleNames_kl($Class* clazz) {
	return $of($alloc(LocaleNames_kl));
}

void LocaleNames_kl::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_kl::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Kalaallit Nunaat"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("kalaallisut"_s)
		})
	}));
	return data;
}

LocaleNames_kl::LocaleNames_kl() {
}

$Class* LocaleNames_kl::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_kl, name, initialize, &_LocaleNames_kl_ClassInfo_, allocate$LocaleNames_kl);
	return class$;
}

$Class* LocaleNames_kl::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun