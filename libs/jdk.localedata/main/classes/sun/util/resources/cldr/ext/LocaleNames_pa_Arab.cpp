#include <sun/util/resources/cldr/ext/LocaleNames_pa_Arab.h>

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

$MethodInfo _LocaleNames_pa_Arab_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_pa_Arab, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_pa_Arab, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_pa_Arab_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_pa_Arab",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_pa_Arab_MethodInfo_
};

$Object* allocate$LocaleNames_pa_Arab($Class* clazz) {
	return $of($alloc(LocaleNames_pa_Arab));
}

void LocaleNames_pa_Arab::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_pa_Arab::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"پاکستان"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"پنجابی"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"عربی"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of(u"نستعلیق"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"گُرمُکھی"_s)
		})
	}));
	return data;
}

LocaleNames_pa_Arab::LocaleNames_pa_Arab() {
}

$Class* LocaleNames_pa_Arab::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_pa_Arab, name, initialize, &_LocaleNames_pa_Arab_ClassInfo_, allocate$LocaleNames_pa_Arab);
	return class$;
}

$Class* LocaleNames_pa_Arab::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun