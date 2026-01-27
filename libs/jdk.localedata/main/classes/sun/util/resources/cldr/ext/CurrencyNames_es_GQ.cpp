#include <sun/util/resources/cldr/ext/CurrencyNames_es_GQ.h>

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

$MethodInfo _CurrencyNames_es_GQ_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_GQ, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_GQ, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_es_GQ_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_es_GQ",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_GQ_MethodInfo_
};

$Object* allocate$CurrencyNames_es_GQ($Class* clazz) {
	return $of($alloc(CurrencyNames_es_GQ));
}

void CurrencyNames_es_GQ::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_es_GQ::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("XAF"_s),
		$of("FCFA"_s)
	})}));
	return data;
}

CurrencyNames_es_GQ::CurrencyNames_es_GQ() {
}

$Class* CurrencyNames_es_GQ::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_GQ, name, initialize, &_CurrencyNames_es_GQ_ClassInfo_, allocate$CurrencyNames_es_GQ);
	return class$;
}

$Class* CurrencyNames_es_GQ::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun