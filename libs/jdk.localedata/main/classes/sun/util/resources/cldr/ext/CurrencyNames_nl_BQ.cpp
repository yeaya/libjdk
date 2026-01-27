#include <sun/util/resources/cldr/ext/CurrencyNames_nl_BQ.h>

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

$MethodInfo _CurrencyNames_nl_BQ_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_nl_BQ, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_nl_BQ, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_nl_BQ_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_nl_BQ",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_nl_BQ_MethodInfo_
};

$Object* allocate$CurrencyNames_nl_BQ($Class* clazz) {
	return $of($alloc(CurrencyNames_nl_BQ));
}

void CurrencyNames_nl_BQ::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_nl_BQ::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("USD"_s),
		$of("$"_s)
	})}));
	return data;
}

CurrencyNames_nl_BQ::CurrencyNames_nl_BQ() {
}

$Class* CurrencyNames_nl_BQ::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_nl_BQ, name, initialize, &_CurrencyNames_nl_BQ_ClassInfo_, allocate$CurrencyNames_nl_BQ);
	return class$;
}

$Class* CurrencyNames_nl_BQ::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun