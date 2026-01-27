#include <com/sun/org/apache/xerces/internal/parsers/XMLGrammarParser.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory.h>
#include <com/sun/org/apache/xerces/internal/parsers/XIncludeAwareParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/parsers/XML11Configuration.h>
#include <com/sun/org/apache/xerces/internal/parsers/XMLParser.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLPullParserConfiguration.h>
#include <jcpp.h>

#undef SYMBOL_TABLE_PROPERTY
#undef XERCES_PROPERTY_PREFIX

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XIncludeAwareParserConfiguration = ::com::sun::org::apache::xerces::internal::parsers::XIncludeAwareParserConfiguration;
using $XML11Configuration = ::com::sun::org::apache::xerces::internal::parsers::XML11Configuration;
using $XMLParser = ::com::sun::org::apache::xerces::internal::parsers::XMLParser;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLParserConfiguration = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration;
using $XMLPullParserConfiguration = ::com::sun::org::apache::xerces::internal::xni::parser::XMLPullParserConfiguration;
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

$FieldInfo _XMLGrammarParser_FieldInfo_[] = {
	{"fDatatypeValidatorFactory", "Lcom/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory;", nullptr, $PROTECTED, $field(XMLGrammarParser, fDatatypeValidatorFactory)},
	{}
};

$MethodInfo _XMLGrammarParser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PROTECTED, $method(XMLGrammarParser, init$, void, $SymbolTable*)},
	{}
};

$ClassInfo _XMLGrammarParser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.parsers.XMLGrammarParser",
	"com.sun.org.apache.xerces.internal.parsers.XMLParser",
	nullptr,
	_XMLGrammarParser_FieldInfo_,
	_XMLGrammarParser_MethodInfo_
};

$Object* allocate$XMLGrammarParser($Class* clazz) {
	return $of($alloc(XMLGrammarParser));
}

void XMLGrammarParser::init$($SymbolTable* symbolTable) {
	$useLocalCurrentObjectStackCache();
	$XMLParser::init$($$new($XIncludeAwareParserConfiguration));
	$init($Constants);
	$nc(this->fConfiguration)->setProperty($$str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}), symbolTable);
}

XMLGrammarParser::XMLGrammarParser() {
}

$Class* XMLGrammarParser::load$($String* name, bool initialize) {
	$loadClass(XMLGrammarParser, name, initialize, &_XMLGrammarParser_ClassInfo_, allocate$XMLGrammarParser);
	return class$;
}

$Class* XMLGrammarParser::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com