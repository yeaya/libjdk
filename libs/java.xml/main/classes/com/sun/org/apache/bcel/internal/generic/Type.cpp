#include <com/sun/org/apache/bcel/internal/generic/Type.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/ClassFormatException.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <com/sun/org/apache/bcel/internal/generic/ArrayType.h>
#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <com/sun/org/apache/bcel/internal/generic/ObjectType.h>
#include <com/sun/org/apache/bcel/internal/generic/ReferenceType.h>
#include <com/sun/org/apache/bcel/internal/generic/Type$1.h>
#include <com/sun/org/apache/bcel/internal/generic/Type$2.h>
#include <com/sun/org/apache/bcel/internal/generic/Type$3.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/StringIndexOutOfBoundsException.h>
#include <java/lang/ThreadLocal.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef BOOLEAN
#undef BYTE
#undef CHAR
#undef CLASS
#undef DOUBLE
#undef FLOAT
#undef INT
#undef LONG
#undef NO_ARGS
#undef NULL
#undef OBJECT
#undef SHORT
#undef STRING
#undef STRINGBUFFER
#undef THROWABLE
#undef TYPE
#undef T_ARRAY
#undef T_BOOLEAN
#undef T_BYTE
#undef T_CHAR
#undef T_DOUBLE
#undef T_FLOAT
#undef T_INT
#undef T_LONG
#undef T_SHORT
#undef T_UNKNOWN
#undef T_VOID
#undef UNKNOWN
#undef VOID

using $TypeArray = $Array<::com::sun::org::apache::bcel::internal::generic::Type>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ClassFormatException = ::com::sun::org::apache::bcel::internal::classfile::ClassFormatException;
using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
using $ArrayType = ::com::sun::org::apache::bcel::internal::generic::ArrayType;
using $BasicType = ::com::sun::org::apache::bcel::internal::generic::BasicType;
using $ObjectType = ::com::sun::org::apache::bcel::internal::generic::ObjectType;
using $ReferenceType = ::com::sun::org::apache::bcel::internal::generic::ReferenceType;
using $Type$1 = ::com::sun::org::apache::bcel::internal::generic::Type$1;
using $Type$2 = ::com::sun::org::apache::bcel::internal::generic::Type$2;
using $Type$3 = ::com::sun::org::apache::bcel::internal::generic::Type$3;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Short = ::java::lang::Short;
using $StringIndexOutOfBoundsException = ::java::lang::StringIndexOutOfBoundsException;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $Void = ::java::lang::Void;
using $Method = ::java::lang::reflect::Method;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _Type_FieldInfo_[] = {
	{"type", "B", nullptr, $PRIVATE | $FINAL, $field(Type, type)},
	{"signature", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Type, signature)},
	{"VOID", "Lcom/sun/org/apache/bcel/internal/generic/BasicType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, VOID)},
	{"BOOLEAN", "Lcom/sun/org/apache/bcel/internal/generic/BasicType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, BOOLEAN)},
	{"INT", "Lcom/sun/org/apache/bcel/internal/generic/BasicType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, INT)},
	{"SHORT", "Lcom/sun/org/apache/bcel/internal/generic/BasicType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, SHORT)},
	{"BYTE", "Lcom/sun/org/apache/bcel/internal/generic/BasicType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, BYTE)},
	{"LONG", "Lcom/sun/org/apache/bcel/internal/generic/BasicType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, LONG)},
	{"DOUBLE", "Lcom/sun/org/apache/bcel/internal/generic/BasicType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, DOUBLE)},
	{"FLOAT", "Lcom/sun/org/apache/bcel/internal/generic/BasicType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, FLOAT)},
	{"CHAR", "Lcom/sun/org/apache/bcel/internal/generic/BasicType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, CHAR)},
	{"OBJECT", "Lcom/sun/org/apache/bcel/internal/generic/ObjectType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, OBJECT)},
	{"CLASS", "Lcom/sun/org/apache/bcel/internal/generic/ObjectType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, CLASS)},
	{"STRING", "Lcom/sun/org/apache/bcel/internal/generic/ObjectType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, STRING)},
	{"STRINGBUFFER", "Lcom/sun/org/apache/bcel/internal/generic/ObjectType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, STRINGBUFFER)},
	{"THROWABLE", "Lcom/sun/org/apache/bcel/internal/generic/ObjectType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, THROWABLE)},
	{"NO_ARGS", "[Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, NO_ARGS)},
	{"NULL", "Lcom/sun/org/apache/bcel/internal/generic/ReferenceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, NULL)},
	{"UNKNOWN", "Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, UNKNOWN)},
	{"consumed_chars", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Type, consumed_chars)},
	{}
};

$MethodInfo _Type_MethodInfo_[] = {
	{"<init>", "(BLjava/lang/String;)V", nullptr, $PROTECTED, $method(Type, init$, void, int8_t, $String*)},
	{"consumed", "(I)I", nullptr, $STATIC, $staticMethod(Type, consumed, int32_t, int32_t)},
	{"encode", "(II)I", nullptr, $STATIC, $staticMethod(Type, encode, int32_t, int32_t, int32_t)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Type, equals, bool, Object$*)},
	{"getArgumentTypes", "(Ljava/lang/String;)[Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC | $STATIC, $staticMethod(Type, getArgumentTypes, $TypeArray*, $String*)},
	{"getArgumentTypesSize", "(Ljava/lang/String;)I", nullptr, $STATIC, $staticMethod(Type, getArgumentTypesSize, int32_t, $String*)},
	{"getMethodSignature", "(Lcom/sun/org/apache/bcel/internal/generic/Type;[Lcom/sun/org/apache/bcel/internal/generic/Type;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Type, getMethodSignature, $String*, Type*, $TypeArray*)},
	{"getReturnType", "(Ljava/lang/String;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC | $STATIC, $staticMethod(Type, getReturnType, Type*, $String*)},
	{"getReturnTypeSize", "(Ljava/lang/String;)I", nullptr, $STATIC, $staticMethod(Type, getReturnTypeSize, int32_t, $String*)},
	{"getSignature", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Type, getSignature, $String*)},
	{"getSignature", "(Ljava/lang/reflect/Method;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Type, getSignature, $String*, $Method*)},
	{"getSize", "()I", nullptr, $PUBLIC, $virtualMethod(Type, getSize, int32_t)},
	{"getType", "()B", nullptr, $PUBLIC, $virtualMethod(Type, getType, int8_t)},
	{"getType", "(Ljava/lang/String;)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC | $STATIC, $staticMethod(Type, getType, Type*, $String*), "java.lang.StringIndexOutOfBoundsException"},
	{"getType", "(Ljava/lang/Class;)Lcom/sun/org/apache/bcel/internal/generic/Type;", "(Ljava/lang/Class<*>;)Lcom/sun/org/apache/bcel/internal/generic/Type;", $PUBLIC | $STATIC, $staticMethod(Type, getType, Type*, $Class*)},
	{"getTypeSize", "(Ljava/lang/String;)I", nullptr, $STATIC, $staticMethod(Type, getTypeSize, int32_t, $String*), "java.lang.StringIndexOutOfBoundsException"},
	{"getTypes", "([Ljava/lang/Class;)[Lcom/sun/org/apache/bcel/internal/generic/Type;", "([Ljava/lang/Class<*>;)[Lcom/sun/org/apache/bcel/internal/generic/Type;", $PUBLIC | $STATIC, $staticMethod(Type, getTypes, $TypeArray*, $ClassArray*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Type, hashCode, int32_t)},
	{"normalizeForStackOrLocal", "()Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(Type, normalizeForStackOrLocal, Type*)},
	{"setSignature", "(Ljava/lang/String;)V", nullptr, 0, $virtualMethod(Type, setSignature, void, $String*)},
	{"size", "(I)I", nullptr, $STATIC, $staticMethod(Type, size, int32_t, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Type, toString, $String*)},
	{"unwrap", "(Ljava/lang/ThreadLocal;)I", "(Ljava/lang/ThreadLocal<Ljava/lang/Integer;>;)I", $PRIVATE | $STATIC, $staticMethod(Type, unwrap, int32_t, $ThreadLocal*)},
	{"wrap", "(Ljava/lang/ThreadLocal;I)V", "(Ljava/lang/ThreadLocal<Ljava/lang/Integer;>;I)V", $PRIVATE | $STATIC, $staticMethod(Type, wrap, void, $ThreadLocal*, int32_t)},
	{}
};

$InnerClassInfo _Type_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.generic.Type$3", nullptr, nullptr, 0},
	{"com.sun.org.apache.bcel.internal.generic.Type$2", nullptr, nullptr, 0},
	{"com.sun.org.apache.bcel.internal.generic.Type$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Type_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.Type",
	"java.lang.Object",
	nullptr,
	_Type_FieldInfo_,
	_Type_MethodInfo_,
	nullptr,
	nullptr,
	_Type_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.generic.Type$3,com.sun.org.apache.bcel.internal.generic.Type$2,com.sun.org.apache.bcel.internal.generic.Type$1"
};

$Object* allocate$Type($Class* clazz) {
	return $of($alloc(Type));
}

$BasicType* Type::VOID = nullptr;
$BasicType* Type::BOOLEAN = nullptr;
$BasicType* Type::INT = nullptr;
$BasicType* Type::SHORT = nullptr;
$BasicType* Type::BYTE = nullptr;
$BasicType* Type::LONG = nullptr;
$BasicType* Type::DOUBLE = nullptr;
$BasicType* Type::FLOAT = nullptr;
$BasicType* Type::CHAR = nullptr;
$ObjectType* Type::OBJECT = nullptr;
$ObjectType* Type::CLASS = nullptr;
$ObjectType* Type::STRING = nullptr;
$ObjectType* Type::STRINGBUFFER = nullptr;
$ObjectType* Type::THROWABLE = nullptr;
$TypeArray* Type::NO_ARGS = nullptr;
$ReferenceType* Type::NULL = nullptr;
Type* Type::UNKNOWN = nullptr;
$ThreadLocal* Type::consumed_chars = nullptr;

void Type::init$(int8_t t, $String* s) {
	this->type = t;
	$set(this, signature, s);
}

int32_t Type::hashCode() {
	return this->type ^ $nc(this->signature)->hashCode();
}

bool Type::equals(Object$* o) {
	if ($instanceOf(Type, o)) {
		$var(Type, t, $cast(Type, o));
		return (this->type == $nc(t)->type) && $nc(this->signature)->equals(t->signature);
	}
	return false;
}

$String* Type::getSignature() {
	return this->signature;
}

int8_t Type::getType() {
	return this->type;
}

Type* Type::normalizeForStackOrLocal() {
	if ($equals(this, Type::BOOLEAN) || $equals(this, Type::BYTE) || $equals(this, Type::SHORT) || $equals(this, Type::CHAR)) {
		return Type::INT;
	}
	return this;
}

int32_t Type::getSize() {
	switch (this->type) {
	case $Const::T_DOUBLE:
		{}
	case $Const::T_LONG:
		{
			return 2;
		}
	case $Const::T_VOID:
		{
			return 0;
		}
	default:
		{
			return 1;
		}
	}
}

$String* Type::toString() {
	return (this->equals(Type::NULL) || (this->type >= $Const::T_UNKNOWN)) ? this->signature : $Utility::signatureToString(this->signature, false);
}

$String* Type::getMethodSignature(Type* return_type, $TypeArray* arg_types) {
	$init(Type);
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder, "("_s));
	if (arg_types != nullptr) {
		{
			$var($TypeArray, arr$, arg_types);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var(Type, arg_type, arr$->get(i$));
				{
					buf->append($($nc(arg_type)->getSignature()));
				}
			}
		}
	}
	buf->append(u')');
	buf->append($($nc(return_type)->getSignature()));
	return buf->toString();
}

int32_t Type::unwrap($ThreadLocal* tl) {
	$init(Type);
	return $nc(($cast($Integer, $($nc(tl)->get()))))->intValue();
}

void Type::wrap($ThreadLocal* tl, int32_t value) {
	$init(Type);
	$nc(tl)->set($($Integer::valueOf(value)));
}

Type* Type::getType($String* signature) {
	$init(Type);
	$useLocalCurrentObjectStackCache();
	int8_t type = $Utility::typeOfSignature(signature);
	if (type <= $Const::T_VOID) {
		wrap(Type::consumed_chars, 1);
		return $BasicType::getType(type);
	} else if (type == $Const::T_ARRAY) {
		int32_t dim = 0;
		do {
			++dim;
		} while ($nc(signature)->charAt(dim) == u'[');
		$var(Type, t, getType($(signature->substring(dim))));
		int32_t _temp = unwrap(Type::consumed_chars) + dim;
		wrap(Type::consumed_chars, _temp);
		return $new($ArrayType, t, dim);
	} else {
		$var($String, parsedSignature, $Utility::typeSignatureToString(signature, false));
		wrap(Type::consumed_chars, $nc(parsedSignature)->length() + 2);
		return $ObjectType::getInstance($($nc(parsedSignature)->replace(u'/', u'.')));
	}
}

Type* Type::getReturnType($String* signature) {
	$init(Type);
	$useLocalCurrentObjectStackCache();
	try {
		int32_t index = $nc(signature)->lastIndexOf((int32_t)u')') + 1;
		return getType($(signature->substring(index)));
	} catch ($StringIndexOutOfBoundsException& e) {
		$throwNew($ClassFormatException, $$str({"Invalid method signature: "_s, signature}), e);
	}
	$shouldNotReachHere();
}

$TypeArray* Type::getArgumentTypes($String* signature) {
	$init(Type);
	$useLocalCurrentObjectStackCache();
	$var($List, vec, $new($ArrayList));
	int32_t index = 0;
	$var($TypeArray, types, nullptr);
	try {
		index = $nc(signature)->indexOf((int32_t)u'(') + 1;
		if (index <= 0) {
			$throwNew($ClassFormatException, $$str({"Invalid method signature: "_s, signature}));
		}
		while (signature->charAt(index) != u')') {
			vec->add($(getType($(signature->substring(index)))));
			index += unwrap(Type::consumed_chars);
		}
	} catch ($StringIndexOutOfBoundsException& e) {
		$throwNew($ClassFormatException, $$str({"Invalid method signature: "_s, signature}), e);
	}
	$assign(types, $new($TypeArray, vec->size()));
	vec->toArray(types);
	return types;
}

Type* Type::getType($Class* cl) {
	$init(Type);
	$useLocalCurrentObjectStackCache();
	if (cl == nullptr) {
		$throwNew($IllegalArgumentException, "Class must not be null"_s);
	}
	if ($nc(cl)->isArray()) {
		return getType($(cl->getName()));
	} else if (cl->isPrimitive()) {
		$init($Integer);
		if (cl == $Integer::TYPE) {
			return Type::INT;
		} else {
			$init($Void);
			if (cl == $Void::TYPE) {
				return Type::VOID;
			} else {
				$init($Double);
				if (cl == $Double::TYPE) {
					return Type::DOUBLE;
				} else {
					$init($Float);
					if (cl == $Float::TYPE) {
						return Type::FLOAT;
					} else {
						$init($Boolean);
						if (cl == $Boolean::TYPE) {
							return Type::BOOLEAN;
						} else {
							$init($Byte);
							if (cl == $Byte::TYPE) {
								return Type::BYTE;
							} else {
								$init($Short);
								if (cl == $Short::TYPE) {
									return Type::SHORT;
								} else {
									if (cl == $Byte::TYPE) {
										return Type::BYTE;
									} else {
										$init($Long);
										if (cl == $Long::TYPE) {
											return Type::LONG;
										} else {
											$init($Character);
											if (cl == $Character::TYPE) {
												return Type::CHAR;
											} else {
												$throwNew($IllegalStateException, $$str({"Unknown primitive type "_s, cl}));
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	} else {
		return $ObjectType::getInstance($(cl->getName()));
	}
}

$TypeArray* Type::getTypes($ClassArray* classes) {
	$init(Type);
	$useLocalCurrentObjectStackCache();
	$var($TypeArray, ret, $new($TypeArray, $nc(classes)->length));
	for (int32_t i = 0; i < ret->length; ++i) {
		ret->set(i, $(getType(classes->get(i))));
	}
	return ret;
}

$String* Type::getSignature($Method* meth) {
	$init(Type);
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder, "("_s));
	$var($ClassArray, params, $nc(meth)->getParameterTypes());
	{
		$var($ClassArray, arr$, params);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Class* param = arr$->get(i$);
			{
				sb->append($($nc($(getType(param)))->getSignature()));
			}
		}
	}
	sb->append(")"_s);
	sb->append($($nc($(getType(meth->getReturnType())))->getSignature()));
	return sb->toString();
}

int32_t Type::size(int32_t coded) {
	$init(Type);
	return (int32_t)(coded & (uint32_t)3);
}

int32_t Type::consumed(int32_t coded) {
	$init(Type);
	return coded >> 2;
}

int32_t Type::encode(int32_t size, int32_t consumed) {
	$init(Type);
	return (consumed << 2) | size;
}

int32_t Type::getArgumentTypesSize($String* signature) {
	$init(Type);
	$useLocalCurrentObjectStackCache();
	int32_t res = 0;
	int32_t index = 0;
	try {
		index = $nc(signature)->indexOf((int32_t)u'(') + 1;
		if (index <= 0) {
			$throwNew($ClassFormatException, $$str({"Invalid method signature: "_s, signature}));
		}
		while (signature->charAt(index) != u')') {
			int32_t coded = getTypeSize($(signature->substring(index)));
			res += size(coded);
			index += consumed(coded);
		}
	} catch ($StringIndexOutOfBoundsException& e) {
		$throwNew($ClassFormatException, $$str({"Invalid method signature: "_s, signature}), e);
	}
	return res;
}

int32_t Type::getTypeSize($String* signature) {
	$init(Type);
	$useLocalCurrentObjectStackCache();
	int8_t type = $Utility::typeOfSignature(signature);
	if (type <= $Const::T_VOID) {
		return encode($nc($($BasicType::getType(type)))->getSize(), 1);
	} else if (type == $Const::T_ARRAY) {
		int32_t dim = 0;
		do {
			++dim;
		} while ($nc(signature)->charAt(dim) == u'[');
		int32_t consumed = Type::consumed(getTypeSize($(signature->substring(dim))));
		return encode(1, dim + consumed);
	} else {
		int32_t index = $nc(signature)->indexOf((int32_t)u';');
		if (index < 0) {
			$throwNew($ClassFormatException, $$str({"Invalid signature: "_s, signature}));
		}
		return encode(1, index + 1);
	}
}

int32_t Type::getReturnTypeSize($String* signature) {
	$init(Type);
	int32_t index = $nc(signature)->lastIndexOf((int32_t)u')') + 1;
	return Type::size(getTypeSize($(signature->substring(index))));
}

void Type::setSignature($String* signature) {
	$set(this, signature, signature);
}

void clinit$Type($Class* class$) {
	$assignStatic(Type::VOID, $new($BasicType, $Const::T_VOID));
	$assignStatic(Type::BOOLEAN, $new($BasicType, $Const::T_BOOLEAN));
	$assignStatic(Type::INT, $new($BasicType, $Const::T_INT));
	$assignStatic(Type::SHORT, $new($BasicType, $Const::T_SHORT));
	$assignStatic(Type::BYTE, $new($BasicType, $Const::T_BYTE));
	$assignStatic(Type::LONG, $new($BasicType, $Const::T_LONG));
	$assignStatic(Type::DOUBLE, $new($BasicType, $Const::T_DOUBLE));
	$assignStatic(Type::FLOAT, $new($BasicType, $Const::T_FLOAT));
	$assignStatic(Type::CHAR, $new($BasicType, $Const::T_CHAR));
	$assignStatic(Type::OBJECT, $new($ObjectType, "java.lang.Object"_s));
	$assignStatic(Type::CLASS, $new($ObjectType, "java.lang.Class"_s));
	$assignStatic(Type::STRING, $new($ObjectType, "java.lang.String"_s));
	$assignStatic(Type::STRINGBUFFER, $new($ObjectType, "java.lang.StringBuffer"_s));
	$assignStatic(Type::THROWABLE, $new($ObjectType, "java.lang.Throwable"_s));
	$assignStatic(Type::NO_ARGS, $new($TypeArray, 0));
	$assignStatic(Type::NULL, $new($Type$1));
	$assignStatic(Type::UNKNOWN, $new($Type$2, $Const::T_UNKNOWN, "<unknown object>"_s));
	$assignStatic(Type::consumed_chars, $new($Type$3));
}

Type::Type() {
}

$Class* Type::load$($String* name, bool initialize) {
	$loadClass(Type, name, initialize, &_Type_ClassInfo_, clinit$Type, allocate$Type);
	return class$;
}

$Class* Type::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com