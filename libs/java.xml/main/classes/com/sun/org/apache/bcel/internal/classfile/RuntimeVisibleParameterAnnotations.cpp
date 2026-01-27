#include <com/sun/org/apache/bcel/internal/classfile/RuntimeVisibleParameterAnnotations.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ParameterAnnotations.h>
#include <java/io/DataInput.h>
#include <jcpp.h>

#undef ATTR_RUNTIME_VISIBLE_PARAMETER_ANNOTATIONS

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ParameterAnnotations = ::com::sun::org::apache::bcel::internal::classfile::ParameterAnnotations;
using $DataInput = ::java::io::DataInput;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$MethodInfo _RuntimeVisibleParameterAnnotations_MethodInfo_[] = {
	{"<init>", "(IILjava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(RuntimeVisibleParameterAnnotations, init$, void, int32_t, int32_t, $DataInput*, $ConstantPool*), "java.io.IOException"},
	{}
};

$ClassInfo _RuntimeVisibleParameterAnnotations_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.RuntimeVisibleParameterAnnotations",
	"com.sun.org.apache.bcel.internal.classfile.ParameterAnnotations",
	nullptr,
	nullptr,
	_RuntimeVisibleParameterAnnotations_MethodInfo_
};

$Object* allocate$RuntimeVisibleParameterAnnotations($Class* clazz) {
	return $of($alloc(RuntimeVisibleParameterAnnotations));
}

void RuntimeVisibleParameterAnnotations::init$(int32_t name_index, int32_t length, $DataInput* input, $ConstantPool* constant_pool) {
	$ParameterAnnotations::init$($Const::ATTR_RUNTIME_VISIBLE_PARAMETER_ANNOTATIONS, name_index, length, input, constant_pool);
}

RuntimeVisibleParameterAnnotations::RuntimeVisibleParameterAnnotations() {
}

$Class* RuntimeVisibleParameterAnnotations::load$($String* name, bool initialize) {
	$loadClass(RuntimeVisibleParameterAnnotations, name, initialize, &_RuntimeVisibleParameterAnnotations_ClassInfo_, allocate$RuntimeVisibleParameterAnnotations);
	return class$;
}

$Class* RuntimeVisibleParameterAnnotations::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com