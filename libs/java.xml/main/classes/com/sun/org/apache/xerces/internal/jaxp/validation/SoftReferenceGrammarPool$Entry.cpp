#include <com/sun/org/apache/xerces/internal/jaxp/validation/SoftReferenceGrammarPool$Entry.h>

#include <com/sun/org/apache/xerces/internal/jaxp/validation/SoftReferenceGrammarPool$SoftGrammarReference.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/SoftReferenceGrammarPool.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/Grammar.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <jcpp.h>

using $SoftReferenceGrammarPool$SoftGrammarReference = ::com::sun::org::apache::xerces::internal::jaxp::validation::SoftReferenceGrammarPool$SoftGrammarReference;
using $Grammar = ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar;
using $XMLGrammarDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

$FieldInfo _SoftReferenceGrammarPool$Entry_FieldInfo_[] = {
	{"hash", "I", nullptr, $PUBLIC, $field(SoftReferenceGrammarPool$Entry, hash)},
	{"bucket", "I", nullptr, $PUBLIC, $field(SoftReferenceGrammarPool$Entry, bucket)},
	{"prev", "Lcom/sun/org/apache/xerces/internal/jaxp/validation/SoftReferenceGrammarPool$Entry;", nullptr, $PUBLIC, $field(SoftReferenceGrammarPool$Entry, prev)},
	{"next", "Lcom/sun/org/apache/xerces/internal/jaxp/validation/SoftReferenceGrammarPool$Entry;", nullptr, $PUBLIC, $field(SoftReferenceGrammarPool$Entry, next)},
	{"desc", "Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;", nullptr, $PUBLIC, $field(SoftReferenceGrammarPool$Entry, desc)},
	{"grammar", "Lcom/sun/org/apache/xerces/internal/jaxp/validation/SoftReferenceGrammarPool$SoftGrammarReference;", nullptr, $PUBLIC, $field(SoftReferenceGrammarPool$Entry, grammar)},
	{}
};

$MethodInfo _SoftReferenceGrammarPool$Entry_MethodInfo_[] = {
	{"<init>", "(IILcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;Lcom/sun/org/apache/xerces/internal/jaxp/validation/SoftReferenceGrammarPool$Entry;Ljava/lang/ref/ReferenceQueue;)V", "(IILcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;Lcom/sun/org/apache/xerces/internal/jaxp/validation/SoftReferenceGrammarPool$Entry;Ljava/lang/ref/ReferenceQueue<Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;>;)V", $PROTECTED, $method(SoftReferenceGrammarPool$Entry, init$, void, int32_t, int32_t, $XMLGrammarDescription*, $Grammar*, SoftReferenceGrammarPool$Entry*, $ReferenceQueue*)},
	{"clear", "()V", nullptr, $PROTECTED, $method(SoftReferenceGrammarPool$Entry, clear, void)},
	{}
};

$InnerClassInfo _SoftReferenceGrammarPool$Entry_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.jaxp.validation.SoftReferenceGrammarPool$Entry", "com.sun.org.apache.xerces.internal.jaxp.validation.SoftReferenceGrammarPool", "Entry", $STATIC | $FINAL},
	{}
};

$ClassInfo _SoftReferenceGrammarPool$Entry_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.validation.SoftReferenceGrammarPool$Entry",
	"java.lang.Object",
	nullptr,
	_SoftReferenceGrammarPool$Entry_FieldInfo_,
	_SoftReferenceGrammarPool$Entry_MethodInfo_,
	nullptr,
	nullptr,
	_SoftReferenceGrammarPool$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.jaxp.validation.SoftReferenceGrammarPool"
};

$Object* allocate$SoftReferenceGrammarPool$Entry($Class* clazz) {
	return $of($alloc(SoftReferenceGrammarPool$Entry));
}

void SoftReferenceGrammarPool$Entry::init$(int32_t hash, int32_t bucket, $XMLGrammarDescription* desc, $Grammar* grammar, SoftReferenceGrammarPool$Entry* next, $ReferenceQueue* queue) {
	this->hash = hash;
	this->bucket = bucket;
	$set(this, prev, nullptr);
	$set(this, next, next);
	if (next != nullptr) {
		$set(next, prev, this);
	}
	$set(this, desc, desc);
	$set(this, grammar, $new($SoftReferenceGrammarPool$SoftGrammarReference, this, grammar, queue));
}

void SoftReferenceGrammarPool$Entry::clear() {
	$set(this, desc, nullptr);
	$set(this, grammar, nullptr);
	if (this->next != nullptr) {
		$nc(this->next)->clear();
		$set(this, next, nullptr);
	}
}

SoftReferenceGrammarPool$Entry::SoftReferenceGrammarPool$Entry() {
}

$Class* SoftReferenceGrammarPool$Entry::load$($String* name, bool initialize) {
	$loadClass(SoftReferenceGrammarPool$Entry, name, initialize, &_SoftReferenceGrammarPool$Entry_ClassInfo_, allocate$SoftReferenceGrammarPool$Entry);
	return class$;
}

$Class* SoftReferenceGrammarPool$Entry::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com