#include <com/sun/org/apache/bcel/internal/classfile/AttributeReader.h>

#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <java/io/DataInputStream.h>
#include <jcpp.h>

using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $DataInputStream = ::java::io::DataInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$CompoundAttribute _AttributeReader_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _AttributeReader_MethodInfo_[] = {
	{"createAttribute", "(IILjava/io/DataInputStream;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributeReader, createAttribute, $Attribute*, int32_t, int32_t, $DataInputStream*, $ConstantPool*)},
	{}
};

$ClassInfo _AttributeReader_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.classfile.AttributeReader",
	nullptr,
	nullptr,
	nullptr,
	_AttributeReader_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_AttributeReader_Annotations_
};

$Object* allocate$AttributeReader($Class* clazz) {
	return $of($alloc(AttributeReader));
}

$Class* AttributeReader::load$($String* name, bool initialize) {
	$loadClass(AttributeReader, name, initialize, &_AttributeReader_ClassInfo_, allocate$AttributeReader);
	return class$;
}

$Class* AttributeReader::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com