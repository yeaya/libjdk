#include <sun/util/resources/cldr/ext/CurrencyNames_en_DM.h>

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

$MethodInfo _CurrencyNames_en_DM_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_DM, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_DM, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_DM_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_DM",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_DM_MethodInfo_
};

$Object* allocate$CurrencyNames_en_DM($Class* clazz) {
	return $of($alloc(CurrencyNames_en_DM));
}

void CurrencyNames_en_DM::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_DM::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("XCD"_s),
		$of("$"_s)
	})}));
	return data;
}

CurrencyNames_en_DM::CurrencyNames_en_DM() {
}

$Class* CurrencyNames_en_DM::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_DM, name, initialize, &_CurrencyNames_en_DM_ClassInfo_, allocate$CurrencyNames_en_DM);
	return class$;
}

$Class* CurrencyNames_en_DM::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun