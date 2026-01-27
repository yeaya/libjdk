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

$MethodInfo _ConstantObject_MethodInfo_[] = {
	{"getConstantValue", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ConstantObject, getConstantValue, $Object*, $ConstantPool*)},
	{}
};

$ClassInfo _ConstantObject_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.classfile.ConstantObject",
	nullptr,
	nullptr,
	nullptr,
	_ConstantObject_MethodInfo_
};

$Object* allocate$ConstantObject($Class* clazz) {
	return $of($alloc(ConstantObject));
}

$Class* ConstantObject::load$($String* name, bool initialize) {
	$loadClass(ConstantObject, name, initialize, &_ConstantObject_ClassInfo_, allocate$ConstantObject);
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