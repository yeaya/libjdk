#include <sun/util/resources/cldr/ext/CurrencyNames_qu_BO.h>

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

$MethodInfo _CurrencyNames_qu_BO_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_qu_BO, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_qu_BO, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_qu_BO_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_qu_BO",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_qu_BO_MethodInfo_
};

$Object* allocate$CurrencyNames_qu_BO($Class* clazz) {
	return $of($alloc(CurrencyNames_qu_BO));
}

void CurrencyNames_qu_BO::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_qu_BO::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BOB"_s),
			$of("Bs"_s)
		}),
		$$new($ObjectArray, {
			$of("PEN"_s),
			$of("PEN"_s)
		})
	}));
	return data;
}

CurrencyNames_qu_BO::CurrencyNames_qu_BO() {
}

$Class* CurrencyNames_qu_BO::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_qu_BO, name, initialize, &_CurrencyNames_qu_BO_ClassInfo_, allocate$CurrencyNames_qu_BO);
	return class$;
}

$Class* CurrencyNames_qu_BO::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun