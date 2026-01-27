#include <com/sun/org/apache/bcel/internal/classfile/RuntimeInvisibleAnnotations.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Annotations.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef ATTR_RUNTIME_INVISIBLE_ANNOTATIONS

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Annotations = ::com::sun::org::apache::bcel::internal::classfile::Annotations;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $DataInput = ::java::io::DataInput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$MethodInfo _RuntimeInvisibleAnnotations_MethodInfo_[] = {
	{"<init>", "(IILjava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(RuntimeInvisibleAnnotations, init$, void, int32_t, int32_t, $DataInput*, $ConstantPool*), "java.io.IOException"},
	{"copy", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC, $virtualMethod(RuntimeInvisibleAnnotations, copy, $Attribute*, $ConstantPool*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(RuntimeInvisibleAnnotations, dump, void, $DataOutputStream*), "java.io.IOException"},
	{}
};

$ClassInfo _RuntimeInvisibleAnnotations_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.RuntimeInvisibleAnnotations",
	"com.sun.org.apache.bcel.internal.classfile.Annotations",
	nullptr,
	nullptr,
	_RuntimeInvisibleAnnotations_MethodInfo_
};

$Object* allocate$RuntimeInvisibleAnnotations($Class* clazz) {
	return $of($alloc(RuntimeInvisibleAnnotations));
}

void RuntimeInvisibleAnnotations::init$(int32_t name_index, int32_t length, $DataInput* input, $ConstantPool* constant_pool) {
	$Annotations::init$($Const::ATTR_RUNTIME_INVISIBLE_ANNOTATIONS, name_index, length, input, constant_pool, false);
}

$Attribute* RuntimeInvisibleAnnotations::copy($ConstantPool* constant_pool) {
	return $cast($Attribute, clone());
}

void RuntimeInvisibleAnnotations::dump($DataOutputStream* dos) {
	$Annotations::dump(dos);
	writeAnnotations(dos);
}

RuntimeInvisibleAnnotations::RuntimeInvisibleAnnotations() {
}

$Class* RuntimeInvisibleAnnotations::load$($String* name, bool initialize) {
	$loadClass(RuntimeInvisibleAnnotations, name, initialize, &_RuntimeInvisibleAnnotations_ClassInfo_, allocate$RuntimeInvisibleAnnotations);
	return class$;
}

$Class* RuntimeInvisibleAnnotations::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com