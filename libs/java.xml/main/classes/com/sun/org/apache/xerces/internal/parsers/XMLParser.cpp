#include <com/sun/org/apache/xerces/internal/parsers/XMLParser.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jcpp.h>

#undef ENTITY_RESOLVER
#undef ENTITY_RESOLVER_PROPERTY
#undef ERROR_HANDLER
#undef ERROR_HANDLER_PROPERTY
#undef RECOGNIZED_PROPERTIES
#undef SECURITY_MANAGER
#undef XERCES_PROPERTY_PREFIX
#undef XML_SECURITY_PROPERTY_MANAGER

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XMLSecurityManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager;
using $XMLSecurityPropertyManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $XMLParserConfiguration = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {

$FieldInfo _XMLParser_FieldInfo_[] = {
	{"ENTITY_RESOLVER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLParser, ENTITY_RESOLVER)},
	{"ERROR_HANDLER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLParser, ERROR_HANDLER)},
	{"RECOGNIZED_PROPERTIES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLParser, RECOGNIZED_PROPERTIES)},
	{"fConfiguration", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration;", nullptr, $PROTECTED, $field(XMLParser, fConfiguration)},
	{"securityManager", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager;", nullptr, 0, $field(XMLParser, securityManager)},
	{"securityPropertyManager", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager;", nullptr, 0, $field(XMLParser, securityPropertyManager)},
	{}
};

$MethodInfo _XMLParser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration;)V", nullptr, $PROTECTED, $method(XMLParser, init$, void, $XMLParserConfiguration*)},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(XMLParser, getFeature, bool, $String*), "org.xml.sax.SAXNotSupportedException,org.xml.sax.SAXNotRecognizedException"},
	{"parse", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)V", nullptr, $PUBLIC, $virtualMethod(XMLParser, parse, void, $XMLInputSource*), "com.sun.org.apache.xerces.internal.xni.XNIException,java.io.IOException"},
	{"reset", "()V", nullptr, $PROTECTED, $virtualMethod(XMLParser, reset, void), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$ClassInfo _XMLParser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.parsers.XMLParser",
	"java.lang.Object",
	nullptr,
	_XMLParser_FieldInfo_,
	_XMLParser_MethodInfo_
};

$Object* allocate$XMLParser($Class* clazz) {
	return $of($alloc(XMLParser));
}

$String* XMLParser::ENTITY_RESOLVER = nullptr;
$String* XMLParser::ERROR_HANDLER = nullptr;
$StringArray* XMLParser::RECOGNIZED_PROPERTIES = nullptr;

bool XMLParser::getFeature($String* featureId) {
	return $nc(this->fConfiguration)->getFeature(featureId);
}

void XMLParser::init$($XMLParserConfiguration* config) {
	$set(this, fConfiguration, config);
	$nc(this->fConfiguration)->addRecognizedProperties(XMLParser::RECOGNIZED_PROPERTIES);
}

void XMLParser::parse($XMLInputSource* inputSource) {
	if (this->securityManager == nullptr) {
		$set(this, securityManager, $new($XMLSecurityManager, true));
		$init($Constants);
		$nc(this->fConfiguration)->setProperty($Constants::SECURITY_MANAGER, this->securityManager);
	}
	if (this->securityPropertyManager == nullptr) {
		$set(this, securityPropertyManager, $new($XMLSecurityPropertyManager));
		$init($JdkConstants);
		$nc(this->fConfiguration)->setProperty($JdkConstants::XML_SECURITY_PROPERTY_MANAGER, this->securityPropertyManager);
	}
	reset();
	$nc(this->fConfiguration)->parse(inputSource);
}

void XMLParser::reset() {
}

void clinit$XMLParser($Class* class$) {
	$init($Constants);
	$assignStatic(XMLParser::ENTITY_RESOLVER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ENTITY_RESOLVER_PROPERTY}));
	$assignStatic(XMLParser::ERROR_HANDLER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_HANDLER_PROPERTY}));
	$assignStatic(XMLParser::RECOGNIZED_PROPERTIES, $new($StringArray, {
		XMLParser::ENTITY_RESOLVER,
		XMLParser::ERROR_HANDLER
	}));
}

XMLParser::XMLParser() {
}

$Class* XMLParser::load$($String* name, bool initialize) {
	$loadClass(XMLParser, name, initialize, &_XMLParser_ClassInfo_, clinit$XMLParser, allocate$XMLParser);
	return class$;
}

$Class* XMLParser::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com