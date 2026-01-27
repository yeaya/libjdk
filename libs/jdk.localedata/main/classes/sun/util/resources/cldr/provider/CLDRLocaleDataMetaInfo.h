#ifndef _sun_util_resources_cldr_provider_CLDRLocaleDataMetaInfo_h_
#define _sun_util_resources_cldr_provider_CLDRLocaleDataMetaInfo_h_
//$ class sun.util.resources.cldr.provider.CLDRLocaleDataMetaInfo
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
			namespace cldr {
				namespace provider {

class CLDRLocaleDataMetaInfo : public ::sun::util::locale::provider::LocaleDataMetaInfo {
	$class(CLDRLocaleDataMetaInfo, 0, ::sun::util::locale::provider::LocaleDataMetaInfo)
public:
	CLDRLocaleDataMetaInfo();
	void init$();
	virtual $String* availableLanguageTags($String* category) override;
	virtual ::sun::util::locale::provider::LocaleProviderAdapter$Type* getType() override;
	static ::java::util::Map* resourceNameToLocales;
};

				} // provider
			} // cldr
		} // resources
	} // util
} // sun

#endif // _sun_util_resources_cldr_provider_CLDRLocaleDataMetaInfo_h_