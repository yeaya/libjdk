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

void InstructionFactory$MethodObject::init$($String* c, $String* n, $Type* r, $TypeArray* a) {
	$set(this, class_name, c);
	$set(this, name, n);
	$set(this, result_type, r);
	$set(this, arg_types, a);
}

InstructionFactory$MethodObject::InstructionFactory$MethodObject() {
}

$Class* InstructionFactory$MethodObject::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"arg_types", "[Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $FINAL, $field(InstructionFactory$MethodObject, arg_types)},
		{"result_type", "Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $FINAL, $field(InstructionFactory$MethodObject, result_type)},
		{"class_name", "Ljava/lang/String;", nullptr, $FINAL, $field(InstructionFactory$MethodObject, class_name)},
		{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(InstructionFactory$MethodObject, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/Type;[Lcom/sun/org/apache/bcel/internal/generic/Type;)V", nullptr, 0, $method(InstructionFactory$MethodObject, init$, void, $String*, $String*, $Type*, $TypeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.bcel.internal.generic.InstructionFactory$MethodObject", "com.sun.org.apache.bcel.internal.generic.InstructionFactory", "MethodObject", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.bcel.internal.generic.InstructionFactory$MethodObject",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.bcel.internal.generic.InstructionFactory"
	};
	$loadClass(InstructionFactory$MethodObject, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InstructionFactory$MethodObject);
	});
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