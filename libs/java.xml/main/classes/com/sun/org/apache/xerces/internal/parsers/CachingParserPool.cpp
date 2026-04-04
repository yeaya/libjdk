#include <com/sun/org/apache/xerces/internal/parsers/CachingParserPool.h>
#include <com/sun/org/apache/xerces/internal/parsers/CachingParserPool$ShadowedGrammarPool.h>
#include <com/sun/org/apache/xerces/internal/parsers/CachingParserPool$SynchronizedGrammarPool.h>
#include <com/sun/org/apache/xerces/internal/parsers/DOMParser.h>
#include <com/sun/org/apache/xerces/internal/parsers/SAXParser.h>
#include <com/sun/org/apache/xerces/internal/util/ShadowedSymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/SynchronizedSymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLGrammarPoolImpl.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <jcpp.h>

#undef DEFAULT_SHADOW_GRAMMAR_POOL
#undef DEFAULT_SHADOW_SYMBOL_TABLE

using $CachingParserPool$ShadowedGrammarPool = ::com::sun::org::apache::xerces::internal::parsers::CachingParserPool$ShadowedGrammarPool;
using $CachingParserPool$SynchronizedGrammarPool = ::com::sun::org::apache::xerces::internal::parsers::CachingParserPool$SynchronizedGrammarPool;
using $DOMParser = ::com::sun::org::apache::xerces::internal::parsers::DOMParser;
using $SAXParser = ::com::sun::org::apache::xerces::internal::parsers::SAXParser;
using $ShadowedSymbolTable = ::com::sun::org::apache::xerces::internal::util::ShadowedSymbolTable;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $SynchronizedSymbolTable = ::com::sun::org::apache::xerces::internal::util::SynchronizedSymbolTable;
using $XMLGrammarPoolImpl = ::com::sun::org::apache::xerces::internal::util::XMLGrammarPoolImpl;
using $XMLGrammarPool = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {

void CachingParserPool::init$() {
	$useLocalObjectStack();
	$var($SymbolTable, var$0, $new($SymbolTable));
	CachingParserPool::init$(var$0, $$new($XMLGrammarPoolImpl));
}

void CachingParserPool::init$($SymbolTable* symbolTable, $XMLGrammarPool* grammarPool) {
	this->fShadowSymbolTable = CachingParserPool::DEFAULT_SHADOW_SYMBOL_TABLE;
	this->fShadowGrammarPool = CachingParserPool::DEFAULT_SHADOW_GRAMMAR_POOL;
	$set(this, fSynchronizedSymbolTable, $new($SynchronizedSymbolTable, symbolTable));
	$set(this, fSynchronizedGrammarPool, $new($CachingParserPool$SynchronizedGrammarPool, grammarPool));
}

$SymbolTable* CachingParserPool::getSymbolTable() {
	return this->fSynchronizedSymbolTable;
}

$XMLGrammarPool* CachingParserPool::getXMLGrammarPool() {
	return this->fSynchronizedGrammarPool;
}

void CachingParserPool::setShadowSymbolTable(bool shadow) {
	this->fShadowSymbolTable = shadow;
}

$DOMParser* CachingParserPool::createDOMParser() {
	$useLocalObjectStack();
	$var($SymbolTable, symbolTable, this->fShadowSymbolTable ? $cast($SymbolTable, $new($ShadowedSymbolTable, this->fSynchronizedSymbolTable)) : this->fSynchronizedSymbolTable);
	$var($XMLGrammarPool, grammarPool, this->fShadowGrammarPool ? $cast($XMLGrammarPool, $new($CachingParserPool$ShadowedGrammarPool, this->fSynchronizedGrammarPool)) : this->fSynchronizedGrammarPool);
	return $new($DOMParser, symbolTable, grammarPool);
}

$SAXParser* CachingParserPool::createSAXParser() {
	$useLocalObjectStack();
	$var($SymbolTable, symbolTable, this->fShadowSymbolTable ? $cast($SymbolTable, $new($ShadowedSymbolTable, this->fSynchronizedSymbolTable)) : this->fSynchronizedSymbolTable);
	$var($XMLGrammarPool, grammarPool, this->fShadowGrammarPool ? $cast($XMLGrammarPool, $new($CachingParserPool$ShadowedGrammarPool, this->fSynchronizedGrammarPool)) : this->fSynchronizedGrammarPool);
	return $new($SAXParser, symbolTable, grammarPool);
}

CachingParserPool::CachingParserPool() {
}

$Class* CachingParserPool::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DEFAULT_SHADOW_SYMBOL_TABLE", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CachingParserPool, DEFAULT_SHADOW_SYMBOL_TABLE)},
		{"DEFAULT_SHADOW_GRAMMAR_POOL", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CachingParserPool, DEFAULT_SHADOW_GRAMMAR_POOL)},
		{"fSynchronizedSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PROTECTED, $field(CachingParserPool, fSynchronizedSymbolTable)},
		{"fSynchronizedGrammarPool", "Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;", nullptr, $PROTECTED, $field(CachingParserPool, fSynchronizedGrammarPool)},
		{"fShadowSymbolTable", "Z", nullptr, $PROTECTED, $field(CachingParserPool, fShadowSymbolTable)},
		{"fShadowGrammarPool", "Z", nullptr, $PROTECTED, $field(CachingParserPool, fShadowGrammarPool)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CachingParserPool, init$, void)},
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;)V", nullptr, $PUBLIC, $method(CachingParserPool, init$, void, $SymbolTable*, $XMLGrammarPool*)},
		{"createDOMParser", "()Lcom/sun/org/apache/xerces/internal/parsers/DOMParser;", nullptr, $PUBLIC, $virtualMethod(CachingParserPool, createDOMParser, $DOMParser*)},
		{"createSAXParser", "()Lcom/sun/org/apache/xerces/internal/parsers/SAXParser;", nullptr, $PUBLIC, $virtualMethod(CachingParserPool, createSAXParser, $SAXParser*)},
		{"getSymbolTable", "()Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PUBLIC, $virtualMethod(CachingParserPool, getSymbolTable, $SymbolTable*)},
		{"getXMLGrammarPool", "()Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;", nullptr, $PUBLIC, $virtualMethod(CachingParserPool, getXMLGrammarPool, $XMLGrammarPool*)},
		{"setShadowSymbolTable", "(Z)V", nullptr, $PUBLIC, $virtualMethod(CachingParserPool, setShadowSymbolTable, void, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.parsers.CachingParserPool$ShadowedGrammarPool", "com.sun.org.apache.xerces.internal.parsers.CachingParserPool", "ShadowedGrammarPool", $PUBLIC | $STATIC | $FINAL},
		{"com.sun.org.apache.xerces.internal.parsers.CachingParserPool$SynchronizedGrammarPool", "com.sun.org.apache.xerces.internal.parsers.CachingParserPool", "SynchronizedGrammarPool", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.parsers.CachingParserPool",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.parsers.CachingParserPool$ShadowedGrammarPool,com.sun.org.apache.xerces.internal.parsers.CachingParserPool$SynchronizedGrammarPool"
	};
	$loadClass(CachingParserPool, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CachingParserPool);
	});
	return class$;
}

$Class* CachingParserPool::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com