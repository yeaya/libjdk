#include <com/sun/org/apache/bcel/internal/classfile/ClassParser.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ClassFormatException.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/Field.h>
#include <com/sun/org/apache/bcel/internal/classfile/JavaClass.h>
#include <com/sun/org/apache/bcel/internal/classfile/Method.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/DataInput.h>
#include <java/io/DataInputStream.h>
#include <java/io/FileInputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/util/zip/ZipEntry.h>
#include <java/util/zip/ZipFile.h>
#include <jcpp.h>

#undef ACC_ABSTRACT
#undef ACC_FINAL
#undef ACC_INTERFACE
#undef BUFSIZE
#undef FILE
#undef JVM_CLASSFILE_MAGIC
#undef ZIP

using $AttributeArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>;
using $FieldArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Field>;
using $MethodArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Method>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $ClassFormatException = ::com::sun::org::apache::bcel::internal::classfile::ClassFormatException;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $Field = ::com::sun::org::apache::bcel::internal::classfile::Field;
using $JavaClass = ::com::sun::org::apache::bcel::internal::classfile::JavaClass;
using $Method = ::com::sun::org::apache::bcel::internal::classfile::Method;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $DataInput = ::java::io::DataInput;
using $DataInputStream = ::java::io::DataInputStream;
using $FileInputStream = ::java::io::FileInputStream;
using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ZipEntry = ::java::util::zip::ZipEntry;
using $ZipFile = ::java::util::zip::ZipFile;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _ClassParser_FieldInfo_[] = {
	{"dataInputStream", "Ljava/io/DataInputStream;", nullptr, $PRIVATE, $field(ClassParser, dataInputStream)},
	{"fileOwned", "Z", nullptr, $PRIVATE | $FINAL, $field(ClassParser, fileOwned)},
	{"fileName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ClassParser, fileName)},
	{"zipFile", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ClassParser, zipFile)},
	{"classNameIndex", "I", nullptr, $PRIVATE, $field(ClassParser, classNameIndex)},
	{"superclassNameIndex", "I", nullptr, $PRIVATE, $field(ClassParser, superclassNameIndex)},
	{"major", "I", nullptr, $PRIVATE, $field(ClassParser, major)},
	{"minor", "I", nullptr, $PRIVATE, $field(ClassParser, minor)},
	{"accessFlags", "I", nullptr, $PRIVATE, $field(ClassParser, accessFlags)},
	{"interfaces", "[I", nullptr, $PRIVATE, $field(ClassParser, interfaces)},
	{"constantPool", "Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;", nullptr, $PRIVATE, $field(ClassParser, constantPool)},
	{"fields", "[Lcom/sun/org/apache/bcel/internal/classfile/Field;", nullptr, $PRIVATE, $field(ClassParser, fields)},
	{"methods", "[Lcom/sun/org/apache/bcel/internal/classfile/Method;", nullptr, $PRIVATE, $field(ClassParser, methods)},
	{"attributes", "[Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PRIVATE, $field(ClassParser, attributes)},
	{"isZip", "Z", nullptr, $PRIVATE | $FINAL, $field(ClassParser, isZip)},
	{"BUFSIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClassParser, BUFSIZE)},
	{}
};

$MethodInfo _ClassParser_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ClassParser, init$, void, $InputStream*, $String*)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ClassParser, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ClassParser, init$, void, $String*, $String*)},
	{"parse", "()Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", nullptr, $PUBLIC, $method(ClassParser, parse, $JavaClass*), "java.io.IOException,com.sun.org.apache.bcel.internal.classfile.ClassFormatException"},
	{"readAttributes", "()V", nullptr, $PRIVATE, $method(ClassParser, readAttributes, void), "java.io.IOException,com.sun.org.apache.bcel.internal.classfile.ClassFormatException"},
	{"readClassInfo", "()V", nullptr, $PRIVATE, $method(ClassParser, readClassInfo, void), "java.io.IOException,com.sun.org.apache.bcel.internal.classfile.ClassFormatException"},
	{"readConstantPool", "()V", nullptr, $PRIVATE, $method(ClassParser, readConstantPool, void), "java.io.IOException,com.sun.org.apache.bcel.internal.classfile.ClassFormatException"},
	{"readFields", "()V", nullptr, $PRIVATE, $method(ClassParser, readFields, void), "java.io.IOException,com.sun.org.apache.bcel.internal.classfile.ClassFormatException"},
	{"readID", "()V", nullptr, $PRIVATE, $method(ClassParser, readID, void), "java.io.IOException,com.sun.org.apache.bcel.internal.classfile.ClassFormatException"},
	{"readInterfaces", "()V", nullptr, $PRIVATE, $method(ClassParser, readInterfaces, void), "java.io.IOException,com.sun.org.apache.bcel.internal.classfile.ClassFormatException"},
	{"readMethods", "()V", nullptr, $PRIVATE, $method(ClassParser, readMethods, void), "java.io.IOException,com.sun.org.apache.bcel.internal.classfile.ClassFormatException"},
	{"readVersion", "()V", nullptr, $PRIVATE, $method(ClassParser, readVersion, void), "java.io.IOException,com.sun.org.apache.bcel.internal.classfile.ClassFormatException"},
	{}
};

$ClassInfo _ClassParser_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.ClassParser",
	"java.lang.Object",
	nullptr,
	_ClassParser_FieldInfo_,
	_ClassParser_MethodInfo_
};

$Object* allocate$ClassParser($Class* clazz) {
	return $of($alloc(ClassParser));
}

void ClassParser::init$($InputStream* inputStream, $String* fileName) {
	$useLocalCurrentObjectStackCache();
	$set(this, fileName, fileName);
	this->fileOwned = false;
	$var($String, clazz, $nc($of(inputStream))->getClass()->getName());
	bool var$0 = $nc(clazz)->startsWith("java.util.zip."_s);
	this->isZip = var$0 || $nc(clazz)->startsWith("java.util.jar."_s);
	if ($instanceOf($DataInputStream, inputStream)) {
		$set(this, dataInputStream, $cast($DataInputStream, inputStream));
	} else {
		$set(this, dataInputStream, $new($DataInputStream, $$new($BufferedInputStream, inputStream, ClassParser::BUFSIZE)));
	}
}

void ClassParser::init$($String* fileName) {
	this->isZip = false;
	$set(this, fileName, fileName);
	this->fileOwned = true;
}

void ClassParser::init$($String* zipFile, $String* fileName) {
	this->isZip = true;
	this->fileOwned = true;
	$set(this, zipFile, zipFile);
	$set(this, fileName, fileName);
}

$JavaClass* ClassParser::parse() {
	$useLocalCurrentObjectStackCache();
	$var($ZipFile, zip, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (this->fileOwned) {
				if (this->isZip) {
					$assign(zip, $new($ZipFile, this->zipFile));
					$var($ZipEntry, entry, zip->getEntry(this->fileName));
					if (entry == nullptr) {
						$throwNew($IOException, $$str({"File "_s, this->fileName, " not found"_s}));
					}
					$set(this, dataInputStream, $new($DataInputStream, $$new($BufferedInputStream, $(zip->getInputStream(entry)), ClassParser::BUFSIZE)));
				} else {
					$set(this, dataInputStream, $new($DataInputStream, $$new($BufferedInputStream, $$new($FileInputStream, this->fileName), ClassParser::BUFSIZE)));
				}
			}
			readID();
			readVersion();
			readConstantPool();
			readClassInfo();
			readInterfaces();
			readFields();
			readMethods();
			readAttributes();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (this->fileOwned) {
				try {
					if (this->dataInputStream != nullptr) {
						$nc(this->dataInputStream)->close();
					}
				} catch ($IOException& ioe) {
				}
			}
			try {
				if (zip != nullptr) {
					zip->close();
				}
			} catch ($IOException& ioe) {
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return $new($JavaClass, this->classNameIndex, this->superclassNameIndex, this->fileName, this->major, this->minor, this->accessFlags, this->constantPool, this->interfaces, this->fields, this->methods, this->attributes, this->isZip ? $JavaClass::ZIP : $JavaClass::FILE);
}

void ClassParser::readAttributes() {
	$useLocalCurrentObjectStackCache();
	int32_t attributes_count = $nc(this->dataInputStream)->readUnsignedShort();
	$set(this, attributes, $new($AttributeArray, attributes_count));
	for (int32_t i = 0; i < attributes_count; ++i) {
		$nc(this->attributes)->set(i, $($Attribute::readAttribute(this->dataInputStream, this->constantPool)));
	}
}

void ClassParser::readClassInfo() {
	this->accessFlags = $nc(this->dataInputStream)->readUnsignedShort();
	if (((int32_t)(this->accessFlags & (uint32_t)(int32_t)$Const::ACC_INTERFACE)) != 0) {
		this->accessFlags |= $Const::ACC_ABSTRACT;
	}
	if ((((int32_t)(this->accessFlags & (uint32_t)(int32_t)$Const::ACC_ABSTRACT)) != 0) && (((int32_t)(this->accessFlags & (uint32_t)(int32_t)$Const::ACC_FINAL)) != 0)) {
		$throwNew($ClassFormatException, $$str({"Class "_s, this->fileName, " can\'t be both final and abstract"_s}));
	}
	this->classNameIndex = $nc(this->dataInputStream)->readUnsignedShort();
	this->superclassNameIndex = $nc(this->dataInputStream)->readUnsignedShort();
}

void ClassParser::readConstantPool() {
	$set(this, constantPool, $new($ConstantPool, static_cast<$DataInput*>(this->dataInputStream)));
}

void ClassParser::readFields() {
	$useLocalCurrentObjectStackCache();
	int32_t fields_count = $nc(this->dataInputStream)->readUnsignedShort();
	$set(this, fields, $new($FieldArray, fields_count));
	for (int32_t i = 0; i < fields_count; ++i) {
		$nc(this->fields)->set(i, $$new($Field, this->dataInputStream, this->constantPool));
	}
}

void ClassParser::readID() {
	if ($nc(this->dataInputStream)->readInt() != $Const::JVM_CLASSFILE_MAGIC) {
		$throwNew($ClassFormatException, $$str({this->fileName, " is not a Java .class file"_s}));
	}
}

void ClassParser::readInterfaces() {
	int32_t interfaces_count = $nc(this->dataInputStream)->readUnsignedShort();
	$set(this, interfaces, $new($ints, interfaces_count));
	for (int32_t i = 0; i < interfaces_count; ++i) {
		$nc(this->interfaces)->set(i, $nc(this->dataInputStream)->readUnsignedShort());
	}
}

void ClassParser::readMethods() {
	$useLocalCurrentObjectStackCache();
	int32_t methods_count = $nc(this->dataInputStream)->readUnsignedShort();
	$set(this, methods, $new($MethodArray, methods_count));
	for (int32_t i = 0; i < methods_count; ++i) {
		$nc(this->methods)->set(i, $$new($Method, this->dataInputStream, this->constantPool));
	}
}

void ClassParser::readVersion() {
	this->minor = $nc(this->dataInputStream)->readUnsignedShort();
	this->major = $nc(this->dataInputStream)->readUnsignedShort();
}

ClassParser::ClassParser() {
}

$Class* ClassParser::load$($String* name, bool initialize) {
	$loadClass(ClassParser, name, initialize, &_ClassParser_ClassInfo_, allocate$ClassParser);
	return class$;
}

$Class* ClassParser::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com