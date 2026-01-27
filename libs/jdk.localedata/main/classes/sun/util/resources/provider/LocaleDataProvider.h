#ifndef _sun_util_resources_provider_LocaleDataProvider_h_
#define _sun_util_resources_provider_LocaleDataProvider_h_
//$ class sun.util.resources.provider.LocaleDataProvider
//$ extends sun.util.resources.LocaleData$CommonResourceBundleProvider

#include <sun/util/resources/LocaleData$CommonResourceBundleProvider.h>

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

class LocaleDataProvider : public ::sun::util::resources::LocaleData$CommonResourceBundleProvider {
	$class(LocaleDataProvider, $NO_CLASS_INIT, ::sun::util::resources::LocaleData$CommonResourceBundleProvider)
public:
	LocaleDataProvider();
	void init$();
	virtual ::java::util::ResourceBundle* getBundle($String* baseName, ::java::util::Locale* locale) override;
	static ::java::util::ResourceBundle* loadResourceBundle($String* bundleName);
};

			} // provider
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_provider_LocaleDataProvider_h_