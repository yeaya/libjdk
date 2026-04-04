#include <sun/util/resources/cldr/ext/LocaleNames_kkj.h>
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

void LocaleNames_kkj::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_kkj::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"CM"_s,
			u"Kamɛrun"_s
		}),
		$$new($ObjectArray, {
			"en"_s,
			"yaman"_s
		}),
		$$new($ObjectArray, {
			"fr"_s,
			"numbu buy"_s
		}),
		$$new($ObjectArray, {
			"kkj"_s,
			u"kakɔ"_s
		})
	}));
	return data;
}

LocaleNames_kkj::LocaleNames_kkj() {
}

$Class* LocaleNames_kkj::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_kkj, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_kkj, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_kkj",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_kkj, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_kkj);
	});
	return class$;
}

$Class* LocaleNames_kkj::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun