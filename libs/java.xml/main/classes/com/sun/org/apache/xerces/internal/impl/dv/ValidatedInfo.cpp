#include <com/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/ShortListImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/xs/ShortList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSValue.h>
#include <jcpp.h>

#undef ANYSIMPLETYPE_DT
#undef DECIMAL_DT
#undef EMPTY_LIST
#undef ENTITY_DT
#undef LISTOFUNION_DT
#undef LIST_DT
#undef NOTATION_DT
#undef POSITIVEINTEGER_DT
#undef STRING_DT
#undef UNAVAILABLE_DT

using $XSSimpleTypeArray = $Array<::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType>;
using $XSObjectArray = $Array<::com::sun::org::apache::xerces::internal::xs::XSObject>;
using $XSSimpleType = ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType;
using $ShortListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::ShortListImpl;
using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $ShortList = ::com::sun::org::apache::xerces::internal::xs::ShortList;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSSimpleTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition;
using $XSValue = ::com::sun::org::apache::xerces::internal::xs::XSValue;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {

$FieldInfo _ValidatedInfo_FieldInfo_[] = {
	{"normalizedValue", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ValidatedInfo, normalizedValue)},
	{"actualValue", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ValidatedInfo, actualValue)},
	{"actualValueType", "S", nullptr, $PUBLIC, $field(ValidatedInfo, actualValueType)},
	{"actualType", "Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, $PUBLIC, $field(ValidatedInfo, actualType)},
	{"memberType", "Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, $PUBLIC, $field(ValidatedInfo, memberType)},
	{"memberTypes", "[Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, $PUBLIC, $field(ValidatedInfo, memberTypes)},
	{"itemValueTypes", "Lcom/sun/org/apache/xerces/internal/xs/ShortList;", nullptr, $PUBLIC, $field(ValidatedInfo, itemValueTypes)},
	{}
};

$MethodInfo _ValidatedInfo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ValidatedInfo, init$, void)},
	{"convertToPrimitiveKind", "(S)S", nullptr, $PRIVATE | $STATIC, $staticMethod(ValidatedInfo, convertToPrimitiveKind, int16_t, int16_t)},
	{"copyFrom", "(Lcom/sun/org/apache/xerces/internal/xs/XSValue;)V", nullptr, $PUBLIC, $virtualMethod(ValidatedInfo, copyFrom, void, $XSValue*)},
	{"getActualValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ValidatedInfo, getActualValue, $Object*)},
	{"getActualValueType", "()S", nullptr, $PUBLIC, $virtualMethod(ValidatedInfo, getActualValueType, int16_t)},
	{"getListValueTypes", "()Lcom/sun/org/apache/xerces/internal/xs/ShortList;", nullptr, $PUBLIC, $virtualMethod(ValidatedInfo, getListValueTypes, $ShortList*)},
	{"getMemberTypeDefinition", "()Lcom/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition;", nullptr, $PUBLIC, $virtualMethod(ValidatedInfo, getMemberTypeDefinition, $XSSimpleTypeDefinition*)},
	{"getMemberTypeDefinitions", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $virtualMethod(ValidatedInfo, getMemberTypeDefinitions, $XSObjectList*)},
	{"getNormalizedValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ValidatedInfo, getNormalizedValue, $String*)},
	{"getTypeDefinition", "()Lcom/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition;", nullptr, $PUBLIC, $virtualMethod(ValidatedInfo, getTypeDefinition, $XSSimpleTypeDefinition*)},
	{"isComparable", "(Lcom/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(ValidatedInfo, isComparable, bool, ValidatedInfo*, ValidatedInfo*)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(ValidatedInfo, reset, void)},
	{"stringValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ValidatedInfo, stringValue, $String*)},
	{}
};

$ClassInfo _ValidatedInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.ValidatedInfo",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xs.XSValue",
	_ValidatedInfo_FieldInfo_,
	_ValidatedInfo_MethodInfo_
};

$Object* allocate$ValidatedInfo($Class* clazz) {
	return $of($alloc(ValidatedInfo));
}

void ValidatedInfo::init$() {
}

void ValidatedInfo::reset() {
	$set(this, normalizedValue, nullptr);
	$set(this, actualValue, nullptr);
	this->actualValueType = $XSConstants::UNAVAILABLE_DT;
	$set(this, actualType, nullptr);
	$set(this, memberType, nullptr);
	$set(this, memberTypes, nullptr);
	$set(this, itemValueTypes, nullptr);
}

$String* ValidatedInfo::stringValue() {
	if (this->actualValue == nullptr) {
		return this->normalizedValue;
	} else {
		return $nc($of(this->actualValue))->toString();
	}
}

bool ValidatedInfo::isComparable(ValidatedInfo* info1, ValidatedInfo* info2) {
	$init(ValidatedInfo);
	$useLocalCurrentObjectStackCache();
	int16_t primitiveType1 = convertToPrimitiveKind($nc(info1)->actualValueType);
	int16_t primitiveType2 = convertToPrimitiveKind($nc(info2)->actualValueType);
	if (primitiveType1 != primitiveType2) {
		return (primitiveType1 == $XSConstants::ANYSIMPLETYPE_DT && primitiveType2 == $XSConstants::STRING_DT || primitiveType1 == $XSConstants::STRING_DT && primitiveType2 == $XSConstants::ANYSIMPLETYPE_DT);
	} else if (primitiveType1 == $XSConstants::LIST_DT || primitiveType1 == $XSConstants::LISTOFUNION_DT) {
		$var($ShortList, typeList1, $nc(info1)->itemValueTypes);
		$var($ShortList, typeList2, $nc(info2)->itemValueTypes);
		int32_t typeList1Length = typeList1 != nullptr ? $nc(typeList1)->getLength() : 0;
		int32_t typeList2Length = typeList2 != nullptr ? $nc(typeList2)->getLength() : 0;
		if (typeList1Length != typeList2Length) {
			return false;
		}
		for (int32_t i = 0; i < typeList1Length; ++i) {
			int16_t primitiveItem1 = convertToPrimitiveKind(typeList1->item(i));
			int16_t primitiveItem2 = convertToPrimitiveKind(typeList2->item(i));
			if (primitiveItem1 != primitiveItem2) {
				if (primitiveItem1 == $XSConstants::ANYSIMPLETYPE_DT && primitiveItem2 == $XSConstants::STRING_DT || primitiveItem1 == $XSConstants::STRING_DT && primitiveItem2 == $XSConstants::ANYSIMPLETYPE_DT) {
					continue;
				}
				return false;
			}
		}
	}
	return true;
}

int16_t ValidatedInfo::convertToPrimitiveKind(int16_t valueType) {
	$init(ValidatedInfo);
	if (valueType <= $XSConstants::NOTATION_DT) {
		return valueType;
	}
	if (valueType <= $XSConstants::ENTITY_DT) {
		return $XSConstants::STRING_DT;
	}
	if (valueType <= $XSConstants::POSITIVEINTEGER_DT) {
		return $XSConstants::DECIMAL_DT;
	}
	return valueType;
}

$Object* ValidatedInfo::getActualValue() {
	return $of(this->actualValue);
}

int16_t ValidatedInfo::getActualValueType() {
	return this->actualValueType;
}

$ShortList* ValidatedInfo::getListValueTypes() {
	$init($ShortListImpl);
	return this->itemValueTypes == nullptr ? static_cast<$ShortList*>($ShortListImpl::EMPTY_LIST) : this->itemValueTypes;
}

$XSObjectList* ValidatedInfo::getMemberTypeDefinitions() {
	if (this->memberTypes == nullptr) {
		$init($XSObjectListImpl);
		return $XSObjectListImpl::EMPTY_LIST;
	}
	return $new($XSObjectListImpl, $fcast($XSObjectArray, this->memberTypes), $nc(this->memberTypes)->length);
}

$String* ValidatedInfo::getNormalizedValue() {
	return this->normalizedValue;
}

$XSSimpleTypeDefinition* ValidatedInfo::getTypeDefinition() {
	return this->actualType;
}

$XSSimpleTypeDefinition* ValidatedInfo::getMemberTypeDefinition() {
	return this->memberType;
}

void ValidatedInfo::copyFrom($XSValue* o) {
	$useLocalCurrentObjectStackCache();
	if (o == nullptr) {
		reset();
	} else if ($instanceOf(ValidatedInfo, o)) {
		$var(ValidatedInfo, other, $cast(ValidatedInfo, o));
		$set(this, normalizedValue, $nc(other)->normalizedValue);
		$set(this, actualValue, other->actualValue);
		this->actualValueType = other->actualValueType;
		$set(this, actualType, other->actualType);
		$set(this, memberType, other->memberType);
		$set(this, memberTypes, other->memberTypes);
		$set(this, itemValueTypes, other->itemValueTypes);
	} else {
		$set(this, normalizedValue, $nc(o)->getNormalizedValue());
		$set(this, actualValue, o->getActualValue());
		this->actualValueType = o->getActualValueType();
		$set(this, actualType, $cast($XSSimpleType, o->getTypeDefinition()));
		$set(this, memberType, $cast($XSSimpleType, o->getMemberTypeDefinition()));
		$var($XSSimpleType, realType, this->memberType == nullptr ? this->actualType : this->memberType);
		if (realType != nullptr && realType->getBuiltInKind() == $XSConstants::LISTOFUNION_DT) {
			$var($XSObjectList, members, o->getMemberTypeDefinitions());
			$set(this, memberTypes, $new($XSSimpleTypeArray, $nc(members)->getLength()));
			for (int32_t i = 0; i < members->getLength(); ++i) {
				$nc(this->memberTypes)->set(i, $cast($XSSimpleType, $(members->get(i))));
			}
		} else {
			$set(this, memberTypes, nullptr);
		}
		$set(this, itemValueTypes, o->getListValueTypes());
	}
}

ValidatedInfo::ValidatedInfo() {
}

$Class* ValidatedInfo::load$($String* name, bool initialize) {
	$loadClass(ValidatedInfo, name, initialize, &_ValidatedInfo_ClassInfo_, allocate$ValidatedInfo);
	return class$;
}

$Class* ValidatedInfo::class$ = nullptr;

							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com