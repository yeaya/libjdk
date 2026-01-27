#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/ClassFormatException.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant$1.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantCP.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantClass.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantDouble.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantDynamic.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantFieldref.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantFloat.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantInteger.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantInterfaceMethodref.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantInvokeDynamic.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantLong.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantMethodHandle.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantMethodType.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantMethodref.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantModule.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantNameAndType.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPackage.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantString.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/util/BCELComparator.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ClassFormatException = ::com::sun::org::apache::bcel::internal::classfile::ClassFormatException;
using $Constant$1 = ::com::sun::org::apache::bcel::internal::classfile::Constant$1;
using $ConstantCP = ::com::sun::org::apache::bcel::internal::classfile::ConstantCP;
using $ConstantClass = ::com::sun::org::apache::bcel::internal::classfile::ConstantClass;
using $ConstantDouble = ::com::sun::org::apache::bcel::internal::classfile::ConstantDouble;
using $ConstantDynamic = ::com::sun::org::apache::bcel::internal::classfile::ConstantDynamic;
using $ConstantFieldref = ::com::sun::org::apache::bcel::internal::classfile::ConstantFieldref;
using $ConstantFloat = ::com::sun::org::apache::bcel::internal::classfile::ConstantFloat;
using $ConstantInteger = ::com::sun::org::apache::bcel::internal::classfile::ConstantInteger;
using $ConstantInterfaceMethodref = ::com::sun::org::apache::bcel::internal::classfile::ConstantInterfaceMethodref;
using $ConstantInvokeDynamic = ::com::sun::org::apache::bcel::internal::classfile::ConstantInvokeDynamic;
using $ConstantLong = ::com::sun::org::apache::bcel::internal::classfile::ConstantLong;
using $ConstantMethodHandle = ::com::sun::org::apache::bcel::internal::classfile::ConstantMethodHandle;
using $ConstantMethodType = ::com::sun::org::apache::bcel::internal::classfile::ConstantMethodType;
using $ConstantMethodref = ::com::sun::org::apache::bcel::internal::classfile::ConstantMethodref;
using $ConstantModule = ::com::sun::org::apache::bcel::internal::classfile::ConstantModule;
using $ConstantNameAndType = ::com::sun::org::apache::bcel::internal::classfile::ConstantNameAndType;
using $ConstantPackage = ::com::sun::org::apache::bcel::internal::classfile::ConstantPackage;
using $ConstantString = ::com::sun::org::apache::bcel::internal::classfile::ConstantString;
using $ConstantUtf8 = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8;
using $BCELComparator = ::com::sun::org::apache::bcel::internal::util::BCELComparator;
using $DataInput = ::java::io::DataInput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _Constant_FieldInfo_[] = {
	{"bcelComparator", "Lcom/sun/org/apache/bcel/internal/util/BCELComparator;", nullptr, $PRIVATE | $STATIC, $staticField(Constant, bcelComparator)},
	{"tag", "B", nullptr, $PRIVATE, $field(Constant, tag)},
	{}
};

$MethodInfo _Constant_MethodInfo_[] = {
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(B)V", nullptr, 0, $method(Constant, init$, void, int8_t)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Constant, clone, $Object*)},
	{"copy", "()Lcom/sun/org/apache/bcel/internal/classfile/Constant;", nullptr, $PUBLIC, $virtualMethod(Constant, copy, Constant*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Constant, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Constant, equals, bool, Object$*)},
	{"getComparator", "()Lcom/sun/org/apache/bcel/internal/util/BCELComparator;", nullptr, $PUBLIC | $STATIC, $staticMethod(Constant, getComparator, $BCELComparator*)},
	{"getTag", "()B", nullptr, $PUBLIC | $FINAL, $method(Constant, getTag, int8_t)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Constant, hashCode, int32_t)},
	{"readConstant", "(Ljava/io/DataInput;)Lcom/sun/org/apache/bcel/internal/classfile/Constant;", nullptr, $PUBLIC | $STATIC, $staticMethod(Constant, readConstant, Constant*, $DataInput*), "java.io.IOException,com.sun.org.apache.bcel.internal.classfile.ClassFormatException"},
	{"setComparator", "(Lcom/sun/org/apache/bcel/internal/util/BCELComparator;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Constant, setComparator, void, $BCELComparator*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Constant, toString, $String*)},
	{}
};

$InnerClassInfo _Constant_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.classfile.Constant$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Constant_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.classfile.Constant",
	"java.lang.Object",
	"java.lang.Cloneable,com.sun.org.apache.bcel.internal.classfile.Node",
	_Constant_FieldInfo_,
	_Constant_MethodInfo_,
	nullptr,
	nullptr,
	_Constant_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.classfile.Constant$1"
};

$Object* allocate$Constant($Class* clazz) {
	return $of($alloc(Constant));
}

void Constant::finalize() {
	this->$Cloneable::finalize();
}

$BCELComparator* Constant::bcelComparator = nullptr;

void Constant::init$(int8_t tag) {
	this->tag = tag;
}

int8_t Constant::getTag() {
	return this->tag;
}

$String* Constant::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($Const::getConstantName(this->tag)), "["_s, $$str(this->tag), "]"_s});
}

Constant* Constant::copy() {
	try {
		return $cast(Constant, $Cloneable::clone());
	} catch ($CloneNotSupportedException& e) {
	}
	return nullptr;
}

$Object* Constant::clone() {
	try {
		return $of($Cloneable::clone());
	} catch ($CloneNotSupportedException& e) {
		$throwNew($Error, "Clone Not Supported"_s);
	}
	$shouldNotReachHere();
}

Constant* Constant::readConstant($DataInput* dataInput) {
	$init(Constant);
	$useLocalCurrentObjectStackCache();
	int8_t b = $nc(dataInput)->readByte();
	switch (b) {
	case $Const::CONSTANT_Class:
		{
			return $new($ConstantClass, dataInput);
		}
	case $Const::CONSTANT_Fieldref:
		{
			return $new($ConstantFieldref, dataInput);
		}
	case $Const::CONSTANT_Methodref:
		{
			return $new($ConstantMethodref, dataInput);
		}
	case $Const::CONSTANT_InterfaceMethodref:
		{
			return $new($ConstantInterfaceMethodref, dataInput);
		}
	case $Const::CONSTANT_String:
		{
			return $new($ConstantString, dataInput);
		}
	case $Const::CONSTANT_Integer:
		{
			return $new($ConstantInteger, dataInput);
		}
	case $Const::CONSTANT_Float:
		{
			return $new($ConstantFloat, dataInput);
		}
	case $Const::CONSTANT_Long:
		{
			return $new($ConstantLong, dataInput);
		}
	case $Const::CONSTANT_Double:
		{
			return $new($ConstantDouble, dataInput);
		}
	case $Const::CONSTANT_NameAndType:
		{
			return $new($ConstantNameAndType, dataInput);
		}
	case $Const::CONSTANT_Utf8:
		{
			return $ConstantUtf8::getInstance(dataInput);
		}
	case $Const::CONSTANT_MethodHandle:
		{
			return $new($ConstantMethodHandle, dataInput);
		}
	case $Const::CONSTANT_MethodType:
		{
			return $new($ConstantMethodType, dataInput);
		}
	case $Const::CONSTANT_Dynamic:
		{
			return $new($ConstantDynamic, dataInput);
		}
	case $Const::CONSTANT_InvokeDynamic:
		{
			return $new($ConstantInvokeDynamic, dataInput);
		}
	case $Const::CONSTANT_Module:
		{
			return $new($ConstantModule, dataInput);
		}
	case $Const::CONSTANT_Package:
		{
			return $new($ConstantPackage, dataInput);
		}
	default:
		{
			$throwNew($ClassFormatException, $$str({"Invalid byte tag in constant pool: "_s, $$str(b)}));
		}
	}
}

$BCELComparator* Constant::getComparator() {
	$init(Constant);
	return Constant::bcelComparator;
}

void Constant::setComparator($BCELComparator* comparator) {
	$init(Constant);
	$assignStatic(Constant::bcelComparator, comparator);
}

bool Constant::equals(Object$* obj) {
	return $nc(Constant::bcelComparator)->equals(this, obj);
}

int32_t Constant::hashCode() {
	return $nc(Constant::bcelComparator)->hashCode(this);
}

void clinit$Constant($Class* class$) {
	$assignStatic(Constant::bcelComparator, $new($Constant$1));
}

Constant::Constant() {
}

$Class* Constant::load$($String* name, bool initialize) {
	$loadClass(Constant, name, initialize, &_Constant_ClassInfo_, clinit$Constant, allocate$Constant);
	return class$;
}

$Class* Constant::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com