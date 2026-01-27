#include <com/sun/org/apache/bcel/internal/classfile/FieldOrMethod.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/AccessFlags.h>
#include <com/sun/org/apache/bcel/internal/classfile/AnnotationEntry.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/classfile/Signature.h>
#include <java/io/DataInput.h>
#include <java/io/DataInputStream.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/CloneNotSupportedException.h>
#include <jcpp.h>

using $AnnotationEntryArray = $Array<::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry>;
using $AttributeArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $AccessFlags = ::com::sun::org::apache::bcel::internal::classfile::AccessFlags;
using $AnnotationEntry = ::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ConstantUtf8 = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8;
using $Signature = ::com::sun::org::apache::bcel::internal::classfile::Signature;
using $DataInput = ::java::io::DataInput;
using $DataInputStream = ::java::io::DataInputStream;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$CompoundAttribute _FieldOrMethod_MethodAnnotations_init$2[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _FieldOrMethod_FieldInfo_[] = {
	{"name_index", "I", nullptr, $PRIVATE, $field(FieldOrMethod, name_index)},
	{"signature_index", "I", nullptr, $PRIVATE, $field(FieldOrMethod, signature_index)},
	{"attributes", "[Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PRIVATE, $field(FieldOrMethod, attributes)},
	{"attributes_count", "I", nullptr, $PRIVATE, $field(FieldOrMethod, attributes_count)},
	{"annotationEntries", "[Lcom/sun/org/apache/bcel/internal/classfile/AnnotationEntry;", nullptr, $PRIVATE, $field(FieldOrMethod, annotationEntries)},
	{"constant_pool", "Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;", nullptr, $PRIVATE, $field(FieldOrMethod, constant_pool)},
	{"signatureAttributeString", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FieldOrMethod, signatureAttributeString)},
	{"searchedForSignatureAttribute", "Z", nullptr, $PRIVATE, $field(FieldOrMethod, searchedForSignatureAttribute)},
	{}
};

$MethodInfo _FieldOrMethod_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(FieldOrMethod, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/FieldOrMethod;)V", nullptr, $PROTECTED, $method(FieldOrMethod, init$, void, FieldOrMethod*)},
	{"<init>", "(Ljava/io/DataInputStream;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PROTECTED | $DEPRECATED, $method(FieldOrMethod, init$, void, $DataInputStream*, $ConstantPool*), "java.io.IOException,com.sun.org.apache.bcel.internal.classfile.ClassFormatException", nullptr, _FieldOrMethod_MethodAnnotations_init$2},
	{"<init>", "(Ljava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PROTECTED, $method(FieldOrMethod, init$, void, $DataInput*, $ConstantPool*), "java.io.IOException,com.sun.org.apache.bcel.internal.classfile.ClassFormatException"},
	{"<init>", "(III[Lcom/sun/org/apache/bcel/internal/classfile/Attribute;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PROTECTED, $method(FieldOrMethod, init$, void, int32_t, int32_t, int32_t, $AttributeArray*, $ConstantPool*)},
	{"copy_", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/FieldOrMethod;", nullptr, $PROTECTED, $virtualMethod(FieldOrMethod, copy_, FieldOrMethod*, $ConstantPool*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC | $FINAL, $method(FieldOrMethod, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getAnnotationEntries", "()[Lcom/sun/org/apache/bcel/internal/classfile/AnnotationEntry;", nullptr, $PUBLIC, $virtualMethod(FieldOrMethod, getAnnotationEntries, $AnnotationEntryArray*)},
	{"getAttributes", "()[Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC | $FINAL, $method(FieldOrMethod, getAttributes, $AttributeArray*)},
	{"getConstantPool", "()Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;", nullptr, $PUBLIC | $FINAL, $method(FieldOrMethod, getConstantPool, $ConstantPool*)},
	{"getGenericSignature", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(FieldOrMethod, getGenericSignature, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(FieldOrMethod, getName, $String*)},
	{"getNameIndex", "()I", nullptr, $PUBLIC | $FINAL, $method(FieldOrMethod, getNameIndex, int32_t)},
	{"getSignature", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(FieldOrMethod, getSignature, $String*)},
	{"getSignatureIndex", "()I", nullptr, $PUBLIC | $FINAL, $method(FieldOrMethod, getSignatureIndex, int32_t)},
	{"setAttributes", "([Lcom/sun/org/apache/bcel/internal/classfile/Attribute;)V", nullptr, $PUBLIC | $FINAL, $method(FieldOrMethod, setAttributes, void, $AttributeArray*)},
	{"setConstantPool", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC | $FINAL, $method(FieldOrMethod, setConstantPool, void, $ConstantPool*)},
	{"setNameIndex", "(I)V", nullptr, $PUBLIC | $FINAL, $method(FieldOrMethod, setNameIndex, void, int32_t)},
	{"setSignatureIndex", "(I)V", nullptr, $PUBLIC | $FINAL, $method(FieldOrMethod, setSignatureIndex, void, int32_t)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FieldOrMethod_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.classfile.FieldOrMethod",
	"com.sun.org.apache.bcel.internal.classfile.AccessFlags",
	"java.lang.Cloneable,com.sun.org.apache.bcel.internal.classfile.Node",
	_FieldOrMethod_FieldInfo_,
	_FieldOrMethod_MethodInfo_
};

$Object* allocate$FieldOrMethod($Class* clazz) {
	return $of($alloc(FieldOrMethod));
}

int32_t FieldOrMethod::hashCode() {
	 return this->$AccessFlags::hashCode();
}

bool FieldOrMethod::equals(Object$* arg0) {
	 return this->$AccessFlags::equals(arg0);
}

$Object* FieldOrMethod::clone() {
	 return this->$AccessFlags::clone();
}

$String* FieldOrMethod::toString() {
	 return this->$AccessFlags::toString();
}

void FieldOrMethod::finalize() {
	this->$AccessFlags::finalize();
}

void FieldOrMethod::init$() {
	$AccessFlags::init$();
	$set(this, signatureAttributeString, nullptr);
	this->searchedForSignatureAttribute = false;
}

void FieldOrMethod::init$(FieldOrMethod* c) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(c)->getAccessFlags();
	int32_t var$1 = c->getNameIndex();
	int32_t var$2 = c->getSignatureIndex();
	$var($AttributeArray, var$3, c->getAttributes());
	FieldOrMethod::init$(var$0, var$1, var$2, var$3, $(c->getConstantPool()));
}

void FieldOrMethod::init$($DataInputStream* file, $ConstantPool* constant_pool) {
	FieldOrMethod::init$(static_cast<$DataInput*>(file), constant_pool);
}

void FieldOrMethod::init$($DataInput* file, $ConstantPool* constant_pool) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(file)->readUnsignedShort();
	int32_t var$1 = file->readUnsignedShort();
	FieldOrMethod::init$(var$0, var$1, file->readUnsignedShort(), nullptr, constant_pool);
	int32_t attributes_count = $nc(file)->readUnsignedShort();
	$set(this, attributes, $new($AttributeArray, attributes_count));
	for (int32_t i = 0; i < attributes_count; ++i) {
		$nc(this->attributes)->set(i, $($Attribute::readAttribute(file, constant_pool)));
	}
	this->attributes_count = attributes_count;
}

void FieldOrMethod::init$(int32_t access_flags, int32_t name_index, int32_t signature_index, $AttributeArray* attributes, $ConstantPool* constant_pool) {
	$AccessFlags::init$(access_flags);
	$set(this, signatureAttributeString, nullptr);
	this->searchedForSignatureAttribute = false;
	this->name_index = name_index;
	this->signature_index = signature_index;
	$set(this, constant_pool, constant_pool);
	setAttributes(attributes);
}

void FieldOrMethod::dump($DataOutputStream* file) {
	$useLocalCurrentObjectStackCache();
	$nc(file)->writeShort($AccessFlags::getAccessFlags());
	file->writeShort(this->name_index);
	file->writeShort(this->signature_index);
	file->writeShort(this->attributes_count);
	if (this->attributes != nullptr) {
		{
			$var($AttributeArray, arr$, this->attributes);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Attribute, attribute, arr$->get(i$));
				{
					$nc(attribute)->dump(file);
				}
			}
		}
	}
}

$AttributeArray* FieldOrMethod::getAttributes() {
	return this->attributes;
}

void FieldOrMethod::setAttributes($AttributeArray* attributes) {
	$set(this, attributes, attributes);
	this->attributes_count = attributes != nullptr ? $nc(attributes)->length : 0;
}

$ConstantPool* FieldOrMethod::getConstantPool() {
	return this->constant_pool;
}

void FieldOrMethod::setConstantPool($ConstantPool* constant_pool) {
	$set(this, constant_pool, constant_pool);
}

int32_t FieldOrMethod::getNameIndex() {
	return this->name_index;
}

void FieldOrMethod::setNameIndex(int32_t name_index) {
	this->name_index = name_index;
}

int32_t FieldOrMethod::getSignatureIndex() {
	return this->signature_index;
}

void FieldOrMethod::setSignatureIndex(int32_t signature_index) {
	this->signature_index = signature_index;
}

$String* FieldOrMethod::getName() {
	$var($ConstantUtf8, c, nullptr);
	$assign(c, $cast($ConstantUtf8, $nc(this->constant_pool)->getConstant(this->name_index, $Const::CONSTANT_Utf8)));
	return $nc(c)->getBytes();
}

$String* FieldOrMethod::getSignature() {
	$var($ConstantUtf8, c, nullptr);
	$assign(c, $cast($ConstantUtf8, $nc(this->constant_pool)->getConstant(this->signature_index, $Const::CONSTANT_Utf8)));
	return $nc(c)->getBytes();
}

FieldOrMethod* FieldOrMethod::copy_($ConstantPool* _constant_pool) {
	$useLocalCurrentObjectStackCache();
	$var(FieldOrMethod, c, nullptr);
	try {
		$assign(c, $cast(FieldOrMethod, clone()));
	} catch ($CloneNotSupportedException& e) {
	}
	$set($nc(c), constant_pool, this->constant_pool);
	$set(c, attributes, $new($AttributeArray, $nc(this->attributes)->length));
	c->attributes_count = this->attributes_count;
	for (int32_t i = 0; i < $nc(this->attributes)->length; ++i) {
		$nc(c->attributes)->set(i, $($nc($nc(this->attributes)->get(i))->copy(this->constant_pool)));
	}
	return c;
}

$AnnotationEntryArray* FieldOrMethod::getAnnotationEntries() {
	if (this->annotationEntries == nullptr) {
		$set(this, annotationEntries, $AnnotationEntry::createAnnotationEntries($(getAttributes())));
	}
	return this->annotationEntries;
}

$String* FieldOrMethod::getGenericSignature() {
	if (!this->searchedForSignatureAttribute) {
		bool found = false;
		for (int32_t i = 0; !found && i < $nc(this->attributes)->length; ++i) {
			if ($instanceOf($Signature, $nc(this->attributes)->get(i))) {
				$set(this, signatureAttributeString, $nc(($cast($Signature, $nc(this->attributes)->get(i))))->getSignature());
				found = true;
			}
		}
		this->searchedForSignatureAttribute = true;
	}
	return this->signatureAttributeString;
}

FieldOrMethod::FieldOrMethod() {
}

$Class* FieldOrMethod::load$($String* name, bool initialize) {
	$loadClass(FieldOrMethod, name, initialize, &_FieldOrMethod_ClassInfo_, allocate$FieldOrMethod);
	return class$;
}

$Class* FieldOrMethod::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com