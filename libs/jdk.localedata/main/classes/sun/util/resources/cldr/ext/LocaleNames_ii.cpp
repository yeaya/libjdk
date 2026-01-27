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

$MethodInfo _LocaleNames_ii_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ii, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ii, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_ii_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ii",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ii_MethodInfo_
};

$Object* allocate$LocaleNames_ii($Class* clazz) {
	return $of($alloc(LocaleNames_ii));
}

void LocaleNames_ii::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ii::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"ꀠꑭ"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"ꍏꇩ"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"ꄓꇩ"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"ꃔꇩ"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"ꑱꇩ"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"ꑴꄗ"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"ꑴꄊꆺ"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"ꏝꀪ"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"ꊉꇆꌦ"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"ꂰꇩ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"ꃅꄷꅉꀋꐚꌠ"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"ꄓꇩꉙ"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"ꑱꇩꉙ"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"ꑭꀠꑸꉙ"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"ꃔꇩꉙ"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"ꆈꌠꉙ"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"ꑴꄊꆺꉙ"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"ꏝꀪꉙ"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"ꁍꄨꑸꉙ"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"ꊉꇩꉙ"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"ꍏꇩꉙ"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"ꅉꀋꌠꅇꂷ"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"ꀊꇁꀨꁱꂷ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"ꀊꆨꌦꇁꃚꁱꂷ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"ꈝꐯꉌꈲꁱꂷ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"ꀎꋏꉌꈲꁱꂷ"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"ꇁꄀꁱꂷ"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"ꆈꌠꁱꂷ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"ꁱꀋꉆꌠ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"ꅉꀋꐚꌠꁱꂷ"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"ꀠꑟꁍꄨꑸꉙ"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"ꈝꐯꍏꇩꉙ"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"ꀎꋏꍏꇩꉙ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"ꑳꌦꇂꑍꉖ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"ꄉꉻꃅꑍ"_s)
		})
	}));
	return data;
}

LocaleNames_ii::LocaleNames_ii() {
}

$Class* LocaleNames_ii::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ii, name, initialize, &_LocaleNames_ii_ClassInfo_, allocate$LocaleNames_ii);
	return class$;
}

$Class* LocaleNames_ii::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun