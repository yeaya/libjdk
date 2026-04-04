#include <com/sun/org/apache/xerces/internal/jaxp/validation/WeakReferenceXMLSchema.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/AbstractXMLSchema.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/SoftReferenceGrammarPool.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <java/lang/ref/WeakReference.h>
#include <jcpp.h>

using $AbstractXMLSchema = ::com::sun::org::apache::xerces::internal::jaxp::validation::AbstractXMLSchema;
using $SoftReferenceGrammarPool = ::com::sun::org::apache::xerces::internal::jaxp::validation::SoftReferenceGrammarPool;
using $XMLGrammarPool = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

void WeakReferenceXMLSchema::init$() {
	$AbstractXMLSchema::init$();
	$set(this, fGrammarPool, $new($WeakReference, nullptr));
}

$XMLGrammarPool* WeakReferenceXMLSchema::getGrammarPool() {
	$synchronized(this) {
		$var($XMLGrammarPool, grammarPool, $cast($XMLGrammarPool, $nc(this->fGrammarPool)->get()));
		if (grammarPool == nullptr) {
			$assign(grammarPool, $new($SoftReferenceGrammarPool));
			$set(this, fGrammarPool, $new($WeakReference, grammarPool));
		}
		return grammarPool;
	}
}

bool WeakReferenceXMLSchema::isFullyComposed() {
	return false;
}

WeakReferenceXMLSchema::WeakReferenceXMLSchema() {
}

$Class* WeakReferenceXMLSchema::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fGrammarPool", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;>;", $PRIVATE, $field(WeakReferenceXMLSchema, fGrammarPool)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WeakReferenceXMLSchema, init$, void)},
		{"getGrammarPool", "()Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(WeakReferenceXMLSchema, getGrammarPool, $XMLGrammarPool*)},
		{"isFullyComposed", "()Z", nullptr, $PUBLIC, $virtualMethod(WeakReferenceXMLSchema, isFullyComposed, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.jaxp.validation.WeakReferenceXMLSchema",
		"com.sun.org.apache.xerces.internal.jaxp.validation.AbstractXMLSchema",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WeakReferenceXMLSchema, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WeakReferenceXMLSchema));
	});
	return class$;
}

$Class* WeakReferenceXMLSchema::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com