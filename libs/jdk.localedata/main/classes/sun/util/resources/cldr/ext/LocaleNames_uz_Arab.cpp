#include <sun/util/resources/cldr/ext/LocaleNames_uz_Arab.h>

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

$MethodInfo _LocaleNames_uz_Arab_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_uz_Arab, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_uz_Arab, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_uz_Arab_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_uz_Arab",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_uz_Arab_MethodInfo_
};

$Object* allocate$LocaleNames_uz_Arab($Class* clazz) {
	return $of($alloc(LocaleNames_uz_Arab));
}

void LocaleNames_uz_Arab::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_uz_Arab::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"افغانستان"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"دری"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"پشتو"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"اوزبیک"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"عربی"_s)
		})
	}));
	return data;
}

LocaleNames_uz_Arab::LocaleNames_uz_Arab() {
}

$Class* LocaleNames_uz_Arab::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_uz_Arab, name, initialize, &_LocaleNames_uz_Arab_ClassInfo_, allocate$LocaleNames_uz_Arab);
	return class$;
}

$Class* LocaleNames_uz_Arab::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun