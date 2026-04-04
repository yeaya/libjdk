#include <sun/util/resources/cldr/ext/LocaleNames_ii.h>
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

void LocaleNames_ii::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ii::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"BR"_s,
			u"ꀠꑭ"_s
		}),
		$$new($ObjectArray, {
			"CN"_s,
			u"ꍏꇩ"_s
		}),
		$$new($ObjectArray, {
			"DE"_s,
			u"ꄓꇩ"_s
		}),
		$$new($ObjectArray, {
			"FR"_s,
			u"ꃔꇩ"_s
		}),
		$$new($ObjectArray, {
			"GB"_s,
			u"ꑱꇩ"_s
		}),
		$$new($ObjectArray, {
			"IN"_s,
			u"ꑴꄗ"_s
		}),
		$$new($ObjectArray, {
			"IT"_s,
			u"ꑴꄊꆺ"_s
		}),
		$$new($ObjectArray, {
			"JP"_s,
			u"ꏝꀪ"_s
		}),
		$$new($ObjectArray, {
			"RU"_s,
			u"ꊉꇆꌦ"_s
		}),
		$$new($ObjectArray, {
			"US"_s,
			u"ꂰꇩ"_s
		}),
		$$new($ObjectArray, {
			"ZZ"_s,
			u"ꃅꄷꅉꀋꐚꌠ"_s
		}),
		$$new($ObjectArray, {
			"de"_s,
			u"ꄓꇩꉙ"_s
		}),
		$$new($ObjectArray, {
			"en"_s,
			u"ꑱꇩꉙ"_s
		}),
		$$new($ObjectArray, {
			"es"_s,
			u"ꑭꀠꑸꉙ"_s
		}),
		$$new($ObjectArray, {
			"fr"_s,
			u"ꃔꇩꉙ"_s
		}),
		$$new($ObjectArray, {
			"ii"_s,
			u"ꆈꌠꉙ"_s
		}),
		$$new($ObjectArray, {
			"it"_s,
			u"ꑴꄊꆺꉙ"_s
		}),
		$$new($ObjectArray, {
			"ja"_s,
			u"ꏝꀪꉙ"_s
		}),
		$$new($ObjectArray, {
			"pt"_s,
			u"ꁍꄨꑸꉙ"_s
		}),
		$$new($ObjectArray, {
			"ru"_s,
			u"ꊉꇩꉙ"_s
		}),
		$$new($ObjectArray, {
			"zh"_s,
			u"ꍏꇩꉙ"_s
		}),
		$$new($ObjectArray, {
			"und"_s,
			u"ꅉꀋꌠꅇꂷ"_s
		}),
		$$new($ObjectArray, {
			"Arab"_s,
			u"ꀊꇁꀨꁱꂷ"_s
		}),
		$$new($ObjectArray, {
			"Cyrl"_s,
			u"ꀊꆨꌦꇁꃚꁱꂷ"_s
		}),
		$$new($ObjectArray, {
			"Hans"_s,
			u"ꈝꐯꉌꈲꁱꂷ"_s
		}),
		$$new($ObjectArray, {
			"Hant"_s,
			u"ꀎꋏꉌꈲꁱꂷ"_s
		}),
		$$new($ObjectArray, {
			"Latn"_s,
			u"ꇁꄀꁱꂷ"_s
		}),
		$$new($ObjectArray, {
			"Yiii"_s,
			u"ꆈꌠꁱꂷ"_s
		}),
		$$new($ObjectArray, {
			"Zxxx"_s,
			u"ꁱꀋꉆꌠ"_s
		}),
		$$new($ObjectArray, {
			"Zzzz"_s,
			u"ꅉꀋꐚꌠꁱꂷ"_s
		}),
		$$new($ObjectArray, {
			"pt_BR"_s,
			u"ꀠꑟꁍꄨꑸꉙ"_s
		}),
		$$new($ObjectArray, {
			"zh_Hans"_s,
			u"ꈝꐯꍏꇩꉙ"_s
		}),
		$$new($ObjectArray, {
			"zh_Hant"_s,
			u"ꀎꋏꍏꇩꉙ"_s
		}),
		$$new($ObjectArray, {
			"type.ca.islamic"_s,
			u"ꑳꌦꇂꑍꉖ"_s
		}),
		$$new($ObjectArray, {
			"type.ca.gregorian"_s,
			u"ꄉꉻꃅꑍ"_s
		})
	}));
	return data;
}

LocaleNames_ii::LocaleNames_ii() {
}

$Class* LocaleNames_ii::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ii, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ii, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_ii",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_ii, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_ii);
	});
	return class$;
}

$Class* LocaleNames_ii::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun