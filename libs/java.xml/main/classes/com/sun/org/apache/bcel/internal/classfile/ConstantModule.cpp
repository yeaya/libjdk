#include <com/sun/org/apache/bcel/internal/classfile/ConstantModule.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Constant = ::com::sun::org::apache::bcel::internal::classfile::Constant;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ConstantUtf8 = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8;
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

$FieldInfo _ConstantModule_FieldInfo_[] = {
	{"nameIndex", "I", nullptr, $PRIVATE, $field(ConstantModule, nameIndex)},
	{}
};

$MethodInfo _ConstantModule_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantModule;)V", nullptr, $PUBLIC, $method(ConstantModule, init$, void, ConstantModule*)},
	{"<init>", "(Ljava/io/DataInput;)V", nullptr, 0, $method(ConstantModule, init$, void, $DataInput*), "java.io.IOException"},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(ConstantModule, init$, void, int32_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ConstantModule, accept, void, $Visitor*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(ConstantModule, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getBytes", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/String;", nullptr, $PUBLIC, $method(ConstantModule, getBytes, $String*, $ConstantPool*)},
	{"getConstantValue", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ConstantModule, getConstantValue, $Object*, $ConstantPool*)},
	{"getNameIndex", "()I", nullptr, $PUBLIC, $method(ConstantModule, getNameIndex, int32_t)},
	{"setNameIndex", "(I)V", nullptr, $PUBLIC, $method(ConstantModule, setNameIndex, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ConstantModule, toString, $String*)},
	{}
};

$ClassInfo _ConstantModule_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.ConstantModule",
	"com.sun.org.apache.bcel.internal.classfile.Constant",
	"com.sun.org.apache.bcel.internal.classfile.ConstantObject",
	_ConstantModule_FieldInfo_,
	_ConstantModule_MethodInfo_
};

$Object* allocate$ConstantModule($Class* clazz) {
	return $of($alloc(ConstantModule));
}

$Object* ConstantModule::clone() {
	 return this->$Constant::clone();
}

bool ConstantModule::equals(Object$* obj) {
	 return this->$Constant::equals(obj);
}

int32_t ConstantModule::hashCode() {
	 return this->$Constant::hashCode();
}

void ConstantModule::finalize() {
	this->$Constant::finalize();
}

void ConstantModule::init$(ConstantModule* c) {
	ConstantModule::init$($nc(c)->getNameIndex());
}

void ConstantModule::init$($DataInput* file) {
	ConstantModule::init$($nc(file)->readUnsignedShort());
}

void ConstantModule::init$(int32_t nameIndex) {
	$Constant::init$($Const::CONSTANT_Module);
	this->nameIndex = nameIndex;
}

void ConstantModule::accept($Visitor* v) {
	$nc(v)->visitConstantModule(this);
}

void ConstantModule::dump($DataOutputStream* file) {
	$nc(file)->writeByte($Constant::getTag());
	file->writeShort(this->nameIndex);
}

int32_t ConstantModule::getNameIndex() {
	return this->nameIndex;
}

void ConstantModule::setNameIndex(int32_t nameIndex) {
	this->nameIndex = nameIndex;
}

$Object* ConstantModule::getConstantValue($ConstantPool* cp) {
	$var($Constant, c, $nc(cp)->getConstant(this->nameIndex, $Const::CONSTANT_Utf8));
	return $of($nc(($cast($ConstantUtf8, c)))->getBytes());
}

$String* ConstantModule::getBytes($ConstantPool* cp) {
	return $cast($String, getConstantValue(cp));
}

$String* ConstantModule::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($Constant::toString()), "(nameIndex = "_s, $$str(this->nameIndex), ")"_s});
}

ConstantModule::ConstantModule() {
}

$Class* ConstantModule::load$($String* name, bool initialize) {
	$loadClass(ConstantModule, name, initialize, &_ConstantModule_ClassInfo_, allocate$ConstantModule);
	return class$;
}

$Class* ConstantModule::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com