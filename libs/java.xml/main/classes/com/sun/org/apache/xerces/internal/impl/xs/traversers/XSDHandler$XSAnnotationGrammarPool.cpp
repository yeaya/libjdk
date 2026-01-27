#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler$XSAnnotationGrammarPool.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar$Schema4Annotations.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSGrammarBucket.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/Grammar.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLSchemaDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XSGrammar.h>
#include <jcpp.h>

#undef INSTANCE
#undef URI_SCHEMAFORSCHEMA
#undef XML_SCHEMA

using $SchemaGrammarArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar>;
using $GrammarArray = $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>;
using $SchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar;
using $SchemaGrammar$Schema4Annotations = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar$Schema4Annotations;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $XSGrammarBucket = ::com::sun::org::apache::xerces::internal::impl::xs::XSGrammarBucket;
using $Grammar = ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar;
using $XMLGrammarDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription;
using $XMLSchemaDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLSchemaDescription;
using $XSGrammar = ::com::sun::org::apache::xerces::internal::xni::grammars::XSGrammar;
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
						namespace impl {
							namespace xs {
								namespace traversers {

$FieldInfo _XSDHandler$XSAnnotationGrammarPool_FieldInfo_[] = {
	{"fGrammarBucket", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSGrammarBucket;", nullptr, $PRIVATE, $field(XSDHandler$XSAnnotationGrammarPool, fGrammarBucket)},
	{"fInitialGrammarSet", "[Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PRIVATE, $field(XSDHandler$XSAnnotationGrammarPool, fInitialGrammarSet)},
	{}
};

$MethodInfo _XSDHandler$XSAnnotationGrammarPool_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(XSDHandler$XSAnnotationGrammarPool, init$, void)},
	{"cacheGrammars", "(Ljava/lang/String;[Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;)V", nullptr, $PUBLIC, $virtualMethod(XSDHandler$XSAnnotationGrammarPool, cacheGrammars, void, $String*, $GrammarArray*)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(XSDHandler$XSAnnotationGrammarPool, clear, void)},
	{"lockPool", "()V", nullptr, $PUBLIC, $virtualMethod(XSDHandler$XSAnnotationGrammarPool, lockPool, void)},
	{"refreshGrammars", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSGrammarBucket;)V", nullptr, $PUBLIC, $virtualMethod(XSDHandler$XSAnnotationGrammarPool, refreshGrammars, void, $XSGrammarBucket*)},
	{"retrieveGrammar", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;)Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC, $virtualMethod(XSDHandler$XSAnnotationGrammarPool, retrieveGrammar, $Grammar*, $XMLGrammarDescription*)},
	{"retrieveInitialGrammarSet", "(Ljava/lang/String;)[Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC, $virtualMethod(XSDHandler$XSAnnotationGrammarPool, retrieveInitialGrammarSet, $GrammarArray*, $String*)},
	{"unlockPool", "()V", nullptr, $PUBLIC, $virtualMethod(XSDHandler$XSAnnotationGrammarPool, unlockPool, void)},
	{}
};

$InnerClassInfo _XSDHandler$XSAnnotationGrammarPool_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDHandler$XSAnnotationGrammarPool", "com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDHandler", "XSAnnotationGrammarPool", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _XSDHandler$XSAnnotationGrammarPool_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDHandler$XSAnnotationGrammarPool",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.grammars.XMLGrammarPool",
	_XSDHandler$XSAnnotationGrammarPool_FieldInfo_,
	_XSDHandler$XSAnnotationGrammarPool_MethodInfo_,
	nullptr,
	nullptr,
	_XSDHandler$XSAnnotationGrammarPool_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDHandler"
};

$Object* allocate$XSDHandler$XSAnnotationGrammarPool($Class* clazz) {
	return $of($alloc(XSDHandler$XSAnnotationGrammarPool));
}

void XSDHandler$XSAnnotationGrammarPool::init$() {
}

$GrammarArray* XSDHandler$XSAnnotationGrammarPool::retrieveInitialGrammarSet($String* grammarType) {
	$useLocalCurrentObjectStackCache();
	$init($XMLGrammarDescription);
	if (grammarType == $XMLGrammarDescription::XML_SCHEMA) {
		if (this->fInitialGrammarSet == nullptr) {
			if (this->fGrammarBucket == nullptr) {
				$init($SchemaGrammar$Schema4Annotations);
				$set(this, fInitialGrammarSet, $new($GrammarArray, {static_cast<$Grammar*>($SchemaGrammar$Schema4Annotations::INSTANCE)}));
			} else {
				$var($SchemaGrammarArray, schemaGrammars, $nc(this->fGrammarBucket)->getGrammars());
				for (int32_t i = 0; i < $nc(schemaGrammars)->length; ++i) {
					$init($SchemaSymbols);
					if ($nc($SchemaSymbols::URI_SCHEMAFORSCHEMA)->equals($($nc(schemaGrammars->get(i))->getTargetNamespace()))) {
						$set(this, fInitialGrammarSet, $fcast($GrammarArray, schemaGrammars));
						return this->fInitialGrammarSet;
					}
				}
				$var($GrammarArray, grammars, $new($GrammarArray, $nc(schemaGrammars)->length + 1));
				$System::arraycopy(schemaGrammars, 0, grammars, 0, schemaGrammars->length);
				$init($SchemaGrammar$Schema4Annotations);
				grammars->set(grammars->length - 1, $SchemaGrammar$Schema4Annotations::INSTANCE);
				$set(this, fInitialGrammarSet, grammars);
			}
		}
		return this->fInitialGrammarSet;
	}
	return $new($GrammarArray, 0);
}

void XSDHandler$XSAnnotationGrammarPool::cacheGrammars($String* grammarType, $GrammarArray* grammars) {
}

$Grammar* XSDHandler$XSAnnotationGrammarPool::retrieveGrammar($XMLGrammarDescription* desc) {
	$useLocalCurrentObjectStackCache();
	$init($XMLGrammarDescription);
	if ($nc(desc)->getGrammarType() == $XMLGrammarDescription::XML_SCHEMA) {
		$var($String, tns, $nc(($cast($XMLSchemaDescription, desc)))->getTargetNamespace());
		if (this->fGrammarBucket != nullptr) {
			$var($Grammar, grammar, $nc(this->fGrammarBucket)->getGrammar(tns));
			if (grammar != nullptr) {
				return grammar;
			}
		}
		$init($SchemaSymbols);
		if ($nc($SchemaSymbols::URI_SCHEMAFORSCHEMA)->equals(tns)) {
			$init($SchemaGrammar$Schema4Annotations);
			return $SchemaGrammar$Schema4Annotations::INSTANCE;
		}
	}
	return nullptr;
}

void XSDHandler$XSAnnotationGrammarPool::refreshGrammars($XSGrammarBucket* gBucket) {
	$set(this, fGrammarBucket, gBucket);
	$set(this, fInitialGrammarSet, nullptr);
}

void XSDHandler$XSAnnotationGrammarPool::lockPool() {
}

void XSDHandler$XSAnnotationGrammarPool::unlockPool() {
}

void XSDHandler$XSAnnotationGrammarPool::clear() {
}

XSDHandler$XSAnnotationGrammarPool::XSDHandler$XSAnnotationGrammarPool() {
}

$Class* XSDHandler$XSAnnotationGrammarPool::load$($String* name, bool initialize) {
	$loadClass(XSDHandler$XSAnnotationGrammarPool, name, initialize, &_XSDHandler$XSAnnotationGrammarPool_ClassInfo_, allocate$XSDHandler$XSAnnotationGrammarPool);
	return class$;
}

$Class* XSDHandler$XSAnnotationGrammarPool::class$ = nullptr;

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com