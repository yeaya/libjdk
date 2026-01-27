#include <sun/util/resources/cldr/ext/CurrencyNames_en_FK.h>

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

$MethodInfo _CurrencyNames_en_FK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_FK, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_FK, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_FK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_FK",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_FK_MethodInfo_
};

$Object* allocate$CurrencyNames_en_FK($Class* clazz) {
	return $of($alloc(CurrencyNames_en_FK));
}

void CurrencyNames_en_FK::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_FK::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("FKP"_s),
			$of(u"£"_s)
		}),
		$$new($ObjectArray, {
			$of("GBP"_s),
			$of(u"GB£"_s)
		})
	}));
	return data;
}

CurrencyNames_en_FK::CurrencyNames_en_FK() {
}

$Class* CurrencyNames_en_FK::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_FK, name, initialize, &_CurrencyNames_en_FK_ClassInfo_, allocate$CurrencyNames_en_FK);
	return class$;
}

$Class* CurrencyNames_en_FK::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun