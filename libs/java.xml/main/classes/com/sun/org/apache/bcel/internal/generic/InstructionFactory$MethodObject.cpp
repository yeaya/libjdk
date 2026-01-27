#include <com/sun/org/apache/bcel/internal/generic/InstructionFactory$MethodObject.h>

#include <com/sun/org/apache/bcel/internal/generic/InstructionFactory.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <jcpp.h>

using $TypeArray = $Array<::com::sun::org::apache::bcel::internal::generic::Type>;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _InstructionFactory$MethodObject_FieldInfo_[] = {
	{"arg_types", "[Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $FINAL, $field(InstructionFactory$MethodObject, arg_types)},
	{"result_type", "Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $FINAL, $field(InstructionFactory$MethodObject, result_type)},
	{"class_name", "Ljava/lang/String;", nullptr, $FINAL, $field(InstructionFactory$MethodObject, class_name)},
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(InstructionFactory$MethodObject, name)},
	{}
};

$MethodInfo _InstructionFactory$MethodObject_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/Type;[Lcom/sun/org/apache/bcel/internal/generic/Type;)V", nullptr, 0, $method(InstructionFactory$MethodObject, init$, void, $String*, $String*, $Type*, $TypeArray*)},
	{}
};

$InnerClassInfo _InstructionFactory$MethodObject_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.generic.InstructionFactory$MethodObject", "com.sun.org.apache.bcel.internal.generic.InstructionFactory", "MethodObject", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _InstructionFactory$MethodObject_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.InstructionFactory$MethodObject",
	"java.lang.Object",
	nullptr,
	_InstructionFactory$MethodObject_FieldInfo_,
	_InstructionFactory$MethodObject_MethodInfo_,
	nullptr,
	nullptr,
	_InstructionFactory$MethodObject_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.generic.InstructionFactory"
};

$Object* allocate$InstructionFactory$MethodObject($Class* clazz) {
	return $of($alloc(InstructionFactory$MethodObject));
}

void InstructionFactory$MethodObject::init$($String* c, $String* n, $Type* r, $TypeArray* a) {
	$set(this, class_name, c);
	$set(this, name, n);
	$set(this, result_type, r);
	$set(this, arg_types, a);
}

InstructionFactory$MethodObject::InstructionFactory$MethodObject() {
}

$Class* InstructionFactory$MethodObject::load$($String* name, bool initialize) {
	$loadClass(InstructionFactory$MethodObject, name, initialize, &_InstructionFactory$MethodObject_ClassInfo_, allocate$InstructionFactory$MethodObject);
	return class$;
}

$Class* InstructionFactory$MethodObject::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com