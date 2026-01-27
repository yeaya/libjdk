#include <com/sun/org/apache/bcel/internal/generic/ElementValueGen.h>

#include <com/sun/org/apache/bcel/internal/classfile/AnnotationElementValue.h>
#include <com/sun/org/apache/bcel/internal/classfile/AnnotationEntry.h>
#include <com/sun/org/apache/bcel/internal/classfile/ArrayElementValue.h>
#include <com/sun/org/apache/bcel/internal/classfile/ClassElementValue.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ElementValue.h>
#include <com/sun/org/apache/bcel/internal/classfile/EnumElementValue.h>
#include <com/sun/org/apache/bcel/internal/classfile/SimpleElementValue.h>
#include <com/sun/org/apache/bcel/internal/generic/AnnotationElementValueGen.h>
#include <com/sun/org/apache/bcel/internal/generic/AnnotationEntryGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ArrayElementValueGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassElementValueGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/EnumElementValueGen.h>
#include <com/sun/org/apache/bcel/internal/generic/SimpleElementValueGen.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/UnsupportedOperationException.h>
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
using $ElementValue = ::com::sun::org::apache::bcel::internal::classfile::ElementValue;
using $EnumElementValue = ::com::sun::org::apache::bcel::internal::classfile::EnumElementValue;
using $SimpleElementValue = ::com::sun::org::apache::bcel::internal::classfile::SimpleElementValue;
using $AnnotationElementValueGen = ::com::sun::org::apache::bcel::internal::generic::AnnotationElementValueGen;
using $AnnotationEntryGen = ::com::sun::org::apache::bcel::internal::generic::AnnotationEntryGen;
using $ArrayElementValueGen = ::com::sun::org::apache::bcel::internal::generic::ArrayElementValueGen;
using $ClassElementValueGen = ::com::sun::org::apache::bcel::internal::generic::ClassElementValueGen;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $EnumElementValueGen = ::com::sun::org::apache::bcel::internal::generic::EnumElementValueGen;
using $SimpleElementValueGen = ::com::sun::org::apache::bcel::internal::generic::SimpleElementValueGen;
using $DataInput = ::java::io::DataInput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _ElementValueGen_FieldInfo_[] = {
	{"type", "I", nullptr, $PRIVATE | $FINAL, $field(ElementValueGen, type)},
	{"cpGen", "Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;", nullptr, $PRIVATE | $FINAL, $field(ElementValueGen, cpGen)},
	{"STRING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ElementValueGen, STRING)},
	{"ENUM_CONSTANT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ElementValueGen, ENUM_CONSTANT)},
	{"CLASS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ElementValueGen, CLASS)},
	{"ANNOTATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ElementValueGen, ANNOTATION)},
	{"ARRAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ElementValueGen, ARRAY)},
	{"PRIMITIVE_INT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ElementValueGen, PRIMITIVE_INT)},
	{"PRIMITIVE_BYTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ElementValueGen, PRIMITIVE_BYTE)},
	{"PRIMITIVE_CHAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ElementValueGen, PRIMITIVE_CHAR)},
	{"PRIMITIVE_DOUBLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ElementValueGen, PRIMITIVE_DOUBLE)},
	{"PRIMITIVE_FLOAT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ElementValueGen, PRIMITIVE_FLOAT)},
	{"PRIMITIVE_LONG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ElementValueGen, PRIMITIVE_LONG)},
	{"PRIMITIVE_SHORT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ElementValueGen, PRIMITIVE_SHORT)},
	{"PRIMITIVE_BOOLEAN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ElementValueGen, PRIMITIVE_BOOLEAN)},
	{}
};

$MethodInfo _ElementValueGen_MethodInfo_[] = {
	{"<init>", "(ILcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PROTECTED, $method(ElementValueGen, init$, void, int32_t, $ConstantPoolGen*)},
	{"copy", "(Lcom/sun/org/apache/bcel/internal/classfile/ElementValue;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;Z)Lcom/sun/org/apache/bcel/internal/generic/ElementValueGen;", nullptr, $PUBLIC | $STATIC, $staticMethod(ElementValueGen, copy, ElementValueGen*, $ElementValue*, $ConstantPoolGen*, bool)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ElementValueGen, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getConstantPool", "()Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;", nullptr, $PROTECTED, $virtualMethod(ElementValueGen, getConstantPool, $ConstantPoolGen*)},
	{"getElementValue", "()Lcom/sun/org/apache/bcel/internal/classfile/ElementValue;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ElementValueGen, getElementValue, $ElementValue*)},
	{"getElementValueType", "()I", nullptr, $PUBLIC, $virtualMethod(ElementValueGen, getElementValueType, int32_t)},
	{"readElementValue", "(Ljava/io/DataInput;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/ElementValueGen;", nullptr, $PUBLIC | $STATIC, $staticMethod(ElementValueGen, readElementValue, ElementValueGen*, $DataInput*, $ConstantPoolGen*), "java.io.IOException"},
	{"stringifyValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ElementValueGen, stringifyValue, $String*)},
	{}
};

$ClassInfo _ElementValueGen_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.ElementValueGen",
	"java.lang.Object",
	nullptr,
	_ElementValueGen_FieldInfo_,
	_ElementValueGen_MethodInfo_
};

$Object* allocate$ElementValueGen($Class* clazz) {
	return $of($alloc(ElementValueGen));
}

void ElementValueGen::init$(int32_t type, $ConstantPoolGen* cpGen) {
	this->type = type;
	$set(this, cpGen, cpGen);
}

int32_t ElementValueGen::getElementValueType() {
	return this->type;
}

ElementValueGen* ElementValueGen::readElementValue($DataInput* dis, $ConstantPoolGen* cpGen) {
	$useLocalCurrentObjectStackCache();
	int32_t type = $nc(dis)->readUnsignedByte();
	{
		int32_t numArrayVals = 0;
		$var($ElementValueArray, evalues, nullptr)
		switch (type) {
		case u'B':
			{
				return $new($SimpleElementValueGen, ElementValueGen::PRIMITIVE_BYTE, dis->readUnsignedShort(), cpGen);
			}
		case u'C':
			{
				return $new($SimpleElementValueGen, ElementValueGen::PRIMITIVE_CHAR, dis->readUnsignedShort(), cpGen);
			}
		case u'D':
			{
				return $new($SimpleElementValueGen, ElementValueGen::PRIMITIVE_DOUBLE, dis->readUnsignedShort(), cpGen);
			}
		case u'F':
			{
				return $new($SimpleElementValueGen, ElementValueGen::PRIMITIVE_FLOAT, dis->readUnsignedShort(), cpGen);
			}
		case u'I':
			{
				return $new($SimpleElementValueGen, ElementValueGen::PRIMITIVE_INT, dis->readUnsignedShort(), cpGen);
			}
		case u'J':
			{
				return $new($SimpleElementValueGen, ElementValueGen::PRIMITIVE_LONG, dis->readUnsignedShort(), cpGen);
			}
		case u'S':
			{
				return $new($SimpleElementValueGen, ElementValueGen::PRIMITIVE_SHORT, dis->readUnsignedShort(), cpGen);
			}
		case u'Z':
			{
				return $new($SimpleElementValueGen, ElementValueGen::PRIMITIVE_BOOLEAN, dis->readUnsignedShort(), cpGen);
			}
		case u's':
			{
				return $new($SimpleElementValueGen, ElementValueGen::STRING, dis->readUnsignedShort(), cpGen);
			}
		case u'e':
			{
				int32_t var$0 = dis->readUnsignedShort();
				return $new($EnumElementValueGen, var$0, dis->readUnsignedShort(), cpGen);
			}
		case u'c':
			{
				return $new($ClassElementValueGen, dis->readUnsignedShort(), cpGen);
			}
		case u'@':
			{
				return $new($AnnotationElementValueGen, ElementValueGen::ANNOTATION, $$new($AnnotationEntryGen, $($AnnotationEntry::read(dis, $($nc(cpGen)->getConstantPool()), true)), cpGen, false), cpGen);
			}
		case u'[':
			{
				numArrayVals = dis->readUnsignedShort();
				$assign(evalues, $new($ElementValueArray, numArrayVals));
				for (int32_t j = 0; j < numArrayVals; ++j) {
					$nc(evalues)->set(j, $($ElementValue::readElementValue(dis, $($nc(cpGen)->getConstantPool()))));
				}
				return $new($ArrayElementValueGen, ElementValueGen::ARRAY, evalues, cpGen);
			}
		default:
			{
				$throwNew($IllegalArgumentException, $$str({"Unexpected element value kind in annotation: "_s, $$str(type)}));
			}
		}
	}
}

$ConstantPoolGen* ElementValueGen::getConstantPool() {
	return this->cpGen;
}

ElementValueGen* ElementValueGen::copy($ElementValue* value, $ConstantPoolGen* cpool, bool copyPoolEntries) {
	$useLocalCurrentObjectStackCache();
	switch ($nc(value)->getElementValueType()) {
	case u'B':
		{}
	case u'C':
		{}
	case u'D':
		{}
	case u'F':
		{}
	case u'I':
		{}
	case u'J':
		{}
	case u'S':
		{}
	case u'Z':
		{}
	case u's':
		{
			return $new($SimpleElementValueGen, $cast($SimpleElementValue, value), cpool, copyPoolEntries);
		}
	case u'e':
		{
			return $new($EnumElementValueGen, $cast($EnumElementValue, value), cpool, copyPoolEntries);
		}
	case u'@':
		{
			return $new($AnnotationElementValueGen, $cast($AnnotationElementValue, value), cpool, copyPoolEntries);
		}
	case u'[':
		{
			return $new($ArrayElementValueGen, $cast($ArrayElementValue, value), cpool, copyPoolEntries);
		}
	case u'c':
		{
			return $new($ClassElementValueGen, $cast($ClassElementValue, value), cpool, copyPoolEntries);
		}
	default:
		{
			$throwNew($UnsupportedOperationException, $$str({"Not implemented yet! ("_s, $$str(value->getElementValueType()), ")"_s}));
		}
	}
}

ElementValueGen::ElementValueGen() {
}

$Class* ElementValueGen::load$($String* name, bool initialize) {
	$loadClass(ElementValueGen, name, initialize, &_ElementValueGen_ClassInfo_, allocate$ElementValueGen);
	return class$;
}

$Class* ElementValueGen::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com