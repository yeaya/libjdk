#include <sun/util/resources/ext/CurrencyNames_he_IL.h>

#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _CurrencyNames_he_IL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_he_IL, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_he_IL, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_he_IL_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_he_IL",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_he_IL_MethodInfo_
};

$Object* allocate$CurrencyNames_he_IL($Class* clazz) {
	return $of($alloc(CurrencyNames_he_IL));
}

void CurrencyNames_he_IL::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_he_IL::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("ILS"_s),
		$of(u"ש\"ח"_s)
	})});
}

CurrencyNames_he_IL::CurrencyNames_he_IL() {
}

$Class* CurrencyNames_he_IL::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_he_IL, name, initialize, &_CurrencyNames_he_IL_ClassInfo_, allocate$CurrencyNames_he_IL);
	return class$;
}

$Class* CurrencyNames_he_IL::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun