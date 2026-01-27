#include <sun/util/resources/cldr/ext/CurrencyNames_mgo.h>

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

$MethodInfo _CurrencyNames_mgo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_mgo, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_mgo, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_mgo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_mgo",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_mgo_MethodInfo_
};

$Object* allocate$CurrencyNames_mgo($Class* clazz) {
	return $of($alloc(CurrencyNames_mgo));
}

void CurrencyNames_mgo::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_mgo::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"shirè"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"iku ikap mɔʼɔ"_s)
		})
	}));
	return data;
}

CurrencyNames_mgo::CurrencyNames_mgo() {
}

$Class* CurrencyNames_mgo::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_mgo, name, initialize, &_CurrencyNames_mgo_ClassInfo_, allocate$CurrencyNames_mgo);
	return class$;
}

$Class* CurrencyNames_mgo::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun