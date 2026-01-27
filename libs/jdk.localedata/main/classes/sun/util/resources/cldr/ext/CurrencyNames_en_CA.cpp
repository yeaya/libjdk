#include <sun/util/resources/cldr/ext/CurrencyNames_en_CA.h>

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

$MethodInfo _CurrencyNames_en_CA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_CA, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_CA, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_CA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_CA",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_CA_MethodInfo_
};

$Object* allocate$CurrencyNames_en_CA($Class* clazz) {
	return $of($alloc(CurrencyNames_en_CA));
}

void CurrencyNames_en_CA::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_CA::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("CAD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("VES"_s),
			$of("VES"_s)
		})
	}));
	return data;
}

CurrencyNames_en_CA::CurrencyNames_en_CA() {
}

$Class* CurrencyNames_en_CA::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_CA, name, initialize, &_CurrencyNames_en_CA_ClassInfo_, allocate$CurrencyNames_en_CA);
	return class$;
}

$Class* CurrencyNames_en_CA::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun