#include <com/sun/org/apache/bcel/internal/classfile/ModuleExports.h>

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

$FieldInfo _ModuleExports_FieldInfo_[] = {
	{"exportsIndex", "I", nullptr, $PRIVATE | $FINAL, $field(ModuleExports, exportsIndex)},
	{"exportsFlags", "I", nullptr, $PRIVATE | $FINAL, $field(ModuleExports, exportsFlags)},
	{"exportsToCount", "I", nullptr, $PRIVATE | $FINAL, $field(ModuleExports, exportsToCount)},
	{"exportsToIndex", "[I", nullptr, $PRIVATE | $FINAL, $field(ModuleExports, exportsToIndex)},
	{}
};

$MethodInfo _ModuleExports_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/io/DataInput;)V", nullptr, 0, $method(ModuleExports, init$, void, $DataInput*), "java.io.IOException"},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ModuleExports, accept, void, $Visitor*)},
	{"copy", "()Lcom/sun/org/apache/bcel/internal/classfile/ModuleExports;", nullptr, $PUBLIC, $method(ModuleExports, copy, ModuleExports*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $method(ModuleExports, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ModuleExports, toString, $String*)},
	{"toString", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/String;", nullptr, $PUBLIC, $method(ModuleExports, toString, $String*, $ConstantPool*)},
	{}
};

$ClassInfo _ModuleExports_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.ModuleExports",
	"java.lang.Object",
	"java.lang.Cloneable,com.sun.org.apache.bcel.internal.classfile.Node",
	_ModuleExports_FieldInfo_,
	_ModuleExports_MethodInfo_
};

$Object* allocate$ModuleExports($Class* clazz) {
	return $of($alloc(ModuleExports));
}

int32_t ModuleExports::hashCode() {
	 return this->$Cloneable::hashCode();
}

bool ModuleExports::equals(Object$* arg0) {
	 return this->$Cloneable::equals(arg0);
}

$Object* ModuleExports::clone() {
	 return this->$Cloneable::clone();
}

void ModuleExports::finalize() {
	this->$Cloneable::finalize();
}

void ModuleExports::init$($DataInput* file) {
	this->exportsIndex = $nc(file)->readUnsignedShort();
	this->exportsFlags = file->readUnsignedShort();
	this->exportsToCount = file->readUnsignedShort();
	$set(this, exportsToIndex, $new($ints, this->exportsToCount));
	for (int32_t i = 0; i < this->exportsToCount; ++i) {
		$nc(this->exportsToIndex)->set(i, file->readUnsignedShort());
	}
}

void ModuleExports::accept($Visitor* v) {
	$nc(v)->visitModuleExports(this);
}

void ModuleExports::dump($DataOutputStream* file) {
	$nc(file)->writeShort(this->exportsIndex);
	file->writeShort(this->exportsFlags);
	file->writeShort(this->exportsToCount);
	{
		$var($ints, arr$, this->exportsToIndex);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t entry = arr$->get(i$);
			{
				file->writeShort(entry);
			}
		}
	}
}

$String* ModuleExports::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"exports("_s, $$str(this->exportsIndex), ", "_s, $$str(this->exportsFlags), ", "_s, $$str(this->exportsToCount), ", ...)"_s});
}

$String* ModuleExports::toString($ConstantPool* constant_pool) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	$var($String, package_name, $nc(constant_pool)->constantToString(this->exportsIndex, $Const::CONSTANT_Package));
	buf->append($($Utility::compactClassName(package_name, false)));
	buf->append(", "_s)->append($($String::format("%04x"_s, $$new($ObjectArray, {$($of($Integer::valueOf(this->exportsFlags)))}))));
	buf->append(", to("_s)->append(this->exportsToCount)->append("):\n"_s);
	{
		$var($ints, arr$, this->exportsToIndex);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t index = arr$->get(i$);
			{
				$var($String, module_name, constant_pool->getConstantString(index, $Const::CONSTANT_Module));
				buf->append("      "_s)->append($($Utility::compactClassName(module_name, false)))->append("\n"_s);
			}
		}
	}
	return buf->substring(0, buf->length() - 1);
}

ModuleExports* ModuleExports::copy() {
	try {
		return $cast(ModuleExports, clone());
	} catch ($CloneNotSupportedException& e) {
	}
	return nullptr;
}

ModuleExports::ModuleExports() {
}

$Class* ModuleExports::load$($String* name, bool initialize) {
	$loadClass(ModuleExports, name, initialize, &_ModuleExports_ClassInfo_, allocate$ModuleExports);
	return class$;
}

$Class* ModuleExports::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com