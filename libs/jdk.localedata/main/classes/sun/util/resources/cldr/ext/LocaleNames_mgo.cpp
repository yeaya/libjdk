#include <sun/util/resources/cldr/ext/LocaleNames_mgo.h>

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

$MethodInfo _LocaleNames_mgo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_mgo, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_mgo, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_mgo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_mgo",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_mgo_MethodInfo_
};

$Object* allocate$LocaleNames_mgo($Class* clazz) {
	return $of($alloc(LocaleNames_mgo));
}

void LocaleNames_mgo::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_mgo::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamalun"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"aba aben tisɔ̀"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"metaʼ"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"ngam tisɔʼ"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"ngam ŋwaʼri"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"ngam choʼ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"abo ŋwaʼri tisɔʼ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("inu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"ngàb mə̀kala"_s)
		})
	}));
	return data;
}

LocaleNames_mgo::LocaleNames_mgo() {
}

$Class* LocaleNames_mgo::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_mgo, name, initialize, &_LocaleNames_mgo_ClassInfo_, allocate$LocaleNames_mgo);
	return class$;
}

$Class* LocaleNames_mgo::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun