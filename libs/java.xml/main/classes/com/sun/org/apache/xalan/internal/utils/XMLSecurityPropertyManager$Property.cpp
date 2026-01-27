#include <com/sun/org/apache/xalan/internal/utils/XMLSecurityPropertyManager$Property.h>

#include <com/sun/org/apache/xalan/internal/utils/XMLSecurityPropertyManager.h>
#include <java/lang/Enum.h>
#include <javax/xml/XMLConstants.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jcpp.h>

#undef ACCESS_EXTERNAL_DTD
#undef ACCESS_EXTERNAL_STYLESHEET
#undef EXTERNAL_ACCESS_DEFAULT

using $XMLSecurityPropertyManager$PropertyArray = $Array<::com::sun::org::apache::xalan::internal::utils::XMLSecurityPropertyManager$Property>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMLConstants = ::javax::xml::XMLConstants;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace utils {

$FieldInfo _XMLSecurityPropertyManager$Property_FieldInfo_[] = {
	{"ACCESS_EXTERNAL_DTD", "Lcom/sun/org/apache/xalan/internal/utils/XMLSecurityPropertyManager$Property;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XMLSecurityPropertyManager$Property, ACCESS_EXTERNAL_DTD)},
	{"ACCESS_EXTERNAL_STYLESHEET", "Lcom/sun/org/apache/xalan/internal/utils/XMLSecurityPropertyManager$Property;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(XMLSecurityPropertyManager$Property, ACCESS_EXTERNAL_STYLESHEET)},
	{"$VALUES", "[Lcom/sun/org/apache/xalan/internal/utils/XMLSecurityPropertyManager$Property;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(XMLSecurityPropertyManager$Property, $VALUES)},
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(XMLSecurityPropertyManager$Property, name$)},
	{"defaultValue", "Ljava/lang/String;", nullptr, $FINAL, $field(XMLSecurityPropertyManager$Property, defaultValue$)},
	{}
};

$MethodInfo _XMLSecurityPropertyManager$Property_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/org/apache/xalan/internal/utils/XMLSecurityPropertyManager$Property;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(XMLSecurityPropertyManager$Property, $values, $XMLSecurityPropertyManager$PropertyArray*)},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", "(Ljava/lang/String;Ljava/lang/String;)V", $PRIVATE, $method(XMLSecurityPropertyManager$Property, init$, void, $String*, int32_t, $String*, $String*)},
	{"defaultValue", "()Ljava/lang/String;", nullptr, 0, $method(XMLSecurityPropertyManager$Property, defaultValue, $String*)},
	{"equalsName", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $method(XMLSecurityPropertyManager$Property, equalsName, bool, $String*)},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/org/apache/xalan/internal/utils/XMLSecurityPropertyManager$Property;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLSecurityPropertyManager$Property, valueOf, XMLSecurityPropertyManager$Property*, $String*)},
	{"values", "()[Lcom/sun/org/apache/xalan/internal/utils/XMLSecurityPropertyManager$Property;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLSecurityPropertyManager$Property, values, $XMLSecurityPropertyManager$PropertyArray*)},
	{}
};

$InnerClassInfo _XMLSecurityPropertyManager$Property_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.utils.XMLSecurityPropertyManager$Property", "com.sun.org.apache.xalan.internal.utils.XMLSecurityPropertyManager", "Property", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _XMLSecurityPropertyManager$Property_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.org.apache.xalan.internal.utils.XMLSecurityPropertyManager$Property",
	"java.lang.Enum",
	nullptr,
	_XMLSecurityPropertyManager$Property_FieldInfo_,
	_XMLSecurityPropertyManager$Property_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/org/apache/xalan/internal/utils/XMLSecurityPropertyManager$Property;>;",
	nullptr,
	_XMLSecurityPropertyManager$Property_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.utils.XMLSecurityPropertyManager"
};

$Object* allocate$XMLSecurityPropertyManager$Property($Class* clazz) {
	return $of($alloc(XMLSecurityPropertyManager$Property));
}

XMLSecurityPropertyManager$Property* XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_DTD = nullptr;
XMLSecurityPropertyManager$Property* XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_STYLESHEET = nullptr;
$XMLSecurityPropertyManager$PropertyArray* XMLSecurityPropertyManager$Property::$VALUES = nullptr;

$XMLSecurityPropertyManager$PropertyArray* XMLSecurityPropertyManager$Property::$values() {
	$init(XMLSecurityPropertyManager$Property);
	return $new($XMLSecurityPropertyManager$PropertyArray, {
		XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_DTD,
		XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_STYLESHEET
	});
}

$XMLSecurityPropertyManager$PropertyArray* XMLSecurityPropertyManager$Property::values() {
	$init(XMLSecurityPropertyManager$Property);
	return $cast($XMLSecurityPropertyManager$PropertyArray, XMLSecurityPropertyManager$Property::$VALUES->clone());
}

XMLSecurityPropertyManager$Property* XMLSecurityPropertyManager$Property::valueOf($String* name) {
	$init(XMLSecurityPropertyManager$Property);
	return $cast(XMLSecurityPropertyManager$Property, $Enum::valueOf(XMLSecurityPropertyManager$Property::class$, name));
}

void XMLSecurityPropertyManager$Property::init$($String* $enum$name, int32_t $enum$ordinal, $String* name, $String* value) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, name$, name);
	$set(this, defaultValue$, value);
}

bool XMLSecurityPropertyManager$Property::equalsName($String* propertyName) {
	return (propertyName == nullptr) ? false : $nc(this->name$)->equals(propertyName);
}

$String* XMLSecurityPropertyManager$Property::defaultValue() {
	return this->defaultValue$;
}

void clinit$XMLSecurityPropertyManager$Property($Class* class$) {
	$init($XMLConstants);
	$init($JdkConstants);
	$assignStatic(XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_DTD, $new(XMLSecurityPropertyManager$Property, "ACCESS_EXTERNAL_DTD"_s, 0, $XMLConstants::ACCESS_EXTERNAL_DTD, $JdkConstants::EXTERNAL_ACCESS_DEFAULT));
	$assignStatic(XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_STYLESHEET, $new(XMLSecurityPropertyManager$Property, "ACCESS_EXTERNAL_STYLESHEET"_s, 1, $XMLConstants::ACCESS_EXTERNAL_STYLESHEET, $JdkConstants::EXTERNAL_ACCESS_DEFAULT));
	$assignStatic(XMLSecurityPropertyManager$Property::$VALUES, XMLSecurityPropertyManager$Property::$values());
}

XMLSecurityPropertyManager$Property::XMLSecurityPropertyManager$Property() {
}

$Class* XMLSecurityPropertyManager$Property::load$($String* name, bool initialize) {
	$loadClass(XMLSecurityPropertyManager$Property, name, initialize, &_XMLSecurityPropertyManager$Property_ClassInfo_, clinit$XMLSecurityPropertyManager$Property, allocate$XMLSecurityPropertyManager$Property);
	return class$;
}

$Class* XMLSecurityPropertyManager$Property::class$ = nullptr;

						} // utils
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com