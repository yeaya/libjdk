#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationState.h>

#include <com/sun/org/apache/xerces/internal/impl/validation/EntityState.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $EntityState = ::com::sun::org::apache::xerces::internal::impl::validation::EntityState;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace validation {

$FieldInfo _ValidationState_FieldInfo_[] = {
	{"fExtraChecking", "Z", nullptr, $PRIVATE, $field(ValidationState, fExtraChecking)},
	{"fFacetChecking", "Z", nullptr, $PRIVATE, $field(ValidationState, fFacetChecking)},
	{"fNormalize", "Z", nullptr, $PRIVATE, $field(ValidationState, fNormalize)},
	{"fNamespaces", "Z", nullptr, $PRIVATE, $field(ValidationState, fNamespaces)},
	{"fEntityState", "Lcom/sun/org/apache/xerces/internal/impl/validation/EntityState;", nullptr, $PRIVATE, $field(ValidationState, fEntityState)},
	{"fNamespaceContext", "Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;", nullptr, $PRIVATE, $field(ValidationState, fNamespaceContext)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PRIVATE, $field(ValidationState, fSymbolTable)},
	{"fLocale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(ValidationState, fLocale)},
	{"fIds", "Ljava/util/HashSet;", "Ljava/util/HashSet<Ljava/lang/String;>;", $PRIVATE, $field(ValidationState, fIds)},
	{"fIdRefList", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(ValidationState, fIdRefList)},
	{}
};

$MethodInfo _ValidationState_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ValidationState, init$, void)},
	{"addId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ValidationState, addId, void, $String*)},
	{"addIdRef", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ValidationState, addIdRef, void, $String*)},
	{"checkIDRefID", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(ValidationState, checkIDRefID, $Iterator*)},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(ValidationState, getLocale, $Locale*)},
	{"getSymbol", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ValidationState, getSymbol, $String*, $String*)},
	{"getURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ValidationState, getURI, $String*, $String*)},
	{"isEntityDeclared", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(ValidationState, isEntityDeclared, bool, $String*)},
	{"isEntityUnparsed", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(ValidationState, isEntityUnparsed, bool, $String*)},
	{"isIdDeclared", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(ValidationState, isIdDeclared, bool, $String*)},
	{"needExtraChecking", "()Z", nullptr, $PUBLIC, $virtualMethod(ValidationState, needExtraChecking, bool)},
	{"needFacetChecking", "()Z", nullptr, $PUBLIC, $virtualMethod(ValidationState, needFacetChecking, bool)},
	{"needToNormalize", "()Z", nullptr, $PUBLIC, $virtualMethod(ValidationState, needToNormalize, bool)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(ValidationState, reset, void)},
	{"resetIDTables", "()V", nullptr, $PUBLIC, $virtualMethod(ValidationState, resetIDTables, void)},
	{"setEntityState", "(Lcom/sun/org/apache/xerces/internal/impl/validation/EntityState;)V", nullptr, $PUBLIC, $virtualMethod(ValidationState, setEntityState, void, $EntityState*)},
	{"setExtraChecking", "(Z)V", nullptr, $PUBLIC, $virtualMethod(ValidationState, setExtraChecking, void, bool)},
	{"setFacetChecking", "(Z)V", nullptr, $PUBLIC, $virtualMethod(ValidationState, setFacetChecking, void, bool)},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $virtualMethod(ValidationState, setLocale, void, $Locale*)},
	{"setNamespaceSupport", "(Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;)V", nullptr, $PUBLIC, $virtualMethod(ValidationState, setNamespaceSupport, void, $NamespaceContext*)},
	{"setNormalizationRequired", "(Z)V", nullptr, $PUBLIC, $virtualMethod(ValidationState, setNormalizationRequired, void, bool)},
	{"setSymbolTable", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $virtualMethod(ValidationState, setSymbolTable, void, $SymbolTable*)},
	{"setUsingNamespaces", "(Z)V", nullptr, $PUBLIC, $virtualMethod(ValidationState, setUsingNamespaces, void, bool)},
	{"useNamespaces", "()Z", nullptr, $PUBLIC, $virtualMethod(ValidationState, useNamespaces, bool)},
	{}
};

$ClassInfo _ValidationState_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.validation.ValidationState",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.impl.dv.ValidationContext",
	_ValidationState_FieldInfo_,
	_ValidationState_MethodInfo_
};

$Object* allocate$ValidationState($Class* clazz) {
	return $of($alloc(ValidationState));
}

void ValidationState::init$() {
	this->fExtraChecking = true;
	this->fFacetChecking = true;
	this->fNormalize = true;
	this->fNamespaces = true;
	$set(this, fEntityState, nullptr);
	$set(this, fNamespaceContext, nullptr);
	$set(this, fSymbolTable, nullptr);
	$set(this, fLocale, nullptr);
}

void ValidationState::setExtraChecking(bool newValue) {
	this->fExtraChecking = newValue;
}

void ValidationState::setFacetChecking(bool newValue) {
	this->fFacetChecking = newValue;
}

void ValidationState::setNormalizationRequired(bool newValue) {
	this->fNormalize = newValue;
}

void ValidationState::setUsingNamespaces(bool newValue) {
	this->fNamespaces = newValue;
}

void ValidationState::setEntityState($EntityState* state) {
	$set(this, fEntityState, state);
}

void ValidationState::setNamespaceSupport($NamespaceContext* namespace$) {
	$set(this, fNamespaceContext, namespace$);
}

void ValidationState::setSymbolTable($SymbolTable* sTable) {
	$set(this, fSymbolTable, sTable);
}

$Iterator* ValidationState::checkIDRefID() {
	$useLocalCurrentObjectStackCache();
	$var($HashSet, missingIDs, nullptr);
	if (this->fIdRefList != nullptr) {
		$var($String, key, nullptr);
		for (int32_t i = 0; i < $nc(this->fIdRefList)->size(); ++i) {
			$assign(key, $cast($String, $nc(this->fIdRefList)->get(i)));
			if (this->fIds == nullptr || !$nc(this->fIds)->contains(key)) {
				if (missingIDs == nullptr) {
					$assign(missingIDs, $new($HashSet));
				}
				$nc(missingIDs)->add(key);
			}
		}
	}
	return (missingIDs != nullptr) ? $nc(missingIDs)->iterator() : ($Iterator*)nullptr;
}

void ValidationState::reset() {
	this->fExtraChecking = true;
	this->fFacetChecking = true;
	this->fNamespaces = true;
	$set(this, fIds, nullptr);
	$set(this, fIdRefList, nullptr);
	$set(this, fEntityState, nullptr);
	$set(this, fNamespaceContext, nullptr);
	$set(this, fSymbolTable, nullptr);
}

void ValidationState::resetIDTables() {
	$set(this, fIds, nullptr);
	$set(this, fIdRefList, nullptr);
}

bool ValidationState::needExtraChecking() {
	return this->fExtraChecking;
}

bool ValidationState::needFacetChecking() {
	return this->fFacetChecking;
}

bool ValidationState::needToNormalize() {
	return this->fNormalize;
}

bool ValidationState::useNamespaces() {
	return this->fNamespaces;
}

bool ValidationState::isEntityDeclared($String* name) {
	if (this->fEntityState != nullptr) {
		return $nc(this->fEntityState)->isEntityDeclared($(getSymbol(name)));
	}
	return false;
}

bool ValidationState::isEntityUnparsed($String* name) {
	if (this->fEntityState != nullptr) {
		return $nc(this->fEntityState)->isEntityUnparsed($(getSymbol(name)));
	}
	return false;
}

bool ValidationState::isIdDeclared($String* name) {
	return this->fIds != nullptr && $nc(this->fIds)->contains(name);
}

void ValidationState::addId($String* name) {
	if (this->fIds == nullptr) {
		$set(this, fIds, $new($HashSet));
	}
	$nc(this->fIds)->add(name);
}

void ValidationState::addIdRef($String* name) {
	if (this->fIdRefList == nullptr) {
		$set(this, fIdRefList, $new($ArrayList));
	}
	$nc(this->fIdRefList)->add(name);
}

$String* ValidationState::getSymbol($String* symbol) {
	if (this->fSymbolTable != nullptr) {
		return $nc(this->fSymbolTable)->addSymbol(symbol);
	}
	return $nc(symbol)->intern();
}

$String* ValidationState::getURI($String* prefix) {
	if (this->fNamespaceContext != nullptr) {
		return $nc(this->fNamespaceContext)->getURI(prefix);
	}
	return nullptr;
}

void ValidationState::setLocale($Locale* locale) {
	$set(this, fLocale, locale);
}

$Locale* ValidationState::getLocale() {
	return this->fLocale;
}

ValidationState::ValidationState() {
}

$Class* ValidationState::load$($String* name, bool initialize) {
	$loadClass(ValidationState, name, initialize, &_ValidationState_ClassInfo_, allocate$ValidationState);
	return class$;
}

$Class* ValidationState::class$ = nullptr;

							} // validation
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com