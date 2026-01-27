#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantCP.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantClass.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantDouble.h>
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
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantString.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/generic/ArrayType.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen$Index.h>
#include <com/sun/org/apache/bcel/internal/generic/MethodGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ObjectType.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Math.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef DEFAULT_BUFFER_SIZE
#undef FIELDREF_DELIM
#undef IMETHODREF_DELIM
#undef METHODREF_DELIM
#undef NAT_DELIM

using $ConstantArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Constant>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Constant = ::com::sun::org::apache::bcel::internal::classfile::Constant;
using $ConstantCP = ::com::sun::org::apache::bcel::internal::classfile::ConstantCP;
using $ConstantClass = ::com::sun::org::apache::bcel::internal::classfile::ConstantClass;
using $ConstantDouble = ::com::sun::org::apache::bcel::internal::classfile::ConstantDouble;
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
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ConstantString = ::com::sun::org::apache::bcel::internal::classfile::ConstantString;
using $ConstantUtf8 = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8;
using $ArrayType = ::com::sun::org::apache::bcel::internal::generic::ArrayType;
using $ConstantPoolGen$Index = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen$Index;
using $MethodGen = ::com::sun::org::apache::bcel::internal::generic::MethodGen;
using $ObjectType = ::com::sun::org::apache::bcel::internal::generic::ObjectType;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _ConstantPoolGen_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ConstantPoolGen, $assertionsDisabled)},
	{"DEFAULT_BUFFER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConstantPoolGen, DEFAULT_BUFFER_SIZE)},
	{"size", "I", nullptr, $PRIVATE, $field(ConstantPoolGen, size)},
	{"constants", "[Lcom/sun/org/apache/bcel/internal/classfile/Constant;", nullptr, $PRIVATE, $field(ConstantPoolGen, constants)},
	{"index", "I", nullptr, $PRIVATE, $field(ConstantPoolGen, index)},
	{"METHODREF_DELIM", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ConstantPoolGen, METHODREF_DELIM)},
	{"IMETHODREF_DELIM", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ConstantPoolGen, IMETHODREF_DELIM)},
	{"FIELDREF_DELIM", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ConstantPoolGen, FIELDREF_DELIM)},
	{"NAT_DELIM", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ConstantPoolGen, NAT_DELIM)},
	{"stringTable", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen$Index;>;", $PRIVATE | $FINAL, $field(ConstantPoolGen, stringTable)},
	{"classTable", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen$Index;>;", $PRIVATE | $FINAL, $field(ConstantPoolGen, classTable)},
	{"utf8Table", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen$Index;>;", $PRIVATE | $FINAL, $field(ConstantPoolGen, utf8Table)},
	{"natTable", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen$Index;>;", $PRIVATE | $FINAL, $field(ConstantPoolGen, natTable)},
	{"cpTable", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen$Index;>;", $PRIVATE | $FINAL, $field(ConstantPoolGen, cpTable)},
	{}
};

$MethodInfo _ConstantPoolGen_MethodInfo_[] = {
	{"<init>", "([Lcom/sun/org/apache/bcel/internal/classfile/Constant;)V", nullptr, $PUBLIC, $method(ConstantPoolGen, init$, void, $ConstantArray*)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(ConstantPoolGen, init$, void, $ConstantPool*)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(ConstantPoolGen, init$, void)},
	{"addArrayClass", "(Lcom/sun/org/apache/bcel/internal/generic/ArrayType;)I", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, addArrayClass, int32_t, $ArrayType*)},
	{"addClass", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, addClass, int32_t, $String*)},
	{"addClass", "(Lcom/sun/org/apache/bcel/internal/generic/ObjectType;)I", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, addClass, int32_t, $ObjectType*)},
	{"addClass_", "(Ljava/lang/String;)I", nullptr, $PRIVATE, $method(ConstantPoolGen, addClass_, int32_t, $String*)},
	{"addConstant", "(Lcom/sun/org/apache/bcel/internal/classfile/Constant;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, addConstant, int32_t, $Constant*, ConstantPoolGen*)},
	{"addDouble", "(D)I", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, addDouble, int32_t, double)},
	{"addFieldref", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, addFieldref, int32_t, $String*, $String*, $String*)},
	{"addFloat", "(F)I", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, addFloat, int32_t, float)},
	{"addInteger", "(I)I", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, addInteger, int32_t, int32_t)},
	{"addInterfaceMethodref", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, addInterfaceMethodref, int32_t, $String*, $String*, $String*)},
	{"addInterfaceMethodref", "(Lcom/sun/org/apache/bcel/internal/generic/MethodGen;)I", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, addInterfaceMethodref, int32_t, $MethodGen*)},
	{"addLong", "(J)I", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, addLong, int32_t, int64_t)},
	{"addMethodref", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, addMethodref, int32_t, $String*, $String*, $String*)},
	{"addMethodref", "(Lcom/sun/org/apache/bcel/internal/generic/MethodGen;)I", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, addMethodref, int32_t, $MethodGen*)},
	{"addNameAndType", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, addNameAndType, int32_t, $String*, $String*)},
	{"addString", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, addString, int32_t, $String*)},
	{"addUtf8", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, addUtf8, int32_t, $String*)},
	{"adjustSize", "()V", nullptr, $PROTECTED, $virtualMethod(ConstantPoolGen, adjustSize, void)},
	{"getConstant", "(I)Lcom/sun/org/apache/bcel/internal/classfile/Constant;", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, getConstant, $Constant*, int32_t)},
	{"getConstantPool", "()Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, getConstantPool, $ConstantPool*)},
	{"getFinalConstantPool", "()Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, getFinalConstantPool, $ConstantPool*)},
	{"getSize", "()I", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, getSize, int32_t)},
	{"lookupClass", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, lookupClass, int32_t, $String*)},
	{"lookupDouble", "(D)I", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, lookupDouble, int32_t, double)},
	{"lookupFieldref", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, lookupFieldref, int32_t, $String*, $String*, $String*)},
	{"lookupFloat", "(F)I", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, lookupFloat, int32_t, float)},
	{"lookupInteger", "(I)I", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, lookupInteger, int32_t, int32_t)},
	{"lookupInterfaceMethodref", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, lookupInterfaceMethodref, int32_t, $String*, $String*, $String*)},
	{"lookupInterfaceMethodref", "(Lcom/sun/org/apache/bcel/internal/generic/MethodGen;)I", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, lookupInterfaceMethodref, int32_t, $MethodGen*)},
	{"lookupLong", "(J)I", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, lookupLong, int32_t, int64_t)},
	{"lookupMethodref", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, lookupMethodref, int32_t, $String*, $String*, $String*)},
	{"lookupMethodref", "(Lcom/sun/org/apache/bcel/internal/generic/MethodGen;)I", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, lookupMethodref, int32_t, $MethodGen*)},
	{"lookupNameAndType", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, lookupNameAndType, int32_t, $String*, $String*)},
	{"lookupString", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, lookupString, int32_t, $String*)},
	{"lookupUtf8", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, lookupUtf8, int32_t, $String*)},
	{"setConstant", "(ILcom/sun/org/apache/bcel/internal/classfile/Constant;)V", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, setConstant, void, int32_t, $Constant*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ConstantPoolGen, toString, $String*)},
	{}
};

$InnerClassInfo _ConstantPoolGen_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.generic.ConstantPoolGen$Index", "com.sun.org.apache.bcel.internal.generic.ConstantPoolGen", "Index", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ConstantPoolGen_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.ConstantPoolGen",
	"java.lang.Object",
	nullptr,
	_ConstantPoolGen_FieldInfo_,
	_ConstantPoolGen_MethodInfo_,
	nullptr,
	nullptr,
	_ConstantPoolGen_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.generic.ConstantPoolGen$Index"
};

$Object* allocate$ConstantPoolGen($Class* clazz) {
	return $of($alloc(ConstantPoolGen));
}

bool ConstantPoolGen::$assertionsDisabled = false;
$String* ConstantPoolGen::METHODREF_DELIM = nullptr;
$String* ConstantPoolGen::IMETHODREF_DELIM = nullptr;
$String* ConstantPoolGen::FIELDREF_DELIM = nullptr;
$String* ConstantPoolGen::NAT_DELIM = nullptr;

void ConstantPoolGen::init$($ConstantArray* cs) {
	$useLocalCurrentObjectStackCache();
	this->index = 1;
	$set(this, stringTable, $new($HashMap));
	$set(this, classTable, $new($HashMap));
	$set(this, utf8Table, $new($HashMap));
	$set(this, natTable, $new($HashMap));
	$set(this, cpTable, $new($HashMap));
	$var($StringBuilder, sb, $new($StringBuilder, ConstantPoolGen::DEFAULT_BUFFER_SIZE));
	this->size = $Math::max(ConstantPoolGen::DEFAULT_BUFFER_SIZE, $nc(cs)->length + 64);
	$set(this, constants, $new($ConstantArray, this->size));
	$System::arraycopy(cs, 0, this->constants, 0, $nc(cs)->length);
	if ($nc(cs)->length > 0) {
		this->index = cs->length;
	}
	for (int32_t i = 1; i < this->index; ++i) {
		$var($Constant, c, $nc(this->constants)->get(i));
		if ($instanceOf($ConstantString, c)) {
			$var($ConstantString, s, $cast($ConstantString, c));
			$var($ConstantUtf8, u8, $cast($ConstantUtf8, $nc(this->constants)->get($nc(s)->getStringIndex())));
			$var($String, key, $nc(u8)->getBytes());
			if (!$nc(this->stringTable)->containsKey(key)) {
				$nc(this->stringTable)->put(key, $$new($ConstantPoolGen$Index, i));
			}
		} else if ($instanceOf($ConstantClass, c)) {
			$var($ConstantClass, s, $cast($ConstantClass, c));
			$var($ConstantUtf8, u8, $cast($ConstantUtf8, $nc(this->constants)->get($nc(s)->getNameIndex())));
			$var($String, key, $nc(u8)->getBytes());
			if (!$nc(this->classTable)->containsKey(key)) {
				$nc(this->classTable)->put(key, $$new($ConstantPoolGen$Index, i));
			}
		} else if ($instanceOf($ConstantNameAndType, c)) {
			$var($ConstantNameAndType, n, $cast($ConstantNameAndType, c));
			$var($ConstantUtf8, u8, $cast($ConstantUtf8, $nc(this->constants)->get($nc(n)->getNameIndex())));
			$var($ConstantUtf8, u8_2, $cast($ConstantUtf8, $nc(this->constants)->get(n->getSignatureIndex())));
			sb->append($($nc(u8)->getBytes()));
			sb->append(ConstantPoolGen::NAT_DELIM);
			sb->append($($nc(u8_2)->getBytes()));
			$var($String, key, sb->toString());
			sb->delete$(0, sb->length());
			if (!$nc(this->natTable)->containsKey(key)) {
				$nc(this->natTable)->put(key, $$new($ConstantPoolGen$Index, i));
			}
		} else if ($instanceOf($ConstantUtf8, c)) {
			$var($ConstantUtf8, u, $cast($ConstantUtf8, c));
			$var($String, key, $nc(u)->getBytes());
			if (!$nc(this->utf8Table)->containsKey(key)) {
				$nc(this->utf8Table)->put(key, $$new($ConstantPoolGen$Index, i));
			}
		} else if ($instanceOf($ConstantCP, c)) {
			$var($ConstantCP, m, $cast($ConstantCP, c));
			$var($String, class_name, nullptr);
			$var($ConstantUtf8, u8, nullptr);
			if ($instanceOf($ConstantInvokeDynamic, c)) {
				$assign(class_name, $Integer::toString($nc(($cast($ConstantInvokeDynamic, m)))->getBootstrapMethodAttrIndex()));
			} else {
				$var($ConstantClass, clazz, $cast($ConstantClass, $nc(this->constants)->get($nc(m)->getClassIndex())));
				$assign(u8, $cast($ConstantUtf8, $nc(this->constants)->get($nc(clazz)->getNameIndex())));
				$assign(class_name, $nc($($nc(u8)->getBytes()))->replace(u'/', u'.'));
			}
			$var($ConstantNameAndType, n, $cast($ConstantNameAndType, $nc(this->constants)->get($nc(m)->getNameAndTypeIndex())));
			$assign(u8, $cast($ConstantUtf8, $nc(this->constants)->get($nc(n)->getNameIndex())));
			$var($String, method_name, $nc(u8)->getBytes());
			$assign(u8, $cast($ConstantUtf8, $nc(this->constants)->get(n->getSignatureIndex())));
			$var($String, signature, u8->getBytes());
			$var($String, delim, ConstantPoolGen::METHODREF_DELIM);
			if ($instanceOf($ConstantInterfaceMethodref, c)) {
				$assign(delim, ConstantPoolGen::IMETHODREF_DELIM);
			} else if ($instanceOf($ConstantFieldref, c)) {
				$assign(delim, ConstantPoolGen::FIELDREF_DELIM);
			}
			sb->append(class_name);
			sb->append(delim);
			sb->append(method_name);
			sb->append(delim);
			sb->append(signature);
			$var($String, key, sb->toString());
			sb->delete$(0, sb->length());
			if (!$nc(this->cpTable)->containsKey(key)) {
				$nc(this->cpTable)->put(key, $$new($ConstantPoolGen$Index, i));
			}
		} else if (c == nullptr) {
		} else if ($instanceOf($ConstantInteger, c)) {
		} else if ($instanceOf($ConstantLong, c)) {
		} else if ($instanceOf($ConstantFloat, c)) {
		} else if ($instanceOf($ConstantDouble, c)) {
		} else if ($instanceOf($ConstantMethodType, c)) {
		} else if ($instanceOf($ConstantMethodHandle, c)) {
		} else if ($instanceOf($ConstantModule, c)) {
		} else if ($instanceOf($ConstantPackage, c)) {
		} else if (!ConstantPoolGen::$assertionsDisabled) {
			$throwNew($AssertionError, $of($$str({"Unexpected constant type: "_s, $($nc($of(c))->getClass()->getName())})));
		}
	}
}

void ConstantPoolGen::init$($ConstantPool* cp) {
	ConstantPoolGen::init$($($nc(cp)->getConstantPool()));
}

void ConstantPoolGen::init$() {
	this->index = 1;
	$set(this, stringTable, $new($HashMap));
	$set(this, classTable, $new($HashMap));
	$set(this, utf8Table, $new($HashMap));
	$set(this, natTable, $new($HashMap));
	$set(this, cpTable, $new($HashMap));
	this->size = ConstantPoolGen::DEFAULT_BUFFER_SIZE;
	$set(this, constants, $new($ConstantArray, this->size));
}

void ConstantPoolGen::adjustSize() {
	if (this->index + 3 >= this->size) {
		$var($ConstantArray, cs, this->constants);
		this->size *= 2;
		$set(this, constants, $new($ConstantArray, this->size));
		$System::arraycopy(cs, 0, this->constants, 0, this->index);
	}
}

int32_t ConstantPoolGen::lookupString($String* str) {
	$var($ConstantPoolGen$Index, index, $cast($ConstantPoolGen$Index, $nc(this->stringTable)->get(str)));
	return (index != nullptr) ? $nc(index)->index : -1;
}

int32_t ConstantPoolGen::addString($String* str) {
	$useLocalCurrentObjectStackCache();
	int32_t ret = 0;
	if ((ret = lookupString(str)) != -1) {
		return ret;
	}
	int32_t utf8 = addUtf8(str);
	adjustSize();
	$var($ConstantString, s, $new($ConstantString, utf8));
	ret = this->index;
	$nc(this->constants)->set(this->index++, s);
	if (!$nc(this->stringTable)->containsKey(str)) {
		$nc(this->stringTable)->put(str, $$new($ConstantPoolGen$Index, ret));
	}
	return ret;
}

int32_t ConstantPoolGen::lookupClass($String* str) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen$Index, index, $cast($ConstantPoolGen$Index, $nc(this->classTable)->get($($nc(str)->replace(u'.', u'/')))));
	return (index != nullptr) ? $nc(index)->index : -1;
}

int32_t ConstantPoolGen::addClass_($String* clazz) {
	$useLocalCurrentObjectStackCache();
	int32_t ret = 0;
	if ((ret = lookupClass(clazz)) != -1) {
		return ret;
	}
	adjustSize();
	$var($ConstantClass, c, $new($ConstantClass, addUtf8(clazz)));
	ret = this->index;
	$nc(this->constants)->set(this->index++, c);
	if (!$nc(this->classTable)->containsKey(clazz)) {
		$nc(this->classTable)->put(clazz, $$new($ConstantPoolGen$Index, ret));
	}
	return ret;
}

int32_t ConstantPoolGen::addClass($String* str) {
	return addClass_($($nc(str)->replace(u'.', u'/')));
}

int32_t ConstantPoolGen::addClass($ObjectType* type) {
	return addClass($($nc(type)->getClassName()));
}

int32_t ConstantPoolGen::addArrayClass($ArrayType* type) {
	return addClass_($($nc(type)->getSignature()));
}

int32_t ConstantPoolGen::lookupInteger(int32_t n) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 1; i < this->index; ++i) {
		if ($instanceOf($ConstantInteger, $nc(this->constants)->get(i))) {
			$var($ConstantInteger, c, $cast($ConstantInteger, $nc(this->constants)->get(i)));
			if ($nc(c)->getBytes() == n) {
				return i;
			}
		}
	}
	return -1;
}

int32_t ConstantPoolGen::addInteger(int32_t n) {
	int32_t ret = 0;
	if ((ret = lookupInteger(n)) != -1) {
		return ret;
	}
	adjustSize();
	ret = this->index;
	$nc(this->constants)->set(this->index++, $$new($ConstantInteger, n));
	return ret;
}

int32_t ConstantPoolGen::lookupFloat(float n) {
	$useLocalCurrentObjectStackCache();
	int32_t bits = $Float::floatToIntBits(n);
	for (int32_t i = 1; i < this->index; ++i) {
		if ($instanceOf($ConstantFloat, $nc(this->constants)->get(i))) {
			$var($ConstantFloat, c, $cast($ConstantFloat, $nc(this->constants)->get(i)));
			if ($Float::floatToIntBits($nc(c)->getBytes()) == bits) {
				return i;
			}
		}
	}
	return -1;
}

int32_t ConstantPoolGen::addFloat(float n) {
	int32_t ret = 0;
	if ((ret = lookupFloat(n)) != -1) {
		return ret;
	}
	adjustSize();
	ret = this->index;
	$nc(this->constants)->set(this->index++, $$new($ConstantFloat, n));
	return ret;
}

int32_t ConstantPoolGen::lookupUtf8($String* n) {
	$var($ConstantPoolGen$Index, index, $cast($ConstantPoolGen$Index, $nc(this->utf8Table)->get(n)));
	return (index != nullptr) ? $nc(index)->index : -1;
}

int32_t ConstantPoolGen::addUtf8($String* n) {
	$useLocalCurrentObjectStackCache();
	int32_t ret = 0;
	if ((ret = lookupUtf8(n)) != -1) {
		return ret;
	}
	adjustSize();
	ret = this->index;
	$nc(this->constants)->set(this->index++, $$new($ConstantUtf8, n));
	if (!$nc(this->utf8Table)->containsKey(n)) {
		$nc(this->utf8Table)->put(n, $$new($ConstantPoolGen$Index, ret));
	}
	return ret;
}

int32_t ConstantPoolGen::lookupLong(int64_t n) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 1; i < this->index; ++i) {
		if ($instanceOf($ConstantLong, $nc(this->constants)->get(i))) {
			$var($ConstantLong, c, $cast($ConstantLong, $nc(this->constants)->get(i)));
			if ($nc(c)->getBytes() == n) {
				return i;
			}
		}
	}
	return -1;
}

int32_t ConstantPoolGen::addLong(int64_t n) {
	int32_t ret = 0;
	if ((ret = lookupLong(n)) != -1) {
		return ret;
	}
	adjustSize();
	ret = this->index;
	$nc(this->constants)->set(this->index, $$new($ConstantLong, n));
	this->index += 2;
	return ret;
}

int32_t ConstantPoolGen::lookupDouble(double n) {
	$useLocalCurrentObjectStackCache();
	int64_t bits = $Double::doubleToLongBits(n);
	for (int32_t i = 1; i < this->index; ++i) {
		if ($instanceOf($ConstantDouble, $nc(this->constants)->get(i))) {
			$var($ConstantDouble, c, $cast($ConstantDouble, $nc(this->constants)->get(i)));
			if ($Double::doubleToLongBits($nc(c)->getBytes()) == bits) {
				return i;
			}
		}
	}
	return -1;
}

int32_t ConstantPoolGen::addDouble(double n) {
	int32_t ret = 0;
	if ((ret = lookupDouble(n)) != -1) {
		return ret;
	}
	adjustSize();
	ret = this->index;
	$nc(this->constants)->set(this->index, $$new($ConstantDouble, n));
	this->index += 2;
	return ret;
}

int32_t ConstantPoolGen::lookupNameAndType($String* name, $String* signature) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen$Index, _index, $cast($ConstantPoolGen$Index, $nc(this->natTable)->get($$str({name, ConstantPoolGen::NAT_DELIM, signature}))));
	return (_index != nullptr) ? $nc(_index)->index : -1;
}

int32_t ConstantPoolGen::addNameAndType($String* name, $String* signature) {
	$useLocalCurrentObjectStackCache();
	int32_t ret = 0;
	int32_t name_index = 0;
	int32_t signature_index = 0;
	if ((ret = lookupNameAndType(name, signature)) != -1) {
		return ret;
	}
	adjustSize();
	name_index = addUtf8(name);
	signature_index = addUtf8(signature);
	ret = this->index;
	$nc(this->constants)->set(this->index++, $$new($ConstantNameAndType, name_index, signature_index));
	$var($String, key, $str({name, ConstantPoolGen::NAT_DELIM, signature}));
	if (!$nc(this->natTable)->containsKey(key)) {
		$nc(this->natTable)->put(key, $$new($ConstantPoolGen$Index, ret));
	}
	return ret;
}

int32_t ConstantPoolGen::lookupMethodref($String* class_name, $String* method_name, $String* signature) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen$Index, index, $cast($ConstantPoolGen$Index, $nc(this->cpTable)->get($$str({class_name, ConstantPoolGen::METHODREF_DELIM, method_name, ConstantPoolGen::METHODREF_DELIM, signature}))));
	return (index != nullptr) ? $nc(index)->index : -1;
}

int32_t ConstantPoolGen::lookupMethodref($MethodGen* method) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $nc(method)->getClassName());
	$var($String, var$1, method->getName());
	return lookupMethodref(var$0, var$1, $(method->getSignature()));
}

int32_t ConstantPoolGen::addMethodref($String* class_name, $String* method_name, $String* signature) {
	$useLocalCurrentObjectStackCache();
	int32_t ret = 0;
	int32_t class_index = 0;
	int32_t name_and_type_index = 0;
	if ((ret = lookupMethodref(class_name, method_name, signature)) != -1) {
		return ret;
	}
	adjustSize();
	name_and_type_index = addNameAndType(method_name, signature);
	class_index = addClass(class_name);
	ret = this->index;
	$nc(this->constants)->set(this->index++, $$new($ConstantMethodref, class_index, name_and_type_index));
	$var($String, key, $str({class_name, ConstantPoolGen::METHODREF_DELIM, method_name, ConstantPoolGen::METHODREF_DELIM, signature}));
	if (!$nc(this->cpTable)->containsKey(key)) {
		$nc(this->cpTable)->put(key, $$new($ConstantPoolGen$Index, ret));
	}
	return ret;
}

int32_t ConstantPoolGen::addMethodref($MethodGen* method) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $nc(method)->getClassName());
	$var($String, var$1, method->getName());
	return addMethodref(var$0, var$1, $(method->getSignature()));
}

int32_t ConstantPoolGen::lookupInterfaceMethodref($String* class_name, $String* method_name, $String* signature) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen$Index, index, $cast($ConstantPoolGen$Index, $nc(this->cpTable)->get($$str({class_name, ConstantPoolGen::IMETHODREF_DELIM, method_name, ConstantPoolGen::IMETHODREF_DELIM, signature}))));
	return (index != nullptr) ? $nc(index)->index : -1;
}

int32_t ConstantPoolGen::lookupInterfaceMethodref($MethodGen* method) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $nc(method)->getClassName());
	$var($String, var$1, method->getName());
	return lookupInterfaceMethodref(var$0, var$1, $(method->getSignature()));
}

int32_t ConstantPoolGen::addInterfaceMethodref($String* class_name, $String* method_name, $String* signature) {
	$useLocalCurrentObjectStackCache();
	int32_t ret = 0;
	int32_t class_index = 0;
	int32_t name_and_type_index = 0;
	if ((ret = lookupInterfaceMethodref(class_name, method_name, signature)) != -1) {
		return ret;
	}
	adjustSize();
	class_index = addClass(class_name);
	name_and_type_index = addNameAndType(method_name, signature);
	ret = this->index;
	$nc(this->constants)->set(this->index++, $$new($ConstantInterfaceMethodref, class_index, name_and_type_index));
	$var($String, key, $str({class_name, ConstantPoolGen::IMETHODREF_DELIM, method_name, ConstantPoolGen::IMETHODREF_DELIM, signature}));
	if (!$nc(this->cpTable)->containsKey(key)) {
		$nc(this->cpTable)->put(key, $$new($ConstantPoolGen$Index, ret));
	}
	return ret;
}

int32_t ConstantPoolGen::addInterfaceMethodref($MethodGen* method) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $nc(method)->getClassName());
	$var($String, var$1, method->getName());
	return addInterfaceMethodref(var$0, var$1, $(method->getSignature()));
}

int32_t ConstantPoolGen::lookupFieldref($String* class_name, $String* field_name, $String* signature) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen$Index, index, $cast($ConstantPoolGen$Index, $nc(this->cpTable)->get($$str({class_name, ConstantPoolGen::FIELDREF_DELIM, field_name, ConstantPoolGen::FIELDREF_DELIM, signature}))));
	return (index != nullptr) ? $nc(index)->index : -1;
}

int32_t ConstantPoolGen::addFieldref($String* class_name, $String* field_name, $String* signature) {
	$useLocalCurrentObjectStackCache();
	int32_t ret = 0;
	int32_t class_index = 0;
	int32_t name_and_type_index = 0;
	if ((ret = lookupFieldref(class_name, field_name, signature)) != -1) {
		return ret;
	}
	adjustSize();
	class_index = addClass(class_name);
	name_and_type_index = addNameAndType(field_name, signature);
	ret = this->index;
	$nc(this->constants)->set(this->index++, $$new($ConstantFieldref, class_index, name_and_type_index));
	$var($String, key, $str({class_name, ConstantPoolGen::FIELDREF_DELIM, field_name, ConstantPoolGen::FIELDREF_DELIM, signature}));
	if (!$nc(this->cpTable)->containsKey(key)) {
		$nc(this->cpTable)->put(key, $$new($ConstantPoolGen$Index, ret));
	}
	return ret;
}

$Constant* ConstantPoolGen::getConstant(int32_t i) {
	return $nc(this->constants)->get(i);
}

void ConstantPoolGen::setConstant(int32_t i, $Constant* c) {
	$nc(this->constants)->set(i, c);
}

$ConstantPool* ConstantPoolGen::getConstantPool() {
	return $new($ConstantPool, this->constants);
}

int32_t ConstantPoolGen::getSize() {
	return this->index;
}

$ConstantPool* ConstantPoolGen::getFinalConstantPool() {
	$var($ConstantArray, cs, $new($ConstantArray, this->index));
	$System::arraycopy(this->constants, 0, cs, 0, this->index);
	return $new($ConstantPool, cs);
}

$String* ConstantPoolGen::toString() {
	$var($StringBuilder, buf, $new($StringBuilder));
	for (int32_t i = 1; i < this->index; ++i) {
		buf->append(i)->append(")"_s)->append($of($nc(this->constants)->get(i)))->append("\n"_s);
	}
	return buf->toString();
}

int32_t ConstantPoolGen::addConstant($Constant* c, ConstantPoolGen* cp) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantArray, constants, $nc($($nc(cp)->getConstantPool()))->getConstantPool());
	switch ($nc(c)->getTag()) {
	case $Const::CONSTANT_String:
		{
			{
				$var($ConstantString, s, $cast($ConstantString, c));
				$var($ConstantUtf8, u8, $cast($ConstantUtf8, $nc(constants)->get(s->getStringIndex())));
				return addString($($nc(u8)->getBytes()));
			}
		}
	case $Const::CONSTANT_Class:
		{
			{
				$var($ConstantClass, s, $cast($ConstantClass, c));
				$var($ConstantUtf8, u8, $cast($ConstantUtf8, $nc(constants)->get(s->getNameIndex())));
				return addClass($($nc(u8)->getBytes()));
			}
		}
	case $Const::CONSTANT_NameAndType:
		{
			{
				$var($ConstantNameAndType, n, $cast($ConstantNameAndType, c));
				$var($ConstantUtf8, u8, $cast($ConstantUtf8, $nc(constants)->get(n->getNameIndex())));
				$var($ConstantUtf8, u8_2, $cast($ConstantUtf8, constants->get(n->getSignatureIndex())));
				$var($String, var$0, $nc(u8)->getBytes());
				return addNameAndType(var$0, $($nc(u8_2)->getBytes()));
			}
		}
	case $Const::CONSTANT_Utf8:
		{
			return addUtf8($($nc(($cast($ConstantUtf8, c)))->getBytes()));
		}
	case $Const::CONSTANT_Double:
		{
			return addDouble($nc(($cast($ConstantDouble, c)))->getBytes());
		}
	case $Const::CONSTANT_Float:
		{
			return addFloat($nc(($cast($ConstantFloat, c)))->getBytes());
		}
	case $Const::CONSTANT_Long:
		{
			return addLong($nc(($cast($ConstantLong, c)))->getBytes());
		}
	case $Const::CONSTANT_Integer:
		{
			return addInteger($nc(($cast($ConstantInteger, c)))->getBytes());
		}
	case $Const::CONSTANT_InterfaceMethodref:
		{}
	case $Const::CONSTANT_Methodref:
		{}
	case $Const::CONSTANT_Fieldref:
		{
			{
				$var($ConstantCP, m, $cast($ConstantCP, c));
				$var($ConstantClass, clazz, $cast($ConstantClass, $nc(constants)->get(m->getClassIndex())));
				$var($ConstantNameAndType, n, $cast($ConstantNameAndType, constants->get(m->getNameAndTypeIndex())));
				$var($ConstantUtf8, u8, $cast($ConstantUtf8, constants->get($nc(clazz)->getNameIndex())));
				$var($String, class_name, $nc($($nc(u8)->getBytes()))->replace(u'/', u'.'));
				$assign(u8, $cast($ConstantUtf8, constants->get($nc(n)->getNameIndex())));
				$var($String, name, u8->getBytes());
				$assign(u8, $cast($ConstantUtf8, constants->get(n->getSignatureIndex())));
				$var($String, signature, u8->getBytes());
				switch (c->getTag()) {
				case $Const::CONSTANT_InterfaceMethodref:
					{
						return addInterfaceMethodref(class_name, name, signature);
					}
				case $Const::CONSTANT_Methodref:
					{
						return addMethodref(class_name, name, signature);
					}
				case $Const::CONSTANT_Fieldref:
					{
						return addFieldref(class_name, name, signature);
					}
				default:
					{
						$throwNew($IllegalArgumentException, $$str({"Unknown constant type "_s, c}));
					}
				}
			}
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Unknown constant type "_s, c}));
		}
	}
}

void clinit$ConstantPoolGen($Class* class$) {
	$assignStatic(ConstantPoolGen::METHODREF_DELIM, ":"_s);
	$assignStatic(ConstantPoolGen::IMETHODREF_DELIM, "#"_s);
	$assignStatic(ConstantPoolGen::FIELDREF_DELIM, "&"_s);
	$assignStatic(ConstantPoolGen::NAT_DELIM, "%"_s);
	ConstantPoolGen::$assertionsDisabled = !ConstantPoolGen::class$->desiredAssertionStatus();
}

ConstantPoolGen::ConstantPoolGen() {
}

$Class* ConstantPoolGen::load$($String* name, bool initialize) {
	$loadClass(ConstantPoolGen, name, initialize, &_ConstantPoolGen_ClassInfo_, clinit$ConstantPoolGen, allocate$ConstantPoolGen);
	return class$;
}

$Class* ConstantPoolGen::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com