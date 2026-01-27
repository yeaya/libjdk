#include <com/sun/org/apache/bcel/internal/classfile/ModuleProvides.h>

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
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _ModuleProvides_FieldInfo_[] = {
	{"providesIndex", "I", nullptr, $PRIVATE | $FINAL, $field(ModuleProvides, providesIndex)},
	{"providesWithCount", "I", nullptr, $PRIVATE | $FINAL, $field(ModuleProvides, providesWithCount)},
	{"providesWithIndex", "[I", nullptr, $PRIVATE | $FINAL, $field(ModuleProvides, providesWithIndex)},
	{}
};

$MethodInfo _ModuleProvides_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/io/DataInput;)V", nullptr, 0, $method(ModuleProvides, init$, void, $DataInput*), "java.io.IOException"},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ModuleProvides, accept, void, $Visitor*)},
	{"copy", "()Lcom/sun/org/apache/bcel/internal/classfile/ModuleProvides;", nullptr, $PUBLIC, $method(ModuleProvides, copy, ModuleProvides*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $method(ModuleProvides, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ModuleProvides, toString, $String*)},
	{"toString", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Ljava/lang/String;", nullptr, $PUBLIC, $method(ModuleProvides, toString, $String*, $ConstantPool*)},
	{}
};

$ClassInfo _ModuleProvides_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.ModuleProvides",
	"java.lang.Object",
	"java.lang.Cloneable,com.sun.org.apache.bcel.internal.classfile.Node",
	_ModuleProvides_FieldInfo_,
	_ModuleProvides_MethodInfo_
};

$Object* allocate$ModuleProvides($Class* clazz) {
	return $of($alloc(ModuleProvides));
}

int32_t ModuleProvides::hashCode() {
	 return this->$Cloneable::hashCode();
}

bool ModuleProvides::equals(Object$* arg0) {
	 return this->$Cloneable::equals(arg0);
}

$Object* ModuleProvides::clone() {
	 return this->$Cloneable::clone();
}

void ModuleProvides::finalize() {
	this->$Cloneable::finalize();
}

void ModuleProvides::init$($DataInput* file) {
	this->providesIndex = $nc(file)->readUnsignedShort();
	this->providesWithCount = file->readUnsignedShort();
	$set(this, providesWithIndex, $new($ints, this->providesWithCount));
	for (int32_t i = 0; i < this->providesWithCount; ++i) {
		$nc(this->providesWithIndex)->set(i, file->readUnsignedShort());
	}
}

void ModuleProvides::accept($Visitor* v) {
	$nc(v)->visitModuleProvides(this);
}

void ModuleProvides::dump($DataOutputStream* file) {
	$nc(file)->writeShort(this->providesIndex);
	file->writeShort(this->providesWithCount);
	{
		$var($ints, arr$, this->providesWithIndex);
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

$String* ModuleProvides::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"provides("_s, $$str(this->providesIndex), ", "_s, $$str(this->providesWithCount), ", ...)"_s});
}

$String* ModuleProvides::toString($ConstantPool* constant_pool) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	$var($String, interface_name, $nc(constant_pool)->constantToString(this->providesIndex, $Const::CONSTANT_Class));
	buf->append($($Utility::compactClassName(interface_name, false)));
	buf->append(", with("_s)->append(this->providesWithCount)->append("):\n"_s);
	{
		$var($ints, arr$, this->providesWithIndex);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t index = arr$->get(i$);
			{
				$var($String, class_name, constant_pool->getConstantString(index, $Const::CONSTANT_Class));
				buf->append("      "_s)->append($($Utility::compactClassName(class_name, false)))->append("\n"_s);
			}
		}
	}
	return buf->substring(0, buf->length() - 1);
}

ModuleProvides* ModuleProvides::copy() {
	try {
		return $cast(ModuleProvides, clone());
	} catch ($CloneNotSupportedException& e) {
	}
	return nullptr;
}

ModuleProvides::ModuleProvides() {
}

$Class* ModuleProvides::load$($String* name, bool initialize) {
	$loadClass(ModuleProvides, name, initialize, &_ModuleProvides_ClassInfo_, allocate$ModuleProvides);
	return class$;
}

$Class* ModuleProvides::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com