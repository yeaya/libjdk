#include <com/sun/org/apache/xerces/internal/parsers/XMLGrammarPreparser.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/utils/ObjectFactory.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/Grammar.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarLoader.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef CONTINUE_AFTER_FATAL_ERROR
#undef CONTINUE_AFTER_FATAL_ERROR_FEATURE
#undef ENTITY_RESOLVER
#undef ENTITY_RESOLVER_PROPERTY
#undef ERROR_HANDLER
#undef ERROR_HANDLER_PROPERTY
#undef ERROR_REPORTER
#undef ERROR_REPORTER_PROPERTY
#undef GRAMMAR_POOL
#undef KNOWN_LOADERS
#undef RECOGNIZED_PROPERTIES
#undef SYMBOL_TABLE
#undef SYMBOL_TABLE_PROPERTY
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef XMLGRAMMAR_POOL_PROPERTY
#undef XML_DTD
#undef XML_SCHEMA

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XMLEntityManager = ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $ObjectFactory = ::com::sun::org::apache::xerces::internal::utils::ObjectFactory;
using $Grammar = ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar;
using $XMLGrammarDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription;
using $XMLGrammarLoader = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarLoader;
using $XMLGrammarPool = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool;
using $XMLEntityResolver = ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver;
using $XMLErrorHandler = ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {

$FieldInfo _XMLGrammarPreparser_FieldInfo_[] = {
	{"CONTINUE_AFTER_FATAL_ERROR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLGrammarPreparser, CONTINUE_AFTER_FATAL_ERROR)},
	{"SYMBOL_TABLE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLGrammarPreparser, SYMBOL_TABLE)},
	{"ERROR_REPORTER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLGrammarPreparser, ERROR_REPORTER)},
	{"ERROR_HANDLER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLGrammarPreparser, ERROR_HANDLER)},
	{"ENTITY_RESOLVER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLGrammarPreparser, ENTITY_RESOLVER)},
	{"GRAMMAR_POOL", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLGrammarPreparser, GRAMMAR_POOL)},
	{"KNOWN_LOADERS", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(XMLGrammarPreparser, KNOWN_LOADERS)},
	{"RECOGNIZED_PROPERTIES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLGrammarPreparser, RECOGNIZED_PROPERTIES)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PROTECTED, $field(XMLGrammarPreparser, fSymbolTable)},
	{"fErrorReporter", "Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, $PROTECTED, $field(XMLGrammarPreparser, fErrorReporter)},
	{"fEntityResolver", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;", nullptr, $PROTECTED, $field(XMLGrammarPreparser, fEntityResolver)},
	{"fGrammarPool", "Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;", nullptr, $PROTECTED, $field(XMLGrammarPreparser, fGrammarPool)},
	{"fLocale", "Ljava/util/Locale;", nullptr, $PROTECTED, $field(XMLGrammarPreparser, fLocale)},
	{"fLoaders", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarLoader;>;", $PRIVATE, $field(XMLGrammarPreparser, fLoaders)},
	{}
};

$MethodInfo _XMLGrammarPreparser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLGrammarPreparser, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(XMLGrammarPreparser, init$, void, $SymbolTable*)},
	{"getEntityResolver", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;", nullptr, $PUBLIC, $virtualMethod(XMLGrammarPreparser, getEntityResolver, $XMLEntityResolver*)},
	{"getErrorHandler", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;", nullptr, $PUBLIC, $virtualMethod(XMLGrammarPreparser, getErrorHandler, $XMLErrorHandler*)},
	{"getFeature", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(XMLGrammarPreparser, getFeature, bool, $String*, $String*)},
	{"getGrammarPool", "()Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;", nullptr, $PUBLIC, $virtualMethod(XMLGrammarPreparser, getGrammarPool, $XMLGrammarPool*)},
	{"getLoader", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarLoader;", nullptr, $PUBLIC, $virtualMethod(XMLGrammarPreparser, getLoader, $XMLGrammarLoader*, $String*)},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(XMLGrammarPreparser, getLocale, $Locale*)},
	{"getProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XMLGrammarPreparser, getProperty, $Object*, $String*, $String*)},
	{"preparseGrammar", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC, $virtualMethod(XMLGrammarPreparser, preparseGrammar, $Grammar*, $String*, $XMLInputSource*), "com.sun.org.apache.xerces.internal.xni.XNIException,java.io.IOException"},
	{"registerPreparser", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarLoader;)Z", nullptr, $PUBLIC, $virtualMethod(XMLGrammarPreparser, registerPreparser, bool, $String*, $XMLGrammarLoader*)},
	{"setEntityResolver", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;)V", nullptr, $PUBLIC, $virtualMethod(XMLGrammarPreparser, setEntityResolver, void, $XMLEntityResolver*)},
	{"setErrorHandler", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;)V", nullptr, $PUBLIC, $virtualMethod(XMLGrammarPreparser, setErrorHandler, void, $XMLErrorHandler*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(XMLGrammarPreparser, setFeature, void, $String*, bool)},
	{"setGrammarPool", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;)V", nullptr, $PUBLIC, $virtualMethod(XMLGrammarPreparser, setGrammarPool, void, $XMLGrammarPool*)},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $virtualMethod(XMLGrammarPreparser, setLocale, void, $Locale*)},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(XMLGrammarPreparser, setProperty, void, $String*, Object$*)},
	{}
};

$ClassInfo _XMLGrammarPreparser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.parsers.XMLGrammarPreparser",
	"java.lang.Object",
	nullptr,
	_XMLGrammarPreparser_FieldInfo_,
	_XMLGrammarPreparser_MethodInfo_
};

$Object* allocate$XMLGrammarPreparser($Class* clazz) {
	return $of($alloc(XMLGrammarPreparser));
}

$String* XMLGrammarPreparser::CONTINUE_AFTER_FATAL_ERROR = nullptr;
$String* XMLGrammarPreparser::SYMBOL_TABLE = nullptr;
$String* XMLGrammarPreparser::ERROR_REPORTER = nullptr;
$String* XMLGrammarPreparser::ERROR_HANDLER = nullptr;
$String* XMLGrammarPreparser::ENTITY_RESOLVER = nullptr;
$String* XMLGrammarPreparser::GRAMMAR_POOL = nullptr;
$Map* XMLGrammarPreparser::KNOWN_LOADERS = nullptr;
$StringArray* XMLGrammarPreparser::RECOGNIZED_PROPERTIES = nullptr;

void XMLGrammarPreparser::init$() {
	XMLGrammarPreparser::init$($$new($SymbolTable));
}

void XMLGrammarPreparser::init$($SymbolTable* symbolTable) {
	$set(this, fSymbolTable, symbolTable);
	$set(this, fLoaders, $new($HashMap));
	$set(this, fErrorReporter, $new($XMLErrorReporter));
	setLocale($($Locale::getDefault()));
	$set(this, fEntityResolver, $new($XMLEntityManager));
}

bool XMLGrammarPreparser::registerPreparser($String* grammarType, $XMLGrammarLoader* loader) {
	$useLocalCurrentObjectStackCache();
	if (loader == nullptr) {
		if ($nc(XMLGrammarPreparser::KNOWN_LOADERS)->containsKey(grammarType)) {
			$var($String, loaderName, $cast($String, $nc(XMLGrammarPreparser::KNOWN_LOADERS)->get(grammarType)));
			try {
				$var($XMLGrammarLoader, gl, ($cast($XMLGrammarLoader, $ObjectFactory::newInstance(loaderName, true))));
				$nc(this->fLoaders)->put(grammarType, gl);
			} catch ($Exception& e) {
				return false;
			}
			return true;
		}
		return false;
	}
	$nc(this->fLoaders)->put(grammarType, loader);
	return true;
}

$Grammar* XMLGrammarPreparser::preparseGrammar($String* type, $XMLInputSource* is) {
	if ($nc(this->fLoaders)->containsKey(type)) {
		$var($XMLGrammarLoader, gl, $cast($XMLGrammarLoader, $nc(this->fLoaders)->get(type)));
		$nc(gl)->setProperty(XMLGrammarPreparser::SYMBOL_TABLE, this->fSymbolTable);
		gl->setProperty(XMLGrammarPreparser::ENTITY_RESOLVER, this->fEntityResolver);
		gl->setProperty(XMLGrammarPreparser::ERROR_REPORTER, this->fErrorReporter);
		if (this->fGrammarPool != nullptr) {
			try {
				gl->setProperty(XMLGrammarPreparser::GRAMMAR_POOL, this->fGrammarPool);
			} catch ($Exception& e) {
			}
		}
		return gl->loadGrammar(is);
	}
	return nullptr;
}

void XMLGrammarPreparser::setLocale($Locale* locale) {
	$set(this, fLocale, locale);
	$nc(this->fErrorReporter)->setLocale(locale);
}

$Locale* XMLGrammarPreparser::getLocale() {
	return this->fLocale;
}

void XMLGrammarPreparser::setErrorHandler($XMLErrorHandler* errorHandler) {
	$nc(this->fErrorReporter)->setProperty(XMLGrammarPreparser::ERROR_HANDLER, errorHandler);
}

$XMLErrorHandler* XMLGrammarPreparser::getErrorHandler() {
	return $nc(this->fErrorReporter)->getErrorHandler();
}

void XMLGrammarPreparser::setEntityResolver($XMLEntityResolver* entityResolver) {
	$set(this, fEntityResolver, entityResolver);
}

$XMLEntityResolver* XMLGrammarPreparser::getEntityResolver() {
	return this->fEntityResolver;
}

void XMLGrammarPreparser::setGrammarPool($XMLGrammarPool* grammarPool) {
	$set(this, fGrammarPool, grammarPool);
}

$XMLGrammarPool* XMLGrammarPreparser::getGrammarPool() {
	return this->fGrammarPool;
}

$XMLGrammarLoader* XMLGrammarPreparser::getLoader($String* type) {
	return $cast($XMLGrammarLoader, $nc(this->fLoaders)->get(type));
}

void XMLGrammarPreparser::setFeature($String* featureId, bool value) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc(this->fLoaders)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				try {
					$var($XMLGrammarLoader, gl, $cast($XMLGrammarLoader, $nc(entry)->getValue()));
					$nc(gl)->setFeature(featureId, value);
				} catch ($Exception& e) {
				}
			}
		}
	}
	if ($nc(featureId)->equals(XMLGrammarPreparser::CONTINUE_AFTER_FATAL_ERROR)) {
		$nc(this->fErrorReporter)->setFeature(XMLGrammarPreparser::CONTINUE_AFTER_FATAL_ERROR, value);
	}
}

void XMLGrammarPreparser::setProperty($String* propId, Object$* value) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc(this->fLoaders)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				try {
					$var($XMLGrammarLoader, gl, $cast($XMLGrammarLoader, $nc(entry)->getValue()));
					$nc(gl)->setProperty(propId, value);
				} catch ($Exception& e) {
				}
			}
		}
	}
}

bool XMLGrammarPreparser::getFeature($String* type, $String* featureId) {
	$var($XMLGrammarLoader, gl, $cast($XMLGrammarLoader, $nc(this->fLoaders)->get(type)));
	return $nc(gl)->getFeature(featureId);
}

$Object* XMLGrammarPreparser::getProperty($String* type, $String* propertyId) {
	$var($XMLGrammarLoader, gl, $cast($XMLGrammarLoader, $nc(this->fLoaders)->get(type)));
	return $of($nc(gl)->getProperty(propertyId));
}

void clinit$XMLGrammarPreparser($Class* class$) {
	$init($Constants);
	$assignStatic(XMLGrammarPreparser::CONTINUE_AFTER_FATAL_ERROR, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::CONTINUE_AFTER_FATAL_ERROR_FEATURE}));
	$assignStatic(XMLGrammarPreparser::SYMBOL_TABLE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}));
	$assignStatic(XMLGrammarPreparser::ERROR_REPORTER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}));
	$assignStatic(XMLGrammarPreparser::ERROR_HANDLER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_HANDLER_PROPERTY}));
	$assignStatic(XMLGrammarPreparser::ENTITY_RESOLVER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ENTITY_RESOLVER_PROPERTY}));
	$assignStatic(XMLGrammarPreparser::GRAMMAR_POOL, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::XMLGRAMMAR_POOL_PROPERTY}));
	{
		$var($Map, loaders, $new($HashMap));
		$init($XMLGrammarDescription);
		loaders->put($XMLGrammarDescription::XML_SCHEMA, "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaLoader"_s);
		loaders->put($XMLGrammarDescription::XML_DTD, "com.sun.org.apache.xerces.internal.impl.dtd.XMLDTDLoader"_s);
		$assignStatic(XMLGrammarPreparser::KNOWN_LOADERS, $Collections::unmodifiableMap(loaders));
	}
	$assignStatic(XMLGrammarPreparser::RECOGNIZED_PROPERTIES, $new($StringArray, {
		XMLGrammarPreparser::SYMBOL_TABLE,
		XMLGrammarPreparser::ERROR_REPORTER,
		XMLGrammarPreparser::ERROR_HANDLER,
		XMLGrammarPreparser::ENTITY_RESOLVER,
		XMLGrammarPreparser::GRAMMAR_POOL
	}));
}

XMLGrammarPreparser::XMLGrammarPreparser() {
}

$Class* XMLGrammarPreparser::load$($String* name, bool initialize) {
	$loadClass(XMLGrammarPreparser, name, initialize, &_XMLGrammarPreparser_ClassInfo_, clinit$XMLGrammarPreparser, allocate$XMLGrammarPreparser);
	return class$;
}

$Class* XMLGrammarPreparser::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com