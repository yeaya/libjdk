#include <com/sun/org/apache/xerces/internal/parsers/CachingParserPool$ShadowedGrammarPool.h>

#include <com/sun/org/apache/xerces/internal/parsers/CachingParserPool.h>
#include <com/sun/org/apache/xerces/internal/util/XMLGrammarPoolImpl.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/Grammar.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <jcpp.h>

using $GrammarArray = $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>;
using $XMLGrammarPoolImpl = ::com::sun::org::apache::xerces::internal::util::XMLGrammarPoolImpl;
using $Grammar = ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar;
using $XMLGrammarDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription;
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

$FieldInfo _CachingParserPool$ShadowedGrammarPool_FieldInfo_[] = {
	{"fGrammarPool", "Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;", nullptr, $PRIVATE, $field(CachingParserPool$ShadowedGrammarPool, fGrammarPool)},
	{}
};

$MethodInfo _CachingParserPool$ShadowedGrammarPool_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;)V", nullptr, $PUBLIC, $method(CachingParserPool$ShadowedGrammarPool, init$, void, $XMLGrammarPool*)},
	{"cacheGrammars", "(Ljava/lang/String;[Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;)V", nullptr, $PUBLIC, $virtualMethod(CachingParserPool$ShadowedGrammarPool, cacheGrammars, void, $String*, $GrammarArray*)},
	{"containsGrammar", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;)Z", nullptr, $PUBLIC, $virtualMethod(CachingParserPool$ShadowedGrammarPool, containsGrammar, bool, $XMLGrammarDescription*)},
	{"getGrammar", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;)Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC, $virtualMethod(CachingParserPool$ShadowedGrammarPool, getGrammar, $Grammar*, $XMLGrammarDescription*)},
	{"retrieveGrammar", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;)Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC, $virtualMethod(CachingParserPool$ShadowedGrammarPool, retrieveGrammar, $Grammar*, $XMLGrammarDescription*)},
	{"retrieveInitialGrammarSet", "(Ljava/lang/String;)[Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC, $virtualMethod(CachingParserPool$ShadowedGrammarPool, retrieveInitialGrammarSet, $GrammarArray*, $String*)},
	{}
};

$InnerClassInfo _CachingParserPool$ShadowedGrammarPool_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.parsers.CachingParserPool$ShadowedGrammarPool", "com.sun.org.apache.xerces.internal.parsers.CachingParserPool", "ShadowedGrammarPool", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _CachingParserPool$ShadowedGrammarPool_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.parsers.CachingParserPool$ShadowedGrammarPool",
	"com.sun.org.apache.xerces.internal.util.XMLGrammarPoolImpl",
	nullptr,
	_CachingParserPool$ShadowedGrammarPool_FieldInfo_,
	_CachingParserPool$ShadowedGrammarPool_MethodInfo_,
	nullptr,
	nullptr,
	_CachingParserPool$ShadowedGrammarPool_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.parsers.CachingParserPool"
};

$Object* allocate$CachingParserPool$ShadowedGrammarPool($Class* clazz) {
	return $of($alloc(CachingParserPool$ShadowedGrammarPool));
}

void CachingParserPool$ShadowedGrammarPool::init$($XMLGrammarPool* grammarPool) {
	$XMLGrammarPoolImpl::init$();
	$set(this, fGrammarPool, grammarPool);
}

$GrammarArray* CachingParserPool$ShadowedGrammarPool::retrieveInitialGrammarSet($String* grammarType) {
	$var($GrammarArray, grammars, $XMLGrammarPoolImpl::retrieveInitialGrammarSet(grammarType));
	if (grammars != nullptr) {
		return grammars;
	}
	return $nc(this->fGrammarPool)->retrieveInitialGrammarSet(grammarType);
}

$Grammar* CachingParserPool$ShadowedGrammarPool::retrieveGrammar($XMLGrammarDescription* gDesc) {
	$var($Grammar, g, $XMLGrammarPoolImpl::retrieveGrammar(gDesc));
	if (g != nullptr) {
		return g;
	}
	return $nc(this->fGrammarPool)->retrieveGrammar(gDesc);
}

void CachingParserPool$ShadowedGrammarPool::cacheGrammars($String* grammarType, $GrammarArray* grammars) {
	$XMLGrammarPoolImpl::cacheGrammars(grammarType, grammars);
	$nc(this->fGrammarPool)->cacheGrammars(grammarType, grammars);
}

$Grammar* CachingParserPool$ShadowedGrammarPool::getGrammar($XMLGrammarDescription* desc) {
	if ($XMLGrammarPoolImpl::containsGrammar(desc)) {
		return $XMLGrammarPoolImpl::getGrammar(desc);
	}
	return nullptr;
}

bool CachingParserPool$ShadowedGrammarPool::containsGrammar($XMLGrammarDescription* desc) {
	return $XMLGrammarPoolImpl::containsGrammar(desc);
}

CachingParserPool$ShadowedGrammarPool::CachingParserPool$ShadowedGrammarPool() {
}

$Class* CachingParserPool$ShadowedGrammarPool::load$($String* name, bool initialize) {
	$loadClass(CachingParserPool$ShadowedGrammarPool, name, initialize, &_CachingParserPool$ShadowedGrammarPool_ClassInfo_, allocate$CachingParserPool$ShadowedGrammarPool);
	return class$;
}

$Class* CachingParserPool$ShadowedGrammarPool::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com