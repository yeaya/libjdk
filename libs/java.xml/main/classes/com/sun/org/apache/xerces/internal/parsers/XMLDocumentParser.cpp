#include <com/sun/org/apache/xerces/internal/parsers/XMLDocumentParser.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/parsers/AbstractXMLDocumentParser.h>
#include <com/sun/org/apache/xerces/internal/parsers/XIncludeAwareParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/parsers/XML11Configuration.h>
#include <com/sun/org/apache/xerces/internal/parsers/XMLParser.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLPullParserConfiguration.h>
#include <jcpp.h>

#undef SYMBOL_TABLE_PROPERTY
#undef XERCES_PROPERTY_PREFIX
#undef XMLGRAMMAR_POOL_PROPERTY

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $AbstractXMLDocumentParser = ::com::sun::org::apache::xerces::internal::parsers::AbstractXMLDocumentParser;
using $XIncludeAwareParserConfiguration = ::com::sun::org::apache::xerces::internal::parsers::XIncludeAwareParserConfiguration;
using $XML11Configuration = ::com::sun::org::apache::xerces::internal::parsers::XML11Configuration;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLGrammarPool = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool;
using $XMLParserConfiguration = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration;
using $XMLPullParserConfiguration = ::com::sun::org::apache::xerces::internal::xni::parser::XMLPullParserConfiguration;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {

$MethodInfo _XMLDocumentParser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLDocumentParser, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration;)V", nullptr, $PUBLIC, $method(XMLDocumentParser, init$, void, $XMLParserConfiguration*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(XMLDocumentParser, init$, void, $SymbolTable*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;)V", nullptr, $PUBLIC, $method(XMLDocumentParser, init$, void, $SymbolTable*, $XMLGrammarPool*)},
	{}
};

$ClassInfo _XMLDocumentParser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.parsers.XMLDocumentParser",
	"com.sun.org.apache.xerces.internal.parsers.AbstractXMLDocumentParser",
	nullptr,
	nullptr,
	_XMLDocumentParser_MethodInfo_
};

$Object* allocate$XMLDocumentParser($Class* clazz) {
	return $of($alloc(XMLDocumentParser));
}

void XMLDocumentParser::init$() {
	$AbstractXMLDocumentParser::init$($$new($XIncludeAwareParserConfiguration));
}

void XMLDocumentParser::init$($XMLParserConfiguration* config) {
	$AbstractXMLDocumentParser::init$(config);
}

void XMLDocumentParser::init$($SymbolTable* symbolTable) {
	$useLocalCurrentObjectStackCache();
	$AbstractXMLDocumentParser::init$($$new($XIncludeAwareParserConfiguration));
	$init($Constants);
	$nc(this->fConfiguration)->setProperty($$str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}), symbolTable);
}

void XMLDocumentParser::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool) {
	$useLocalCurrentObjectStackCache();
	$AbstractXMLDocumentParser::init$($$new($XIncludeAwareParserConfiguration));
	$init($Constants);
	$nc(this->fConfiguration)->setProperty($$str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}), symbolTable);
	$nc(this->fConfiguration)->setProperty($$str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::XMLGRAMMAR_POOL_PROPERTY}), grammarPool);
}

XMLDocumentParser::XMLDocumentParser() {
}

$Class* XMLDocumentParser::load$($String* name, bool initialize) {
	$loadClass(XMLDocumentParser, name, initialize, &_XMLDocumentParser_ClassInfo_, allocate$XMLDocumentParser);
	return class$;
}

$Class* XMLDocumentParser::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com