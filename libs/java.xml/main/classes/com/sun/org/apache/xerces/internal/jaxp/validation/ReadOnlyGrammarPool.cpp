#include <com/sun/org/apache/xerces/internal/jaxp/validation/ReadOnlyGrammarPool.h>

#include <com/sun/org/apache/xerces/internal/xni/grammars/Grammar.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <jcpp.h>

using $GrammarArray = $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>;
using $Grammar = ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar;
using $XMLGrammarDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription;
using $XMLGrammarPool = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

$FieldInfo _ReadOnlyGrammarPool_FieldInfo_[] = {
	{"core", "Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;", nullptr, $PRIVATE | $FINAL, $field(ReadOnlyGrammarPool, core)},
	{}
};

$MethodInfo _ReadOnlyGrammarPool_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;)V", nullptr, $PUBLIC, $method(ReadOnlyGrammarPool, init$, void, $XMLGrammarPool*)},
	{"cacheGrammars", "(Ljava/lang/String;[Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;)V", nullptr, $PUBLIC, $virtualMethod(ReadOnlyGrammarPool, cacheGrammars, void, $String*, $GrammarArray*)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(ReadOnlyGrammarPool, clear, void)},
	{"lockPool", "()V", nullptr, $PUBLIC, $virtualMethod(ReadOnlyGrammarPool, lockPool, void)},
	{"retrieveGrammar", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;)Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC, $virtualMethod(ReadOnlyGrammarPool, retrieveGrammar, $Grammar*, $XMLGrammarDescription*)},
	{"retrieveInitialGrammarSet", "(Ljava/lang/String;)[Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC, $virtualMethod(ReadOnlyGrammarPool, retrieveInitialGrammarSet, $GrammarArray*, $String*)},
	{"unlockPool", "()V", nullptr, $PUBLIC, $virtualMethod(ReadOnlyGrammarPool, unlockPool, void)},
	{}
};

$ClassInfo _ReadOnlyGrammarPool_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.validation.ReadOnlyGrammarPool",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.grammars.XMLGrammarPool",
	_ReadOnlyGrammarPool_FieldInfo_,
	_ReadOnlyGrammarPool_MethodInfo_
};

$Object* allocate$ReadOnlyGrammarPool($Class* clazz) {
	return $of($alloc(ReadOnlyGrammarPool));
}

void ReadOnlyGrammarPool::init$($XMLGrammarPool* pool) {
	$set(this, core, pool);
}

void ReadOnlyGrammarPool::cacheGrammars($String* grammarType, $GrammarArray* grammars) {
}

void ReadOnlyGrammarPool::clear() {
}

void ReadOnlyGrammarPool::lockPool() {
}

$Grammar* ReadOnlyGrammarPool::retrieveGrammar($XMLGrammarDescription* desc) {
	return $nc(this->core)->retrieveGrammar(desc);
}

$GrammarArray* ReadOnlyGrammarPool::retrieveInitialGrammarSet($String* grammarType) {
	return $nc(this->core)->retrieveInitialGrammarSet(grammarType);
}

void ReadOnlyGrammarPool::unlockPool() {
}

ReadOnlyGrammarPool::ReadOnlyGrammarPool() {
}

$Class* ReadOnlyGrammarPool::load$($String* name, bool initialize) {
	$loadClass(ReadOnlyGrammarPool, name, initialize, &_ReadOnlyGrammarPool_ClassInfo_, allocate$ReadOnlyGrammarPool);
	return class$;
}

$Class* ReadOnlyGrammarPool::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com