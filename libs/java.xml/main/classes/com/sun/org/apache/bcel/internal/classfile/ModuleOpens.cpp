#include <com/sun/org/apache/bcel/internal/classfile/ModuleOpens.h>

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

$FieldInfo _ModuleOpens_FieldInfo_[] = {
	{"opensIndex", "I", nullptr, $PRIVATE | $FINAL, $field(ModuleOpens, opensIndex)},
	{"opensFlags", "I", nullptr, $PRIVATE | $FINAL, $field(ModuleOpens, opensFlags)},
	{"opensToCount", "I", nullptr, $PRIVATE | $FINAL, $field(ModuleOpens, opensToCount)},
	{"opensToIndex", "[I", nullptr, $PRIVATE | $FINAL, $field(ModuleOpens, opensToIndex)},
	{}
};

$MethodInfo _ModuleOpens_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/io/DataInput;)V", nullptr, 0, $method(ModuleOpens, init$, void, $DataInput*), "java.io.IOException"},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ModuleOpens, accept, void, $Visitor*)},
	{"copy", "()Lcom/sun/org/apache/bcel/internal/classfile/ModuleOpens;", nullptr, $PUBLIC, $method(ModuleOpens, copy, ModuleOpens*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $method(ModuleOpens, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ModuleOpens, toString, $String*)},
	{"toString", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/String;", nullptr, $PUBLIC, $method(ModuleOpens, toString, $String*, $ConstantPool*)},
	{}
};

$ClassInfo _ModuleOpens_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.ModuleOpens",
	"java.lang.Object",
	"java.lang.Cloneable,com.sun.org.apache.bcel.internal.classfile.Node",
	_ModuleOpens_FieldInfo_,
	_ModuleOpens_MethodInfo_
};

$Object* allocate$ModuleOpens($Class* clazz) {
	return $of($alloc(ModuleOpens));
}

int32_t ModuleOpens::hashCode() {
	 return this->$Cloneable::hashCode();
}

bool ModuleOpens::equals(Object$* arg0) {
	 return this->$Cloneable::equals(arg0);
}

$Object* ModuleOpens::clone() {
	 return this->$Cloneable::clone();
}

void ModuleOpens::finalize() {
	this->$Cloneable::finalize();
}

void ModuleOpens::init$($DataInput* file) {
	this->opensIndex = $nc(file)->readUnsignedShort();
	this->opensFlags = file->readUnsignedShort();
	this->opensToCount = file->readUnsignedShort();
	$set(this, opensToIndex, $new($ints, this->opensToCount));
	for (int32_t i = 0; i < this->opensToCount; ++i) {
		$nc(this->opensToIndex)->set(i, file->readUnsignedShort());
	}
}

void ModuleOpens::accept($Visitor* v) {
	$nc(v)->visitModuleOpens(this);
}

void ModuleOpens::dump($DataOutputStream* file) {
	$nc(file)->writeShort(this->opensIndex);
	file->writeShort(this->opensFlags);
	file->writeShort(this->opensToCount);
	{
		$var($ints, arr$, this->opensToIndex);
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

$String* ModuleOpens::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"opens("_s, $$str(this->opensIndex), ", "_s, $$str(this->opensFlags), ", "_s, $$str(this->opensToCount), ", ...)"_s});
}

$String* ModuleOpens::toString($ConstantPool* constant_pool) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	$var($String, package_name, $nc(constant_pool)->constantToString(this->opensIndex, $Const::CONSTANT_Package));
	buf->append($($Utility::compactClassName(package_name, false)));
	buf->append(", "_s)->append($($String::format("%04x"_s, $$new($ObjectArray, {$($of($Integer::valueOf(this->opensFlags)))}))));
	buf->append(", to("_s)->append(this->opensToCount)->append("):\n"_s);
	{
		$var($ints, arr$, this->opensToIndex);
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

ModuleOpens* ModuleOpens::copy() {
	try {
		return $cast(ModuleOpens, clone());
	} catch ($CloneNotSupportedException& e) {
	}
	return nullptr;
}

ModuleOpens::ModuleOpens() {
}

$Class* ModuleOpens::load$($String* name, bool initialize) {
	$loadClass(ModuleOpens, name, initialize, &_ModuleOpens_ClassInfo_, allocate$ModuleOpens);
	return class$;
}

$Class* ModuleOpens::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com