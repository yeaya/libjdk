#include <com/sun/org/apache/bcel/internal/classfile/ElementValue.h>

#include <com/sun/org/apache/bcel/internal/classfile/AnnotationElementValue.h>
#include <com/sun/org/apache/bcel/internal/classfile/AnnotationEntry.h>
#include <com/sun/org/apache/bcel/internal/classfile/ArrayElementValue.h>
#include <com/sun/org/apache/bcel/internal/classfile/ClassElementValue.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/EnumElementValue.h>
#include <com/sun/org/apache/bcel/internal/classfile/SimpleElementValue.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef ANNOTATION
#undef ARRAY
#undef CLASS
#undef ENUM_CONSTANT
#undef PRIMITIVE_BOOLEAN
#undef PRIMITIVE_BYTE
#undef PRIMITIVE_CHAR
#undef PRIMITIVE_DOUBLE
#undef PRIMITIVE_FLOAT
#undef PRIMITIVE_INT
#undef PRIMITIVE_LONG
#undef PRIMITIVE_SHORT
#undef STRING

using $ElementValueArray = $Array<::com::sun::org::apache::bcel::internal::classfile::ElementValue>;
using $AnnotationElementValue = ::com::sun::org::apache::bcel::internal::classfile::AnnotationElementValue;
using $AnnotationEntry = ::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry;
using $ArrayElementValue = ::com::sun::org::apache::bcel::internal::classfile::ArrayElementValue;
using $ClassElementValue = ::com::sun::org::apache::bcel::internal::classfile::ClassElementValue;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $EnumElementValue = ::com::sun::org::apache::bcel::internal::classfile::EnumElementValue;
using $SimpleElementValue = ::com::sun::org::apache::bcel::internal::classfile::SimpleElementValue;
using $DataInput = ::java::io::DataInput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _ElementValue_FieldInfo_[] = {
	{"type", "I", nullptr, $PRIVATE | $FINAL, $field(ElementValue, type)},
	{"cpool", "Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;", nullptr, $PRIVATE | $FINAL, $field(ElementValue, cpool)},
	{"STRING", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ElementValue, STRING)},
	{"ENUM_CONSTANT", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ElementValue, ENUM_CONSTANT)},
	{"CLASS", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ElementValue, CLASS)},
	{"ANNOTATION", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ElementValue, ANNOTATION)},
	{"ARRAY", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ElementValue, ARRAY)},
	{"PRIMITIVE_INT", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ElementValue, PRIMITIVE_INT)},
	{"PRIMITIVE_BYTE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ElementValue, PRIMITIVE_BYTE)},
	{"PRIMITIVE_CHAR", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ElementValue, PRIMITIVE_CHAR)},
	{"PRIMITIVE_DOUBLE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ElementValue, PRIMITIVE_DOUBLE)},
	{"PRIMITIVE_FLOAT", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ElementValue, PRIMITIVE_FLOAT)},
	{"PRIMITIVE_LONG", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ElementValue, PRIMITIVE_LONG)},
	{"PRIMITIVE_SHORT", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ElementValue, PRIMITIVE_SHORT)},
	{"PRIMITIVE_BOOLEAN", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ElementValue, PRIMITIVE_BOOLEAN)},
	{}
};

$MethodInfo _ElementValue_MethodInfo_[] = {
	{"<init>", "(ILcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PROTECTED, $method(ElementValue, init$, void, int32_t, $ConstantPool*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ElementValue, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getConstantPool", "()Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;", nullptr, $FINAL, $method(ElementValue, getConstantPool, $ConstantPool*)},
	{"getElementValueType", "()I", nullptr, $PUBLIC, $virtualMethod(ElementValue, getElementValueType, int32_t)},
	{"getType", "()I", nullptr, $FINAL, $method(ElementValue, getType, int32_t)},
	{"readElementValue", "(Ljava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/ElementValue;", nullptr, $PUBLIC | $STATIC, $staticMethod(ElementValue, readElementValue, ElementValue*, $DataInput*, $ConstantPool*), "java.io.IOException"},
	{"stringifyValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ElementValue, stringifyValue, $String*)},
	{"toShortString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ElementValue, toShortString, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ElementValue, toString, $String*)},
	{}
};

$ClassInfo _ElementValue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.classfile.ElementValue",
	"java.lang.Object",
	nullptr,
	_ElementValue_FieldInfo_,
	_ElementValue_MethodInfo_
};

$Object* allocate$ElementValue($Class* clazz) {
	return $of($alloc(ElementValue));
}

$String* ElementValue::toString() {
	return stringifyValue();
}

void ElementValue::init$(int32_t type, $ConstantPool* cpool) {
	this->type = type;
	$set(this, cpool, cpool);
}

int32_t ElementValue::getElementValueType() {
	return this->type;
}

ElementValue* ElementValue::readElementValue($DataInput* input, $ConstantPool* cpool) {
	$useLocalCurrentObjectStackCache();
	int8_t type = $nc(input)->readByte();
	{
		int32_t numArrayVals = 0;
		$var($ElementValueArray, evalues, nullptr)
		switch (type) {
		case ElementValue::PRIMITIVE_BYTE:
			{}
		case ElementValue::PRIMITIVE_CHAR:
			{}
		case ElementValue::PRIMITIVE_DOUBLE:
			{}
		case ElementValue::PRIMITIVE_FLOAT:
			{}
		case ElementValue::PRIMITIVE_INT:
			{}
		case ElementValue::PRIMITIVE_LONG:
			{}
		case ElementValue::PRIMITIVE_SHORT:
			{}
		case ElementValue::PRIMITIVE_BOOLEAN:
			{}
		case ElementValue::STRING:
			{
				return $new($SimpleElementValue, type, input->readUnsignedShort(), cpool);
			}
		case ElementValue::ENUM_CONSTANT:
			{
				int32_t var$0 = (int32_t)ElementValue::ENUM_CONSTANT;
				int32_t var$1 = input->readUnsignedShort();
				return $new($EnumElementValue, var$0, var$1, input->readUnsignedShort(), cpool);
			}
		case ElementValue::CLASS:
			{
				return $new($ClassElementValue, ElementValue::CLASS, input->readUnsignedShort(), cpool);
			}
		case ElementValue::ANNOTATION:
			{
				return $new($AnnotationElementValue, ElementValue::ANNOTATION, $($AnnotationEntry::read(input, cpool, false)), cpool);
			}
		case ElementValue::ARRAY:
			{
				numArrayVals = input->readUnsignedShort();
				$assign(evalues, $new($ElementValueArray, numArrayVals));
				for (int32_t j = 0; j < numArrayVals; ++j) {
					$nc(evalues)->set(j, $(ElementValue::readElementValue(input, cpool)));
				}
				return $new($ArrayElementValue, ElementValue::ARRAY, evalues, cpool);
			}
		default:
			{
				$throwNew($IllegalArgumentException, $$str({"Unexpected element value kind in annotation: "_s, $$str(type)}));
			}
		}
	}
}

$ConstantPool* ElementValue::getConstantPool() {
	return this->cpool;
}

int32_t ElementValue::getType() {
	return this->type;
}

$String* ElementValue::toShortString() {
	return stringifyValue();
}

ElementValue::ElementValue() {
}

$Class* ElementValue::load$($String* name, bool initialize) {
	$loadClass(ElementValue, name, initialize, &_ElementValue_ClassInfo_, allocate$ElementValue);
	return class$;
}

$Class* ElementValue::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com