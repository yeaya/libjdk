#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGenException.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <jcpp.h>

#undef BOOLEAN
#undef BYTE
#undef CHAR
#undef DOUBLE
#undef FLOAT
#undef INT
#undef LONG
#undef SHORT
#undef T_BOOLEAN
#undef T_BYTE
#undef T_CHAR
#undef T_DOUBLE
#undef T_FLOAT
#undef T_INT
#undef T_LONG
#undef T_SHORT
#undef T_VOID
#undef VOID

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ClassGenException = ::com::sun::org::apache::bcel::internal::generic::ClassGenException;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$MethodInfo _BasicType_MethodInfo_[] = {
	{"<init>", "(B)V", nullptr, 0, $method(BasicType, init$, void, int8_t)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(BasicType, equals, bool, Object$*)},
	{"getType", "(B)Lcom/sun/org/apache/bcel/internal/generic/BasicType;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasicType, getType, BasicType*, int8_t)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(BasicType, hashCode, int32_t)},
	{}
};

$ClassInfo _BasicType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.BasicType",
	"com.sun.org.apache.bcel.internal.generic.Type",
	nullptr,
	nullptr,
	_BasicType_MethodInfo_
};

$Object* allocate$BasicType($Class* clazz) {
	return $of($alloc(BasicType));
}

void BasicType::init$(int8_t type) {
	$useLocalCurrentObjectStackCache();
	$Type::init$(type, $($Const::getShortTypeName(type)));
	if ((type < $Const::T_BOOLEAN) || (type > $Const::T_VOID)) {
		$throwNew($ClassGenException, $$str({"Invalid type: "_s, $$str(type)}));
	}
}

BasicType* BasicType::getType(int8_t type) {
	$init(BasicType);
	$useLocalCurrentObjectStackCache();
	switch (type) {
	case $Const::T_VOID:
		{
			$init($Type);
			return $Type::VOID;
		}
	case $Const::T_BOOLEAN:
		{
			$init($Type);
			return $Type::BOOLEAN;
		}
	case $Const::T_BYTE:
		{
			$init($Type);
			return $Type::BYTE;
		}
	case $Const::T_SHORT:
		{
			$init($Type);
			return $Type::SHORT;
		}
	case $Const::T_CHAR:
		{
			$init($Type);
			return $Type::CHAR;
		}
	case $Const::T_INT:
		{
			$init($Type);
			return $Type::INT;
		}
	case $Const::T_LONG:
		{
			$init($Type);
			return $Type::LONG;
		}
	case $Const::T_DOUBLE:
		{
			$init($Type);
			return $Type::DOUBLE;
		}
	case $Const::T_FLOAT:
		{
			$init($Type);
			return $Type::FLOAT;
		}
	default:
		{
			$throwNew($ClassGenException, $$str({"Invalid type: "_s, $$str(type)}));
		}
	}
}

int32_t BasicType::hashCode() {
	return $Type::getType();
}

bool BasicType::equals(Object$* _type) {
	bool var$0 = false;
	if ($instanceOf(BasicType, _type)) {
		int8_t var$1 = $nc(($cast(BasicType, _type)))->getType();
		var$0 = var$1 == this->getType();
	} else {
		var$0 = false;
	}
	return var$0;
}

BasicType::BasicType() {
}

$Class* BasicType::load$($String* name, bool initialize) {
	$loadClass(BasicType, name, initialize, &_BasicType_ClassInfo_, allocate$BasicType);
	return class$;
}

$Class* BasicType::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com