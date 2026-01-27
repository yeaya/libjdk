#include <sun/util/resources/cldr/ext/LocaleNames_ar_EG.h>

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

$MethodInfo _LocaleNames_ar_EG_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ar_EG, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ar_EG, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_ar_EG_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ar_EG",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ar_EG_MethodInfo_
};

$Object* allocate$LocaleNames_ar_EG($Class* clazz) {
	return $of($alloc(LocaleNames_ar_EG));
}

void LocaleNames_ar_EG::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ar_EG::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("da"_s),
		$of(u"الدنماركية"_s)
	})}));
	return data;
}

LocaleNames_ar_EG::LocaleNames_ar_EG() {
}

$Class* LocaleNames_ar_EG::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ar_EG, name, initialize, &_LocaleNames_ar_EG_ClassInfo_, allocate$LocaleNames_ar_EG);
	return class$;
}

$Class* LocaleNames_ar_EG::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun