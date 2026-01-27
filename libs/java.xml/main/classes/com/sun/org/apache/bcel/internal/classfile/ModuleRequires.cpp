#include <com/sun/org/apache/bcel/internal/classfile/ModuleRequires.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <jcpp.h>

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $DataInput = ::java::io::DataInput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _ModuleRequires_FieldInfo_[] = {
	{"requiresIndex", "I", nullptr, $PRIVATE | $FINAL, $field(ModuleRequires, requiresIndex)},
	{"requiresFlags", "I", nullptr, $PRIVATE | $FINAL, $field(ModuleRequires, requiresFlags)},
	{"requiresVersionIndex", "I", nullptr, $PRIVATE | $FINAL, $field(ModuleRequires, requiresVersionIndex)},
	{}
};

$MethodInfo _ModuleRequires_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/io/DataInput;)V", nullptr, 0, $method(ModuleRequires, init$, void, $DataInput*), "java.io.IOException"},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ModuleRequires, accept, void, $Visitor*)},
	{"copy", "()Lcom/sun/org/apache/bcel/internal/classfile/ModuleRequires;", nullptr, $PUBLIC, $method(ModuleRequires, copy, ModuleRequires*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $method(ModuleRequires, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ModuleRequires, toString, $String*)},
	{"toString", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/String;", nullptr, $PUBLIC, $method(ModuleRequires, toString, $String*, $ConstantPool*)},
	{}
};

$ClassInfo _ModuleRequires_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.ModuleRequires",
	"java.lang.Object",
	"java.lang.Cloneable,com.sun.org.apache.bcel.internal.classfile.Node",
	_ModuleRequires_FieldInfo_,
	_ModuleRequires_MethodInfo_
};

$Object* allocate$ModuleRequires($Class* clazz) {
	return $of($alloc(ModuleRequires));
}

int32_t ModuleRequires::hashCode() {
	 return this->$Cloneable::hashCode();
}

bool ModuleRequires::equals(Object$* arg0) {
	 return this->$Cloneable::equals(arg0);
}

$Object* ModuleRequires::clone() {
	 return this->$Cloneable::clone();
}

void ModuleRequires::finalize() {
	this->$Cloneable::finalize();
}

void ModuleRequires::init$($DataInput* file) {
	this->requiresIndex = $nc(file)->readUnsignedShort();
	this->requiresFlags = file->readUnsignedShort();
	this->requiresVersionIndex = file->readUnsignedShort();
}

void ModuleRequires::accept($Visitor* v) {
	$nc(v)->visitModuleRequires(this);
}

void ModuleRequires::dump($DataOutputStream* file) {
	$nc(file)->writeShort(this->requiresIndex);
	file->writeShort(this->requiresFlags);
	file->writeShort(this->requiresVersionIndex);
}

$String* ModuleRequires::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"requires("_s, $$str(this->requiresIndex), ", "_s, $($String::format("%04x"_s, $$new($ObjectArray, {$($of($Integer::valueOf(this->requiresFlags)))}))), ", "_s, $$str(this->requiresVersionIndex), ")"_s});
}

$String* ModuleRequires::toString($ConstantPool* constant_pool) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	$var($String, module_name, $nc(constant_pool)->constantToString(this->requiresIndex, $Const::CONSTANT_Module));
	buf->append($($Utility::compactClassName(module_name, false)));
	buf->append(", "_s)->append($($String::format("%04x"_s, $$new($ObjectArray, {$($of($Integer::valueOf(this->requiresFlags)))}))));
	$var($String, version, this->requiresVersionIndex == 0 ? "0"_s : constant_pool->getConstantString(this->requiresVersionIndex, $Const::CONSTANT_Utf8));
	buf->append(", "_s)->append(version);
	return buf->toString();
}

ModuleRequires* ModuleRequires::copy() {
	try {
		return $cast(ModuleRequires, clone());
	} catch ($CloneNotSupportedException& e) {
	}
	return nullptr;
}

ModuleRequires::ModuleRequires() {
}

$Class* ModuleRequires::load$($String* name, bool initialize) {
	$loadClass(ModuleRequires, name, initialize, &_ModuleRequires_ClassInfo_, allocate$ModuleRequires);
	return class$;
}

$Class* ModuleRequires::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com