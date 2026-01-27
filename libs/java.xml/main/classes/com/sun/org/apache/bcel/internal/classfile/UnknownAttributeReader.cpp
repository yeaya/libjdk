#include <com/sun/org/apache/bcel/internal/classfile/UnknownAttributeReader.h>

#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <java/io/DataInput.h>
#include <jcpp.h>

using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
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

$MethodInfo _UnknownAttributeReader_MethodInfo_[] = {
	{"createAttribute", "(IILjava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UnknownAttributeReader, createAttribute, $Attribute*, int32_t, int32_t, $DataInput*, $ConstantPool*)},
	{}
};

$ClassInfo _UnknownAttributeReader_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.classfile.UnknownAttributeReader",
	nullptr,
	nullptr,
	nullptr,
	_UnknownAttributeReader_MethodInfo_
};

$Object* allocate$UnknownAttributeReader($Class* clazz) {
	return $of($alloc(UnknownAttributeReader));
}

$Class* UnknownAttributeReader::load$($String* name, bool initialize) {
	$loadClass(UnknownAttributeReader, name, initialize, &_UnknownAttributeReader_ClassInfo_, allocate$UnknownAttributeReader);
	return class$;
}

$Class* UnknownAttributeReader::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com