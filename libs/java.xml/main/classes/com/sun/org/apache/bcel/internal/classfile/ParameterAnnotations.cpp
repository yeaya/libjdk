#include <com/sun/org/apache/bcel/internal/classfile/ParameterAnnotations.h>

#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ParameterAnnotationEntry.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

using $ParameterAnnotationEntryArray = $Array<::com::sun::org::apache::bcel::internal::classfile::ParameterAnnotationEntry>;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ParameterAnnotationEntry = ::com::sun::org::apache::bcel::internal::classfile::ParameterAnnotationEntry;
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $DataInput = ::java::io::DataInput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _ParameterAnnotations_FieldInfo_[] = {
	{"parameterAnnotationTable", "[Lcom/sun/org/apache/bcel/internal/classfile/ParameterAnnotationEntry;", nullptr, $PRIVATE, $field(ParameterAnnotations, parameterAnnotationTable)},
	{}
};

$MethodInfo _ParameterAnnotations_MethodInfo_[] = {
	{"<init>", "(BIILjava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, 0, $method(ParameterAnnotations, init$, void, int8_t, int32_t, int32_t, $DataInput*, $ConstantPool*), "java.io.IOException"},
	{"<init>", "(BII[Lcom/sun/org/apache/bcel/internal/classfile/ParameterAnnotationEntry;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(ParameterAnnotations, init$, void, int8_t, int32_t, int32_t, $ParameterAnnotationEntryArray*, $ConstantPool*)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ParameterAnnotations, accept, void, $Visitor*)},
	{"copy", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC, $virtualMethod(ParameterAnnotations, copy, $Attribute*, $ConstantPool*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(ParameterAnnotations, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getParameterAnnotationEntries", "()[Lcom/sun/org/apache/bcel/internal/classfile/ParameterAnnotationEntry;", nullptr, $PUBLIC, $virtualMethod(ParameterAnnotations, getParameterAnnotationEntries, $ParameterAnnotationEntryArray*)},
	{"getParameterAnnotationTable", "()[Lcom/sun/org/apache/bcel/internal/classfile/ParameterAnnotationEntry;", nullptr, $PUBLIC | $FINAL, $method(ParameterAnnotations, getParameterAnnotationTable, $ParameterAnnotationEntryArray*)},
	{"setParameterAnnotationTable", "([Lcom/sun/org/apache/bcel/internal/classfile/ParameterAnnotationEntry;)V", nullptr, $PUBLIC | $FINAL, $method(ParameterAnnotations, setParameterAnnotationTable, void, $ParameterAnnotationEntryArray*)},
	{}
};

$ClassInfo _ParameterAnnotations_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.classfile.ParameterAnnotations",
	"com.sun.org.apache.bcel.internal.classfile.Attribute",
	nullptr,
	_ParameterAnnotations_FieldInfo_,
	_ParameterAnnotations_MethodInfo_
};

$Object* allocate$ParameterAnnotations($Class* clazz) {
	return $of($alloc(ParameterAnnotations));
}

void ParameterAnnotations::init$(int8_t parameter_annotation_type, int32_t name_index, int32_t length, $DataInput* input, $ConstantPool* constant_pool) {
	$useLocalCurrentObjectStackCache();
	ParameterAnnotations::init$(parameter_annotation_type, name_index, length, ($ParameterAnnotationEntryArray*)nullptr, constant_pool);
	int32_t num_parameters = $nc(input)->readUnsignedByte();
	$set(this, parameterAnnotationTable, $new($ParameterAnnotationEntryArray, num_parameters));
	for (int32_t i = 0; i < num_parameters; ++i) {
		$nc(this->parameterAnnotationTable)->set(i, $$new($ParameterAnnotationEntry, input, constant_pool));
	}
}

void ParameterAnnotations::init$(int8_t parameterAnnotationType, int32_t nameIndex, int32_t length, $ParameterAnnotationEntryArray* parameterAnnotationTable, $ConstantPool* constantPool) {
	$Attribute::init$(parameterAnnotationType, nameIndex, length, constantPool);
	$set(this, parameterAnnotationTable, parameterAnnotationTable);
}

void ParameterAnnotations::accept($Visitor* v) {
	$nc(v)->visitParameterAnnotation(this);
}

void ParameterAnnotations::setParameterAnnotationTable($ParameterAnnotationEntryArray* parameterAnnotationTable) {
	$set(this, parameterAnnotationTable, parameterAnnotationTable);
}

$ParameterAnnotationEntryArray* ParameterAnnotations::getParameterAnnotationTable() {
	return this->parameterAnnotationTable;
}

$ParameterAnnotationEntryArray* ParameterAnnotations::getParameterAnnotationEntries() {
	return this->parameterAnnotationTable;
}

void ParameterAnnotations::dump($DataOutputStream* dos) {
	$useLocalCurrentObjectStackCache();
	$Attribute::dump(dos);
	$nc(dos)->writeByte($nc(this->parameterAnnotationTable)->length);
	{
		$var($ParameterAnnotationEntryArray, arr$, this->parameterAnnotationTable);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ParameterAnnotationEntry, element, arr$->get(i$));
			{
				$nc(element)->dump(dos);
			}
		}
	}
}

$Attribute* ParameterAnnotations::copy($ConstantPool* constant_pool) {
	return $cast($Attribute, clone());
}

ParameterAnnotations::ParameterAnnotations() {
}

$Class* ParameterAnnotations::load$($String* name, bool initialize) {
	$loadClass(ParameterAnnotations, name, initialize, &_ParameterAnnotations_ClassInfo_, allocate$ParameterAnnotations);
	return class$;
}

$Class* ParameterAnnotations::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com