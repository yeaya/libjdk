#include <sun/util/resources/cldr/ext/LocaleNames_fr_CH.h>
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

void LocaleNames_fr_CH::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_fr_CH::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"gu"_s,
			"goudjrati"_s
		}),
		$$new($ObjectArray, {
			"pdc"_s,
			"allemand de Pennsylvanie"_s
		}),
		$$new($ObjectArray, {
			"sdh"_s,
			u"kurde méridional"_s
		})
	}));
	return data;
}

LocaleNames_fr_CH::LocaleNames_fr_CH() {
}

$Class* LocaleNames_fr_CH::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_fr_CH, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_fr_CH, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_fr_CH",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_fr_CH, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_fr_CH);
	});
	return class$;
}

$Class* LocaleNames_fr_CH::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun