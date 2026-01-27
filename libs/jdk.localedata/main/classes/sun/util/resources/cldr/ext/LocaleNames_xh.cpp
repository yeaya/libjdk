#include <sun/util/resources/cldr/ext/LocaleNames_xh.h>

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

$MethodInfo _LocaleNames_xh_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_xh, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_xh, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_xh_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_xh",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_xh_MethodInfo_
};

$Object* allocate$LocaleNames_xh($Class* clazz) {
	return $of($alloc(LocaleNames_xh));
}

void LocaleNames_xh::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_xh::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("uMntla Macedonia"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("eMzantsi Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("isiXhosa"_s)
		})
	}));
	return data;
}

LocaleNames_xh::LocaleNames_xh() {
}

$Class* LocaleNames_xh::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_xh, name, initialize, &_LocaleNames_xh_ClassInfo_, allocate$LocaleNames_xh);
	return class$;
}

$Class* LocaleNames_xh::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun