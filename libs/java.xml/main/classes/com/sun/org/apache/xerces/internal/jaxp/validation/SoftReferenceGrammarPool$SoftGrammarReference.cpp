#include <com/sun/org/apache/xerces/internal/jaxp/validation/SoftReferenceGrammarPool$SoftGrammarReference.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/SoftReferenceGrammarPool$Entry.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/SoftReferenceGrammarPool.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/Grammar.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/SoftReference.h>
#include <jcpp.h>

using $SoftReferenceGrammarPool$Entry = ::com::sun::org::apache::xerces::internal::jaxp::validation::SoftReferenceGrammarPool$Entry;
using $Grammar = ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $SoftReference = ::java::lang::ref::SoftReference;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

void SoftReferenceGrammarPool$SoftGrammarReference::init$($SoftReferenceGrammarPool$Entry* entry, $Grammar* grammar, $ReferenceQueue* queue) {
	$SoftReference::init$(grammar, queue);
	$set(this, entry, entry);
}

SoftReferenceGrammarPool$SoftGrammarReference::SoftReferenceGrammarPool$SoftGrammarReference() {
}

$Class* SoftReferenceGrammarPool$SoftGrammarReference::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"entry", "Lcom/sun/org/apache/xerces/internal/jaxp/validation/SoftReferenceGrammarPool$Entry;", nullptr, $PUBLIC, $field(SoftReferenceGrammarPool$SoftGrammarReference, entry)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/jaxp/validation/SoftReferenceGrammarPool$Entry;Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;Ljava/lang/ref/ReferenceQueue;)V", "(Lcom/sun/org/apache/xerces/internal/jaxp/validation/SoftReferenceGrammarPool$Entry;Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;Ljava/lang/ref/ReferenceQueue<Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;>;)V", $PROTECTED, $method(SoftReferenceGrammarPool$SoftGrammarReference, init$, void, $SoftReferenceGrammarPool$Entry*, $Grammar*, $ReferenceQueue*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.jaxp.validation.SoftReferenceGrammarPool$SoftGrammarReference", "com.sun.org.apache.xerces.internal.jaxp.validation.SoftReferenceGrammarPool", "SoftGrammarReference", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.jaxp.validation.SoftReferenceGrammarPool$SoftGrammarReference",
		"java.lang.ref.SoftReference",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/ref/SoftReference<Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.jaxp.validation.SoftReferenceGrammarPool"
	};
	$loadClass(SoftReferenceGrammarPool$SoftGrammarReference, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftReferenceGrammarPool$SoftGrammarReference);
	});
	return class$;
}

$Class* SoftReferenceGrammarPool$SoftGrammarReference::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com