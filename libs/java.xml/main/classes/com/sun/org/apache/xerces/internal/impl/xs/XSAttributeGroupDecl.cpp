#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeUseImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSConstraints.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSWildcardDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAttributeUse.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSWildcard.h>
#include <java/lang/Math.h>
#include <jcpp.h>

#undef ATTRIBUTE_GROUP
#undef ATTVAL_OPTIONAL
#undef ATTVAL_PROHIBITED
#undef EMPTY_LIST
#undef INITIAL_SIZE
#undef USE_OPTIONAL
#undef USE_PROHIBITED
#undef USE_REQUIRED
#undef VC_FIXED
#undef VC_NONE

using $XSAttributeUseImplArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeUseImpl>;
using $XSObjectArray = $Array<::com::sun::org::apache::xerces::internal::xs::XSObject>;
using $ValidatedInfo = ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo;
using $XSSimpleType = ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $XSAttributeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl;
using $XSAttributeUseImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeUseImpl;
using $XSConstraints = ::com::sun::org::apache::xerces::internal::impl::xs::XSConstraints;
using $XSWildcardDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSWildcardDecl;
using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $XSAnnotation = ::com::sun::org::apache::xerces::internal::xs::XSAnnotation;
using $XSAttributeUse = ::com::sun::org::apache::xerces::internal::xs::XSAttributeUse;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSNamespaceItem = ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSSimpleTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
using $XSWildcard = ::com::sun::org::apache::xerces::internal::xs::XSWildcard;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

$FieldInfo _XSAttributeGroupDecl_FieldInfo_[] = {
	{"fName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XSAttributeGroupDecl, fName)},
	{"fTargetNamespace", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XSAttributeGroupDecl, fTargetNamespace)},
	{"fAttrUseNum", "I", nullptr, 0, $field(XSAttributeGroupDecl, fAttrUseNum)},
	{"INITIAL_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSAttributeGroupDecl, INITIAL_SIZE)},
	{"fAttributeUses", "[Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeUseImpl;", nullptr, 0, $field(XSAttributeGroupDecl, fAttributeUses)},
	{"fAttributeWC", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSWildcardDecl;", nullptr, $PUBLIC, $field(XSAttributeGroupDecl, fAttributeWC)},
	{"fIDAttrName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XSAttributeGroupDecl, fIDAttrName)},
	{"fAnnotations", "Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $field(XSAttributeGroupDecl, fAnnotations)},
	{"fAttrUses", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl;", nullptr, $PROTECTED, $field(XSAttributeGroupDecl, fAttrUses)},
	{"fNamespaceItem", "Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PRIVATE, $field(XSAttributeGroupDecl, fNamespaceItem)},
	{}
};

$MethodInfo _XSAttributeGroupDecl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XSAttributeGroupDecl, init$, void)},
	{"addAttributeUse", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeUseImpl;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSAttributeGroupDecl, addAttributeUse, $String*, $XSAttributeUseImpl*)},
	{"getAnnotation", "()Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC, $virtualMethod(XSAttributeGroupDecl, getAnnotation, $XSAnnotation*)},
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $virtualMethod(XSAttributeGroupDecl, getAnnotations, $XSObjectList*)},
	{"getAttributeUse", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSAttributeUse;", nullptr, $PUBLIC, $virtualMethod(XSAttributeGroupDecl, getAttributeUse, $XSAttributeUse*, $String*, $String*)},
	{"getAttributeUseNoProhibited", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSAttributeUse;", nullptr, $PUBLIC, $virtualMethod(XSAttributeGroupDecl, getAttributeUseNoProhibited, $XSAttributeUse*, $String*, $String*)},
	{"getAttributeUses", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $virtualMethod(XSAttributeGroupDecl, getAttributeUses, $XSObjectList*)},
	{"getAttributeWildcard", "()Lcom/sun/org/apache/xerces/internal/xs/XSWildcard;", nullptr, $PUBLIC, $virtualMethod(XSAttributeGroupDecl, getAttributeWildcard, $XSWildcard*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSAttributeGroupDecl, getName, $String*)},
	{"getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSAttributeGroupDecl, getNamespace, $String*)},
	{"getNamespaceItem", "()Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PUBLIC, $virtualMethod(XSAttributeGroupDecl, getNamespaceItem, $XSNamespaceItem*)},
	{"getType", "()S", nullptr, $PUBLIC, $virtualMethod(XSAttributeGroupDecl, getType, int16_t)},
	{"removeProhibitedAttrs", "()V", nullptr, $PUBLIC, $virtualMethod(XSAttributeGroupDecl, removeProhibitedAttrs, void)},
	{"replaceAttributeUse", "(Lcom/sun/org/apache/xerces/internal/xs/XSAttributeUse;Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeUseImpl;)V", nullptr, $PUBLIC, $virtualMethod(XSAttributeGroupDecl, replaceAttributeUse, void, $XSAttributeUse*, $XSAttributeUseImpl*)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(XSAttributeGroupDecl, reset, void)},
	{"resize", "([Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeUseImpl;I)[Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeUseImpl;", nullptr, $STATIC | $FINAL, $staticMethod(XSAttributeGroupDecl, resize, $XSAttributeUseImplArray*, $XSAttributeUseImplArray*, int32_t)},
	{"setNamespaceItem", "(Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;)V", nullptr, 0, $virtualMethod(XSAttributeGroupDecl, setNamespaceItem, void, $XSNamespaceItem*)},
	{"validRestrictionOf", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl;)[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XSAttributeGroupDecl, validRestrictionOf, $ObjectArray*, $String*, XSAttributeGroupDecl*)},
	{}
};

$ClassInfo _XSAttributeGroupDecl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XSAttributeGroupDecl",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xs.XSAttributeGroupDefinition",
	_XSAttributeGroupDecl_FieldInfo_,
	_XSAttributeGroupDecl_MethodInfo_
};

$Object* allocate$XSAttributeGroupDecl($Class* clazz) {
	return $of($alloc(XSAttributeGroupDecl));
}

void XSAttributeGroupDecl::init$() {
	$set(this, fName, nullptr);
	$set(this, fTargetNamespace, nullptr);
	this->fAttrUseNum = 0;
	$set(this, fAttributeUses, $new($XSAttributeUseImplArray, XSAttributeGroupDecl::INITIAL_SIZE));
	$set(this, fAttributeWC, nullptr);
	$set(this, fIDAttrName, nullptr);
	$set(this, fAttrUses, nullptr);
	$set(this, fNamespaceItem, nullptr);
}

$String* XSAttributeGroupDecl::addAttributeUse($XSAttributeUseImpl* attrUse) {
	if ($nc(attrUse)->fUse != $SchemaSymbols::USE_PROHIBITED) {
		if ($nc($nc(attrUse->fAttrDecl)->fType)->isIDType()) {
			if (this->fIDAttrName == nullptr) {
				$set(this, fIDAttrName, $nc(attrUse->fAttrDecl)->fName);
			} else {
				return this->fIDAttrName;
			}
		}
	}
	if (this->fAttrUseNum == $nc(this->fAttributeUses)->length) {
		$set(this, fAttributeUses, resize(this->fAttributeUses, this->fAttrUseNum * 2));
	}
	$nc(this->fAttributeUses)->set(this->fAttrUseNum++, attrUse);
	return nullptr;
}

void XSAttributeGroupDecl::replaceAttributeUse($XSAttributeUse* oldUse, $XSAttributeUseImpl* newUse) {
	for (int32_t i = 0; i < this->fAttrUseNum; ++i) {
		if ($equals($nc(this->fAttributeUses)->get(i), oldUse)) {
			$nc(this->fAttributeUses)->set(i, newUse);
		}
	}
}

$XSAttributeUse* XSAttributeGroupDecl::getAttributeUse($String* namespace$, $String* name) {
	for (int32_t i = 0; i < this->fAttrUseNum; ++i) {
		if (($nc($nc($nc(this->fAttributeUses)->get(i))->fAttrDecl)->fTargetNamespace == namespace$) && ($nc($nc($nc(this->fAttributeUses)->get(i))->fAttrDecl)->fName == name)) {
			return $nc(this->fAttributeUses)->get(i);
		}
	}
	return nullptr;
}

$XSAttributeUse* XSAttributeGroupDecl::getAttributeUseNoProhibited($String* namespace$, $String* name) {
	for (int32_t i = 0; i < this->fAttrUseNum; ++i) {
		if (($nc($nc($nc(this->fAttributeUses)->get(i))->fAttrDecl)->fTargetNamespace == namespace$) && ($nc($nc($nc(this->fAttributeUses)->get(i))->fAttrDecl)->fName == name) && ($nc($nc(this->fAttributeUses)->get(i))->fUse != $SchemaSymbols::USE_PROHIBITED)) {
			return $nc(this->fAttributeUses)->get(i);
		}
	}
	return nullptr;
}

void XSAttributeGroupDecl::removeProhibitedAttrs() {
	if (this->fAttrUseNum == 0) {
		return;
	}
	int32_t count = 0;
	$var($XSAttributeUseImplArray, uses, $new($XSAttributeUseImplArray, this->fAttrUseNum));
	for (int32_t i = 0; i < this->fAttrUseNum; ++i) {
		if ($nc($nc(this->fAttributeUses)->get(i))->fUse != $SchemaSymbols::USE_PROHIBITED) {
			uses->set(count++, $nc(this->fAttributeUses)->get(i));
		}
	}
	$set(this, fAttributeUses, uses);
	this->fAttrUseNum = count;
}

$ObjectArray* XSAttributeGroupDecl::validRestrictionOf($String* typeName, XSAttributeGroupDecl* baseGroup) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, errorArgs, nullptr);
	$var($XSAttributeUseImpl, attrUse, nullptr);
	$var($XSAttributeDecl, attrDecl, nullptr);
	$var($XSAttributeUseImpl, baseAttrUse, nullptr);
	$var($XSAttributeDecl, baseAttrDecl, nullptr);
	for (int32_t i = 0; i < this->fAttrUseNum; ++i) {
		$assign(attrUse, $nc(this->fAttributeUses)->get(i));
		$assign(attrDecl, $nc(attrUse)->fAttrDecl);
		$assign(baseAttrUse, $cast($XSAttributeUseImpl, $nc(baseGroup)->getAttributeUse($nc(attrDecl)->fTargetNamespace, attrDecl->fName)));
		if (baseAttrUse != nullptr) {
			bool var$0 = baseAttrUse->getRequired();
			if (var$0 && !attrUse->getRequired()) {
				$init($SchemaSymbols);
				$assign(errorArgs, $new($ObjectArray, {
					$of(typeName),
					$of($nc(attrDecl)->fName),
					attrUse->fUse == $SchemaSymbols::USE_OPTIONAL ? $of($SchemaSymbols::ATTVAL_OPTIONAL) : $of($SchemaSymbols::ATTVAL_PROHIBITED),
					$of("derivation-ok-restriction.2.1.1"_s)
				}));
				return errorArgs;
			}
			if (attrUse->fUse == $SchemaSymbols::USE_PROHIBITED) {
				continue;
			}
			$assign(baseAttrDecl, baseAttrUse->fAttrDecl);
			if (!$XSConstraints::checkSimpleDerivationOk($nc(attrDecl)->fType, $nc(baseAttrDecl)->fType, $nc(baseAttrDecl->fType)->getFinal())) {
				$assign(errorArgs, $new($ObjectArray, {
					$of(typeName),
					$of($nc(attrDecl)->fName),
					$($of($nc(attrDecl->fType)->getName())),
					$($of($nc($nc(baseAttrDecl)->fType)->getName())),
					$of("derivation-ok-restriction.2.1.2"_s)
				}));
				return errorArgs;
			}
			int32_t baseConsType = baseAttrUse->fConstraintType != $XSConstants::VC_NONE ? baseAttrUse->fConstraintType : $nc(baseAttrDecl)->getConstraintType();
			int32_t thisConstType = attrUse->fConstraintType != $XSConstants::VC_NONE ? attrUse->fConstraintType : $nc(attrDecl)->getConstraintType();
			if (baseConsType == $XSConstants::VC_FIXED) {
				if (thisConstType != $XSConstants::VC_FIXED) {
					$assign(errorArgs, $new($ObjectArray, {
						$of(typeName),
						$of(attrDecl->fName),
						$of("derivation-ok-restriction.2.1.3.a"_s)
					}));
					return errorArgs;
				} else {
					$var($ValidatedInfo, baseFixedValue, baseAttrUse->fDefault != nullptr ? baseAttrUse->fDefault : baseAttrDecl->fDefault);
					$var($ValidatedInfo, thisFixedValue, attrUse->fDefault != nullptr ? attrUse->fDefault : attrDecl->fDefault);
					if (!$nc($of($nc(baseFixedValue)->actualValue))->equals($nc(thisFixedValue)->actualValue)) {
						$assign(errorArgs, $new($ObjectArray, {
							$of(typeName),
							$of(attrDecl->fName),
							$($of($nc(thisFixedValue)->stringValue())),
							$($of(baseFixedValue->stringValue())),
							$of("derivation-ok-restriction.2.1.3.b"_s)
						}));
						return errorArgs;
					}
				}
			}
		} else if (baseGroup->fAttributeWC == nullptr) {
			$assign(errorArgs, $new($ObjectArray, {
				$of(typeName),
				$of($nc(attrDecl)->fName),
				$of("derivation-ok-restriction.2.2.a"_s)
			}));
			return errorArgs;
		} else if (!$nc(baseGroup->fAttributeWC)->allowNamespace($nc(attrDecl)->fTargetNamespace)) {
			$assign(errorArgs, $new($ObjectArray, {
				$of(typeName),
				$of($nc(attrDecl)->fName),
				attrDecl->fTargetNamespace == nullptr ? $of(""_s) : $of(attrDecl->fTargetNamespace),
				$of("derivation-ok-restriction.2.2.b"_s)
			}));
			return errorArgs;
		}
	}
	for (int32_t i = 0; i < $nc(baseGroup)->fAttrUseNum; ++i) {
		$assign(baseAttrUse, $nc(baseGroup->fAttributeUses)->get(i));
		if ($nc(baseAttrUse)->fUse == $SchemaSymbols::USE_REQUIRED) {
			$assign(baseAttrDecl, baseAttrUse->fAttrDecl);
			if (getAttributeUse($nc(baseAttrDecl)->fTargetNamespace, baseAttrDecl->fName) == nullptr) {
				$assign(errorArgs, $new($ObjectArray, {
					$of(typeName),
					$of($nc(baseAttrUse->fAttrDecl)->fName),
					$of("derivation-ok-restriction.3"_s)
				}));
				return errorArgs;
			}
		}
	}
	if (this->fAttributeWC != nullptr) {
		if ($nc(baseGroup)->fAttributeWC == nullptr) {
			$assign(errorArgs, $new($ObjectArray, {
				$of(typeName),
				$of("derivation-ok-restriction.4.1"_s)
			}));
			return errorArgs;
		}
		if (!$nc(this->fAttributeWC)->isSubsetOf($nc(baseGroup)->fAttributeWC)) {
			$assign(errorArgs, $new($ObjectArray, {
				$of(typeName),
				$of("derivation-ok-restriction.4.2"_s)
			}));
			return errorArgs;
		}
		if ($nc(this->fAttributeWC)->weakerProcessContents($nc(baseGroup)->fAttributeWC)) {
			$assign(errorArgs, $new($ObjectArray, {
				$of(typeName),
				$($of($nc(this->fAttributeWC)->getProcessContentsAsString())),
				$($of($nc($nc(baseGroup)->fAttributeWC)->getProcessContentsAsString())),
				$of("derivation-ok-restriction.4.3"_s)
			}));
			return errorArgs;
		}
	}
	return nullptr;
}

$XSAttributeUseImplArray* XSAttributeGroupDecl::resize($XSAttributeUseImplArray* oldArray, int32_t newSize) {
	$init(XSAttributeGroupDecl);
	$var($XSAttributeUseImplArray, newArray, $new($XSAttributeUseImplArray, newSize));
	$System::arraycopy(oldArray, 0, newArray, 0, $Math::min($nc(oldArray)->length, newSize));
	return newArray;
}

void XSAttributeGroupDecl::reset() {
	$set(this, fName, nullptr);
	$set(this, fTargetNamespace, nullptr);
	for (int32_t i = 0; i < this->fAttrUseNum; ++i) {
		$nc(this->fAttributeUses)->set(i, nullptr);
	}
	this->fAttrUseNum = 0;
	$set(this, fAttributeWC, nullptr);
	$set(this, fAnnotations, nullptr);
	$set(this, fIDAttrName, nullptr);
}

int16_t XSAttributeGroupDecl::getType() {
	return $XSConstants::ATTRIBUTE_GROUP;
}

$String* XSAttributeGroupDecl::getName() {
	return this->fName;
}

$String* XSAttributeGroupDecl::getNamespace() {
	return this->fTargetNamespace;
}

$XSObjectList* XSAttributeGroupDecl::getAttributeUses() {
	if (this->fAttrUses == nullptr) {
		$set(this, fAttrUses, $new($XSObjectListImpl, $fcast($XSObjectArray, this->fAttributeUses), this->fAttrUseNum));
	}
	return this->fAttrUses;
}

$XSWildcard* XSAttributeGroupDecl::getAttributeWildcard() {
	return this->fAttributeWC;
}

$XSAnnotation* XSAttributeGroupDecl::getAnnotation() {
	return (this->fAnnotations != nullptr) ? $cast($XSAnnotation, $nc(this->fAnnotations)->item(0)) : ($XSAnnotation*)nullptr;
}

$XSObjectList* XSAttributeGroupDecl::getAnnotations() {
	$init($XSObjectListImpl);
	return (this->fAnnotations != nullptr) ? this->fAnnotations : static_cast<$XSObjectList*>($XSObjectListImpl::EMPTY_LIST);
}

$XSNamespaceItem* XSAttributeGroupDecl::getNamespaceItem() {
	return this->fNamespaceItem;
}

void XSAttributeGroupDecl::setNamespaceItem($XSNamespaceItem* namespaceItem) {
	$set(this, fNamespaceItem, namespaceItem);
}

XSAttributeGroupDecl::XSAttributeGroupDecl() {
}

$Class* XSAttributeGroupDecl::load$($String* name, bool initialize) {
	$loadClass(XSAttributeGroupDecl, name, initialize, &_XSAttributeGroupDecl_ClassInfo_, allocate$XSAttributeGroupDecl);
	return class$;
}

$Class* XSAttributeGroupDecl::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com