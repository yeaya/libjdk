#include <sun/util/resources/cldr/ext/CurrencyNames_es_BZ.h>

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

$MethodInfo _CurrencyNames_es_BZ_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_BZ, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_BZ, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_es_BZ_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_es_BZ",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_BZ_MethodInfo_
};

$Object* allocate$CurrencyNames_es_BZ($Class* clazz) {
	return $of($alloc(CurrencyNames_es_BZ));
}

void CurrencyNames_es_BZ::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_es_BZ::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("BZD"_s),
		$of("$"_s)
	})}));
	return data;
}

CurrencyNames_es_BZ::CurrencyNames_es_BZ() {
}

$Class* CurrencyNames_es_BZ::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_BZ, name, initialize, &_CurrencyNames_es_BZ_ClassInfo_, allocate$CurrencyNames_es_BZ);
	return class$;
}

$Class* CurrencyNames_es_BZ::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun