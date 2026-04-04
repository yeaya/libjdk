#include <sun/util/resources/cldr/ext/LocaleNames_en_NZ.h>
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

void LocaleNames_en_NZ::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_en_NZ::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		"mi"_s,
		u"Māori"_s
	})}));
	return data;
}

LocaleNames_en_NZ::LocaleNames_en_NZ() {
}

$Class* LocaleNames_en_NZ::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_en_NZ, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_en_NZ, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_en_NZ",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_en_NZ, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_en_NZ);
	});
	return class$;
}

$Class* LocaleNames_en_NZ::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun