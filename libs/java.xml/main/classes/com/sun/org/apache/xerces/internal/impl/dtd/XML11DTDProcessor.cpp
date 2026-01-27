#include <com/sun/org/apache/xerces/internal/impl/dtd/XML11DTDProcessor.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/XML11DTDScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLDTDScannerImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDLoader.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XML11Char.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver.h>
#include <jcpp.h>

#undef XML_VERSION_1_1

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XML11DTDScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XML11DTDScannerImpl;
using $XMLDTDScannerImpl = ::com::sun::org::apache::xerces::internal::impl::XMLDTDScannerImpl;
using $XMLEntityManager = ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $XMLDTDLoader = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDLoader;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XML11Char = ::com::sun::org::apache::xerces::internal::util::XML11Char;
using $XMLGrammarPool = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool;
using $XMLEntityResolver = ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {

$MethodInfo _XML11DTDProcessor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XML11DTDProcessor, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(XML11DTDProcessor, init$, void, $SymbolTable*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;)V", nullptr, $PUBLIC, $method(XML11DTDProcessor, init$, void, $SymbolTable*, $XMLGrammarPool*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;)V", nullptr, 0, $method(XML11DTDProcessor, init$, void, $SymbolTable*, $XMLGrammarPool*, $XMLErrorReporter*, $XMLEntityResolver*)},
	{"createDTDScanner", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager;)Lcom/sun/org/apache/xerces/internal/impl/XMLDTDScannerImpl;", nullptr, $PROTECTED, $virtualMethod(XML11DTDProcessor, createDTDScanner, $XMLDTDScannerImpl*, $SymbolTable*, $XMLErrorReporter*, $XMLEntityManager*)},
	{"getScannerVersion", "()S", nullptr, $PROTECTED, $virtualMethod(XML11DTDProcessor, getScannerVersion, int16_t)},
	{"isValidName", "(Ljava/lang/String;)Z", nullptr, $PROTECTED, $virtualMethod(XML11DTDProcessor, isValidName, bool, $String*)},
	{"isValidNmtoken", "(Ljava/lang/String;)Z", nullptr, $PROTECTED, $virtualMethod(XML11DTDProcessor, isValidNmtoken, bool, $String*)},
	{}
};

$ClassInfo _XML11DTDProcessor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dtd.XML11DTDProcessor",
	"com.sun.org.apache.xerces.internal.impl.dtd.XMLDTDLoader",
	nullptr,
	nullptr,
	_XML11DTDProcessor_MethodInfo_
};

$Object* allocate$XML11DTDProcessor($Class* clazz) {
	return $of($alloc(XML11DTDProcessor));
}

void XML11DTDProcessor::init$() {
	$XMLDTDLoader::init$();
}

void XML11DTDProcessor::init$($SymbolTable* symbolTable) {
	$XMLDTDLoader::init$(symbolTable);
}

void XML11DTDProcessor::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool) {
	$XMLDTDLoader::init$(symbolTable, grammarPool);
}

void XML11DTDProcessor::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool, $XMLErrorReporter* errorReporter, $XMLEntityResolver* entityResolver) {
	$XMLDTDLoader::init$(symbolTable, grammarPool, errorReporter, entityResolver);
}

bool XML11DTDProcessor::isValidNmtoken($String* nmtoken) {
	return $XML11Char::isXML11ValidNmtoken(nmtoken);
}

bool XML11DTDProcessor::isValidName($String* name) {
	return $XML11Char::isXML11ValidName(name);
}

$XMLDTDScannerImpl* XML11DTDProcessor::createDTDScanner($SymbolTable* symbolTable, $XMLErrorReporter* errorReporter, $XMLEntityManager* entityManager) {
	return $new($XML11DTDScannerImpl, symbolTable, errorReporter, entityManager);
}

int16_t XML11DTDProcessor::getScannerVersion() {
	return $Constants::XML_VERSION_1_1;
}

XML11DTDProcessor::XML11DTDProcessor() {
}

$Class* XML11DTDProcessor::load$($String* name, bool initialize) {
	$loadClass(XML11DTDProcessor, name, initialize, &_XML11DTDProcessor_ClassInfo_, allocate$XML11DTDProcessor);
	return class$;
}

$Class* XML11DTDProcessor::class$ = nullptr;

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com