#include <com/sun/org/apache/bcel/internal/classfile/SourceFile.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef ATTR_SOURCE_FILE

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
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

$FieldInfo _SourceFile_FieldInfo_[] = {
	{"sourceFileIndex", "I", nullptr, $PRIVATE, $field(SourceFile, sourceFileIndex)},
	{}
};

$MethodInfo _SourceFile_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/SourceFile;)V", nullptr, $PUBLIC, $method(SourceFile, init$, void, SourceFile*)},
	{"<init>", "(IILjava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, 0, $method(SourceFile, init$, void, int32_t, int32_t, $DataInput*, $ConstantPool*), "java.io.IOException"},
	{"<init>", "(IIILcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(SourceFile, init$, void, int32_t, int32_t, int32_t, $ConstantPool*)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(SourceFile, accept, void, $Visitor*)},
	{"copy", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC, $virtualMethod(SourceFile, copy, $Attribute*, $ConstantPool*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(SourceFile, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getSourceFileIndex", "()I", nullptr, $PUBLIC, $method(SourceFile, getSourceFileIndex, int32_t)},
	{"getSourceFileName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(SourceFile, getSourceFileName, $String*)},
	{"setSourceFileIndex", "(I)V", nullptr, $PUBLIC, $method(SourceFile, setSourceFileIndex, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SourceFile, toString, $String*)},
	{}
};

$ClassInfo _SourceFile_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.SourceFile",
	"com.sun.org.apache.bcel.internal.classfile.Attribute",
	nullptr,
	_SourceFile_FieldInfo_,
	_SourceFile_MethodInfo_
};

$Object* allocate$SourceFile($Class* clazz) {
	return $of($alloc(SourceFile));
}

void SourceFile::init$(SourceFile* c) {
	int32_t var$0 = $nc(c)->getNameIndex();
	int32_t var$1 = c->getLength();
	int32_t var$2 = c->getSourceFileIndex();
	SourceFile::init$(var$0, var$1, var$2, $(c->getConstantPool()));
}

void SourceFile::init$(int32_t name_index, int32_t length, $DataInput* input, $ConstantPool* constant_pool) {
	SourceFile::init$(name_index, length, $nc(input)->readUnsignedShort(), constant_pool);
}

void SourceFile::init$(int32_t name_index, int32_t length, int32_t sourceFileIndex, $ConstantPool* constantPool) {
	$Attribute::init$($Const::ATTR_SOURCE_FILE, name_index, length, constantPool);
	this->sourceFileIndex = sourceFileIndex;
}

void SourceFile::accept($Visitor* v) {
	$nc(v)->visitSourceFile(this);
}

void SourceFile::dump($DataOutputStream* file) {
	$Attribute::dump(file);
	$nc(file)->writeShort(this->sourceFileIndex);
}

int32_t SourceFile::getSourceFileIndex() {
	return this->sourceFileIndex;
}

void SourceFile::setSourceFileIndex(int32_t sourceFileIndex) {
	this->sourceFileIndex = sourceFileIndex;
}

$String* SourceFile::getSourceFileName() {
	$useLocalCurrentObjectStackCache();
	$var($ConstantUtf8, c, $cast($ConstantUtf8, $nc($($Attribute::getConstantPool()))->getConstant(this->sourceFileIndex, $Const::CONSTANT_Utf8)));
	return $nc(c)->getBytes();
}

$String* SourceFile::toString() {
	return $str({"SourceFile: "_s, $(getSourceFileName())});
}

$Attribute* SourceFile::copy($ConstantPool* _constant_pool) {
	return $cast($Attribute, clone());
}

SourceFile::SourceFile() {
}

$Class* SourceFile::load$($String* name, bool initialize) {
	$loadClass(SourceFile, name, initialize, &_SourceFile_ClassInfo_, allocate$SourceFile);
	return class$;
}

$Class* SourceFile::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com