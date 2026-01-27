#include <com/sun/org/apache/xalan/internal/utils/XMLSecurityPropertyManager.h>

#include <com/sun/org/apache/xalan/internal/utils/FeaturePropertyBase.h>
#include <com/sun/org/apache/xalan/internal/utils/XMLSecurityPropertyManager$Property.h>
#include <java/lang/Enum.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jcpp.h>

#undef ACCESS_EXTERNAL_DTD
#undef ACCESS_EXTERNAL_STYLESHEET
#undef SP_ACCESS_EXTERNAL_DTD
#undef SP_ACCESS_EXTERNAL_STYLESHEET

using $XMLSecurityPropertyManager$PropertyArray = $Array<::com::sun::org::apache::xalan::internal::utils::XMLSecurityPropertyManager$Property>;
using $FeaturePropertyBase = ::com::sun::org::apache::xalan::internal::utils::FeaturePropertyBase;
using $XMLSecurityPropertyManager$Property = ::com::sun::org::apache::xalan::internal::utils::XMLSecurityPropertyManager$Property;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace utils {

$MethodInfo _XMLSecurityPropertyManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLSecurityPropertyManager, init$, void)},
	{"getIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(XMLSecurityPropertyManager, getIndex, int32_t, $String*)},
	{"readSystemProperties", "()V", nullptr, $PRIVATE, $method(XMLSecurityPropertyManager, readSystemProperties, void)},
	{}
};

$InnerClassInfo _XMLSecurityPropertyManager_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.utils.XMLSecurityPropertyManager$Property", "com.sun.org.apache.xalan.internal.utils.XMLSecurityPropertyManager", "Property", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _XMLSecurityPropertyManager_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.utils.XMLSecurityPropertyManager",
	"com.sun.org.apache.xalan.internal.utils.FeaturePropertyBase",
	nullptr,
	nullptr,
	_XMLSecurityPropertyManager_MethodInfo_,
	nullptr,
	nullptr,
	_XMLSecurityPropertyManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.utils.XMLSecurityPropertyManager$Property"
};

$Object* allocate$XMLSecurityPropertyManager($Class* clazz) {
	return $of($alloc(XMLSecurityPropertyManager));
}

void XMLSecurityPropertyManager::init$() {
	$useLocalCurrentObjectStackCache();
	$FeaturePropertyBase::init$();
	$set(this, values, $new($StringArray, $($XMLSecurityPropertyManager$Property::values())->length));
	{
		$var($XMLSecurityPropertyManager$PropertyArray, arr$, $XMLSecurityPropertyManager$Property::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$XMLSecurityPropertyManager$Property* property = arr$->get(i$);
			{
				int32_t var$0 = $nc(property)->ordinal();
				$nc(this->values)->set(var$0, $(property->defaultValue()));
			}
		}
	}
	readSystemProperties();
}

int32_t XMLSecurityPropertyManager::getIndex($String* propertyName) {
	{
		$var($XMLSecurityPropertyManager$PropertyArray, arr$, $XMLSecurityPropertyManager$Property::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$XMLSecurityPropertyManager$Property* property = arr$->get(i$);
			{
				if ($nc(property)->equalsName(propertyName)) {
					return property->ordinal();
				}
			}
		}
	}
	return -1;
}

void XMLSecurityPropertyManager::readSystemProperties() {
	$init($XMLSecurityPropertyManager$Property);
	$init($JdkConstants);
	getSystemProperty($XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_DTD, $JdkConstants::SP_ACCESS_EXTERNAL_DTD);
	getSystemProperty($XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_STYLESHEET, $JdkConstants::SP_ACCESS_EXTERNAL_STYLESHEET);
}

XMLSecurityPropertyManager::XMLSecurityPropertyManager() {
}

$Class* XMLSecurityPropertyManager::load$($String* name, bool initialize) {
	$loadClass(XMLSecurityPropertyManager, name, initialize, &_XMLSecurityPropertyManager_ClassInfo_, allocate$XMLSecurityPropertyManager);
	return class$;
}

$Class* XMLSecurityPropertyManager::class$ = nullptr;

						} // utils
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com