#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager.h>

#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$Property.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$State.h>
#include <java/lang/Enum.h>
#include <java/lang/NumberFormatException.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef ACCESS_EXTERNAL_DTD
#undef ACCESS_EXTERNAL_SCHEMA
#undef DEFAULT
#undef JAXPDOTPROPERTIES
#undef SP_ACCESS_EXTERNAL_DTD
#undef SP_ACCESS_EXTERNAL_SCHEMA
#undef SYSTEMPROPERTY

using $XMLSecurityPropertyManager$PropertyArray = $Array<::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$Property>;
using $XMLSecurityPropertyManager$StateArray = $Array<::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$State>;
using $XMLSecurityPropertyManager$Property = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$Property;
using $XMLSecurityPropertyManager$State = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$State;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace utils {

$FieldInfo _XMLSecurityPropertyManager_FieldInfo_[] = {
	{"values", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(XMLSecurityPropertyManager, values)},
	{"states", "[Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$State;", nullptr, $PRIVATE, $field(XMLSecurityPropertyManager, states)},
	{}
};

$MethodInfo _XMLSecurityPropertyManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLSecurityPropertyManager, init$, void)},
	{"find", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $method(XMLSecurityPropertyManager, find, $String*, $String*)},
	{"getIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $method(XMLSecurityPropertyManager, getIndex, int32_t, $String*)},
	{"getSystemProperty", "(Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$Property;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(XMLSecurityPropertyManager, getSystemProperty, void, $XMLSecurityPropertyManager$Property*, $String*)},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $method(XMLSecurityPropertyManager, getValue, $String*, $String*)},
	{"getValue", "(Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$Property;)Ljava/lang/String;", nullptr, $PUBLIC, $method(XMLSecurityPropertyManager, getValue, $String*, $XMLSecurityPropertyManager$Property*)},
	{"getValueByIndex", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $method(XMLSecurityPropertyManager, getValueByIndex, $String*, int32_t)},
	{"readSystemProperties", "()V", nullptr, $PRIVATE, $method(XMLSecurityPropertyManager, readSystemProperties, void)},
	{"setValue", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$State;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $method(XMLSecurityPropertyManager, setValue, bool, $String*, $XMLSecurityPropertyManager$State*, Object$*)},
	{"setValue", "(Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$Property;Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$State;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XMLSecurityPropertyManager, setValue, void, $XMLSecurityPropertyManager$Property*, $XMLSecurityPropertyManager$State*, $String*)},
	{"setValue", "(ILcom/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$State;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XMLSecurityPropertyManager, setValue, void, int32_t, $XMLSecurityPropertyManager$State*, $String*)},
	{}
};

$InnerClassInfo _XMLSecurityPropertyManager_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.utils.XMLSecurityPropertyManager$Property", "com.sun.org.apache.xerces.internal.utils.XMLSecurityPropertyManager", "Property", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.org.apache.xerces.internal.utils.XMLSecurityPropertyManager$State", "com.sun.org.apache.xerces.internal.utils.XMLSecurityPropertyManager", "State", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _XMLSecurityPropertyManager_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.utils.XMLSecurityPropertyManager",
	"java.lang.Object",
	nullptr,
	_XMLSecurityPropertyManager_FieldInfo_,
	_XMLSecurityPropertyManager_MethodInfo_,
	nullptr,
	nullptr,
	_XMLSecurityPropertyManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.utils.XMLSecurityPropertyManager$Property,com.sun.org.apache.xerces.internal.utils.XMLSecurityPropertyManager$State"
};

$Object* allocate$XMLSecurityPropertyManager($Class* clazz) {
	return $of($alloc(XMLSecurityPropertyManager));
}

void XMLSecurityPropertyManager::init$() {
	$useLocalCurrentObjectStackCache();
	$init($XMLSecurityPropertyManager$State);
	$set(this, states, $new($XMLSecurityPropertyManager$StateArray, {
		$XMLSecurityPropertyManager$State::DEFAULT,
		$XMLSecurityPropertyManager$State::DEFAULT
	}));
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

$String* XMLSecurityPropertyManager::find($String* propertyName) {
	{
		$var($XMLSecurityPropertyManager$PropertyArray, arr$, $XMLSecurityPropertyManager$Property::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$XMLSecurityPropertyManager$Property* property = arr$->get(i$);
			{
				if ($nc(property)->equalsName(propertyName)) {
					return property->propertyName();
				}
			}
		}
	}
	return nullptr;
}

bool XMLSecurityPropertyManager::setValue($String* propertyName, $XMLSecurityPropertyManager$State* state, Object$* value) {
	int32_t index = getIndex(propertyName);
	if (index > -1) {
		setValue(index, state, $cast($String, value));
		return true;
	}
	return false;
}

void XMLSecurityPropertyManager::setValue($XMLSecurityPropertyManager$Property* property, $XMLSecurityPropertyManager$State* state, $String* value) {
	if ($nc(state)->compareTo(static_cast<$Enum*>($nc(this->states)->get($nc(property)->ordinal()))) >= 0) {
		$nc(this->values)->set($nc(property)->ordinal(), value);
		$nc(this->states)->set(property->ordinal(), state);
	}
}

void XMLSecurityPropertyManager::setValue(int32_t index, $XMLSecurityPropertyManager$State* state, $String* value) {
	if ($nc(state)->compareTo(static_cast<$Enum*>($nc(this->states)->get(index))) >= 0) {
		$nc(this->values)->set(index, value);
		$nc(this->states)->set(index, state);
	}
}

$String* XMLSecurityPropertyManager::getValue($String* propertyName) {
	int32_t index = getIndex(propertyName);
	if (index > -1) {
		return getValueByIndex(index);
	}
	return nullptr;
}

$String* XMLSecurityPropertyManager::getValue($XMLSecurityPropertyManager$Property* property) {
	return $nc(this->values)->get($nc(property)->ordinal());
}

$String* XMLSecurityPropertyManager::getValueByIndex(int32_t index) {
	return $nc(this->values)->get(index);
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
	getSystemProperty($XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_SCHEMA, $JdkConstants::SP_ACCESS_EXTERNAL_SCHEMA);
}

void XMLSecurityPropertyManager::getSystemProperty($XMLSecurityPropertyManager$Property* property, $String* systemProperty) {
	try {
		$var($String, value, $SecuritySupport::getSystemProperty(systemProperty));
		if (value != nullptr) {
			$nc(this->values)->set($nc(property)->ordinal(), value);
			$init($XMLSecurityPropertyManager$State);
			$nc(this->states)->set(property->ordinal(), $XMLSecurityPropertyManager$State::SYSTEMPROPERTY);
			return;
		}
		$assign(value, $SecuritySupport::readJAXPProperty(systemProperty));
		if (value != nullptr) {
			$nc(this->values)->set($nc(property)->ordinal(), value);
			$init($XMLSecurityPropertyManager$State);
			$nc(this->states)->set(property->ordinal(), $XMLSecurityPropertyManager$State::JAXPDOTPROPERTIES);
		}
	} catch ($NumberFormatException& e) {
	}
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
				} // xerces
			} // apache
		} // org
	} // sun
} // com