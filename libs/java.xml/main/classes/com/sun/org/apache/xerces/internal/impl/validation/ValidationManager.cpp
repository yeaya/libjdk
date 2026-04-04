#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationManager.h>
#include <com/sun/org/apache/xerces/internal/impl/validation/EntityState.h>
#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationState.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

using $EntityState = ::com::sun::org::apache::xerces::internal::impl::validation::EntityState;
using $ValidationState = ::com::sun::org::apache::xerces::internal::impl::validation::ValidationState;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace validation {

void ValidationManager::init$() {
	$set(this, fVSs, $new($ArrayList));
	this->fGrammarFound = false;
	this->fCachedDTD = false;
}

void ValidationManager::addValidationState($ValidationState* vs) {
	this->fVSs->add(vs);
}

void ValidationManager::setEntityState($EntityState* state) {
	$useLocalObjectStack();
	for (int32_t i = this->fVSs->size() - 1; i >= 0; --i) {
		$$sure($ValidationState, this->fVSs->get(i))->setEntityState(state);
	}
}

void ValidationManager::setGrammarFound(bool grammar) {
	this->fGrammarFound = grammar;
}

bool ValidationManager::isGrammarFound() {
	return this->fGrammarFound;
}

void ValidationManager::setCachedDTD(bool cachedDTD) {
	this->fCachedDTD = cachedDTD;
}

bool ValidationManager::isCachedDTD() {
	return this->fCachedDTD;
}

void ValidationManager::reset() {
	this->fVSs->clear();
	this->fGrammarFound = false;
	this->fCachedDTD = false;
}

ValidationManager::ValidationManager() {
}

$Class* ValidationManager::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fVSs", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xerces/internal/impl/validation/ValidationState;>;", $PROTECTED | $FINAL, $field(ValidationManager, fVSs)},
		{"fGrammarFound", "Z", nullptr, $PROTECTED, $field(ValidationManager, fGrammarFound)},
		{"fCachedDTD", "Z", nullptr, $PROTECTED, $field(ValidationManager, fCachedDTD)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ValidationManager, init$, void)},
		{"addValidationState", "(Lcom/sun/org/apache/xerces/internal/impl/validation/ValidationState;)V", nullptr, $PUBLIC | $FINAL, $method(ValidationManager, addValidationState, void, $ValidationState*)},
		{"isCachedDTD", "()Z", nullptr, $PUBLIC | $FINAL, $method(ValidationManager, isCachedDTD, bool)},
		{"isGrammarFound", "()Z", nullptr, $PUBLIC | $FINAL, $method(ValidationManager, isGrammarFound, bool)},
		{"reset", "()V", nullptr, $PUBLIC | $FINAL, $method(ValidationManager, reset, void)},
		{"setCachedDTD", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(ValidationManager, setCachedDTD, void, bool)},
		{"setEntityState", "(Lcom/sun/org/apache/xerces/internal/impl/validation/EntityState;)V", nullptr, $PUBLIC | $FINAL, $method(ValidationManager, setEntityState, void, $EntityState*)},
		{"setGrammarFound", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(ValidationManager, setGrammarFound, void, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.validation.ValidationManager",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ValidationManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ValidationManager);
	});
	return class$;
}

$Class* ValidationManager::class$ = nullptr;

							} // validation
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com