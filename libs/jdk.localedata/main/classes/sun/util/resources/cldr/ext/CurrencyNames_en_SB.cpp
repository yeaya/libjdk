#include <sun/util/resources/cldr/ext/CurrencyNames_en_SB.h>

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

$MethodInfo _CurrencyNames_en_SB_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_SB, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_SB, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_SB_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_SB",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_SB_MethodInfo_
};

$Object* allocate$CurrencyNames_en_SB($Class* clazz) {
	return $of($alloc(CurrencyNames_en_SB));
}

void CurrencyNames_en_SB::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_SB::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("SBD"_s),
		$of("$"_s)
	})}));
	return data;
}

CurrencyNames_en_SB::CurrencyNames_en_SB() {
}

$Class* CurrencyNames_en_SB::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_SB, name, initialize, &_CurrencyNames_en_SB_ClassInfo_, allocate$CurrencyNames_en_SB);
	return class$;
}

$Class* CurrencyNames_en_SB::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun