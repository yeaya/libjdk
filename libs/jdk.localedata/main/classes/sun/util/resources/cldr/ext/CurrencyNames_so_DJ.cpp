#include <sun/util/resources/cldr/ext/CurrencyNames_so_DJ.h>

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

$MethodInfo _CurrencyNames_so_DJ_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_so_DJ, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_so_DJ, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_so_DJ_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_so_DJ",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_so_DJ_MethodInfo_
};

$Object* allocate$CurrencyNames_so_DJ($Class* clazz) {
	return $of($alloc(CurrencyNames_so_DJ));
}

void CurrencyNames_so_DJ::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_so_DJ::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("DJF"_s),
		$of("Fdj"_s)
	})}));
	return data;
}

CurrencyNames_so_DJ::CurrencyNames_so_DJ() {
}

$Class* CurrencyNames_so_DJ::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_so_DJ, name, initialize, &_CurrencyNames_so_DJ_ClassInfo_, allocate$CurrencyNames_so_DJ);
	return class$;
}

$Class* CurrencyNames_so_DJ::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun