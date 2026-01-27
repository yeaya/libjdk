#include <sun/util/resources/cldr/ext/LocaleNames_en_CA.h>

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

$MethodInfo _LocaleNames_en_CA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_en_CA, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_en_CA, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_en_CA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_en_CA",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_en_CA_MethodInfo_
};

$Object* allocate$LocaleNames_en_CA($Class* clazz) {
	return $of($alloc(LocaleNames_en_CA));
}

void LocaleNames_en_CA::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_en_CA::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("Bengali"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("Mauritian"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("Tuvaluan"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("Moldovan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("Korean Calendar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.lower"_s),
			$of("To Lower Case"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.title"_s),
			$of("To Title Case"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.upper"_s),
			$of("To Upper Case"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of("To Full Width"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of("To Half Width"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("Ethiopian Calendar"_s)
		})
	}));
	return data;
}

LocaleNames_en_CA::LocaleNames_en_CA() {
}

$Class* LocaleNames_en_CA::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_en_CA, name, initialize, &_LocaleNames_en_CA_ClassInfo_, allocate$LocaleNames_en_CA);
	return class$;
}

$Class* LocaleNames_en_CA::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun