#include <sun/util/resources/cldr/ext/LocaleNames_en_IN.h>

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

$MethodInfo _LocaleNames_en_IN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_en_IN, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_en_IN, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_en_IN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_en_IN",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_en_IN_MethodInfo_
};

$Object* allocate$LocaleNames_en_IN($Class* clazz) {
	return $of($alloc(LocaleNames_en_IN));
}

void LocaleNames_en_IN::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_en_IN::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_bn, "Bengali"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("Oriya Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of("Bengali Digits"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of("Oriya"_s)
		})
	}));
	return data;
}

LocaleNames_en_IN::LocaleNames_en_IN() {
}

$Class* LocaleNames_en_IN::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_en_IN, name, initialize, &_LocaleNames_en_IN_ClassInfo_, allocate$LocaleNames_en_IN);
	return class$;
}

$Class* LocaleNames_en_IN::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun