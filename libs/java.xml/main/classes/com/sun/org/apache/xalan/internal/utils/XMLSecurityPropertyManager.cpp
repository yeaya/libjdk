#include <com/sun/org/apache/xalan/internal/utils/XMLSecurityPropertyManager.h>
#include <com/sun/org/apache/xalan/internal/utils/FeaturePropertyBase.h>
#include <com/sun/org/apache/xalan/internal/utils/XMLSecurityPropertyManager$Property.h>
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

void XMLSecurityPropertyManager::init$() {
	$useLocalObjectStack();
	$FeaturePropertyBase::init$();
	$set(this, values, $new($StringArray, $($XMLSecurityPropertyManager$Property::values())->length));
	{
		$var($XMLSecurityPropertyManager$PropertyArray, arr$, $XMLSecurityPropertyManager$Property::values());
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
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
	$var($XMLSecurityPropertyManager$PropertyArray, arr$, $XMLSecurityPropertyManager$Property::values());
	for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
		$XMLSecurityPropertyManager$Property* property = arr$->get(i$);
		if ($nc(property)->equalsName(propertyName)) {
			return property->ordinal();
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XMLSecurityPropertyManager, init$, void)},
		{"getIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(XMLSecurityPropertyManager, getIndex, int32_t, $String*)},
		{"readSystemProperties", "()V", nullptr, $PRIVATE, $method(XMLSecurityPropertyManager, readSystemProperties, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xalan.internal.utils.XMLSecurityPropertyManager$Property", "com.sun.org.apache.xalan.internal.utils.XMLSecurityPropertyManager", "Property", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.utils.XMLSecurityPropertyManager",
		"com.sun.org.apache.xalan.internal.utils.FeaturePropertyBase",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.org.apache.xalan.internal.utils.XMLSecurityPropertyManager$Property"
	};
	$loadClass(XMLSecurityPropertyManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLSecurityPropertyManager);
	});
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