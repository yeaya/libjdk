#include <sun/util/resources/cldr/ext/LocaleNames_en_NZ.h>

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

$MethodInfo _LocaleNames_en_NZ_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_en_NZ, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_en_NZ, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_en_NZ_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_en_NZ",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_en_NZ_MethodInfo_
};

$Object* allocate$LocaleNames_en_NZ($Class* clazz) {
	return $of($alloc(LocaleNames_en_NZ));
}

void LocaleNames_en_NZ::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_en_NZ::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("mi"_s),
		$of(u"Māori"_s)
	})}));
	return data;
}

LocaleNames_en_NZ::LocaleNames_en_NZ() {
}

$Class* LocaleNames_en_NZ::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_en_NZ, name, initialize, &_LocaleNames_en_NZ_ClassInfo_, allocate$LocaleNames_en_NZ);
	return class$;
}

$Class* LocaleNames_en_NZ::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun