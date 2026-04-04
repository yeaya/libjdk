#include <com/sun/org/apache/bcel/internal/classfile/ConstantObject.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <jcpp.h>

using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$Class* ConstantObject::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getConstantValue", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ConstantObject, getConstantValue, $Object*, $ConstantPool*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.bcel.internal.classfile.ConstantObject",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ConstantObject, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConstantObject);
	});
	return class$;
}

$Class* ConstantObject::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com