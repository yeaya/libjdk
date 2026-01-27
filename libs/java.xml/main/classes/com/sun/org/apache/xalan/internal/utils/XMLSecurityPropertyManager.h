#ifndef _com_sun_org_apache_xalan_internal_utils_XMLSecurityPropertyManager_h_
#define _com_sun_org_apache_xalan_internal_utils_XMLSecurityPropertyManager_h_
//$ class com.sun.org.apache.xalan.internal.utils.XMLSecurityPropertyManager
//$ extends com.sun.org.apache.xalan.internal.utils.FeaturePropertyBase

#include <com/sun/org/apache/xalan/internal/utils/FeaturePropertyBase.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace utils {

class XMLSecurityPropertyManager : public ::com::sun::org::apache::xalan::internal::utils::FeaturePropertyBase {
	$class(XMLSecurityPropertyManager, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::utils::FeaturePropertyBase)
public:
	XMLSecurityPropertyManager();
	using ::com::sun::org::apache::xalan::internal::utils::FeaturePropertyBase::getIndex;
	void init$();
	virtual int32_t getIndex($String* propertyName) override;
	void readSystemProperties();
};

						} // utils
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_utils_XMLSecurityPropertyManager_h_