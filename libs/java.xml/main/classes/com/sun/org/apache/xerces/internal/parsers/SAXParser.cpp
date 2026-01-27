#include <com/sun/org/apache/xerces/internal/parsers/SAXParser.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/parsers/AbstractSAXParser.h>
#include <com/sun/org/apache/xerces/internal/parsers/XIncludeAwareParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/parsers/XML11Configuration.h>
#include <com/sun/org/apache/xerces/internal/parsers/XMLParser.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$State.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLPullParserConfiguration.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/JdkProperty$State.h>
#include <jcpp.h>

#undef APIPROPERTY
#undef NOTIFY_BUILTIN_REFS
#undef NOTIFY_BUILTIN_REFS_FEATURE
#undef RECOGNIZED_FEATURES
#undef RECOGNIZED_PROPERTIES
#undef REPORT_WHITESPACE
#undef SECURITY_MANAGER
#undef SUN_REPORT_IGNORED_ELEMENT_CONTENT_WHITESPACE
#undef SUN_SCHEMA_FEATURE_PREFIX
#undef SYMBOL_TABLE
#undef SYMBOL_TABLE_PROPERTY
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef XMLGRAMMAR_POOL
#undef XMLGRAMMAR_POOL_PROPERTY
#undef XML_SECURITY_PROPERTY_MANAGER

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $AbstractSAXParser = ::com::sun::org::apache::xerces::internal::parsers::AbstractSAXParser;
using $XIncludeAwareParserConfiguration = ::com::sun::org::apache::xerces::internal::parsers::XIncludeAwareParserConfiguration;
using $XML11Configuration = ::com::sun::org::apache::xerces::internal::parsers::XML11Configuration;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLSecurityManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager;
using $XMLSecurityPropertyManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager;
using $XMLSecurityPropertyManager$State = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$State;
using $XMLGrammarPool = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool;
using $XMLParserConfiguration = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration;
using $XMLPullParserConfiguration = ::com::sun::org::apache::xerces::internal::xni::parser::XMLPullParserConfiguration;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $JdkProperty$State = ::jdk::xml::internal::JdkProperty$State;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {

$FieldInfo _SAXParser_FieldInfo_[] = {
	{"NOTIFY_BUILTIN_REFS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SAXParser, NOTIFY_BUILTIN_REFS)},
	{"REPORT_WHITESPACE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SAXParser, REPORT_WHITESPACE)},
	{"RECOGNIZED_FEATURES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SAXParser, RECOGNIZED_FEATURES)},
	{"SYMBOL_TABLE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SAXParser, SYMBOL_TABLE)},
	{"XMLGRAMMAR_POOL", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SAXParser, XMLGRAMMAR_POOL)},
	{"RECOGNIZED_PROPERTIES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SAXParser, RECOGNIZED_PROPERTIES)},
	{}
};

$MethodInfo _SAXParser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration;)V", nullptr, $PUBLIC, $method(SAXParser, init$, void, $XMLParserConfiguration*)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(SAXParser, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(SAXParser, init$, void, $SymbolTable*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;)V", nullptr, $PUBLIC, $method(SAXParser, init$, void, $SymbolTable*, $XMLGrammarPool*)},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(SAXParser, setProperty, void, $String*, Object$*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{}
};

$ClassInfo _SAXParser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.parsers.SAXParser",
	"com.sun.org.apache.xerces.internal.parsers.AbstractSAXParser",
	nullptr,
	_SAXParser_FieldInfo_,
	_SAXParser_MethodInfo_
};

$Object* allocate$SAXParser($Class* clazz) {
	return $of($alloc(SAXParser));
}

$String* SAXParser::NOTIFY_BUILTIN_REFS = nullptr;
$String* SAXParser::REPORT_WHITESPACE = nullptr;
$StringArray* SAXParser::RECOGNIZED_FEATURES = nullptr;
$String* SAXParser::SYMBOL_TABLE = nullptr;
$String* SAXParser::XMLGRAMMAR_POOL = nullptr;
$StringArray* SAXParser::RECOGNIZED_PROPERTIES = nullptr;

void SAXParser::init$($XMLParserConfiguration* config) {
	$AbstractSAXParser::init$(config);
}

void SAXParser::init$() {
	SAXParser::init$(nullptr, nullptr);
}

void SAXParser::init$($SymbolTable* symbolTable) {
	SAXParser::init$(symbolTable, nullptr);
}

void SAXParser::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool) {
	$AbstractSAXParser::init$($$new($XIncludeAwareParserConfiguration));
	$nc(this->fConfiguration)->addRecognizedFeatures(SAXParser::RECOGNIZED_FEATURES);
	$nc(this->fConfiguration)->setFeature(SAXParser::NOTIFY_BUILTIN_REFS, true);
	$nc(this->fConfiguration)->addRecognizedProperties(SAXParser::RECOGNIZED_PROPERTIES);
	if (symbolTable != nullptr) {
		$nc(this->fConfiguration)->setProperty(SAXParser::SYMBOL_TABLE, symbolTable);
	}
	if (grammarPool != nullptr) {
		$nc(this->fConfiguration)->setProperty(SAXParser::XMLGRAMMAR_POOL, grammarPool);
	}
}

void SAXParser::setProperty($String* name, Object$* value) {
	$init($Constants);
	if ($nc(name)->equals($Constants::SECURITY_MANAGER)) {
		$set(this, securityManager, $XMLSecurityManager::convert(value, this->securityManager));
		$AbstractSAXParser::setProperty($Constants::SECURITY_MANAGER, this->securityManager);
		return;
	}
	$init($JdkConstants);
	if ($nc(name)->equals($JdkConstants::XML_SECURITY_PROPERTY_MANAGER)) {
		if (value == nullptr) {
			$set(this, securityPropertyManager, $new($XMLSecurityPropertyManager));
		} else {
			$set(this, securityPropertyManager, $cast($XMLSecurityPropertyManager, value));
		}
		$AbstractSAXParser::setProperty($JdkConstants::XML_SECURITY_PROPERTY_MANAGER, this->securityPropertyManager);
		return;
	}
	if (this->securityManager == nullptr) {
		$set(this, securityManager, $new($XMLSecurityManager, true));
		$AbstractSAXParser::setProperty($Constants::SECURITY_MANAGER, this->securityManager);
	}
	if (this->securityPropertyManager == nullptr) {
		$set(this, securityPropertyManager, $new($XMLSecurityPropertyManager));
		$AbstractSAXParser::setProperty($JdkConstants::XML_SECURITY_PROPERTY_MANAGER, this->securityPropertyManager);
	}
	int32_t index = $nc(this->securityPropertyManager)->getIndex(name);
	if (index > -1) {
		$init($XMLSecurityPropertyManager$State);
		$nc(this->securityPropertyManager)->setValue(index, $XMLSecurityPropertyManager$State::APIPROPERTY, $cast($String, value));
	} else {
		$init($JdkProperty$State);
		if (!$nc(this->securityManager)->setLimit(name, $JdkProperty$State::APIPROPERTY, value)) {
			$AbstractSAXParser::setProperty(name, value);
		}
	}
}

void clinit$SAXParser($Class* class$) {
	$init($Constants);
	$assignStatic(SAXParser::NOTIFY_BUILTIN_REFS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::NOTIFY_BUILTIN_REFS_FEATURE}));
	$assignStatic(SAXParser::REPORT_WHITESPACE, $str({$Constants::SUN_SCHEMA_FEATURE_PREFIX, $Constants::SUN_REPORT_IGNORED_ELEMENT_CONTENT_WHITESPACE}));
	$assignStatic(SAXParser::SYMBOL_TABLE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}));
	$assignStatic(SAXParser::XMLGRAMMAR_POOL, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::XMLGRAMMAR_POOL_PROPERTY}));
	$assignStatic(SAXParser::RECOGNIZED_FEATURES, $new($StringArray, {
		SAXParser::NOTIFY_BUILTIN_REFS,
		SAXParser::REPORT_WHITESPACE
	}));
	$assignStatic(SAXParser::RECOGNIZED_PROPERTIES, $new($StringArray, {
		SAXParser::SYMBOL_TABLE,
		SAXParser::XMLGRAMMAR_POOL
	}));
}

SAXParser::SAXParser() {
}

$Class* SAXParser::load$($String* name, bool initialize) {
	$loadClass(SAXParser, name, initialize, &_SAXParser_ClassInfo_, clinit$SAXParser, allocate$SAXParser);
	return class$;
}

$Class* SAXParser::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com