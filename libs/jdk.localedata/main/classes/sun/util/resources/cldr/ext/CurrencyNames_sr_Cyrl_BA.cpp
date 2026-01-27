#include <sun/util/resources/cldr/ext/CurrencyNames_sr_Cyrl_BA.h>

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

$MethodInfo _CurrencyNames_sr_Cyrl_BA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_sr_Cyrl_BA, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_sr_Cyrl_BA, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_sr_Cyrl_BA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_sr_Cyrl_BA",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_sr_Cyrl_BA_MethodInfo_
};

$Object* allocate$CurrencyNames_sr_Cyrl_BA($Class* clazz) {
	return $of($alloc(CurrencyNames_sr_Cyrl_BA));
}

void CurrencyNames_sr_Cyrl_BA::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_sr_Cyrl_BA::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"Босанскохерцеговачка конвертибилна марка"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"Бјелоруска рубља"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"Сјевернокорејски вон"_s)
		})
	}));
	return data;
}

CurrencyNames_sr_Cyrl_BA::CurrencyNames_sr_Cyrl_BA() {
}

$Class* CurrencyNames_sr_Cyrl_BA::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_sr_Cyrl_BA, name, initialize, &_CurrencyNames_sr_Cyrl_BA_ClassInfo_, allocate$CurrencyNames_sr_Cyrl_BA);
	return class$;
}

$Class* CurrencyNames_sr_Cyrl_BA::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun