#include <com/sun/org/apache/bcel/internal/generic/ArrayType.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGenException.h>
#include <com/sun/org/apache/bcel/internal/generic/ObjectType.h>
#include <com/sun/org/apache/bcel/internal/generic/ReferenceType.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <jcpp.h>

#undef MAX_BYTE
#undef T_ARRAY
#undef T_VOID

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $BasicType = ::com::sun::org::apache::bcel::internal::generic::BasicType;
using $ClassGenException = ::com::sun::org::apache::bcel::internal::generic::ClassGenException;
using $ObjectType = ::com::sun::org::apache::bcel::internal::generic::ObjectType;
using $ReferenceType = ::com::sun::org::apache::bcel::internal::generic::ReferenceType;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _ArrayType_FieldInfo_[] = {
	{"dimensions", "I", nullptr, $PRIVATE, $field(ArrayType, dimensions)},
	{"basicType", "Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PRIVATE, $field(ArrayType, basicType)},
	{}
};

$MethodInfo _ArrayType_MethodInfo_[] = {
	{"<init>", "(BI)V", nullptr, $PUBLIC, $method(ArrayType, init$, void, int8_t, int32_t)},
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(ArrayType, init$, void, $String*, int32_t)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/Type;I)V", nullptr, $PUBLIC, $method(ArrayType, init$, void, $Type*, int32_t)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ArrayType, equals, bool, Object$*)},
	{"getBasicType", "()Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $method(ArrayType, getBasicType, $Type*)},
	{"getDimensions", "()I", nullptr, $PUBLIC, $method(ArrayType, getDimensions, int32_t)},
	{"getElementType", "()Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $method(ArrayType, getElementType, $Type*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ArrayType, hashCode, int32_t)},
	{}
};

$ClassInfo _ArrayType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.ArrayType",
	"com.sun.org.apache.bcel.internal.generic.ReferenceType",
	nullptr,
	_ArrayType_FieldInfo_,
	_ArrayType_MethodInfo_
};

$Object* allocate$ArrayType($Class* clazz) {
	return $of($alloc(ArrayType));
}

void ArrayType::init$(int8_t type, int32_t dimensions) {
	ArrayType::init$($(static_cast<$Type*>($BasicType::getType(type))), dimensions);
}

void ArrayType::init$($String* class_name, int32_t dimensions) {
	ArrayType::init$($(static_cast<$Type*>($ObjectType::getInstance(class_name))), dimensions);
}

void ArrayType::init$($Type* type, int32_t dimensions) {
	$useLocalCurrentObjectStackCache();
	$ReferenceType::init$($Const::T_ARRAY, "<dummy>"_s);
	if ((dimensions < 1) || (dimensions > $Const::MAX_BYTE)) {
		$throwNew($ClassGenException, $$str({"Invalid number of dimensions: "_s, $$str(dimensions)}));
	}
	{
		$var(ArrayType, array, nullptr)
		switch ($nc(type)->getType()) {
		case $Const::T_ARRAY:
			{
				$assign(array, $cast(ArrayType, type));
				this->dimensions = dimensions + $nc(array)->dimensions;
				$set(this, basicType, $nc(array)->basicType);
				break;
			}
		case $Const::T_VOID:
			{
				$throwNew($ClassGenException, "Invalid type: void[]"_s);
			}
		default:
			{
				this->dimensions = dimensions;
				$set(this, basicType, type);
				break;
			}
		}
	}
	$var($StringBuilder, buf, $new($StringBuilder));
	for (int32_t i = 0; i < this->dimensions; ++i) {
		buf->append(u'[');
	}
	buf->append($($nc(this->basicType)->getSignature()));
	$ReferenceType::setSignature($(buf->toString()));
}

$Type* ArrayType::getBasicType() {
	return this->basicType;
}

$Type* ArrayType::getElementType() {
	if (this->dimensions == 1) {
		return this->basicType;
	}
	return $new(ArrayType, this->basicType, this->dimensions - 1);
}

int32_t ArrayType::getDimensions() {
	return this->dimensions;
}

int32_t ArrayType::hashCode() {
	return $nc(this->basicType)->hashCode() ^ this->dimensions;
}

bool ArrayType::equals(Object$* _type) {
	if ($instanceOf(ArrayType, _type)) {
		$var(ArrayType, array, $cast(ArrayType, _type));
		return ($nc(array)->dimensions == this->dimensions) && $nc(array->basicType)->equals(this->basicType);
	}
	return false;
}

ArrayType::ArrayType() {
}

$Class* ArrayType::load$($String* name, bool initialize) {
	$loadClass(ArrayType, name, initialize, &_ArrayType_ClassInfo_, allocate$ArrayType);
	return class$;
}

$Class* ArrayType::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com