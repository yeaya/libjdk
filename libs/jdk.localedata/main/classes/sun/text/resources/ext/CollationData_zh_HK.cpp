#include <sun/text/resources/ext/CollationData_zh_HK.h>

#include <java/util/ListResourceBundle.h>
#include <java/util/Locale.h>
#include <java/util/ResourceBundle.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <sun/util/locale/provider/ResourceBundleBasedAdapter.h>
#include <sun/util/resources/LocaleData.h>
#include <jcpp.h>

#undef TAIWAN

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;
using $Locale = ::java::util::Locale;
using $ResourceBundle = ::java::util::ResourceBundle;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $ResourceBundleBasedAdapter = ::sun::util::locale::provider::ResourceBundleBasedAdapter;
using $LocaleData = ::sun::util::resources::LocaleData;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

$MethodInfo _CollationData_zh_HK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CollationData_zh_HK, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CollationData_zh_HK, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CollationData_zh_HK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.CollationData_zh_HK",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_CollationData_zh_HK_MethodInfo_
};

$Object* allocate$CollationData_zh_HK($Class* clazz) {
	return $of($alloc(CollationData_zh_HK));
}

void CollationData_zh_HK::init$() {
	$useLocalCurrentObjectStackCache();
	$ListResourceBundle::init$();
	$init($Locale);
	$var($ResourceBundle, bundle, $nc($($nc(($cast($ResourceBundleBasedAdapter, $($LocaleProviderAdapter::forJRE()))))->getLocaleData()))->getCollationData($Locale::TAIWAN));
	setParent(bundle);
}

$ObjectArray2* CollationData_zh_HK::getContents() {
	return $new($ObjectArray2, 0);
}

CollationData_zh_HK::CollationData_zh_HK() {
}

$Class* CollationData_zh_HK::load$($String* name, bool initialize) {
	$loadClass(CollationData_zh_HK, name, initialize, &_CollationData_zh_HK_ClassInfo_, allocate$CollationData_zh_HK);
	return class$;
}

$Class* CollationData_zh_HK::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun