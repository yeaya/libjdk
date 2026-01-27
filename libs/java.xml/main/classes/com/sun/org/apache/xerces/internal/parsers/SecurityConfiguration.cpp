#include <com/sun/org/apache/xerces/internal/parsers/SecurityConfiguration.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/parsers/XIncludeAwareParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/parsers/XML11Configuration.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <jcpp.h>

#undef SECURITY_MANAGER_PROPERTY
#undef XERCES_PROPERTY_PREFIX

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XIncludeAwareParserConfiguration = ::com::sun::org::apache::xerces::internal::parsers::XIncludeAwareParserConfiguration;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLSecurityManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager;
using $XMLGrammarPool = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
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

$FieldInfo _SecurityConfiguration_FieldInfo_[] = {
	{"SECURITY_MANAGER_PROPERTY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SecurityConfiguration, SECURITY_MANAGER_PROPERTY)},
	{}
};

$MethodInfo _SecurityConfiguration_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SecurityConfiguration, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(SecurityConfiguration, init$, void, $SymbolTable*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;)V", nullptr, $PUBLIC, $method(SecurityConfiguration, init$, void, $SymbolTable*, $XMLGrammarPool*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $method(SecurityConfiguration, init$, void, $SymbolTable*, $XMLGrammarPool*, $XMLComponentManager*)},
	{}
};

$ClassInfo _SecurityConfiguration_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.parsers.SecurityConfiguration",
	"com.sun.org.apache.xerces.internal.parsers.XIncludeAwareParserConfiguration",
	nullptr,
	_SecurityConfiguration_FieldInfo_,
	_SecurityConfiguration_MethodInfo_
};

$Object* allocate$SecurityConfiguration($Class* clazz) {
	return $of($alloc(SecurityConfiguration));
}

$String* SecurityConfiguration::SECURITY_MANAGER_PROPERTY = nullptr;

void SecurityConfiguration::init$() {
	SecurityConfiguration::init$(nullptr, nullptr, nullptr);
}

void SecurityConfiguration::init$($SymbolTable* symbolTable) {
	SecurityConfiguration::init$(symbolTable, nullptr, nullptr);
}

void SecurityConfiguration::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool) {
	SecurityConfiguration::init$(symbolTable, grammarPool, nullptr);
}

void SecurityConfiguration::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool, $XMLComponentManager* parentSettings) {
	$XIncludeAwareParserConfiguration::init$(symbolTable, grammarPool, parentSettings);
	setProperty(SecurityConfiguration::SECURITY_MANAGER_PROPERTY, $$new($XMLSecurityManager, true));
}

SecurityConfiguration::SecurityConfiguration() {
}

void clinit$SecurityConfiguration($Class* class$) {
	$init($Constants);
	$assignStatic(SecurityConfiguration::SECURITY_MANAGER_PROPERTY, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SECURITY_MANAGER_PROPERTY}));
}

$Class* SecurityConfiguration::load$($String* name, bool initialize) {
	$loadClass(SecurityConfiguration, name, initialize, &_SecurityConfiguration_ClassInfo_, clinit$SecurityConfiguration, allocate$SecurityConfiguration);
	return class$;
}

$Class* SecurityConfiguration::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com