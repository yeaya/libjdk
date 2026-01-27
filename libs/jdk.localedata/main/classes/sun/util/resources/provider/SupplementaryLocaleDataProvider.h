#ifndef _sun_util_resources_provider_SupplementaryLocaleDataProvider_h_
#define _sun_util_resources_provider_SupplementaryLocaleDataProvider_h_
//$ class sun.util.resources.provider.SupplementaryLocaleDataProvider
//$ extends sun.util.resources.LocaleData$SupplementaryResourceBundleProvider

#include <sun/util/resources/LocaleData$SupplementaryResourceBundleProvider.h>

namespace java {
	namespace util {
		class Locale;
		class ResourceBundle;
	}
}

namespace sun {
	namespace util {
		namespace resources {
			namespace provider {

class SupplementaryLocaleDataProvider : public ::sun::util::resources::LocaleData$SupplementaryResourceBundleProvider {
	$class(SupplementaryLocaleDataProvider, $NO_CLASS_INIT, ::sun::util::resources::LocaleData$SupplementaryResourceBundleProvider)
public:
	SupplementaryLocaleDataProvider();
	void init$();
	virtual ::java::util::ResourceBundle* getBundle($String* baseName, ::java::util::Locale* locale) override;
};

			} // provider
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_provider_SupplementaryLocaleDataProvider_h_