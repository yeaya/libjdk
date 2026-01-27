#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/AnnotationDefault.h>
#include <com/sun/org/apache/bcel/internal/classfile/Annotations.h>
#include <com/sun/org/apache/bcel/internal/classfile/BootstrapMethods.h>
#include <com/sun/org/apache/bcel/internal/classfile/Code.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantValue.h>
#include <com/sun/org/apache/bcel/internal/classfile/Deprecated.h>
#include <com/sun/org/apache/bcel/internal/classfile/EnclosingMethod.h>
#include <com/sun/org/apache/bcel/internal/classfile/ExceptionTable.h>
#include <com/sun/org/apache/bcel/internal/classfile/InnerClasses.h>
#include <com/sun/org/apache/bcel/internal/classfile/LineNumberTable.h>
#include <com/sun/org/apache/bcel/internal/classfile/LocalVariableTable.h>
#include <com/sun/org/apache/bcel/internal/classfile/LocalVariableTypeTable.h>
#include <com/sun/org/apache/bcel/internal/classfile/MethodParameters.h>
#include <com/sun/org/apache/bcel/internal/classfile/Module.h>
#include <com/sun/org/apache/bcel/internal/classfile/ModuleMainClass.h>
#include <com/sun/org/apache/bcel/internal/classfile/ModulePackages.h>
#include <com/sun/org/apache/bcel/internal/classfile/NestHost.h>
#include <com/sun/org/apache/bcel/internal/classfile/NestMembers.h>
#include <com/sun/org/apache/bcel/internal/classfile/PMGClass.h>
#include <com/sun/org/apache/bcel/internal/classfile/ParameterAnnotations.h>
#include <com/sun/org/apache/bcel/internal/classfile/RuntimeInvisibleAnnotations.h>
#include <com/sun/org/apache/bcel/internal/classfile/RuntimeInvisibleParameterAnnotations.h>
#include <com/sun/org/apache/bcel/internal/classfile/RuntimeVisibleAnnotations.h>
#include <com/sun/org/apache/bcel/internal/classfile/RuntimeVisibleParameterAnnotations.h>
#include <com/sun/org/apache/bcel/internal/classfile/Signature.h>
#include <com/sun/org/apache/bcel/internal/classfile/SourceFile.h>
#include <com/sun/org/apache/bcel/internal/classfile/StackMap.h>
#include <com/sun/org/apache/bcel/internal/classfile/Synthetic.h>
#include <com/sun/org/apache/bcel/internal/classfile/Unknown.h>
#include <com/sun/org/apache/bcel/internal/classfile/UnknownAttributeReader.h>
#include <java/io/DataInput.h>
#include <java/io/DataInputStream.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef ATTR_ANNOTATION_DEFAULT
#undef ATTR_BOOTSTRAP_METHODS
#undef ATTR_CODE
#undef ATTR_CONSTANT_VALUE
#undef ATTR_DEPRECATED
#undef ATTR_ENCLOSING_METHOD
#undef ATTR_EXCEPTIONS
#undef ATTR_INNER_CLASSES
#undef ATTR_LINE_NUMBER_TABLE
#undef ATTR_LOCAL_VARIABLE_TABLE
#undef ATTR_LOCAL_VARIABLE_TYPE_TABLE
#undef ATTR_METHOD_PARAMETERS
#undef ATTR_MODULE
#undef ATTR_MODULE_MAIN_CLASS
#undef ATTR_MODULE_PACKAGES
#undef ATTR_NEST_HOST
#undef ATTR_NEST_MEMBERS
#undef ATTR_PMG
#undef ATTR_RUNTIME_INVISIBLE_ANNOTATIONS
#undef ATTR_RUNTIME_INVISIBLE_PARAMETER_ANNOTATIONS
#undef ATTR_RUNTIME_VISIBLE_ANNOTATIONS
#undef ATTR_RUNTIME_VISIBLE_PARAMETER_ANNOTATIONS
#undef ATTR_SIGNATURE
#undef ATTR_SOURCE_FILE
#undef ATTR_STACK_MAP
#undef ATTR_STACK_MAP_TABLE
#undef ATTR_SYNTHETIC
#undef ATTR_UNKNOWN
#undef KNOWN_ATTRIBUTES

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $AnnotationDefault = ::com::sun::org::apache::bcel::internal::classfile::AnnotationDefault;
using $Annotations = ::com::sun::org::apache::bcel::internal::classfile::Annotations;
using $BootstrapMethods = ::com::sun::org::apache::bcel::internal::classfile::BootstrapMethods;
using $Code = ::com::sun::org::apache::bcel::internal::classfile::Code;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ConstantUtf8 = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8;
using $ConstantValue = ::com::sun::org::apache::bcel::internal::classfile::ConstantValue;
using $Deprecated = ::com::sun::org::apache::bcel::internal::classfile::Deprecated;
using $EnclosingMethod = ::com::sun::org::apache::bcel::internal::classfile::EnclosingMethod;
using $ExceptionTable = ::com::sun::org::apache::bcel::internal::classfile::ExceptionTable;
using $InnerClasses = ::com::sun::org::apache::bcel::internal::classfile::InnerClasses;
using $LineNumberTable = ::com::sun::org::apache::bcel::internal::classfile::LineNumberTable;
using $LocalVariableTable = ::com::sun::org::apache::bcel::internal::classfile::LocalVariableTable;
using $LocalVariableTypeTable = ::com::sun::org::apache::bcel::internal::classfile::LocalVariableTypeTable;
using $MethodParameters = ::com::sun::org::apache::bcel::internal::classfile::MethodParameters;
using $Module = ::com::sun::org::apache::bcel::internal::classfile::Module;
using $ModuleMainClass = ::com::sun::org::apache::bcel::internal::classfile::ModuleMainClass;
using $ModulePackages = ::com::sun::org::apache::bcel::internal::classfile::ModulePackages;
using $NestHost = ::com::sun::org::apache::bcel::internal::classfile::NestHost;
using $NestMembers = ::com::sun::org::apache::bcel::internal::classfile::NestMembers;
using $PMGClass = ::com::sun::org::apache::bcel::internal::classfile::PMGClass;
using $ParameterAnnotations = ::com::sun::org::apache::bcel::internal::classfile::ParameterAnnotations;
using $RuntimeInvisibleAnnotations = ::com::sun::org::apache::bcel::internal::classfile::RuntimeInvisibleAnnotations;
using $RuntimeInvisibleParameterAnnotations = ::com::sun::org::apache::bcel::internal::classfile::RuntimeInvisibleParameterAnnotations;
using $RuntimeVisibleAnnotations = ::com::sun::org::apache::bcel::internal::classfile::RuntimeVisibleAnnotations;
using $RuntimeVisibleParameterAnnotations = ::com::sun::org::apache::bcel::internal::classfile::RuntimeVisibleParameterAnnotations;
using $Signature = ::com::sun::org::apache::bcel::internal::classfile::Signature;
using $SourceFile = ::com::sun::org::apache::bcel::internal::classfile::SourceFile;
using $StackMap = ::com::sun::org::apache::bcel::internal::classfile::StackMap;
using $Synthetic = ::com::sun::org::apache::bcel::internal::classfile::Synthetic;
using $Unknown = ::com::sun::org::apache::bcel::internal::classfile::Unknown;
using $UnknownAttributeReader = ::com::sun::org::apache::bcel::internal::classfile::UnknownAttributeReader;
using $DataInput = ::java::io::DataInput;
using $DataInputStream = ::java::io::DataInputStream;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
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
						namespace classfile {

$FieldInfo _Attribute_FieldInfo_[] = {
	{"debug", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Attribute, debug)},
	{"name_index", "I", nullptr, $PRIVATE, $field(Attribute, name_index)},
	{"length", "I", nullptr, $PRIVATE, $field(Attribute, length)},
	{"tag", "B", nullptr, $PRIVATE | $FINAL, $field(Attribute, tag)},
	{"constant_pool", "Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;", nullptr, $PRIVATE, $field(Attribute, constant_pool)},
	{"readers", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Attribute, readers)},
	{}
};

$MethodInfo _Attribute_MethodInfo_[] = {
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(BIILcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PROTECTED, $method(Attribute, init$, void, int8_t, int32_t, int32_t, $ConstantPool*)},
	{"addAttributeReader", "(Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/classfile/UnknownAttributeReader;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Attribute, addAttributeReader, void, $String*, $UnknownAttributeReader*)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Attribute, clone, $Object*)},
	{"copy", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attribute, copy, Attribute*, $ConstantPool*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(Attribute, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getConstantPool", "()Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;", nullptr, $PUBLIC | $FINAL, $method(Attribute, getConstantPool, $ConstantPool*)},
	{"getLength", "()I", nullptr, $PUBLIC | $FINAL, $method(Attribute, getLength, int32_t)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Attribute, getName, $String*)},
	{"getNameIndex", "()I", nullptr, $PUBLIC | $FINAL, $method(Attribute, getNameIndex, int32_t)},
	{"getTag", "()B", nullptr, $PUBLIC | $FINAL, $method(Attribute, getTag, int8_t)},
	{"println", "(Ljava/lang/String;)V", nullptr, $PROTECTED | $STATIC, $staticMethod(Attribute, println, void, $String*)},
	{"readAttribute", "(Ljava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC | $STATIC, $staticMethod(Attribute, readAttribute, Attribute*, $DataInput*, $ConstantPool*), "java.io.IOException,com.sun.org.apache.bcel.internal.classfile.ClassFormatException"},
	{"readAttribute", "(Ljava/io/DataInputStream;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC | $STATIC, $staticMethod(Attribute, readAttribute, Attribute*, $DataInputStream*, $ConstantPool*), "java.io.IOException,com.sun.org.apache.bcel.internal.classfile.ClassFormatException"},
	{"removeAttributeReader", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Attribute, removeAttributeReader, void, $String*)},
	{"setConstantPool", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC | $FINAL, $method(Attribute, setConstantPool, void, $ConstantPool*)},
	{"setLength", "(I)V", nullptr, $PUBLIC | $FINAL, $method(Attribute, setLength, void, int32_t)},
	{"setNameIndex", "(I)V", nullptr, $PUBLIC | $FINAL, $method(Attribute, setNameIndex, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Attribute, toString, $String*)},
	{}
};

$ClassInfo _Attribute_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.classfile.Attribute",
	"java.lang.Object",
	"java.lang.Cloneable,com.sun.org.apache.bcel.internal.classfile.Node",
	_Attribute_FieldInfo_,
	_Attribute_MethodInfo_
};

$Object* allocate$Attribute($Class* clazz) {
	return $of($alloc(Attribute));
}

int32_t Attribute::hashCode() {
	 return this->$Cloneable::hashCode();
}

bool Attribute::equals(Object$* arg0) {
	 return this->$Cloneable::equals(arg0);
}

void Attribute::finalize() {
	this->$Cloneable::finalize();
}

$Map* Attribute::readers = nullptr;

void Attribute::addAttributeReader($String* name, $UnknownAttributeReader* r) {
	$init(Attribute);
	$nc(Attribute::readers)->put(name, r);
}

void Attribute::println($String* msg) {
	$init(Attribute);
}

Attribute* Attribute::readAttribute($DataInput* file, $ConstantPool* constant_pool) {
	$init(Attribute);
	$useLocalCurrentObjectStackCache();
	int8_t tag = $Const::ATTR_UNKNOWN;
	int32_t name_index = $nc(file)->readUnsignedShort();
	$var($ConstantUtf8, c, $cast($ConstantUtf8, $nc(constant_pool)->getConstant(name_index, $Const::CONSTANT_Utf8)));
	$var($String, name, $nc(c)->getBytes());
	int32_t length = file->readInt();
	for (int8_t i = (int8_t)0; i < $Const::KNOWN_ATTRIBUTES; ++i) {
		if ($nc(name)->equals($($Const::getAttributeName(i)))) {
			tag = i;
			break;
		}
	}
	{
		$var($Object, r, nullptr)
		switch (tag) {
		case $Const::ATTR_UNKNOWN:
			{
				$assign(r, $nc(Attribute::readers)->get(name));
				if ($instanceOf($UnknownAttributeReader, r)) {
					return $nc(($cast($UnknownAttributeReader, r)))->createAttribute(name_index, length, file, constant_pool);
				}
				return $new($Unknown, name_index, length, file, constant_pool);
			}
		case $Const::ATTR_CONSTANT_VALUE:
			{
				return $new($ConstantValue, name_index, length, file, constant_pool);
			}
		case $Const::ATTR_SOURCE_FILE:
			{
				return $new($SourceFile, name_index, length, file, constant_pool);
			}
		case $Const::ATTR_CODE:
			{
				return $new($Code, name_index, length, file, constant_pool);
			}
		case $Const::ATTR_EXCEPTIONS:
			{
				return $new($ExceptionTable, name_index, length, file, constant_pool);
			}
		case $Const::ATTR_LINE_NUMBER_TABLE:
			{
				return $new($LineNumberTable, name_index, length, file, constant_pool);
			}
		case $Const::ATTR_LOCAL_VARIABLE_TABLE:
			{
				return $new($LocalVariableTable, name_index, length, file, constant_pool);
			}
		case $Const::ATTR_INNER_CLASSES:
			{
				return $new($InnerClasses, name_index, length, file, constant_pool);
			}
		case $Const::ATTR_SYNTHETIC:
			{
				return $new($Synthetic, name_index, length, file, constant_pool);
			}
		case $Const::ATTR_DEPRECATED:
			{
				return $new($Deprecated, name_index, length, file, constant_pool);
			}
		case $Const::ATTR_PMG:
			{
				return $new($PMGClass, name_index, length, file, constant_pool);
			}
		case $Const::ATTR_SIGNATURE:
			{
				return $new($Signature, name_index, length, file, constant_pool);
			}
		case $Const::ATTR_STACK_MAP:
			{
				println("Warning: Obsolete StackMap attribute ignored."_s);
				return $new($Unknown, name_index, length, file, constant_pool);
			}
		case $Const::ATTR_RUNTIME_VISIBLE_ANNOTATIONS:
			{
				return $new($RuntimeVisibleAnnotations, name_index, length, file, constant_pool);
			}
		case $Const::ATTR_RUNTIME_INVISIBLE_ANNOTATIONS:
			{
				return $new($RuntimeInvisibleAnnotations, name_index, length, file, constant_pool);
			}
		case $Const::ATTR_RUNTIME_VISIBLE_PARAMETER_ANNOTATIONS:
			{
				return $new($RuntimeVisibleParameterAnnotations, name_index, length, file, constant_pool);
			}
		case $Const::ATTR_RUNTIME_INVISIBLE_PARAMETER_ANNOTATIONS:
			{
				return $new($RuntimeInvisibleParameterAnnotations, name_index, length, file, constant_pool);
			}
		case $Const::ATTR_ANNOTATION_DEFAULT:
			{
				return $new($AnnotationDefault, name_index, length, file, constant_pool);
			}
		case $Const::ATTR_LOCAL_VARIABLE_TYPE_TABLE:
			{
				return $new($LocalVariableTypeTable, name_index, length, file, constant_pool);
			}
		case $Const::ATTR_ENCLOSING_METHOD:
			{
				return $new($EnclosingMethod, name_index, length, file, constant_pool);
			}
		case $Const::ATTR_STACK_MAP_TABLE:
			{
				return $new($StackMap, name_index, length, file, constant_pool);
			}
		case $Const::ATTR_BOOTSTRAP_METHODS:
			{
				return $new($BootstrapMethods, name_index, length, file, constant_pool);
			}
		case $Const::ATTR_METHOD_PARAMETERS:
			{
				return $new($MethodParameters, name_index, length, file, constant_pool);
			}
		case $Const::ATTR_MODULE:
			{
				return $new($Module, name_index, length, file, constant_pool);
			}
		case $Const::ATTR_MODULE_PACKAGES:
			{
				return $new($ModulePackages, name_index, length, file, constant_pool);
			}
		case $Const::ATTR_MODULE_MAIN_CLASS:
			{
				return $new($ModuleMainClass, name_index, length, file, constant_pool);
			}
		case $Const::ATTR_NEST_HOST:
			{
				return $new($NestHost, name_index, length, file, constant_pool);
			}
		case $Const::ATTR_NEST_MEMBERS:
			{
				return $new($NestMembers, name_index, length, file, constant_pool);
			}
		default:
			{
				$throwNew($IllegalStateException, $$str({"Unrecognized attribute type tag parsed: "_s, $$str(tag)}));
			}
		}
	}
}

Attribute* Attribute::readAttribute($DataInputStream* file, $ConstantPool* constant_pool) {
	$init(Attribute);
	return readAttribute(static_cast<$DataInput*>(file), constant_pool);
}

void Attribute::removeAttributeReader($String* name) {
	$init(Attribute);
	$nc(Attribute::readers)->remove(name);
}

void Attribute::init$(int8_t tag, int32_t name_index, int32_t length, $ConstantPool* constant_pool) {
	this->tag = tag;
	this->name_index = name_index;
	this->length = length;
	$set(this, constant_pool, constant_pool);
}

$Object* Attribute::clone() {
	$var(Attribute, attr, nullptr);
	try {
		$assign(attr, $cast(Attribute, $Cloneable::clone()));
	} catch ($CloneNotSupportedException& e) {
		$throwNew($Error, "Clone Not Supported"_s);
	}
	return $of(attr);
}

void Attribute::dump($DataOutputStream* file) {
	$nc(file)->writeShort(this->name_index);
	file->writeInt(this->length);
}

$ConstantPool* Attribute::getConstantPool() {
	return this->constant_pool;
}

int32_t Attribute::getLength() {
	return this->length;
}

$String* Attribute::getName() {
	$var($ConstantUtf8, c, $cast($ConstantUtf8, $nc(this->constant_pool)->getConstant(this->name_index, $Const::CONSTANT_Utf8)));
	return $nc(c)->getBytes();
}

int32_t Attribute::getNameIndex() {
	return this->name_index;
}

int8_t Attribute::getTag() {
	return this->tag;
}

void Attribute::setConstantPool($ConstantPool* constant_pool) {
	$set(this, constant_pool, constant_pool);
}

void Attribute::setLength(int32_t length) {
	this->length = length;
}

void Attribute::setNameIndex(int32_t name_index) {
	this->name_index = name_index;
}

$String* Attribute::toString() {
	return $Const::getAttributeName(this->tag);
}

void clinit$Attribute($Class* class$) {
	$assignStatic(Attribute::readers, $new($HashMap));
}

Attribute::Attribute() {
}

$Class* Attribute::load$($String* name, bool initialize) {
	$loadClass(Attribute, name, initialize, &_Attribute_ClassInfo_, clinit$Attribute, allocate$Attribute);
	return class$;
}

$Class* Attribute::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com