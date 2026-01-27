#include <com/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler$OneSubGroup.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSElementDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSElementDeclHelper.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xs/XSComplexTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef COMPLEX_TYPE
#undef DERIVATION_RESTRICTION
#undef DERIVATION_SUBSTITUTION
#undef EMPTY_GROUP
#undef EMPTY_VECTOR
#undef SCOPE_GLOBAL
#undef SIMPLE_TYPE
#undef VARIETY_UNION

using $SubstitutionGroupHandler$OneSubGroupArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler$OneSubGroup>;
using $XSElementDeclArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl>;
using $SchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar;
using $SubstitutionGroupHandler$OneSubGroup = ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler$OneSubGroup;
using $XSComplexTypeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl;
using $XSElementDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl;
using $XSElementDeclHelper = ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDeclHelper;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XSComplexTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSComplexTypeDefinition;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSSimpleTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

$FieldInfo _SubstitutionGroupHandler_FieldInfo_[] = {
	{"EMPTY_GROUP", "[Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SubstitutionGroupHandler, EMPTY_GROUP)},
	{"fXSElementDeclHelper", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDeclHelper;", nullptr, $PRIVATE | $FINAL, $field(SubstitutionGroupHandler, fXSElementDeclHelper)},
	{"fSubGroupsB", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;Ljava/lang/Object;>;", 0, $field(SubstitutionGroupHandler, fSubGroupsB)},
	{"EMPTY_VECTOR", "[Lcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler$OneSubGroup;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SubstitutionGroupHandler, EMPTY_VECTOR)},
	{"fSubGroups", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;[Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;>;", 0, $field(SubstitutionGroupHandler, fSubGroups)},
	{}
};

$MethodInfo _SubstitutionGroupHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDeclHelper;)V", nullptr, $PUBLIC, $method(SubstitutionGroupHandler, init$, void, $XSElementDeclHelper*)},
	{"addSubstitutionGroup", "([Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;)V", nullptr, $PUBLIC, $virtualMethod(SubstitutionGroupHandler, addSubstitutionGroup, void, $XSElementDeclArray*)},
	{"getDBMethods", "(Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;Lcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler$OneSubGroup;)Z", nullptr, $PRIVATE, $method(SubstitutionGroupHandler, getDBMethods, bool, $XSTypeDefinition*, $XSTypeDefinition*, $SubstitutionGroupHandler$OneSubGroup*)},
	{"getMatchingElemDecl", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;", nullptr, $PUBLIC, $virtualMethod(SubstitutionGroupHandler, getMatchingElemDecl, $XSElementDecl*, $QName*, $XSElementDecl*)},
	{"getSubGroupB", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;Lcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler$OneSubGroup;)[Lcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler$OneSubGroup;", nullptr, $PRIVATE, $method(SubstitutionGroupHandler, getSubGroupB, $SubstitutionGroupHandler$OneSubGroupArray*, $XSElementDecl*, $SubstitutionGroupHandler$OneSubGroup*)},
	{"getSubstitutionGroup", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;)[Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;", nullptr, $PUBLIC, $virtualMethod(SubstitutionGroupHandler, getSubstitutionGroup, $XSElementDeclArray*, $XSElementDecl*)},
	{"inSubstitutionGroup", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;)Z", nullptr, $PUBLIC, $virtualMethod(SubstitutionGroupHandler, inSubstitutionGroup, bool, $XSElementDecl*, $XSElementDecl*)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(SubstitutionGroupHandler, reset, void)},
	{"substitutionGroupOK", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;S)Z", nullptr, $PROTECTED, $virtualMethod(SubstitutionGroupHandler, substitutionGroupOK, bool, $XSElementDecl*, $XSElementDecl*, int16_t)},
	{"typeDerivationOK", "(Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;S)Z", nullptr, $PRIVATE, $method(SubstitutionGroupHandler, typeDerivationOK, bool, $XSTypeDefinition*, $XSTypeDefinition*, int16_t)},
	{}
};

$InnerClassInfo _SubstitutionGroupHandler_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.SubstitutionGroupHandler$OneSubGroup", "com.sun.org.apache.xerces.internal.impl.xs.SubstitutionGroupHandler", "OneSubGroup", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SubstitutionGroupHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.SubstitutionGroupHandler",
	"java.lang.Object",
	nullptr,
	_SubstitutionGroupHandler_FieldInfo_,
	_SubstitutionGroupHandler_MethodInfo_,
	nullptr,
	nullptr,
	_SubstitutionGroupHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.SubstitutionGroupHandler$OneSubGroup"
};

$Object* allocate$SubstitutionGroupHandler($Class* clazz) {
	return $of($alloc(SubstitutionGroupHandler));
}

$XSElementDeclArray* SubstitutionGroupHandler::EMPTY_GROUP = nullptr;
$SubstitutionGroupHandler$OneSubGroupArray* SubstitutionGroupHandler::EMPTY_VECTOR = nullptr;

void SubstitutionGroupHandler::init$($XSElementDeclHelper* elementDeclHelper) {
	$set(this, fSubGroupsB, $new($HashMap));
	$set(this, fSubGroups, $new($HashMap));
	$set(this, fXSElementDeclHelper, elementDeclHelper);
}

$XSElementDecl* SubstitutionGroupHandler::getMatchingElemDecl($QName* element, $XSElementDecl* exemplar) {
	bool var$0 = $Objects::equals($nc(element)->localpart, $nc(exemplar)->fName);
	if (var$0 && $Objects::equals($nc(element)->uri, $nc(exemplar)->fTargetNamespace)) {
		return exemplar;
	}
	if ($nc(exemplar)->fScope != $XSConstants::SCOPE_GLOBAL) {
		return nullptr;
	}
	if (((int32_t)($nc(exemplar)->fBlock & (uint32_t)(int32_t)$XSConstants::DERIVATION_SUBSTITUTION)) != 0) {
		return nullptr;
	}
	$var($XSElementDecl, eDecl, $nc(this->fXSElementDeclHelper)->getGlobalElementDecl(element));
	if (eDecl == nullptr) {
		return nullptr;
	}
	if (substitutionGroupOK(eDecl, exemplar, $nc(exemplar)->fBlock)) {
		return eDecl;
	}
	return nullptr;
}

bool SubstitutionGroupHandler::substitutionGroupOK($XSElementDecl* element, $XSElementDecl* exemplar, int16_t blockingConstraint) {
	if (element == exemplar) {
		return true;
	}
	if (((int32_t)(blockingConstraint & (uint32_t)(int32_t)$XSConstants::DERIVATION_SUBSTITUTION)) != 0) {
		return false;
	}
	$var($XSElementDecl, subGroup, $nc(element)->fSubGroup);
	while (subGroup != nullptr && subGroup != exemplar) {
		$assign(subGroup, subGroup->fSubGroup);
	}
	if (subGroup == nullptr) {
		return false;
	}
	return typeDerivationOK(element->fType, $nc(exemplar)->fType, blockingConstraint);
}

bool SubstitutionGroupHandler::typeDerivationOK($XSTypeDefinition* derived, $XSTypeDefinition* base, int16_t blockingConstraint) {
	$useLocalCurrentObjectStackCache();
	int16_t devMethod = (int16_t)0;
	int16_t blockConstraint = blockingConstraint;
	$var($XSTypeDefinition, type, derived);
	$init($SchemaGrammar);
	while (type != base && !$equals(type, $SchemaGrammar::fAnyType)) {
		if ($nc(type)->getTypeCategory() == $XSTypeDefinition::COMPLEX_TYPE) {
			devMethod |= $nc(($cast($XSComplexTypeDecl, type)))->fDerivedBy;
		} else {
			devMethod |= $XSConstants::DERIVATION_RESTRICTION;
		}
		$assign(type, $nc(type)->getBaseType());
		if (type == nullptr) {
			$assign(type, $SchemaGrammar::fAnyType);
		}
		if (type->getTypeCategory() == $XSTypeDefinition::COMPLEX_TYPE) {
			blockConstraint |= $nc(($cast($XSComplexTypeDecl, type)))->fBlock;
		}
	}
	if (type != base) {
		if ($nc(base)->getTypeCategory() == $XSTypeDefinition::SIMPLE_TYPE) {
			$var($XSSimpleTypeDefinition, st, $cast($XSSimpleTypeDefinition, base));
			if (st->getVariety() == $XSSimpleTypeDefinition::VARIETY_UNION) {
				$var($XSObjectList, memberTypes, st->getMemberTypes());
				int32_t length = $nc(memberTypes)->getLength();
				for (int32_t i = 0; i < length; ++i) {
					if (typeDerivationOK(derived, $cast($XSTypeDefinition, $(memberTypes->item(i))), blockingConstraint)) {
						return true;
					}
				}
			}
		}
		return false;
	}
	if (((int32_t)(devMethod & (uint32_t)(int32_t)blockConstraint)) != 0) {
		return false;
	}
	return true;
}

bool SubstitutionGroupHandler::inSubstitutionGroup($XSElementDecl* element, $XSElementDecl* exemplar) {
	return substitutionGroupOK(element, exemplar, $nc(exemplar)->fBlock);
}

void SubstitutionGroupHandler::reset() {
	$nc(this->fSubGroupsB)->clear();
	$nc(this->fSubGroups)->clear();
}

void SubstitutionGroupHandler::addSubstitutionGroup($XSElementDeclArray* elements) {
	$useLocalCurrentObjectStackCache();
	$var($XSElementDecl, subHead, nullptr);
	$var($XSElementDecl, element, nullptr);
	$var($List, subGroup, nullptr);
	for (int32_t i = $nc(elements)->length - 1; i >= 0; --i) {
		$assign(element, elements->get(i));
		$assign(subHead, $nc(element)->fSubGroup);
		$assign(subGroup, $cast($List, $nc(this->fSubGroupsB)->get(subHead)));
		if (subGroup == nullptr) {
			$assign(subGroup, $new($ArrayList));
			$nc(this->fSubGroupsB)->put(subHead, subGroup);
		}
		$nc(subGroup)->add(element);
	}
}

$XSElementDeclArray* SubstitutionGroupHandler::getSubstitutionGroup($XSElementDecl* element) {
	$useLocalCurrentObjectStackCache();
	$var($XSElementDeclArray, subGroup, $cast($XSElementDeclArray, $nc(this->fSubGroups)->get(element)));
	if (subGroup != nullptr) {
		return subGroup;
	}
	if (((int32_t)($nc(element)->fBlock & (uint32_t)(int32_t)$XSConstants::DERIVATION_SUBSTITUTION)) != 0) {
		$nc(this->fSubGroups)->put(element, SubstitutionGroupHandler::EMPTY_GROUP);
		return SubstitutionGroupHandler::EMPTY_GROUP;
	}
	$var($SubstitutionGroupHandler$OneSubGroupArray, groupB, getSubGroupB(element, $$new($SubstitutionGroupHandler$OneSubGroup)));
	int32_t len = $nc(groupB)->length;
	int32_t rlen = 0;
	$var($XSElementDeclArray, ret, $new($XSElementDeclArray, len));
	for (int32_t i = 0; i < len; ++i) {
		if (((int32_t)($nc(element)->fBlock & (uint32_t)(int32_t)$nc(groupB->get(i))->dMethod)) == 0) {
			ret->set(rlen++, $nc(groupB->get(i))->sub);
		}
	}
	if (rlen < len) {
		$var($XSElementDeclArray, ret1, $new($XSElementDeclArray, rlen));
		$System::arraycopy(ret, 0, ret1, 0, rlen);
		$assign(ret, ret1);
	}
	$nc(this->fSubGroups)->put(element, ret);
	return ret;
}

$SubstitutionGroupHandler$OneSubGroupArray* SubstitutionGroupHandler::getSubGroupB($XSElementDecl* element, $SubstitutionGroupHandler$OneSubGroup* methods) {
	$useLocalCurrentObjectStackCache();
	$var($Object, subGroup, $nc(this->fSubGroupsB)->get(element));
	if (subGroup == nullptr) {
		$nc(this->fSubGroupsB)->put(element, SubstitutionGroupHandler::EMPTY_VECTOR);
		return SubstitutionGroupHandler::EMPTY_VECTOR;
	}
	if ($instanceOf($SubstitutionGroupHandler$OneSubGroupArray, subGroup)) {
		return $cast($SubstitutionGroupHandler$OneSubGroupArray, subGroup);
	}
	$var($List, group, $cast($ArrayList, subGroup));
	$var($List, newGroup, $new($ArrayList));
	$var($SubstitutionGroupHandler$OneSubGroupArray, group1, nullptr);
	int16_t dMethod = 0;
	int16_t bMethod = 0;
	int16_t dSubMethod = 0;
	int16_t bSubMethod = 0;
	{
		int32_t i = $nc(group)->size() - 1;
		int32_t j = 0;
		for (; i >= 0; --i) {
			$var($XSElementDecl, sub, $cast($XSElementDecl, group->get(i)));
			if (!getDBMethods($nc(sub)->fType, $nc(element)->fType, methods)) {
				continue;
			}
			dMethod = $nc(methods)->dMethod;
			bMethod = methods->bMethod;
			newGroup->add($$new($SubstitutionGroupHandler$OneSubGroup, sub, methods->dMethod, methods->bMethod));
			$assign(group1, getSubGroupB(sub, methods));
			for (j = $nc(group1)->length - 1; j >= 0; --j) {
				dSubMethod = (int16_t)(dMethod | $nc(group1->get(j))->dMethod);
				bSubMethod = (int16_t)(bMethod | $nc(group1->get(j))->bMethod);
				if (((int32_t)(dSubMethod & (uint32_t)(int32_t)bSubMethod)) != 0) {
					continue;
				}
				newGroup->add($$new($SubstitutionGroupHandler$OneSubGroup, $nc(group1->get(j))->sub, dSubMethod, bSubMethod));
			}
		}
	}
	$var($SubstitutionGroupHandler$OneSubGroupArray, ret, $new($SubstitutionGroupHandler$OneSubGroupArray, newGroup->size()));
	for (int32_t i = newGroup->size() - 1; i >= 0; --i) {
		ret->set(i, $cast($SubstitutionGroupHandler$OneSubGroup, $(newGroup->get(i))));
	}
	$nc(this->fSubGroupsB)->put(element, ret);
	return ret;
}

bool SubstitutionGroupHandler::getDBMethods($XSTypeDefinition* typed$renamed, $XSTypeDefinition* typeb, $SubstitutionGroupHandler$OneSubGroup* methods) {
	$var($XSTypeDefinition, typed, typed$renamed);
	int16_t dMethod = (int16_t)0;
	int16_t bMethod = (int16_t)0;
	$init($SchemaGrammar);
	while (typed != typeb && !$equals(typed, $SchemaGrammar::fAnyType)) {
		if ($nc(typed)->getTypeCategory() == $XSTypeDefinition::COMPLEX_TYPE) {
			dMethod |= $nc(($cast($XSComplexTypeDecl, typed)))->fDerivedBy;
		} else {
			dMethod |= $XSConstants::DERIVATION_RESTRICTION;
		}
		$assign(typed, $nc(typed)->getBaseType());
		if (typed == nullptr) {
			$assign(typed, $SchemaGrammar::fAnyType);
		}
		if (typed->getTypeCategory() == $XSTypeDefinition::COMPLEX_TYPE) {
			bMethod |= $nc(($cast($XSComplexTypeDecl, typed)))->fBlock;
		}
	}
	if (typed != typeb || ((int32_t)(dMethod & (uint32_t)(int32_t)bMethod)) != 0) {
		return false;
	}
	$nc(methods)->dMethod = dMethod;
	methods->bMethod = bMethod;
	return true;
}

void clinit$SubstitutionGroupHandler($Class* class$) {
	$assignStatic(SubstitutionGroupHandler::EMPTY_GROUP, $new($XSElementDeclArray, 0));
	$assignStatic(SubstitutionGroupHandler::EMPTY_VECTOR, $new($SubstitutionGroupHandler$OneSubGroupArray, 0));
}

SubstitutionGroupHandler::SubstitutionGroupHandler() {
}

$Class* SubstitutionGroupHandler::load$($String* name, bool initialize) {
	$loadClass(SubstitutionGroupHandler, name, initialize, &_SubstitutionGroupHandler_ClassInfo_, clinit$SubstitutionGroupHandler, allocate$SubstitutionGroupHandler);
	return class$;
}

$Class* SubstitutionGroupHandler::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com