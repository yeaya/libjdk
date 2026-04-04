#include <com/sun/org/apache/bcel/internal/generic/ClassElementValueGen.h>
#include <com/sun/org/apache/bcel/internal/classfile/ClassElementValue.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/classfile/ElementValue.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ElementValueGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ObjectType.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef CLASS

using $ClassElementValue = ::com::sun::org::apache::bcel::internal::classfile::ClassElementValue;
using $ConstantUtf8 = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8;
using $ElementValue = ::com::sun::org::apache::bcel::internal::classfile::ElementValue;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ElementValueGen = ::com::sun::org::apache::bcel::internal::generic::ElementValueGen;
using $ObjectType = ::com::sun::org::apache::bcel::internal::generic::ObjectType;
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
						namespace generic {

void ClassElementValueGen::init$(int32_t typeIdx, $ConstantPoolGen* cpool) {
	$ElementValueGen::init$($ElementValueGen::CLASS, cpool);
	this->idx = typeIdx;
}

void ClassElementValueGen::init$($ObjectType* t, $ConstantPoolGen* cpool) {
	$ElementValueGen::init$($ElementValueGen::CLASS, cpool);
	this->idx = $nc(cpool)->addUtf8($($nc(t)->getSignature()));
}

$ElementValue* ClassElementValueGen::getElementValue() {
	$useLocalObjectStack();
	int32_t var$0 = $ElementValueGen::getElementValueType();
	int32_t var$1 = this->idx;
	return $new($ClassElementValue, var$0, var$1, $($$nc(getConstantPool())->getConstantPool()));
}

void ClassElementValueGen::init$($ClassElementValue* value, $ConstantPoolGen* cpool, bool copyPoolEntries) {
	$ElementValueGen::init$($ElementValueGen::CLASS, cpool);
	if (copyPoolEntries) {
		this->idx = $nc(cpool)->addUtf8($($nc(value)->getClassString()));
	} else {
		this->idx = $nc(value)->getIndex();
	}
}

int32_t ClassElementValueGen::getIndex() {
	return this->idx;
}

$String* ClassElementValueGen::getClassString() {
	$useLocalObjectStack();
	$var($ConstantUtf8, cu8, $cast($ConstantUtf8, $$nc(getConstantPool())->getConstant(this->idx)));
	return $nc(cu8)->getBytes();
}

$String* ClassElementValueGen::stringifyValue() {
	return getClassString();
}

void ClassElementValueGen::dump($DataOutputStream* dos) {
	$nc(dos)->writeByte($ElementValueGen::getElementValueType());
	dos->writeShort(this->idx);
}

ClassElementValueGen::ClassElementValueGen() {
}

$Class* ClassElementValueGen::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"idx", "I", nullptr, $PRIVATE, $field(ClassElementValueGen, idx)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PROTECTED, $method(ClassElementValueGen, init$, void, int32_t, $ConstantPoolGen*)},
		{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/ObjectType;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PUBLIC, $method(ClassElementValueGen, init$, void, $ObjectType*, $ConstantPoolGen*)},
		{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/ClassElementValue;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;Z)V", nullptr, $PUBLIC, $method(ClassElementValueGen, init$, void, $ClassElementValue*, $ConstantPoolGen*, bool)},
		{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(ClassElementValueGen, dump, void, $DataOutputStream*), "java.io.IOException"},
		{"getClassString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ClassElementValueGen, getClassString, $String*)},
		{"getElementValue", "()Lcom/sun/org/apache/bcel/internal/classfile/ElementValue;", nullptr, $PUBLIC, $virtualMethod(ClassElementValueGen, getElementValue, $ElementValue*)},
		{"getIndex", "()I", nullptr, $PUBLIC, $virtualMethod(ClassElementValueGen, getIndex, int32_t)},
		{"stringifyValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ClassElementValueGen, stringifyValue, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.bcel.internal.generic.ClassElementValueGen",
		"com.sun.org.apache.bcel.internal.generic.ElementValueGen",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ClassElementValueGen, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassElementValueGen);
	});
	return class$;
}

$Class* ClassElementValueGen::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com