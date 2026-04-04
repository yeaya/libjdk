#include <sun/util/resources/ext/LocaleNames_pt_BR.h>
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

void LocaleNames_pt_BR::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_pt_BR::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"AX"_s,
			"Ilhas Aland"_s
		}),
		$$new($ObjectArray, {
			"BA"_s,
			u"Bósnia-Herzegovina"_s
		}),
		$$new($ObjectArray, {
			"BH"_s,
			"Bahrain"_s
		}),
		$$new($ObjectArray, {
			"KP"_s,
			u"Coréia do Norte"_s
		}),
		$$new($ObjectArray, {
			"MK"_s,
			u"Macedônia"_s
		}),
		$$new($ObjectArray, {
			"ZW"_s,
			u"Zimbábue"_s
		}),
		$$new($ObjectArray, {
			"ce"_s,
			"checheno"_s
		}),
		$$new($ObjectArray, {
			"ik"_s,
			"inupiaque"_s
		}),
		$$new($ObjectArray, {
			"jv"_s,
			u"javanês"_s
		}),
		$$new($ObjectArray, {
			"nd"_s,
			"ndebele do norte"_s
		}),
		$$new($ObjectArray, {
			"nr"_s,
			"ndebele do sul"_s
		}),
		$$new($ObjectArray, {
			"st"_s,
			"soto do sul"_s
		})
	});
}

LocaleNames_pt_BR::LocaleNames_pt_BR() {
}

$Class* LocaleNames_pt_BR::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_pt_BR, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_pt_BR, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.LocaleNames_pt_BR",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_pt_BR, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_pt_BR);
	});
	return class$;
}

$Class* LocaleNames_pt_BR::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun