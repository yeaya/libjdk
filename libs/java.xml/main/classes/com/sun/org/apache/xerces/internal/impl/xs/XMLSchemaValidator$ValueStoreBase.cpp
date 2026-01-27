#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$ValueStoreBase.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$ShortVector.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/Field.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/UniqueOrKey.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/ValueStore.h>
#include <com/sun/org/apache/xerces/internal/xs/ShortList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <java/util/Vector.h>
#include <jcpp.h>

#undef IC_KEY
#undef LISTOFUNION_DT
#undef LIST_DT

using $FieldArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::identity::Field>;
using $ShortListArray = $Array<::com::sun::org::apache::xerces::internal::xs::ShortList>;
using $XMLSchemaValidator = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator;
using $XMLSchemaValidator$ShortVector = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator$ShortVector;
using $Field = ::com::sun::org::apache::xerces::internal::impl::xs::identity::Field;
using $IdentityConstraint = ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint;
using $UniqueOrKey = ::com::sun::org::apache::xerces::internal::impl::xs::identity::UniqueOrKey;
using $ValueStore = ::com::sun::org::apache::xerces::internal::impl::xs::identity::ValueStore;
using $ShortList = ::com::sun::org::apache::xerces::internal::xs::ShortList;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

$FieldInfo _XMLSchemaValidator$ValueStoreBase_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator;", nullptr, $FINAL | $SYNTHETIC, $field(XMLSchemaValidator$ValueStoreBase, this$0)},
	{"fIdentityConstraint", "Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;", nullptr, $PROTECTED, $field(XMLSchemaValidator$ValueStoreBase, fIdentityConstraint)},
	{"fFieldCount", "I", nullptr, $PROTECTED, $field(XMLSchemaValidator$ValueStoreBase, fFieldCount)},
	{"fFields", "[Lcom/sun/org/apache/xerces/internal/impl/xs/identity/Field;", nullptr, $PROTECTED, $field(XMLSchemaValidator$ValueStoreBase, fFields)},
	{"fLocalValues", "[Ljava/lang/Object;", nullptr, $PROTECTED, $field(XMLSchemaValidator$ValueStoreBase, fLocalValues)},
	{"fLocalValueTypes", "[S", nullptr, $PROTECTED, $field(XMLSchemaValidator$ValueStoreBase, fLocalValueTypes)},
	{"fLocalItemValueTypes", "[Lcom/sun/org/apache/xerces/internal/xs/ShortList;", nullptr, $PROTECTED, $field(XMLSchemaValidator$ValueStoreBase, fLocalItemValueTypes)},
	{"fValuesCount", "I", nullptr, $PROTECTED, $field(XMLSchemaValidator$ValueStoreBase, fValuesCount)},
	{"fHasValue", "Z", nullptr, $PROTECTED, $field(XMLSchemaValidator$ValueStoreBase, fHasValue)},
	{"fValues", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/Object;>;", $PUBLIC | $FINAL, $field(XMLSchemaValidator$ValueStoreBase, fValues)},
	{"fValueTypes", "Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$ShortVector;", nullptr, $PUBLIC, $field(XMLSchemaValidator$ValueStoreBase, fValueTypes)},
	{"fItemValueTypes", "Ljava/util/Vector;", "Ljava/util/Vector<Lcom/sun/org/apache/xerces/internal/xs/ShortList;>;", $PUBLIC, $field(XMLSchemaValidator$ValueStoreBase, fItemValueTypes)},
	{"fUseValueTypeVector", "Z", nullptr, $PRIVATE, $field(XMLSchemaValidator$ValueStoreBase, fUseValueTypeVector)},
	{"fValueTypesLength", "I", nullptr, $PRIVATE, $field(XMLSchemaValidator$ValueStoreBase, fValueTypesLength)},
	{"fValueType", "S", nullptr, $PRIVATE, $field(XMLSchemaValidator$ValueStoreBase, fValueType)},
	{"fUseItemValueTypeVector", "Z", nullptr, $PRIVATE, $field(XMLSchemaValidator$ValueStoreBase, fUseItemValueTypeVector)},
	{"fItemValueTypesLength", "I", nullptr, $PRIVATE, $field(XMLSchemaValidator$ValueStoreBase, fItemValueTypesLength)},
	{"fItemValueType", "Lcom/sun/org/apache/xerces/internal/xs/ShortList;", nullptr, $PRIVATE, $field(XMLSchemaValidator$ValueStoreBase, fItemValueType)},
	{"fTempBuffer", "Ljava/lang/StringBuilder;", nullptr, $FINAL, $field(XMLSchemaValidator$ValueStoreBase, fTempBuffer)},
	{}
};

$MethodInfo _XMLSchemaValidator$ValueStoreBase_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator;Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;)V", nullptr, $PROTECTED, $method(XMLSchemaValidator$ValueStoreBase, init$, void, $XMLSchemaValidator*, $IdentityConstraint*)},
	{"addItemValueType", "(Lcom/sun/org/apache/xerces/internal/xs/ShortList;)V", nullptr, $PRIVATE, $method(XMLSchemaValidator$ValueStoreBase, addItemValueType, void, $ShortList*)},
	{"addValue", "(Lcom/sun/org/apache/xerces/internal/impl/xs/identity/Field;ZLjava/lang/Object;SLcom/sun/org/apache/xerces/internal/xs/ShortList;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator$ValueStoreBase, addValue, void, $Field*, bool, Object$*, int16_t, $ShortList*)},
	{"addValueType", "(S)V", nullptr, $PRIVATE, $method(XMLSchemaValidator$ValueStoreBase, addValueType, void, int16_t)},
	{"append", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$ValueStoreBase;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator$ValueStoreBase, append, void, XMLSchemaValidator$ValueStoreBase*)},
	{"checkDuplicateValues", "()V", nullptr, $PROTECTED, $virtualMethod(XMLSchemaValidator$ValueStoreBase, checkDuplicateValues, void)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator$ValueStoreBase, clear, void)},
	{"contains", "()Z", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator$ValueStoreBase, contains, bool)},
	{"contains", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$ValueStoreBase;)I", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator$ValueStoreBase, contains, int32_t, XMLSchemaValidator$ValueStoreBase*)},
	{"endDocument", "()V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator$ValueStoreBase, endDocument, void)},
	{"endDocumentFragment", "()V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator$ValueStoreBase, endDocumentFragment, void)},
	{"endValueScope", "()V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator$ValueStoreBase, endValueScope, void)},
	{"getItemValueTypeAt", "(I)Lcom/sun/org/apache/xerces/internal/xs/ShortList;", nullptr, $PRIVATE, $method(XMLSchemaValidator$ValueStoreBase, getItemValueTypeAt, $ShortList*, int32_t)},
	{"getValueTypeAt", "(I)S", nullptr, $PRIVATE, $method(XMLSchemaValidator$ValueStoreBase, getValueTypeAt, int16_t, int32_t)},
	{"itemValueTypeContains", "(Lcom/sun/org/apache/xerces/internal/xs/ShortList;)Z", nullptr, $PRIVATE, $method(XMLSchemaValidator$ValueStoreBase, itemValueTypeContains, bool, $ShortList*)},
	{"reportError", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator$ValueStoreBase, reportError, void, $String*, $ObjectArray*)},
	{"startValueScope", "()V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator$ValueStoreBase, startValueScope, void)},
	{"toString", "([Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(XMLSchemaValidator$ValueStoreBase, toString, $String*, $ObjectArray*)},
	{"toString", "(Ljava/util/Vector;II)Ljava/lang/String;", "(Ljava/util/Vector<Ljava/lang/Object;>;II)Ljava/lang/String;", $PROTECTED, $virtualMethod(XMLSchemaValidator$ValueStoreBase, toString, $String*, $Vector*, int32_t, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator$ValueStoreBase, toString, $String*)},
	{"valueTypeContains", "(S)Z", nullptr, $PRIVATE, $method(XMLSchemaValidator$ValueStoreBase, valueTypeContains, bool, int16_t)},
	{}
};

$InnerClassInfo _XMLSchemaValidator$ValueStoreBase_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$ValueStoreBase", "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator", "ValueStoreBase", $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _XMLSchemaValidator$ValueStoreBase_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$ValueStoreBase",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.impl.xs.identity.ValueStore",
	_XMLSchemaValidator$ValueStoreBase_FieldInfo_,
	_XMLSchemaValidator$ValueStoreBase_MethodInfo_,
	nullptr,
	nullptr,
	_XMLSchemaValidator$ValueStoreBase_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator"
};

$Object* allocate$XMLSchemaValidator$ValueStoreBase($Class* clazz) {
	return $of($alloc(XMLSchemaValidator$ValueStoreBase));
}

void XMLSchemaValidator$ValueStoreBase::init$($XMLSchemaValidator* this$0, $IdentityConstraint* identityConstraint) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	this->fFieldCount = 0;
	$set(this, fFields, nullptr);
	$set(this, fLocalValues, nullptr);
	$set(this, fLocalValueTypes, nullptr);
	$set(this, fLocalItemValueTypes, nullptr);
	this->fHasValue = false;
	$set(this, fValues, $new($Vector));
	$set(this, fValueTypes, nullptr);
	$set(this, fItemValueTypes, nullptr);
	this->fUseValueTypeVector = false;
	this->fValueTypesLength = 0;
	this->fValueType = (int16_t)0;
	this->fUseItemValueTypeVector = false;
	this->fItemValueTypesLength = 0;
	$set(this, fItemValueType, nullptr);
	$set(this, fTempBuffer, $new($StringBuilder));
	$set(this, fIdentityConstraint, identityConstraint);
	this->fFieldCount = $nc(this->fIdentityConstraint)->getFieldCount();
	$set(this, fFields, $new($FieldArray, this->fFieldCount));
	$set(this, fLocalValues, $new($ObjectArray, this->fFieldCount));
	$set(this, fLocalValueTypes, $new($shorts, this->fFieldCount));
	$set(this, fLocalItemValueTypes, $new($ShortListArray, this->fFieldCount));
	for (int32_t i = 0; i < this->fFieldCount; ++i) {
		$nc(this->fFields)->set(i, $($nc(this->fIdentityConstraint)->getFieldAt(i)));
	}
}

void XMLSchemaValidator$ValueStoreBase::clear() {
	this->fValuesCount = 0;
	this->fUseValueTypeVector = false;
	this->fValueTypesLength = 0;
	this->fValueType = (int16_t)0;
	this->fUseItemValueTypeVector = false;
	this->fItemValueTypesLength = 0;
	$set(this, fItemValueType, nullptr);
	$nc(this->fValues)->setSize(0);
	if (this->fValueTypes != nullptr) {
		$nc(this->fValueTypes)->clear();
	}
	if (this->fItemValueTypes != nullptr) {
		$nc(this->fItemValueTypes)->setSize(0);
	}
}

void XMLSchemaValidator$ValueStoreBase::append(XMLSchemaValidator$ValueStoreBase* newVal) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc($nc(newVal)->fValues)->size(); ++i) {
		$nc(this->fValues)->add($($nc(newVal->fValues)->get(i)));
	}
}

void XMLSchemaValidator$ValueStoreBase::startValueScope() {
	this->fValuesCount = 0;
	for (int32_t i = 0; i < this->fFieldCount; ++i) {
		$nc(this->fLocalValues)->set(i, nullptr);
		$nc(this->fLocalValueTypes)->set(i, (int16_t)0);
		$nc(this->fLocalItemValueTypes)->set(i, nullptr);
	}
}

void XMLSchemaValidator$ValueStoreBase::endValueScope() {
	$useLocalCurrentObjectStackCache();
	if (this->fValuesCount == 0) {
		if ($nc(this->fIdentityConstraint)->getCategory() == $IdentityConstraint::IC_KEY) {
			$var($String, code, "AbsentKeyValue"_s);
			$var($String, eName, $nc(this->fIdentityConstraint)->getElementName());
			$var($String, cName, $nc(this->fIdentityConstraint)->getIdentityConstraintName());
			this->this$0->reportSchemaError(code, $$new($ObjectArray, {
				$of(eName),
				$of(cName)
			}));
		}
		return;
	}
	if (this->fValuesCount != this->fFieldCount) {
		if ($nc(this->fIdentityConstraint)->getCategory() == $IdentityConstraint::IC_KEY) {
			$var($String, code, "KeyNotEnoughValues"_s);
			$var($UniqueOrKey, key, $cast($UniqueOrKey, this->fIdentityConstraint));
			$var($String, eName, $nc(this->fIdentityConstraint)->getElementName());
			$var($String, cName, $nc(key)->getIdentityConstraintName());
			this->this$0->reportSchemaError(code, $$new($ObjectArray, {
				$of(eName),
				$of(cName)
			}));
		}
		return;
	}
}

void XMLSchemaValidator$ValueStoreBase::endDocumentFragment() {
}

void XMLSchemaValidator$ValueStoreBase::endDocument() {
}

void XMLSchemaValidator$ValueStoreBase::reportError($String* key, $ObjectArray* args) {
	this->this$0->reportSchemaError(key, args);
}

void XMLSchemaValidator$ValueStoreBase::addValue($Field* field, bool mayMatch, Object$* actualValue, int16_t valueType, $ShortList* itemValueType) {
	$useLocalCurrentObjectStackCache();
	int32_t i = 0;
	for (i = this->fFieldCount - 1; i > -1; --i) {
		if ($nc(this->fFields)->get(i) == field) {
			break;
		}
	}
	if (i == -1) {
		$var($String, code, "UnknownField"_s);
		$var($String, eName, $nc(this->fIdentityConstraint)->getElementName());
		$var($String, cName, $nc(this->fIdentityConstraint)->getIdentityConstraintName());
		this->this$0->reportSchemaError(code, $$new($ObjectArray, {
			$($of($nc(field)->toString())),
			$of(eName),
			$of(cName)
		}));
		return;
	}
	if (!mayMatch) {
		$var($String, code, "FieldMultipleMatch"_s);
		$var($String, cName, $nc(this->fIdentityConstraint)->getIdentityConstraintName());
		this->this$0->reportSchemaError(code, $$new($ObjectArray, {
			$($of($nc(field)->toString())),
			$of(cName)
		}));
	} else {
		++this->fValuesCount;
		this->fHasValue = true;
	}
	$nc(this->fLocalValues)->set(i, actualValue);
	$nc(this->fLocalValueTypes)->set(i, valueType);
	$nc(this->fLocalItemValueTypes)->set(i, itemValueType);
	if (this->fValuesCount == this->fFieldCount) {
		checkDuplicateValues();
		for (i = 0; i < this->fFieldCount; ++i) {
			$nc(this->fValues)->add($nc(this->fLocalValues)->get(i));
			addValueType($nc(this->fLocalValueTypes)->get(i));
			addItemValueType($nc(this->fLocalItemValueTypes)->get(i));
		}
	}
}

bool XMLSchemaValidator$ValueStoreBase::contains() {
	$useLocalCurrentObjectStackCache();
	int32_t next = 0;
	int32_t size = $nc(this->fValues)->size();
	bool LOOP$continue = false;
	for (int32_t i = 0; i < size; i = next) {
		next = i + this->fFieldCount;
		for (int32_t j = 0; j < this->fFieldCount; ++j) {
			$var($Object0, value1, $nc(this->fLocalValues)->get(j));
			$var($Object, value2, $nc(this->fValues)->get(i));
			int16_t valueType1 = $nc(this->fLocalValueTypes)->get(j);
			int16_t valueType2 = getValueTypeAt(i);
			if (value1 == nullptr || value2 == nullptr || valueType1 != valueType2 || !($nc($of(value1))->equals(value2))) {
				LOOP$continue = true;
				break;
			} else if (valueType1 == $XSConstants::LIST_DT || valueType1 == $XSConstants::LISTOFUNION_DT) {
				$var($ShortList, list1, $nc(this->fLocalItemValueTypes)->get(j));
				$var($ShortList, list2, getItemValueTypeAt(i));
				if (list1 == nullptr || list2 == nullptr || !$nc($of(list1))->equals(list2)) {
					LOOP$continue = true;
					break;
				}
			}
			++i;
		}
		if (LOOP$continue) {
			LOOP$continue = false;
			continue;
		}
		return true;
	}
	return false;
}

int32_t XMLSchemaValidator$ValueStoreBase::contains(XMLSchemaValidator$ValueStoreBase* vsb) {
	$useLocalCurrentObjectStackCache();
	$var($Vector, values, $nc(vsb)->fValues);
	int32_t size1 = $nc(values)->size();
	if (this->fFieldCount <= 1) {
		for (int32_t i = 0; i < size1; ++i) {
			int16_t val = vsb->getValueTypeAt(i);
			bool var$0 = !valueTypeContains(val);
			if (var$0 || !$nc(this->fValues)->contains($(values->get(i)))) {
				return i;
			} else if (val == $XSConstants::LIST_DT || val == $XSConstants::LISTOFUNION_DT) {
				$var($ShortList, list1, vsb->getItemValueTypeAt(i));
				if (!itemValueTypeContains(list1)) {
					return i;
				}
			}
		}
	} else {
		int32_t size2 = $nc(this->fValues)->size();
		bool OUTER$continue = false;
		for (int32_t i = 0; i < size1; i += this->fFieldCount) {
			bool INNER$continue = false;
			for (int32_t j = 0; j < size2; j += this->fFieldCount) {
				for (int32_t k = 0; k < this->fFieldCount; ++k) {
					$var($Object, value1, values->get(i + k));
					$var($Object, value2, $nc(this->fValues)->get(j + k));
					int16_t valueType1 = vsb->getValueTypeAt(i + k);
					int16_t valueType2 = getValueTypeAt(j + k);
					if (!$equals(value1, value2) && (valueType1 != valueType2 || value1 == nullptr || !$nc($of(value1))->equals(value2))) {
						INNER$continue = true;
						break;
					} else if (valueType1 == $XSConstants::LIST_DT || valueType1 == $XSConstants::LISTOFUNION_DT) {
						$var($ShortList, list1, vsb->getItemValueTypeAt(i + k));
						$var($ShortList, list2, getItemValueTypeAt(j + k));
						if (list1 == nullptr || list2 == nullptr || !$nc($of(list1))->equals(list2)) {
							INNER$continue = true;
							break;
						}
					}
				}
				if (INNER$continue) {
					INNER$continue = false;
					continue;
				}
				OUTER$continue = true;
				break;
			}
			if (OUTER$continue) {
				OUTER$continue = false;
				continue;
			}
			return i;
		}
	}
	return -1;
}

void XMLSchemaValidator$ValueStoreBase::checkDuplicateValues() {
}

$String* XMLSchemaValidator$ValueStoreBase::toString($ObjectArray* values) {
	int32_t size = $nc(values)->length;
	if (size == 0) {
		return ""_s;
	}
	$nc(this->fTempBuffer)->setLength(0);
	for (int32_t i = 0; i < size; ++i) {
		if (i > 0) {
			$nc(this->fTempBuffer)->append(u',');
		}
		$nc(this->fTempBuffer)->append(values->get(i));
	}
	return $nc(this->fTempBuffer)->toString();
}

$String* XMLSchemaValidator$ValueStoreBase::toString($Vector* values, int32_t start, int32_t length) {
	$useLocalCurrentObjectStackCache();
	if (length == 0) {
		return ""_s;
	}
	if (length == 1) {
		return $String::valueOf($($nc(values)->get(start)));
	}
	$var($StringBuilder, str, $new($StringBuilder));
	for (int32_t i = 0; i < length; ++i) {
		if (i > 0) {
			str->append(u',');
		}
		str->append($($nc(values)->get(start + i)));
	}
	return str->toString();
}

$String* XMLSchemaValidator$ValueStoreBase::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, s, $ValueStore::toString());
	int32_t index1 = $nc(s)->lastIndexOf((int32_t)u'$');
	if (index1 != -1) {
		$assign(s, s->substring(index1 + 1));
	}
	int32_t index2 = s->lastIndexOf((int32_t)u'.');
	if (index2 != -1) {
		$assign(s, s->substring(index2 + 1));
	}
	return $str({s, $$str(u'['), this->fIdentityConstraint, $$str(u']')});
}

void XMLSchemaValidator$ValueStoreBase::addValueType(int16_t type) {
	if (this->fUseValueTypeVector) {
		$nc(this->fValueTypes)->add(type);
	} else if (this->fValueTypesLength++ == 0) {
		this->fValueType = type;
	} else if (this->fValueType != type) {
		this->fUseValueTypeVector = true;
		if (this->fValueTypes == nullptr) {
			$set(this, fValueTypes, $new($XMLSchemaValidator$ShortVector, this->fValueTypesLength * 2));
		}
		for (int32_t i = 1; i < this->fValueTypesLength; ++i) {
			$nc(this->fValueTypes)->add(this->fValueType);
		}
		$nc(this->fValueTypes)->add(type);
	}
}

int16_t XMLSchemaValidator$ValueStoreBase::getValueTypeAt(int32_t index) {
	if (this->fUseValueTypeVector) {
		return $nc(this->fValueTypes)->valueAt(index);
	}
	return this->fValueType;
}

bool XMLSchemaValidator$ValueStoreBase::valueTypeContains(int16_t value) {
	if (this->fUseValueTypeVector) {
		return $nc(this->fValueTypes)->contains(value);
	}
	return this->fValueType == value;
}

void XMLSchemaValidator$ValueStoreBase::addItemValueType($ShortList* itemValueType) {
	if (this->fUseItemValueTypeVector) {
		$nc(this->fItemValueTypes)->add(itemValueType);
	} else if (this->fItemValueTypesLength++ == 0) {
		$set(this, fItemValueType, itemValueType);
	} else if (!(this->fItemValueType == itemValueType || (this->fItemValueType != nullptr && $nc($of(this->fItemValueType))->equals(itemValueType)))) {
		this->fUseItemValueTypeVector = true;
		if (this->fItemValueTypes == nullptr) {
			$set(this, fItemValueTypes, $new($Vector, this->fItemValueTypesLength * 2));
		}
		for (int32_t i = 1; i < this->fItemValueTypesLength; ++i) {
			$nc(this->fItemValueTypes)->add(this->fItemValueType);
		}
		$nc(this->fItemValueTypes)->add(itemValueType);
	}
}

$ShortList* XMLSchemaValidator$ValueStoreBase::getItemValueTypeAt(int32_t index) {
	if (this->fUseItemValueTypeVector) {
		return $cast($ShortList, $nc(this->fItemValueTypes)->get(index));
	}
	return this->fItemValueType;
}

bool XMLSchemaValidator$ValueStoreBase::itemValueTypeContains($ShortList* value) {
	if (this->fUseItemValueTypeVector) {
		return $nc(this->fItemValueTypes)->contains(value);
	}
	return this->fItemValueType == value || (this->fItemValueType != nullptr && $nc($of(this->fItemValueType))->equals(value));
}

XMLSchemaValidator$ValueStoreBase::XMLSchemaValidator$ValueStoreBase() {
}

$Class* XMLSchemaValidator$ValueStoreBase::load$($String* name, bool initialize) {
	$loadClass(XMLSchemaValidator$ValueStoreBase, name, initialize, &_XMLSchemaValidator$ValueStoreBase_ClassInfo_, allocate$XMLSchemaValidator$ValueStoreBase);
	return class$;
}

$Class* XMLSchemaValidator$ValueStoreBase::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com