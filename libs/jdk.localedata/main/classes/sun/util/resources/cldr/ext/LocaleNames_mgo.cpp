#include <sun/util/resources/cldr/ext/LocaleNames_mgo.h>
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

void LocaleNames_mgo::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_mgo::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"CM"_s,
			"Kamalun"_s
		}),
		$$new($ObjectArray, {
			"ZZ"_s,
			u"aba aben tisɔ̀"_s
		}),
		$$new($ObjectArray, {
			"mgo"_s,
			u"metaʼ"_s
		}),
		$$new($ObjectArray, {
			"und"_s,
			u"ngam tisɔʼ"_s
		}),
		$$new($ObjectArray, {
			"Latn"_s,
			u"ngam ŋwaʼri"_s
		}),
		$$new($ObjectArray, {
			"Zxxx"_s,
			u"ngam choʼ"_s
		}),
		$$new($ObjectArray, {
			"Zzzz"_s,
			u"abo ŋwaʼri tisɔʼ"_s
		}),
		$$new($ObjectArray, {
			"type.nu.latn"_s,
			"inu"_s
		}),
		$$new($ObjectArray, {
			"type.ca.gregorian"_s,
			u"ngàb mə̀kala"_s
		})
	}));
	return data;
}

LocaleNames_mgo::LocaleNames_mgo() {
}

$Class* LocaleNames_mgo::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_mgo, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_mgo, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_mgo",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_mgo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_mgo);
	});
	return class$;
}

$Class* LocaleNames_mgo::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun