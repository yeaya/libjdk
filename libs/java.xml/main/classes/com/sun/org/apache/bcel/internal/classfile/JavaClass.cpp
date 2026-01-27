#include <com/sun/org/apache/bcel/internal/classfile/JavaClass.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/AccessFlags.h>
#include <com/sun/org/apache/bcel/internal/classfile/AnnotationEntry.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/Field.h>
#include <com/sun/org/apache/bcel/internal/classfile/InnerClass.h>
#include <com/sun/org/apache/bcel/internal/classfile/InnerClasses.h>
#include <com/sun/org/apache/bcel/internal/classfile/JavaClass$1.h>
#include <com/sun/org/apache/bcel/internal/classfile/Method.h>
#include <com/sun/org/apache/bcel/internal/classfile/SourceFile.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/bcel/internal/util/BCELComparator.h>
#include <com/sun/org/apache/bcel/internal/util/ClassQueue.h>
#include <com/sun/org/apache/bcel/internal/util/Repository.h>
#include <com/sun/org/apache/bcel/internal/util/SyntheticRepository.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/DataOutputStream.h>
#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/StringTokenizer.h>
#include <java/util/TreeSet.h>
#include <jcpp.h>

#undef ACC_INTERFACE
#undef ACC_SUPER
#undef FILE
#undef HEAP
#undef JVM_CLASSFILE_MAGIC
#undef ZIP

using $AnnotationEntryArray = $Array<::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry>;
using $AttributeArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>;
using $FieldArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Field>;
using $InnerClassArray = $Array<::com::sun::org::apache::bcel::internal::classfile::InnerClass>;
using $JavaClassArray = $Array<::com::sun::org::apache::bcel::internal::classfile::JavaClass>;
using $MethodArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Method>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $AccessFlags = ::com::sun::org::apache::bcel::internal::classfile::AccessFlags;
using $AnnotationEntry = ::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $Field = ::com::sun::org::apache::bcel::internal::classfile::Field;
using $InnerClass = ::com::sun::org::apache::bcel::internal::classfile::InnerClass;
using $InnerClasses = ::com::sun::org::apache::bcel::internal::classfile::InnerClasses;
using $JavaClass$1 = ::com::sun::org::apache::bcel::internal::classfile::JavaClass$1;
using $Method = ::com::sun::org::apache::bcel::internal::classfile::Method;
using $SourceFile = ::com::sun::org::apache::bcel::internal::classfile::SourceFile;
using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $BCELComparator = ::com::sun::org::apache::bcel::internal::util::BCELComparator;
using $ClassQueue = ::com::sun::org::apache::bcel::internal::util::ClassQueue;
using $Repository = ::com::sun::org::apache::bcel::internal::util::Repository;
using $SyntheticRepository = ::com::sun::org::apache::bcel::internal::util::SyntheticRepository;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $DataOutputStream = ::java::io::DataOutputStream;
using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Method = ::java::lang::reflect::Method;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $StringTokenizer = ::java::util::StringTokenizer;
using $TreeSet = ::java::util::TreeSet;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _JavaClass_FieldInfo_[] = {
	{"fileName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JavaClass, fileName)},
	{"packageName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JavaClass, packageName)},
	{"sourceFileName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JavaClass, sourceFileName)},
	{"classNameIndex", "I", nullptr, $PRIVATE, $field(JavaClass, classNameIndex)},
	{"superclassNameIndex", "I", nullptr, $PRIVATE, $field(JavaClass, superclassNameIndex)},
	{"className", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JavaClass, className)},
	{"superclassName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JavaClass, superclassName)},
	{"major", "I", nullptr, $PRIVATE, $field(JavaClass, major)},
	{"minor", "I", nullptr, $PRIVATE, $field(JavaClass, minor)},
	{"constantPool", "Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;", nullptr, $PRIVATE, $field(JavaClass, constantPool)},
	{"interfaces", "[I", nullptr, $PRIVATE, $field(JavaClass, interfaces)},
	{"interfaceNames", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(JavaClass, interfaceNames)},
	{"fields", "[Lcom/sun/org/apache/bcel/internal/classfile/Field;", nullptr, $PRIVATE, $field(JavaClass, fields)},
	{"methods", "[Lcom/sun/org/apache/bcel/internal/classfile/Method;", nullptr, $PRIVATE, $field(JavaClass, methods)},
	{"attributes", "[Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PRIVATE, $field(JavaClass, attributes)},
	{"annotations", "[Lcom/sun/org/apache/bcel/internal/classfile/AnnotationEntry;", nullptr, $PRIVATE, $field(JavaClass, annotations)},
	{"source", "B", nullptr, $PRIVATE, $field(JavaClass, source)},
	{"isAnonymous", "Z", nullptr, $PRIVATE, $field(JavaClass, isAnonymous$)},
	{"isNested", "Z", nullptr, $PRIVATE, $field(JavaClass, isNested$)},
	{"computedNestedTypeStatus", "Z", nullptr, $PRIVATE, $field(JavaClass, computedNestedTypeStatus)},
	{"HEAP", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JavaClass, HEAP)},
	{"FILE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JavaClass, FILE)},
	{"ZIP", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JavaClass, ZIP)},
	{"debug", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JavaClass, debug)},
	{"bcelComparator", "Lcom/sun/org/apache/bcel/internal/util/BCELComparator;", nullptr, $PRIVATE | $STATIC, $staticField(JavaClass, bcelComparator)},
	{"repository", "Lcom/sun/org/apache/bcel/internal/util/Repository;", nullptr, $PRIVATE | $TRANSIENT, $field(JavaClass, repository)},
	{}
};

$MethodInfo _JavaClass_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(IILjava/lang/String;IIILcom/sun/org/apache/bcel/internal/classfile/ConstantPool;[I[Lcom/sun/org/apache/bcel/internal/classfile/Field;[Lcom/sun/org/apache/bcel/internal/classfile/Method;[Lcom/sun/org/apache/bcel/internal/classfile/Attribute;B)V", nullptr, $PUBLIC, $method(JavaClass, init$, void, int32_t, int32_t, $String*, int32_t, int32_t, int32_t, $ConstantPool*, $ints*, $FieldArray*, $MethodArray*, $AttributeArray*, int8_t)},
	{"<init>", "(IILjava/lang/String;IIILcom/sun/org/apache/bcel/internal/classfile/ConstantPool;[I[Lcom/sun/org/apache/bcel/internal/classfile/Field;[Lcom/sun/org/apache/bcel/internal/classfile/Method;[Lcom/sun/org/apache/bcel/internal/classfile/Attribute;)V", nullptr, $PUBLIC, $method(JavaClass, init$, void, int32_t, int32_t, $String*, int32_t, int32_t, int32_t, $ConstantPool*, $ints*, $FieldArray*, $MethodArray*, $AttributeArray*)},
	{"Debug", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(JavaClass, Debug, void, $String*)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(JavaClass, accept, void, $Visitor*)},
	{"compareTo", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;)I", nullptr, $PUBLIC, $virtualMethod(JavaClass, compareTo, int32_t, JavaClass*)},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JavaClass, compareTo, int32_t, Object$*)},
	{"computeNestedTypeStatus", "()V", nullptr, $PRIVATE, $method(JavaClass, computeNestedTypeStatus, void)},
	{"copy", "()Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", nullptr, $PUBLIC, $virtualMethod(JavaClass, copy, JavaClass*)},
	{"dump", "(Ljava/io/File;)V", nullptr, $PUBLIC, $virtualMethod(JavaClass, dump, void, $File*), "java.io.IOException"},
	{"dump", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(JavaClass, dump, void, $String*), "java.io.IOException"},
	{"dump", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $virtualMethod(JavaClass, dump, void, $OutputStream*), "java.io.IOException"},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(JavaClass, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(JavaClass, equals, bool, Object$*)},
	{"getAllInterfaces", "()[Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", nullptr, $PUBLIC, $virtualMethod(JavaClass, getAllInterfaces, $JavaClassArray*), "java.lang.ClassNotFoundException"},
	{"getAnnotationEntries", "()[Lcom/sun/org/apache/bcel/internal/classfile/AnnotationEntry;", nullptr, $PUBLIC, $virtualMethod(JavaClass, getAnnotationEntries, $AnnotationEntryArray*)},
	{"getAttributes", "()[Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC, $virtualMethod(JavaClass, getAttributes, $AttributeArray*)},
	{"getBytes", "()[B", nullptr, $PUBLIC, $virtualMethod(JavaClass, getBytes, $bytes*)},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JavaClass, getClassName, $String*)},
	{"getClassNameIndex", "()I", nullptr, $PUBLIC, $virtualMethod(JavaClass, getClassNameIndex, int32_t)},
	{"getComparator", "()Lcom/sun/org/apache/bcel/internal/util/BCELComparator;", nullptr, $PUBLIC | $STATIC, $staticMethod(JavaClass, getComparator, $BCELComparator*)},
	{"getConstantPool", "()Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;", nullptr, $PUBLIC, $virtualMethod(JavaClass, getConstantPool, $ConstantPool*)},
	{"getFields", "()[Lcom/sun/org/apache/bcel/internal/classfile/Field;", nullptr, $PUBLIC, $virtualMethod(JavaClass, getFields, $FieldArray*)},
	{"getFileName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JavaClass, getFileName, $String*)},
	{"getInterfaceIndices", "()[I", nullptr, $PUBLIC, $virtualMethod(JavaClass, getInterfaceIndices, $ints*)},
	{"getInterfaceNames", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JavaClass, getInterfaceNames, $StringArray*)},
	{"getInterfaces", "()[Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", nullptr, $PUBLIC, $virtualMethod(JavaClass, getInterfaces, $JavaClassArray*), "java.lang.ClassNotFoundException"},
	{"getMajor", "()I", nullptr, $PUBLIC, $virtualMethod(JavaClass, getMajor, int32_t)},
	{"getMethod", "(Ljava/lang/reflect/Method;)Lcom/sun/org/apache/bcel/internal/classfile/Method;", nullptr, $PUBLIC, $virtualMethod(JavaClass, getMethod, $Method*, $1Method*)},
	{"getMethods", "()[Lcom/sun/org/apache/bcel/internal/classfile/Method;", nullptr, $PUBLIC, $virtualMethod(JavaClass, getMethods, $MethodArray*)},
	{"getMinor", "()I", nullptr, $PUBLIC, $virtualMethod(JavaClass, getMinor, int32_t)},
	{"getPackageName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JavaClass, getPackageName, $String*)},
	{"getRepository", "()Lcom/sun/org/apache/bcel/internal/util/Repository;", nullptr, $PUBLIC, $virtualMethod(JavaClass, getRepository, $Repository*)},
	{"getSource", "()B", nullptr, $PUBLIC | $FINAL, $method(JavaClass, getSource, int8_t)},
	{"getSourceFileName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JavaClass, getSourceFileName, $String*)},
	{"getSuperClass", "()Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", nullptr, $PUBLIC, $virtualMethod(JavaClass, getSuperClass, JavaClass*), "java.lang.ClassNotFoundException"},
	{"getSuperClasses", "()[Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", nullptr, $PUBLIC, $virtualMethod(JavaClass, getSuperClasses, $JavaClassArray*), "java.lang.ClassNotFoundException"},
	{"getSuperclassName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JavaClass, getSuperclassName, $String*)},
	{"getSuperclassNameIndex", "()I", nullptr, $PUBLIC, $virtualMethod(JavaClass, getSuperclassNameIndex, int32_t)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(JavaClass, hashCode, int32_t)},
	{"implementationOf", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;)Z", nullptr, $PUBLIC, $virtualMethod(JavaClass, implementationOf, bool, JavaClass*), "java.lang.ClassNotFoundException"},
	{"indent", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(JavaClass, indent, $String*, Object$*)},
	{"instanceOf", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;)Z", nullptr, $PUBLIC | $FINAL, $method(JavaClass, instanceOf, bool, JavaClass*), "java.lang.ClassNotFoundException"},
	{"isAnonymous", "()Z", nullptr, $PUBLIC | $FINAL, $method(JavaClass, isAnonymous, bool)},
	{"isClass", "()Z", nullptr, $PUBLIC | $FINAL, $method(JavaClass, isClass, bool)},
	{"isNested", "()Z", nullptr, $PUBLIC | $FINAL, $method(JavaClass, isNested, bool)},
	{"isSuper", "()Z", nullptr, $PUBLIC | $FINAL, $method(JavaClass, isSuper, bool)},
	{"setAttributes", "([Lcom/sun/org/apache/bcel/internal/classfile/Attribute;)V", nullptr, $PUBLIC, $virtualMethod(JavaClass, setAttributes, void, $AttributeArray*)},
	{"setClassName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(JavaClass, setClassName, void, $String*)},
	{"setClassNameIndex", "(I)V", nullptr, $PUBLIC, $virtualMethod(JavaClass, setClassNameIndex, void, int32_t)},
	{"setComparator", "(Lcom/sun/org/apache/bcel/internal/util/BCELComparator;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JavaClass, setComparator, void, $BCELComparator*)},
	{"setConstantPool", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $virtualMethod(JavaClass, setConstantPool, void, $ConstantPool*)},
	{"setFields", "([Lcom/sun/org/apache/bcel/internal/classfile/Field;)V", nullptr, $PUBLIC, $virtualMethod(JavaClass, setFields, void, $FieldArray*)},
	{"setFileName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(JavaClass, setFileName, void, $String*)},
	{"setInterfaceNames", "([Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(JavaClass, setInterfaceNames, void, $StringArray*)},
	{"setInterfaces", "([I)V", nullptr, $PUBLIC, $virtualMethod(JavaClass, setInterfaces, void, $ints*)},
	{"setMajor", "(I)V", nullptr, $PUBLIC, $virtualMethod(JavaClass, setMajor, void, int32_t)},
	{"setMethods", "([Lcom/sun/org/apache/bcel/internal/classfile/Method;)V", nullptr, $PUBLIC, $virtualMethod(JavaClass, setMethods, void, $MethodArray*)},
	{"setMinor", "(I)V", nullptr, $PUBLIC, $virtualMethod(JavaClass, setMinor, void, int32_t)},
	{"setRepository", "(Lcom/sun/org/apache/bcel/internal/util/Repository;)V", nullptr, $PUBLIC, $virtualMethod(JavaClass, setRepository, void, $Repository*)},
	{"setSourceFileName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(JavaClass, setSourceFileName, void, $String*)},
	{"setSuperclassName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(JavaClass, setSuperclassName, void, $String*)},
	{"setSuperclassNameIndex", "(I)V", nullptr, $PUBLIC, $virtualMethod(JavaClass, setSuperclassNameIndex, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JavaClass, toString, $String*)},
	{}
};

$InnerClassInfo _JavaClass_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.classfile.JavaClass$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavaClass_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.JavaClass",
	"com.sun.org.apache.bcel.internal.classfile.AccessFlags",
	"java.lang.Cloneable,com.sun.org.apache.bcel.internal.classfile.Node,java.lang.Comparable",
	_JavaClass_FieldInfo_,
	_JavaClass_MethodInfo_,
	"Lcom/sun/org/apache/bcel/internal/classfile/AccessFlags;Ljava/lang/Cloneable;Lcom/sun/org/apache/bcel/internal/classfile/Node;Ljava/lang/Comparable<Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;>;",
	nullptr,
	_JavaClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.classfile.JavaClass$1"
};

$Object* allocate$JavaClass($Class* clazz) {
	return $of($alloc(JavaClass));
}

$Object* JavaClass::clone() {
	 return this->$AccessFlags::clone();
}

void JavaClass::finalize() {
	this->$AccessFlags::finalize();
}

$BCELComparator* JavaClass::bcelComparator = nullptr;

void JavaClass::init$(int32_t classNameIndex, int32_t superclassNameIndex, $String* fileName, int32_t major, int32_t minor, int32_t access_flags, $ConstantPool* constantPool, $ints* interfaces$renamed, $FieldArray* fields$renamed, $MethodArray* methods$renamed, $AttributeArray* attributes$renamed, int8_t source) {
	$useLocalCurrentObjectStackCache();
	$var($ints, interfaces, interfaces$renamed);
	$var($MethodArray, methods, methods$renamed);
	$var($AttributeArray, attributes, attributes$renamed);
	$var($FieldArray, fields, fields$renamed);
	$AccessFlags::init$(access_flags);
	$set(this, sourceFileName, "<Unknown>"_s);
	this->source = JavaClass::HEAP;
	this->isAnonymous$ = false;
	this->isNested$ = false;
	this->computedNestedTypeStatus = false;
	$set(this, repository, $SyntheticRepository::getInstance());
	if (interfaces == nullptr) {
		$assign(interfaces, $new($ints, 0));
	}
	if (attributes == nullptr) {
		$assign(attributes, $new($AttributeArray, 0));
	}
	if (fields == nullptr) {
		$assign(fields, $new($FieldArray, 0));
	}
	if (methods == nullptr) {
		$assign(methods, $new($MethodArray, 0));
	}
	this->classNameIndex = classNameIndex;
	this->superclassNameIndex = superclassNameIndex;
	$set(this, fileName, fileName);
	this->major = major;
	this->minor = minor;
	$set(this, constantPool, constantPool);
	$set(this, interfaces, interfaces);
	$set(this, fields, fields);
	$set(this, methods, methods);
	$set(this, attributes, attributes);
	this->source = source;
	{
		$var($AttributeArray, arr$, attributes);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Attribute, attribute, arr$->get(i$));
			{
				if ($instanceOf($SourceFile, attribute)) {
					$set(this, sourceFileName, $nc(($cast($SourceFile, attribute)))->getSourceFileName());
					break;
				}
			}
		}
	}
	$set(this, className, $nc(constantPool)->getConstantString(classNameIndex, $Const::CONSTANT_Class));
	$set(this, className, $Utility::compactClassName(this->className, false));
	int32_t index = $nc(this->className)->lastIndexOf((int32_t)u'.');
	if (index < 0) {
		$set(this, packageName, ""_s);
	} else {
		$set(this, packageName, $nc(this->className)->substring(0, index));
	}
	if (superclassNameIndex > 0) {
		$set(this, superclassName, constantPool->getConstantString(superclassNameIndex, $Const::CONSTANT_Class));
		$set(this, superclassName, $Utility::compactClassName(this->superclassName, false));
	} else {
		$set(this, superclassName, "java.lang.Object"_s);
	}
	$set(this, interfaceNames, $new($StringArray, $nc(interfaces)->length));
	for (int32_t i = 0; i < interfaces->length; ++i) {
		$var($String, str, constantPool->getConstantString(interfaces->get(i), $Const::CONSTANT_Class));
		$nc(this->interfaceNames)->set(i, $($Utility::compactClassName(str, false)));
	}
}

void JavaClass::init$(int32_t classNameIndex, int32_t superclassNameIndex, $String* fileName, int32_t major, int32_t minor, int32_t access_flags, $ConstantPool* constantPool, $ints* interfaces, $FieldArray* fields, $MethodArray* methods, $AttributeArray* attributes) {
	JavaClass::init$(classNameIndex, superclassNameIndex, fileName, major, minor, access_flags, constantPool, interfaces, fields, methods, attributes, JavaClass::HEAP);
}

void JavaClass::accept($Visitor* v) {
	$nc(v)->visitJavaClass(this);
}

void JavaClass::Debug($String* str) {
	$init(JavaClass);
}

void JavaClass::dump($File* file) {
	$useLocalCurrentObjectStackCache();
	$var($String, parent, $nc(file)->getParent());
	if (parent != nullptr) {
		$var($File, dir, $new($File, parent));
		if (!dir->mkdirs()) {
			if (!dir->isDirectory()) {
				$throwNew($IOException, $$str({"Could not create the directory "_s, dir}));
			}
		}
	}
	{
		$var($DataOutputStream, dos, $new($DataOutputStream, $$new($FileOutputStream, file)));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					dump(dos);
				} catch ($Throwable& t$) {
					try {
						dos->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				dos->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void JavaClass::dump($String* _file_name) {
	dump($$new($File, _file_name));
}

$bytes* JavaClass::getBytes() {
	$useLocalCurrentObjectStackCache();
	$var($ByteArrayOutputStream, s, $new($ByteArrayOutputStream));
	$var($DataOutputStream, ds, $new($DataOutputStream, s));
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				dump(ds);
			} catch ($IOException& e) {
				$nc($System::err)->println($$str({"Error dumping class: "_s, $(e->getMessage())}));
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			try {
				ds->close();
			} catch ($IOException& e2) {
				$nc($System::err)->println($$str({"Error dumping class: "_s, $(e2->getMessage())}));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return s->toByteArray();
}

void JavaClass::dump($OutputStream* file) {
	dump($$new($DataOutputStream, file));
}

void JavaClass::dump($DataOutputStream* file) {
	$useLocalCurrentObjectStackCache();
	$nc(file)->writeInt($Const::JVM_CLASSFILE_MAGIC);
	file->writeShort(this->minor);
	file->writeShort(this->major);
	$nc(this->constantPool)->dump(file);
	file->writeShort($AccessFlags::getAccessFlags());
	file->writeShort(this->classNameIndex);
	file->writeShort(this->superclassNameIndex);
	file->writeShort($nc(this->interfaces)->length);
	{
		$var($ints, arr$, this->interfaces);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t interface1 = arr$->get(i$);
			{
				file->writeShort(interface1);
			}
		}
	}
	file->writeShort($nc(this->fields)->length);
	{
		$var($FieldArray, arr$, this->fields);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Field, field, arr$->get(i$));
			{
				$nc(field)->dump(file);
			}
		}
	}
	file->writeShort($nc(this->methods)->length);
	{
		$var($MethodArray, arr$, this->methods);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Method, method, arr$->get(i$));
			{
				$nc(method)->dump(file);
			}
		}
	}
	if (this->attributes != nullptr) {
		file->writeShort($nc(this->attributes)->length);
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
	} else {
		file->writeShort(0);
	}
	file->flush();
}

$AttributeArray* JavaClass::getAttributes() {
	return this->attributes;
}

$AnnotationEntryArray* JavaClass::getAnnotationEntries() {
	if (this->annotations == nullptr) {
		$set(this, annotations, $AnnotationEntry::createAnnotationEntries($(getAttributes())));
	}
	return this->annotations;
}

$String* JavaClass::getClassName() {
	return this->className;
}

$String* JavaClass::getPackageName() {
	return this->packageName;
}

int32_t JavaClass::getClassNameIndex() {
	return this->classNameIndex;
}

$ConstantPool* JavaClass::getConstantPool() {
	return this->constantPool;
}

$FieldArray* JavaClass::getFields() {
	return this->fields;
}

$String* JavaClass::getFileName() {
	return this->fileName;
}

$StringArray* JavaClass::getInterfaceNames() {
	return this->interfaceNames;
}

$ints* JavaClass::getInterfaceIndices() {
	return this->interfaces;
}

int32_t JavaClass::getMajor() {
	return this->major;
}

$MethodArray* JavaClass::getMethods() {
	return this->methods;
}

$Method* JavaClass::getMethod($1Method* m) {
	$useLocalCurrentObjectStackCache();
	{
		$var($MethodArray, arr$, this->methods);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Method, method, arr$->get(i$));
			{
				bool var$1 = $nc($($nc(m)->getName()))->equals($($nc(method)->getName()));
				if (var$1) {
					int32_t var$2 = m->getModifiers();
					var$1 = (var$2 == $nc(method)->getModifiers());
				}
				bool var$0 = var$1;
				if (var$0 && $nc($($Type::getSignature(m)))->equals($(method->getSignature()))) {
					return method;
				}
			}
		}
	}
	return nullptr;
}

int32_t JavaClass::getMinor() {
	return this->minor;
}

$String* JavaClass::getSourceFileName() {
	return this->sourceFileName;
}

$String* JavaClass::getSuperclassName() {
	return this->superclassName;
}

int32_t JavaClass::getSuperclassNameIndex() {
	return this->superclassNameIndex;
}

void JavaClass::setAttributes($AttributeArray* attributes) {
	$set(this, attributes, attributes);
}

void JavaClass::setClassName($String* className) {
	$set(this, className, className);
}

void JavaClass::setClassNameIndex(int32_t classNameIndex) {
	this->classNameIndex = classNameIndex;
}

void JavaClass::setConstantPool($ConstantPool* constantPool) {
	$set(this, constantPool, constantPool);
}

void JavaClass::setFields($FieldArray* fields) {
	$set(this, fields, fields);
}

void JavaClass::setFileName($String* fileName) {
	$set(this, fileName, fileName);
}

void JavaClass::setInterfaceNames($StringArray* interfaceNames) {
	$set(this, interfaceNames, interfaceNames);
}

void JavaClass::setInterfaces($ints* interfaces) {
	$set(this, interfaces, interfaces);
}

void JavaClass::setMajor(int32_t major) {
	this->major = major;
}

void JavaClass::setMethods($MethodArray* methods) {
	$set(this, methods, methods);
}

void JavaClass::setMinor(int32_t minor) {
	this->minor = minor;
}

void JavaClass::setSourceFileName($String* sourceFileName) {
	$set(this, sourceFileName, sourceFileName);
}

void JavaClass::setSuperclassName($String* superclassName) {
	$set(this, superclassName, superclassName);
}

void JavaClass::setSuperclassNameIndex(int32_t superclassNameIndex) {
	this->superclassNameIndex = superclassNameIndex;
}

$String* JavaClass::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, access, $Utility::accessToString($AccessFlags::getAccessFlags(), true));
	$assign(access, $nc(access)->isEmpty() ? ""_s : ($str({access, " "_s})));
	$var($StringBuilder, buf, $new($StringBuilder, 128));
	buf->append(access)->append($($Utility::classOrInterface($AccessFlags::getAccessFlags())))->append(" "_s)->append(this->className)->append(" extends "_s)->append($($Utility::compactClassName(this->superclassName, false)))->append(u'\n');
	int32_t size = $nc(this->interfaces)->length;
	if (size > 0) {
		buf->append("implements\t\t"_s);
		for (int32_t i = 0; i < size; ++i) {
			buf->append($nc(this->interfaceNames)->get(i));
			if (i < size - 1) {
				buf->append(", "_s);
			}
		}
		buf->append(u'\n');
	}
	buf->append("file name\t\t"_s)->append(this->fileName)->append(u'\n');
	buf->append("compiled from\t\t"_s)->append(this->sourceFileName)->append(u'\n');
	buf->append("compiler version\t"_s)->append(this->major)->append("."_s)->append(this->minor)->append(u'\n');
	buf->append("access flags\t\t"_s)->append($AccessFlags::getAccessFlags())->append(u'\n');
	buf->append("constant pool\t\t"_s)->append($nc(this->constantPool)->getLength())->append(" entries\n"_s);
	buf->append("ACC_SUPER flag\t\t"_s)->append(isSuper())->append("\n"_s);
	if ($nc(this->attributes)->length > 0) {
		buf->append("\nAttribute(s):\n"_s);
		{
			$var($AttributeArray, arr$, this->attributes);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Attribute, attribute, arr$->get(i$));
				{
					buf->append($(indent(attribute)));
				}
			}
		}
	}
	$var($AnnotationEntryArray, annotations, getAnnotationEntries());
	if (annotations != nullptr && annotations->length > 0) {
		buf->append("\nAnnotation(s):\n"_s);
		{
			$var($AnnotationEntryArray, arr$, annotations);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($AnnotationEntry, annotation, arr$->get(i$));
				{
					buf->append($(indent(annotation)));
				}
			}
		}
	}
	if ($nc(this->fields)->length > 0) {
		buf->append("\n"_s)->append($nc(this->fields)->length)->append(" fields:\n"_s);
		{
			$var($FieldArray, arr$, this->fields);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Field, field, arr$->get(i$));
				{
					buf->append("\t"_s)->append($of(field))->append(u'\n');
				}
			}
		}
	}
	if ($nc(this->methods)->length > 0) {
		buf->append("\n"_s)->append($nc(this->methods)->length)->append(" methods:\n"_s);
		{
			$var($MethodArray, arr$, this->methods);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Method, method, arr$->get(i$));
				{
					buf->append("\t"_s)->append($of(method))->append(u'\n');
				}
			}
		}
	}
	return buf->toString();
}

$String* JavaClass::indent(Object$* obj) {
	$init(JavaClass);
	$useLocalCurrentObjectStackCache();
	$var($StringTokenizer, tok, $new($StringTokenizer, $($nc($of(obj))->toString()), "\n"_s));
	$var($StringBuilder, buf, $new($StringBuilder));
	while (tok->hasMoreTokens()) {
		buf->append("\t"_s)->append($(tok->nextToken()))->append("\n"_s);
	}
	return buf->toString();
}

JavaClass* JavaClass::copy() {
	$useLocalCurrentObjectStackCache();
	$var(JavaClass, c, nullptr);
	try {
		$assign(c, $cast(JavaClass, clone()));
		$set($nc(c), constantPool, $nc(this->constantPool)->copy());
		$set(c, interfaces, $cast($ints, $nc(this->interfaces)->clone()));
		$set(c, interfaceNames, $cast($StringArray, $nc(this->interfaceNames)->clone()));
		$set(c, fields, $new($FieldArray, $nc(this->fields)->length));
		for (int32_t i = 0; i < $nc(this->fields)->length; ++i) {
			$nc(c->fields)->set(i, $($nc($nc(this->fields)->get(i))->copy(c->constantPool)));
		}
		$set(c, methods, $new($MethodArray, $nc(this->methods)->length));
		for (int32_t i = 0; i < $nc(this->methods)->length; ++i) {
			$nc(c->methods)->set(i, $($nc($nc(this->methods)->get(i))->copy(c->constantPool)));
		}
		$set(c, attributes, $new($AttributeArray, $nc(this->attributes)->length));
		for (int32_t i = 0; i < $nc(this->attributes)->length; ++i) {
			$nc(c->attributes)->set(i, $($nc($nc(this->attributes)->get(i))->copy(c->constantPool)));
		}
	} catch ($CloneNotSupportedException& e) {
	}
	return c;
}

bool JavaClass::isSuper() {
	return ((int32_t)($AccessFlags::getAccessFlags() & (uint32_t)(int32_t)$Const::ACC_SUPER)) != 0;
}

bool JavaClass::isClass() {
	return ((int32_t)($AccessFlags::getAccessFlags() & (uint32_t)(int32_t)$Const::ACC_INTERFACE)) == 0;
}

bool JavaClass::isAnonymous() {
	computeNestedTypeStatus();
	return this->isAnonymous$;
}

bool JavaClass::isNested() {
	computeNestedTypeStatus();
	return this->isNested$;
}

void JavaClass::computeNestedTypeStatus() {
	$useLocalCurrentObjectStackCache();
	if (this->computedNestedTypeStatus) {
		return;
	}
	{
		$var($AttributeArray, arr$, this->attributes);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Attribute, attribute, arr$->get(i$));
			{
				if ($instanceOf($InnerClasses, attribute)) {
					$var($InnerClassArray, innerClasses, $nc(($cast($InnerClasses, attribute)))->getInnerClasses());
					{
						$var($InnerClassArray, arr$, innerClasses);
						int32_t len$ = arr$->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$var($InnerClass, innerClasse, arr$->get(i$));
							{
								bool innerClassAttributeRefersToMe = false;
								$var($String, inner_class_name, $nc(this->constantPool)->getConstantString($nc(innerClasse)->getInnerClassIndex(), $Const::CONSTANT_Class));
								$assign(inner_class_name, $Utility::compactClassName(inner_class_name, false));
								if ($nc(inner_class_name)->equals($(getClassName()))) {
									innerClassAttributeRefersToMe = true;
								}
								if (innerClassAttributeRefersToMe) {
									this->isNested$ = true;
									if ($nc(innerClasse)->getInnerNameIndex() == 0) {
										this->isAnonymous$ = true;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	this->computedNestedTypeStatus = true;
}

int8_t JavaClass::getSource() {
	return this->source;
}

$Repository* JavaClass::getRepository() {
	return this->repository;
}

void JavaClass::setRepository($Repository* repository) {
	$set(this, repository, repository);
}

bool JavaClass::instanceOf(JavaClass* super_class) {
	$useLocalCurrentObjectStackCache();
	if (this->equals(super_class)) {
		return true;
	}
	$var($JavaClassArray, super_classes, getSuperClasses());
	{
		$var($JavaClassArray, arr$, super_classes);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var(JavaClass, super_classe, arr$->get(i$));
			{
				if ($nc(super_classe)->equals(super_class)) {
					return true;
				}
			}
		}
	}
	if ($nc(super_class)->isInterface()) {
		return implementationOf(super_class);
	}
	return false;
}

bool JavaClass::implementationOf(JavaClass* inter) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(inter)->isInterface()) {
		$throwNew($IllegalArgumentException, $$str({$(inter->getClassName()), " is no interface"_s}));
	}
	if (this->equals(inter)) {
		return true;
	}
	$var($JavaClassArray, super_interfaces, getAllInterfaces());
	{
		$var($JavaClassArray, arr$, super_interfaces);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var(JavaClass, super_interface, arr$->get(i$));
			{
				if ($nc(super_interface)->equals(inter)) {
					return true;
				}
			}
		}
	}
	return false;
}

JavaClass* JavaClass::getSuperClass() {
	$useLocalCurrentObjectStackCache();
	if ("java.lang.Object"_s->equals($(getClassName()))) {
		return nullptr;
	}
	return $nc(this->repository)->loadClass($(getSuperclassName()));
}

$JavaClassArray* JavaClass::getSuperClasses() {
	$useLocalCurrentObjectStackCache();
	$var(JavaClass, clazz, this);
	$var($List, allSuperClasses, $new($ArrayList));
	for ($assign(clazz, clazz->getSuperClass()); clazz != nullptr; $assign(clazz, $nc(clazz)->getSuperClass())) {
		allSuperClasses->add(clazz);
	}
	return $fcast($JavaClassArray, allSuperClasses->toArray($$new($JavaClassArray, allSuperClasses->size())));
}

$JavaClassArray* JavaClass::getInterfaces() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, _interfaces, getInterfaceNames());
	$var($JavaClassArray, classes, $new($JavaClassArray, $nc(_interfaces)->length));
	for (int32_t i = 0; i < _interfaces->length; ++i) {
		classes->set(i, $($nc(this->repository)->loadClass(_interfaces->get(i))));
	}
	return classes;
}

$JavaClassArray* JavaClass::getAllInterfaces() {
	$useLocalCurrentObjectStackCache();
	$var($ClassQueue, queue, $new($ClassQueue));
	$var($Set, allInterfaces, static_cast<$Set*>(static_cast<$AbstractSet*>($new($TreeSet))));
	queue->enqueue(this);
	while (!queue->empty()) {
		$var(JavaClass, clazz, queue->dequeue());
		$var(JavaClass, souper, $nc(clazz)->getSuperClass());
		$var($JavaClassArray, _interfaces, clazz->getInterfaces());
		if (clazz->isInterface()) {
			allInterfaces->add(clazz);
		} else if (souper != nullptr) {
			queue->enqueue(souper);
		}
		{
			$var($JavaClassArray, arr$, _interfaces);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var(JavaClass, _interface, arr$->get(i$));
				{
					queue->enqueue(_interface);
				}
			}
		}
	}
	return $fcast($JavaClassArray, allInterfaces->toArray($$new($JavaClassArray, allInterfaces->size())));
}

$BCELComparator* JavaClass::getComparator() {
	$init(JavaClass);
	return JavaClass::bcelComparator;
}

void JavaClass::setComparator($BCELComparator* comparator) {
	$init(JavaClass);
	$assignStatic(JavaClass::bcelComparator, comparator);
}

bool JavaClass::equals(Object$* obj) {
	return $nc(JavaClass::bcelComparator)->equals(this, obj);
}

int32_t JavaClass::compareTo(JavaClass* obj) {
	$useLocalCurrentObjectStackCache();
	return $nc($(getClassName()))->compareTo($($nc(obj)->getClassName()));
}

int32_t JavaClass::hashCode() {
	return $nc(JavaClass::bcelComparator)->hashCode(this);
}

int32_t JavaClass::compareTo(Object$* obj) {
	return this->compareTo($cast(JavaClass, obj));
}

void clinit$JavaClass($Class* class$) {
	$assignStatic(JavaClass::bcelComparator, $new($JavaClass$1));
}

JavaClass::JavaClass() {
}

$Class* JavaClass::load$($String* name, bool initialize) {
	$loadClass(JavaClass, name, initialize, &_JavaClass_ClassInfo_, clinit$JavaClass, allocate$JavaClass);
	return class$;
}

$Class* JavaClass::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com