#include <sun/util/resources/cldr/ext/LocaleNames_bn_IN.h>
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

void LocaleNames_bn_IN::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_bn_IN::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"UM"_s,
			u"মার্কিন যুক্তরাষ্ট্রের পার্শ্ববর্তী দ্বীপপুঞ্জ"_s
		}),
		$$new($ObjectArray, {
			"ksh"_s,
			u"কোলোনিয়ান"_s
		})
	}));
	return data;
}

LocaleNames_bn_IN::LocaleNames_bn_IN() {
}

$Class* LocaleNames_bn_IN::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_bn_IN, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_bn_IN, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_bn_IN",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_bn_IN, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_bn_IN);
	});
	return class$;
}

$Class* LocaleNames_bn_IN::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun