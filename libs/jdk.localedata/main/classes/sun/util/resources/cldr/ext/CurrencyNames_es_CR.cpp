#include <sun/util/resources/cldr/ext/CurrencyNames_es_CR.h>

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

$MethodInfo _CurrencyNames_es_CR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_CR, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_CR, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_es_CR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_es_CR",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_CR_MethodInfo_
};

$Object* allocate$CurrencyNames_es_CR($Class* clazz) {
	return $of($alloc(CurrencyNames_es_CR));
}

void CurrencyNames_es_CR::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_es_CR::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("CRC"_s),
		$of(u"₡"_s)
	})}));
	return data;
}

CurrencyNames_es_CR::CurrencyNames_es_CR() {
}

$Class* CurrencyNames_es_CR::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_CR, name, initialize, &_CurrencyNames_es_CR_ClassInfo_, allocate$CurrencyNames_es_CR);
	return class$;
}

$Class* CurrencyNames_es_CR::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun