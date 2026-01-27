#include <sun/util/resources/cldr/ext/LocaleNames_fr_BE.h>

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

$MethodInfo _LocaleNames_fr_BE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_fr_BE, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_fr_BE, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_fr_BE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_fr_BE",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_fr_BE_MethodInfo_
};

$Object* allocate$LocaleNames_fr_BE($Class* clazz) {
	return $of($alloc(LocaleNames_fr_BE));
}

void LocaleNames_fr_BE::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_fr_BE::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Îles Géorgie du Sud et Sandwich du Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of("gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of(u"franco-provençal"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of("ancien haut-allemand"_s)
		}),
		$$new($ObjectArray, {
			$of("njo"_s),
			$of("ao"_s)
		})
	}));
	return data;
}

LocaleNames_fr_BE::LocaleNames_fr_BE() {
}

$Class* LocaleNames_fr_BE::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_fr_BE, name, initialize, &_LocaleNames_fr_BE_ClassInfo_, allocate$LocaleNames_fr_BE);
	return class$;
}

$Class* LocaleNames_fr_BE::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun