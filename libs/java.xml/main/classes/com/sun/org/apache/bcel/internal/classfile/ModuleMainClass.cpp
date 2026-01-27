#include <com/sun/org/apache/bcel/internal/classfile/ModuleMainClass.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef ATTR_NEST_MEMBERS

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
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

$FieldInfo _ModuleMainClass_FieldInfo_[] = {
	{"mainClassIndex", "I", nullptr, $PRIVATE, $field(ModuleMainClass, mainClassIndex)},
	{}
};

$MethodInfo _ModuleMainClass_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/ModuleMainClass;)V", nullptr, $PUBLIC, $method(ModuleMainClass, init$, void, ModuleMainClass*)},
	{"<init>", "(IIILcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(ModuleMainClass, init$, void, int32_t, int32_t, int32_t, $ConstantPool*)},
	{"<init>", "(IILjava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, 0, $method(ModuleMainClass, init$, void, int32_t, int32_t, $DataInput*, $ConstantPool*), "java.io.IOException"},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ModuleMainClass, accept, void, $Visitor*)},
	{"copy", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC, $virtualMethod(ModuleMainClass, copy, $Attribute*, $ConstantPool*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(ModuleMainClass, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getHostClassIndex", "()I", nullptr, $PUBLIC, $method(ModuleMainClass, getHostClassIndex, int32_t)},
	{"setHostClassIndex", "(I)V", nullptr, $PUBLIC, $method(ModuleMainClass, setHostClassIndex, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ModuleMainClass, toString, $String*)},
	{}
};

$ClassInfo _ModuleMainClass_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.ModuleMainClass",
	"com.sun.org.apache.bcel.internal.classfile.Attribute",
	nullptr,
	_ModuleMainClass_FieldInfo_,
	_ModuleMainClass_MethodInfo_
};

$Object* allocate$ModuleMainClass($Class* clazz) {
	return $of($alloc(ModuleMainClass));
}

void ModuleMainClass::init$(ModuleMainClass* c) {
	int32_t var$0 = $nc(c)->getNameIndex();
	int32_t var$1 = c->getLength();
	int32_t var$2 = c->getHostClassIndex();
	ModuleMainClass::init$(var$0, var$1, var$2, $(c->getConstantPool()));
}

void ModuleMainClass::init$(int32_t name_index, int32_t length, int32_t mainClassIndex, $ConstantPool* constantPool) {
	$Attribute::init$($Const::ATTR_NEST_MEMBERS, name_index, length, constantPool);
	this->mainClassIndex = mainClassIndex;
}

void ModuleMainClass::init$(int32_t nameIndex, int32_t length, $DataInput* input, $ConstantPool* constantPool) {
	ModuleMainClass::init$(nameIndex, length, 0, constantPool);
	this->mainClassIndex = $nc(input)->readUnsignedShort();
}

void ModuleMainClass::accept($Visitor* v) {
	$nc(v)->visitModuleMainClass(this);
}

void ModuleMainClass::dump($DataOutputStream* file) {
	$Attribute::dump(file);
	$nc(file)->writeShort(this->mainClassIndex);
}

int32_t ModuleMainClass::getHostClassIndex() {
	return this->mainClassIndex;
}

void ModuleMainClass::setHostClassIndex(int32_t mainClassIndex) {
	this->mainClassIndex = mainClassIndex;
}

$String* ModuleMainClass::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	buf->append("ModuleMainClass: "_s);
	$var($String, class_name, $nc($($Attribute::getConstantPool()))->getConstantString(this->mainClassIndex, $Const::CONSTANT_Class));
	buf->append($($Utility::compactClassName(class_name, false)));
	return buf->toString();
}

$Attribute* ModuleMainClass::copy($ConstantPool* _constant_pool) {
	$var(ModuleMainClass, c, $cast(ModuleMainClass, clone()));
	$nc(c)->setConstantPool(_constant_pool);
	return c;
}

ModuleMainClass::ModuleMainClass() {
}

$Class* ModuleMainClass::load$($String* name, bool initialize) {
	$loadClass(ModuleMainClass, name, initialize, &_ModuleMainClass_ClassInfo_, allocate$ModuleMainClass);
	return class$;
}

$Class* ModuleMainClass::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com