#ifndef _sun_util_resources_provider_NonBaseLocaleDataMetaInfo_h_
#define _sun_util_resources_provider_NonBaseLocaleDataMetaInfo_h_
//$ class sun.util.resources.provider.NonBaseLocaleDataMetaInfo
//$ extends sun.util.locale.provider.LocaleDataMetaInfo

#include <sun/util/locale/provider/LocaleDataMetaInfo.h>

namespace java {
	namespace util {
		class Map;
	}
}
namespace sun {
	namespace util {
		namespace locale {
			namespace provider {
				class LocaleProviderAdapter$Type;
			}
		}
	}
}

namespace sun {
	namespace util {
		namespace resources {
			namespace provider {

class NonBaseLocaleDataMetaInfo : public ::sun::util::locale::provider::LocaleDataMetaInfo {
	$class(NonBaseLocaleDataMetaInfo, 0, ::sun::util::locale::provider::LocaleDataMetaInfo)
public:
	NonBaseLocaleDataMetaInfo();
	void init$();
	virtual $String* availableLanguageTags($String* category) override;
	static $String* getSupportedLocaleString($String* resourceName);
	virtual ::sun::util::locale::provider::LocaleProviderAdapter$Type* getType() override;
	static ::java::util::Map* resourceNameToLocales;
};

			} // provider
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_provider_NonBaseLocaleDataMetaInfo_h_