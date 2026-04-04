#include <com/sun/org/apache/xerces/internal/jaxp/validation/XMLSchemaFactory$XMLGrammarPoolWrapper.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/XMLSchemaFactory.h>
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
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

void XMLSchemaFactory$XMLGrammarPoolWrapper::init$() {
}

$GrammarArray* XMLSchemaFactory$XMLGrammarPoolWrapper::retrieveInitialGrammarSet($String* grammarType) {
	return $nc(this->fGrammarPool)->retrieveInitialGrammarSet(grammarType);
}

void XMLSchemaFactory$XMLGrammarPoolWrapper::cacheGrammars($String* grammarType, $GrammarArray* grammars) {
	$nc(this->fGrammarPool)->cacheGrammars(grammarType, grammars);
}

$Grammar* XMLSchemaFactory$XMLGrammarPoolWrapper::retrieveGrammar($XMLGrammarDescription* desc) {
	return $nc(this->fGrammarPool)->retrieveGrammar(desc);
}

void XMLSchemaFactory$XMLGrammarPoolWrapper::lockPool() {
	$nc(this->fGrammarPool)->lockPool();
}

void XMLSchemaFactory$XMLGrammarPoolWrapper::unlockPool() {
	$nc(this->fGrammarPool)->unlockPool();
}

void XMLSchemaFactory$XMLGrammarPoolWrapper::clear() {
	$nc(this->fGrammarPool)->clear();
}

void XMLSchemaFactory$XMLGrammarPoolWrapper::setGrammarPool($XMLGrammarPool* grammarPool) {
	$set(this, fGrammarPool, grammarPool);
}

$XMLGrammarPool* XMLSchemaFactory$XMLGrammarPoolWrapper::getGrammarPool() {
	return this->fGrammarPool;
}

XMLSchemaFactory$XMLGrammarPoolWrapper::XMLSchemaFactory$XMLGrammarPoolWrapper() {
}

$Class* XMLSchemaFactory$XMLGrammarPoolWrapper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fGrammarPool", "Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;", nullptr, $PRIVATE, $field(XMLSchemaFactory$XMLGrammarPoolWrapper, fGrammarPool)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(XMLSchemaFactory$XMLGrammarPoolWrapper, init$, void)},
		{"cacheGrammars", "(Ljava/lang/String;[Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaFactory$XMLGrammarPoolWrapper, cacheGrammars, void, $String*, $GrammarArray*)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaFactory$XMLGrammarPoolWrapper, clear, void)},
		{"getGrammarPool", "()Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;", nullptr, 0, $virtualMethod(XMLSchemaFactory$XMLGrammarPoolWrapper, getGrammarPool, $XMLGrammarPool*)},
		{"lockPool", "()V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaFactory$XMLGrammarPoolWrapper, lockPool, void)},
		{"retrieveGrammar", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;)Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaFactory$XMLGrammarPoolWrapper, retrieveGrammar, $Grammar*, $XMLGrammarDescription*)},
		{"retrieveInitialGrammarSet", "(Ljava/lang/String;)[Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaFactory$XMLGrammarPoolWrapper, retrieveInitialGrammarSet, $GrammarArray*, $String*)},
		{"setGrammarPool", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;)V", nullptr, 0, $virtualMethod(XMLSchemaFactory$XMLGrammarPoolWrapper, setGrammarPool, void, $XMLGrammarPool*)},
		{"unlockPool", "()V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaFactory$XMLGrammarPoolWrapper, unlockPool, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.jaxp.validation.XMLSchemaFactory$XMLGrammarPoolWrapper", "com.sun.org.apache.xerces.internal.jaxp.validation.XMLSchemaFactory", "XMLGrammarPoolWrapper", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.jaxp.validation.XMLSchemaFactory$XMLGrammarPoolWrapper",
		"java.lang.Object",
		"com.sun.org.apache.xerces.internal.xni.grammars.XMLGrammarPool",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.jaxp.validation.XMLSchemaFactory"
	};
	$loadClass(XMLSchemaFactory$XMLGrammarPoolWrapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLSchemaFactory$XMLGrammarPoolWrapper);
	});
	return class$;
}

$Class* XMLSchemaFactory$XMLGrammarPoolWrapper::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com