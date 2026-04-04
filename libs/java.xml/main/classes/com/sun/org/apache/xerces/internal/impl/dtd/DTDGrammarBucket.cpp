#include <com/sun/org/apache/xerces/internal/impl/dtd/DTDGrammarBucket.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $DTDGrammar = ::com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammar;
using $XMLDTDDescription = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDDescription;
using $XMLGrammarDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {

void DTDGrammarBucket::init$() {
	$set(this, fGrammars, $new($HashMap));
}

void DTDGrammarBucket::putGrammar($DTDGrammar* grammar) {
	$var($XMLDTDDescription, desc, $cast($XMLDTDDescription, $nc(grammar)->getGrammarDescription()));
	$nc(this->fGrammars)->put(desc, grammar);
}

$DTDGrammar* DTDGrammarBucket::getGrammar($XMLGrammarDescription* desc) {
	return $cast($DTDGrammar, $nc(this->fGrammars)->get($cast($XMLDTDDescription, desc)));
}

void DTDGrammarBucket::clear() {
	$nc(this->fGrammars)->clear();
	$set(this, fActiveGrammar, nullptr);
	this->fIsStandalone = false;
}

void DTDGrammarBucket::setStandalone(bool standalone) {
	this->fIsStandalone = standalone;
}

bool DTDGrammarBucket::getStandalone() {
	return this->fIsStandalone;
}

void DTDGrammarBucket::setActiveGrammar($DTDGrammar* grammar) {
	$set(this, fActiveGrammar, grammar);
}

$DTDGrammar* DTDGrammarBucket::getActiveGrammar() {
	return this->fActiveGrammar;
}

DTDGrammarBucket::DTDGrammarBucket() {
}

$Class* DTDGrammarBucket::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fGrammars", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLDTDDescription;Lcom/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar;>;", $PROTECTED, $field(DTDGrammarBucket, fGrammars)},
		{"fActiveGrammar", "Lcom/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar;", nullptr, $PROTECTED, $field(DTDGrammarBucket, fActiveGrammar)},
		{"fIsStandalone", "Z", nullptr, $PROTECTED, $field(DTDGrammarBucket, fIsStandalone)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DTDGrammarBucket, init$, void)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(DTDGrammarBucket, clear, void)},
		{"getActiveGrammar", "()Lcom/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar;", nullptr, 0, $virtualMethod(DTDGrammarBucket, getActiveGrammar, $DTDGrammar*)},
		{"getGrammar", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;)Lcom/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar;", nullptr, $PUBLIC, $virtualMethod(DTDGrammarBucket, getGrammar, $DTDGrammar*, $XMLGrammarDescription*)},
		{"getStandalone", "()Z", nullptr, 0, $virtualMethod(DTDGrammarBucket, getStandalone, bool)},
		{"putGrammar", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammarBucket, putGrammar, void, $DTDGrammar*)},
		{"setActiveGrammar", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar;)V", nullptr, 0, $virtualMethod(DTDGrammarBucket, setActiveGrammar, void, $DTDGrammar*)},
		{"setStandalone", "(Z)V", nullptr, 0, $virtualMethod(DTDGrammarBucket, setStandalone, void, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.dtd.DTDGrammarBucket",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DTDGrammarBucket, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DTDGrammarBucket);
	});
	return class$;
}

$Class* DTDGrammarBucket::class$ = nullptr;

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com