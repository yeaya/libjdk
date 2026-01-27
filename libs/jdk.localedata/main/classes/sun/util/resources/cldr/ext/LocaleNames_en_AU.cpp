#include <sun/util/resources/cldr/ext/LocaleNames_en_AU.h>

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

$MethodInfo _LocaleNames_en_AU_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_en_AU, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_en_AU, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_en_AU_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_en_AU",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_en_AU_MethodInfo_
};

$Object* allocate$LocaleNames_en_AU($Class* clazz) {
	return $of($alloc(LocaleNames_en_AU));
}

void LocaleNames_en_AU::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_en_AU::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_bn, "Bengali"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("001"_s),
			$of("World"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of("lou"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("Moldovan"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of("frc"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of("United States English"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("Ethiopian Calendar"_s)
		}),
		$$new($ObjectArray, {
			$of("key.x0"_s),
			$of("Private Use Transform"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("Korean Calendar"_s)
		})
	}));
	return data;
}

LocaleNames_en_AU::LocaleNames_en_AU() {
}

$Class* LocaleNames_en_AU::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_en_AU, name, initialize, &_LocaleNames_en_AU_ClassInfo_, allocate$LocaleNames_en_AU);
	return class$;
}

$Class* LocaleNames_en_AU::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun