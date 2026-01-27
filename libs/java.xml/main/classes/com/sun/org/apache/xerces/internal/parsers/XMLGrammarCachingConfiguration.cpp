#include <com/sun/org/apache/xerces/internal/parsers/XMLGrammarCachingConfiguration.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDLoader.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaLoader.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/parsers/XIncludeAwareParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/parsers/XML11Configuration.h>
#include <com/sun/org/apache/xerces/internal/util/MessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/ParserConfigurationSettings.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/SynchronizedSymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLGrammarPoolImpl.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/Grammar.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XSGrammar.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <jcpp.h>

#undef BIG_PRIME
#undef ERROR_REPORTER
#undef JAXP_PROPERTY_PREFIX
#undef SCHEMA_DOMAIN
#undef SCHEMA_FULL_CHECKING
#undef SCHEMA_LOCATION
#undef SCHEMA_NONS_LOCATION
#undef SCHEMA_SOURCE
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef XMLGRAMMAR_POOL
#undef XML_DTD
#undef XML_SCHEMA

using $GrammarArray = $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $DTDGrammar = ::com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammar;
using $XMLDTDLoader = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDLoader;
using $SchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar;
using $XMLSchemaLoader = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaLoader;
using $XSMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::xs::XSMessageFormatter;
using $XIncludeAwareParserConfiguration = ::com::sun::org::apache::xerces::internal::parsers::XIncludeAwareParserConfiguration;
using $XML11Configuration = ::com::sun::org::apache::xerces::internal::parsers::XML11Configuration;
using $MessageFormatter = ::com::sun::org::apache::xerces::internal::util::MessageFormatter;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $SynchronizedSymbolTable = ::com::sun::org::apache::xerces::internal::util::SynchronizedSymbolTable;
using $XMLGrammarPoolImpl = ::com::sun::org::apache::xerces::internal::util::XMLGrammarPoolImpl;
using $Grammar = ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar;
using $XMLGrammarDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription;
using $XMLGrammarPool = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool;
using $XSGrammar = ::com::sun::org::apache::xerces::internal::xni::grammars::XSGrammar;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $XMLEntityResolver = ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {

$FieldInfo _XMLGrammarCachingConfiguration_FieldInfo_[] = {
	{"BIG_PRIME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLGrammarCachingConfiguration, BIG_PRIME)},
	{"fStaticSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SynchronizedSymbolTable;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLGrammarCachingConfiguration, fStaticSymbolTable)},
	{"fStaticGrammarPool", "Lcom/sun/org/apache/xerces/internal/util/XMLGrammarPoolImpl;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLGrammarCachingConfiguration, fStaticGrammarPool)},
	{"SCHEMA_FULL_CHECKING", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLGrammarCachingConfiguration, SCHEMA_FULL_CHECKING)},
	{"fSchemaLoader", "Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaLoader;", nullptr, $PROTECTED, $field(XMLGrammarCachingConfiguration, fSchemaLoader)},
	{"fDTDLoader", "Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLDTDLoader;", nullptr, $PROTECTED, $field(XMLGrammarCachingConfiguration, fDTDLoader)},
	{}
};

$MethodInfo _XMLGrammarCachingConfiguration_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLGrammarCachingConfiguration, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(XMLGrammarCachingConfiguration, init$, void, $SymbolTable*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;)V", nullptr, $PUBLIC, $method(XMLGrammarCachingConfiguration, init$, void, $SymbolTable*, $XMLGrammarPool*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $method(XMLGrammarCachingConfiguration, init$, void, $SymbolTable*, $XMLGrammarPool*, $XMLComponentManager*)},
	{"clearGrammarPool", "()V", nullptr, $PUBLIC, $virtualMethod(XMLGrammarCachingConfiguration, clearGrammarPool, void)},
	{"lockGrammarPool", "()V", nullptr, $PUBLIC, $virtualMethod(XMLGrammarCachingConfiguration, lockGrammarPool, void)},
	{"parseDTD", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)Lcom/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar;", nullptr, 0, $virtualMethod(XMLGrammarCachingConfiguration, parseDTD, $DTDGrammar*, $XMLInputSource*), "java.io.IOException"},
	{"parseGrammar", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC, $virtualMethod(XMLGrammarCachingConfiguration, parseGrammar, $Grammar*, $String*, $String*), "com.sun.org.apache.xerces.internal.xni.XNIException,java.io.IOException"},
	{"parseGrammar", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC, $virtualMethod(XMLGrammarCachingConfiguration, parseGrammar, $Grammar*, $String*, $XMLInputSource*), "com.sun.org.apache.xerces.internal.xni.XNIException,java.io.IOException"},
	{"parseXMLSchema", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;", nullptr, 0, $virtualMethod(XMLGrammarCachingConfiguration, parseXMLSchema, $SchemaGrammar*, $XMLInputSource*), "java.io.IOException"},
	{"unlockGrammarPool", "()V", nullptr, $PUBLIC, $virtualMethod(XMLGrammarCachingConfiguration, unlockGrammarPool, void)},
	{}
};

$ClassInfo _XMLGrammarCachingConfiguration_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.parsers.XMLGrammarCachingConfiguration",
	"com.sun.org.apache.xerces.internal.parsers.XIncludeAwareParserConfiguration",
	nullptr,
	_XMLGrammarCachingConfiguration_FieldInfo_,
	_XMLGrammarCachingConfiguration_MethodInfo_
};

$Object* allocate$XMLGrammarCachingConfiguration($Class* clazz) {
	return $of($alloc(XMLGrammarCachingConfiguration));
}

$SynchronizedSymbolTable* XMLGrammarCachingConfiguration::fStaticSymbolTable = nullptr;
$XMLGrammarPoolImpl* XMLGrammarCachingConfiguration::fStaticGrammarPool = nullptr;
$String* XMLGrammarCachingConfiguration::SCHEMA_FULL_CHECKING = nullptr;

void XMLGrammarCachingConfiguration::init$() {
	XMLGrammarCachingConfiguration::init$(XMLGrammarCachingConfiguration::fStaticSymbolTable, XMLGrammarCachingConfiguration::fStaticGrammarPool, nullptr);
}

void XMLGrammarCachingConfiguration::init$($SymbolTable* symbolTable) {
	XMLGrammarCachingConfiguration::init$(symbolTable, XMLGrammarCachingConfiguration::fStaticGrammarPool, nullptr);
}

void XMLGrammarCachingConfiguration::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool) {
	XMLGrammarCachingConfiguration::init$(symbolTable, grammarPool, nullptr);
}

void XMLGrammarCachingConfiguration::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool, $XMLComponentManager* parentSettings) {
	$XIncludeAwareParserConfiguration::init$(symbolTable, grammarPool, parentSettings);
	$set(this, fSchemaLoader, $new($XMLSchemaLoader, this->fSymbolTable));
	$init($XML11Configuration);
	$nc(this->fSchemaLoader)->setProperty($XML11Configuration::XMLGRAMMAR_POOL, this->fGrammarPool);
	$set(this, fDTDLoader, $new($XMLDTDLoader, this->fSymbolTable, this->fGrammarPool));
}

void XMLGrammarCachingConfiguration::lockGrammarPool() {
	$nc(this->fGrammarPool)->lockPool();
}

void XMLGrammarCachingConfiguration::clearGrammarPool() {
	$nc(this->fGrammarPool)->clear();
}

void XMLGrammarCachingConfiguration::unlockGrammarPool() {
	$nc(this->fGrammarPool)->unlockPool();
}

$Grammar* XMLGrammarCachingConfiguration::parseGrammar($String* type, $String* uri) {
	$var($XMLInputSource, source, $new($XMLInputSource, nullptr, uri, nullptr, false));
	return parseGrammar(type, source);
}

$Grammar* XMLGrammarCachingConfiguration::parseGrammar($String* type, $XMLInputSource* is) {
	$init($XMLGrammarDescription);
	if ($nc(type)->equals($XMLGrammarDescription::XML_SCHEMA)) {
		return parseXMLSchema(is);
	} else {
		if (type->equals($XMLGrammarDescription::XML_DTD)) {
			return parseDTD(is);
		}
	}
	return nullptr;
}

$SchemaGrammar* XMLGrammarCachingConfiguration::parseXMLSchema($XMLInputSource* is) {
	$useLocalCurrentObjectStackCache();
	$var($XMLEntityResolver, resolver, getEntityResolver());
	if (resolver != nullptr) {
		$nc(this->fSchemaLoader)->setEntityResolver(resolver);
	}
	$init($XSMessageFormatter);
	if ($nc(this->fErrorReporter)->getMessageFormatter($XSMessageFormatter::SCHEMA_DOMAIN) == nullptr) {
		$nc(this->fErrorReporter)->putMessageFormatter($XSMessageFormatter::SCHEMA_DOMAIN, $$new($XSMessageFormatter));
	}
	$init($XML11Configuration);
	$nc(this->fSchemaLoader)->setProperty($XML11Configuration::ERROR_REPORTER, this->fErrorReporter);
	$init($Constants);
	$var($String, propPrefix, $Constants::XERCES_PROPERTY_PREFIX);
	$var($String, propName, $str({propPrefix, $Constants::SCHEMA_LOCATION}));
	$nc(this->fSchemaLoader)->setProperty(propName, $(getProperty(propName)));
	$assign(propName, $str({propPrefix, $Constants::SCHEMA_NONS_LOCATION}));
	$nc(this->fSchemaLoader)->setProperty(propName, $(getProperty(propName)));
	$assign(propName, $str({$Constants::JAXP_PROPERTY_PREFIX, $Constants::SCHEMA_SOURCE}));
	$nc(this->fSchemaLoader)->setProperty(propName, $(getProperty(propName)));
	$nc(this->fSchemaLoader)->setFeature(XMLGrammarCachingConfiguration::SCHEMA_FULL_CHECKING, getFeature(XMLGrammarCachingConfiguration::SCHEMA_FULL_CHECKING));
	$var($SchemaGrammar, grammar, $cast($SchemaGrammar, $nc(this->fSchemaLoader)->loadGrammar(is)));
	if (grammar != nullptr) {
		$init($XMLGrammarDescription);
		$nc(this->fGrammarPool)->cacheGrammars($XMLGrammarDescription::XML_SCHEMA, $$new($GrammarArray, {static_cast<$Grammar*>(grammar)}));
	}
	return grammar;
}

$DTDGrammar* XMLGrammarCachingConfiguration::parseDTD($XMLInputSource* is) {
	$useLocalCurrentObjectStackCache();
	$var($XMLEntityResolver, resolver, getEntityResolver());
	if (resolver != nullptr) {
		$nc(this->fDTDLoader)->setEntityResolver(resolver);
	}
	$init($XML11Configuration);
	$nc(this->fDTDLoader)->setProperty($XML11Configuration::ERROR_REPORTER, this->fErrorReporter);
	$var($DTDGrammar, grammar, $cast($DTDGrammar, $nc(this->fDTDLoader)->loadGrammar(is)));
	if (grammar != nullptr) {
		$init($XMLGrammarDescription);
		$nc(this->fGrammarPool)->cacheGrammars($XMLGrammarDescription::XML_DTD, $$new($GrammarArray, {static_cast<$Grammar*>(grammar)}));
	}
	return grammar;
}

void clinit$XMLGrammarCachingConfiguration($Class* class$) {
	$init($Constants);
	$assignStatic(XMLGrammarCachingConfiguration::SCHEMA_FULL_CHECKING, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_FULL_CHECKING}));
	$assignStatic(XMLGrammarCachingConfiguration::fStaticSymbolTable, $new($SynchronizedSymbolTable, XMLGrammarCachingConfiguration::BIG_PRIME));
	$assignStatic(XMLGrammarCachingConfiguration::fStaticGrammarPool, $new($XMLGrammarPoolImpl));
}

XMLGrammarCachingConfiguration::XMLGrammarCachingConfiguration() {
}

$Class* XMLGrammarCachingConfiguration::load$($String* name, bool initialize) {
	$loadClass(XMLGrammarCachingConfiguration, name, initialize, &_XMLGrammarCachingConfiguration_ClassInfo_, clinit$XMLGrammarCachingConfiguration, allocate$XMLGrammarCachingConfiguration);
	return class$;
}

$Class* XMLGrammarCachingConfiguration::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com