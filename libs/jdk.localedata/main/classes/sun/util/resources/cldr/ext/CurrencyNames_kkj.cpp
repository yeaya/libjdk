#include <sun/util/resources/cldr/ext/CurrencyNames_kkj.h>

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

$MethodInfo _CurrencyNames_kkj_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_kkj, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_kkj, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_kkj_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_kkj",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_kkj_MethodInfo_
};

$Object* allocate$CurrencyNames_kkj($Class* clazz) {
	return $of($alloc(CurrencyNames_kkj));
}

void CurrencyNames_kkj::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_kkj::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("xaf"_s),
		$of("Franc CFA"_s)
	})}));
	return data;
}

CurrencyNames_kkj::CurrencyNames_kkj() {
}

$Class* CurrencyNames_kkj::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_kkj, name, initialize, &_CurrencyNames_kkj_ClassInfo_, allocate$CurrencyNames_kkj);
	return class$;
}

$Class* CurrencyNames_kkj::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun