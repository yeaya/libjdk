#include <com/sun/org/apache/xerces/internal/parsers/XMLGrammarParser.h>
#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory.h>
#include <com/sun/org/apache/xerces/internal/parsers/XIncludeAwareParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/parsers/XMLParser.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration.h>
#include <jcpp.h>

#undef SYMBOL_TABLE_PROPERTY
#undef XERCES_PROPERTY_PREFIX

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XIncludeAwareParserConfiguration = ::com::sun::org::apache::xerces::internal::parsers::XIncludeAwareParserConfiguration;
using $XMLParser = ::com::sun::org::apache::xerces::internal::parsers::XMLParser;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
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

void XMLGrammarParser::init$($SymbolTable* symbolTable) {
	$useLocalObjectStack();
	$XMLParser::init$($$new($XIncludeAwareParserConfiguration));
	$init($Constants);
	$nc(this->fConfiguration)->setProperty($$str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}), symbolTable);
}

XMLGrammarParser::XMLGrammarParser() {
}

$Class* XMLGrammarParser::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fDatatypeValidatorFactory", "Lcom/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory;", nullptr, $PROTECTED, $field(XMLGrammarParser, fDatatypeValidatorFactory)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PROTECTED, $method(XMLGrammarParser, init$, void, $SymbolTable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.parsers.XMLGrammarParser",
		"com.sun.org.apache.xerces.internal.parsers.XMLParser",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XMLGrammarParser, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLGrammarParser);
	});
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