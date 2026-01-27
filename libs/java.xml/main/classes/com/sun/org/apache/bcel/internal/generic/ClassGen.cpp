#include <com/sun/org/apache/bcel/internal/generic/ClassGen.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/AccessFlags.h>
#include <com/sun/org/apache/bcel/internal/classfile/AnnotationEntry.h>
#include <com/sun/org/apache/bcel/internal/classfile/Annotations.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/Field.h>
#include <com/sun/org/apache/bcel/internal/classfile/JavaClass.h>
#include <com/sun/org/apache/bcel/internal/classfile/Method.h>
#include <com/sun/org/apache/bcel/internal/classfile/RuntimeInvisibleAnnotations.h>
#include <com/sun/org/apache/bcel/internal/classfile/RuntimeVisibleAnnotations.h>
#include <com/sun/org/apache/bcel/internal/classfile/SourceFile.h>
#include <com/sun/org/apache/bcel/internal/generic/AnnotationEntryGen.h>
#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGen$1.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGenException.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassObserver.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESPECIAL.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionConst.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/MethodGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ReturnInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/bcel/internal/util/BCELComparator.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Error.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef MAJOR_1_1
#undef MINOR_1_1
#undef NO_ARGS
#undef RETURN
#undef THIS
#undef VOID

using $AnnotationEntryArray = $Array<::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry>;
using $AttributeArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>;
using $FieldArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Field>;
using $MethodArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Method>;
using $AnnotationEntryGenArray = $Array<::com::sun::org::apache::bcel::internal::generic::AnnotationEntryGen>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $AccessFlags = ::com::sun::org::apache::bcel::internal::classfile::AccessFlags;
using $AnnotationEntry = ::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry;
using $Annotations = ::com::sun::org::apache::bcel::internal::classfile::Annotations;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $Field = ::com::sun::org::apache::bcel::internal::classfile::Field;
using $JavaClass = ::com::sun::org::apache::bcel::internal::classfile::JavaClass;
using $Method = ::com::sun::org::apache::bcel::internal::classfile::Method;
using $RuntimeInvisibleAnnotations = ::com::sun::org::apache::bcel::internal::classfile::RuntimeInvisibleAnnotations;
using $RuntimeVisibleAnnotations = ::com::sun::org::apache::bcel::internal::classfile::RuntimeVisibleAnnotations;
using $SourceFile = ::com::sun::org::apache::bcel::internal::classfile::SourceFile;
using $AnnotationEntryGen = ::com::sun::org::apache::bcel::internal::generic::AnnotationEntryGen;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ClassGen$1 = ::com::sun::org::apache::bcel::internal::generic::ClassGen$1;
using $ClassGenException = ::com::sun::org::apache::bcel::internal::generic::ClassGenException;
using $ClassObserver = ::com::sun::org::apache::bcel::internal::generic::ClassObserver;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $INVOKESPECIAL = ::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionConst = ::com::sun::org::apache::bcel::internal::generic::InstructionConst;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $MethodGen = ::com::sun::org::apache::bcel::internal::generic::MethodGen;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $BCELComparator = ::com::sun::org::apache::bcel::internal::util::BCELComparator;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _ClassGen_FieldInfo_[] = {
	{"className", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ClassGen, className)},
	{"superClassName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ClassGen, superClassName)},
	{"fileName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ClassGen, fileName)},
	{"classNameIndex", "I", nullptr, $PRIVATE, $field(ClassGen, classNameIndex)},
	{"superclass_name_index", "I", nullptr, $PRIVATE, $field(ClassGen, superclass_name_index)},
	{"major", "I", nullptr, $PRIVATE, $field(ClassGen, major)},
	{"minor", "I", nullptr, $PRIVATE, $field(ClassGen, minor)},
	{"cp", "Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;", nullptr, $PRIVATE, $field(ClassGen, cp)},
	{"fieldList", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/bcel/internal/classfile/Field;>;", $PRIVATE | $FINAL, $field(ClassGen, fieldList)},
	{"methodList", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/bcel/internal/classfile/Method;>;", $PRIVATE | $FINAL, $field(ClassGen, methodList)},
	{"attributeList", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/bcel/internal/classfile/Attribute;>;", $PRIVATE | $FINAL, $field(ClassGen, attributeList)},
	{"interfaceList", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(ClassGen, interfaceList)},
	{"annotationList", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/bcel/internal/generic/AnnotationEntryGen;>;", $PRIVATE | $FINAL, $field(ClassGen, annotationList)},
	{"bcelComparator", "Lcom/sun/org/apache/bcel/internal/util/BCELComparator;", nullptr, $PRIVATE | $STATIC, $staticField(ClassGen, bcelComparator)},
	{"observers", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/bcel/internal/generic/ClassObserver;>;", $PRIVATE, $field(ClassGen, observers)},
	{}
};

$MethodInfo _ClassGen_MethodInfo_[] = {
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I[Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PUBLIC, $method(ClassGen, init$, void, $String*, $String*, $String*, int32_t, $StringArray*, $ConstantPoolGen*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I[Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ClassGen, init$, void, $String*, $String*, $String*, int32_t, $StringArray*)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;)V", nullptr, $PUBLIC, $method(ClassGen, init$, void, $JavaClass*)},
	{"addAnnotationEntry", "(Lcom/sun/org/apache/bcel/internal/generic/AnnotationEntryGen;)V", nullptr, $PUBLIC, $virtualMethod(ClassGen, addAnnotationEntry, void, $AnnotationEntryGen*)},
	{"addAttribute", "(Lcom/sun/org/apache/bcel/internal/classfile/Attribute;)V", nullptr, $PUBLIC, $virtualMethod(ClassGen, addAttribute, void, $Attribute*)},
	{"addEmptyConstructor", "(I)V", nullptr, $PUBLIC, $virtualMethod(ClassGen, addEmptyConstructor, void, int32_t)},
	{"addField", "(Lcom/sun/org/apache/bcel/internal/classfile/Field;)V", nullptr, $PUBLIC, $virtualMethod(ClassGen, addField, void, $Field*)},
	{"addInterface", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ClassGen, addInterface, void, $String*)},
	{"addMethod", "(Lcom/sun/org/apache/bcel/internal/classfile/Method;)V", nullptr, $PUBLIC, $virtualMethod(ClassGen, addMethod, void, $Method*)},
	{"addObserver", "(Lcom/sun/org/apache/bcel/internal/generic/ClassObserver;)V", nullptr, $PUBLIC, $virtualMethod(ClassGen, addObserver, void, $ClassObserver*)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ClassGen, clone, $Object*)},
	{"containsField", "(Lcom/sun/org/apache/bcel/internal/classfile/Field;)Z", nullptr, $PUBLIC, $virtualMethod(ClassGen, containsField, bool, $Field*)},
	{"containsField", "(Ljava/lang/String;)Lcom/sun/org/apache/bcel/internal/classfile/Field;", nullptr, $PUBLIC, $virtualMethod(ClassGen, containsField, $Field*, $String*)},
	{"containsMethod", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/bcel/internal/classfile/Method;", nullptr, $PUBLIC, $virtualMethod(ClassGen, containsMethod, $Method*, $String*, $String*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ClassGen, equals, bool, Object$*)},
	{"getAnnotationEntries", "()[Lcom/sun/org/apache/bcel/internal/generic/AnnotationEntryGen;", nullptr, $PUBLIC, $virtualMethod(ClassGen, getAnnotationEntries, $AnnotationEntryGenArray*)},
	{"getAttributes", "()[Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC, $virtualMethod(ClassGen, getAttributes, $AttributeArray*)},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ClassGen, getClassName, $String*)},
	{"getClassNameIndex", "()I", nullptr, $PUBLIC, $virtualMethod(ClassGen, getClassNameIndex, int32_t)},
	{"getComparator", "()Lcom/sun/org/apache/bcel/internal/util/BCELComparator;", nullptr, $PUBLIC | $STATIC, $staticMethod(ClassGen, getComparator, $BCELComparator*)},
	{"getConstantPool", "()Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;", nullptr, $PUBLIC, $virtualMethod(ClassGen, getConstantPool, $ConstantPoolGen*)},
	{"getFields", "()[Lcom/sun/org/apache/bcel/internal/classfile/Field;", nullptr, $PUBLIC, $virtualMethod(ClassGen, getFields, $FieldArray*)},
	{"getFileName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ClassGen, getFileName, $String*)},
	{"getInterfaceNames", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ClassGen, getInterfaceNames, $StringArray*)},
	{"getInterfaces", "()[I", nullptr, $PUBLIC, $virtualMethod(ClassGen, getInterfaces, $ints*)},
	{"getJavaClass", "()Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", nullptr, $PUBLIC, $virtualMethod(ClassGen, getJavaClass, $JavaClass*)},
	{"getMajor", "()I", nullptr, $PUBLIC, $virtualMethod(ClassGen, getMajor, int32_t)},
	{"getMethodAt", "(I)Lcom/sun/org/apache/bcel/internal/classfile/Method;", nullptr, $PUBLIC, $virtualMethod(ClassGen, getMethodAt, $Method*, int32_t)},
	{"getMethods", "()[Lcom/sun/org/apache/bcel/internal/classfile/Method;", nullptr, $PUBLIC, $virtualMethod(ClassGen, getMethods, $MethodArray*)},
	{"getMinor", "()I", nullptr, $PUBLIC, $virtualMethod(ClassGen, getMinor, int32_t)},
	{"getSuperclassName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ClassGen, getSuperclassName, $String*)},
	{"getSuperclassNameIndex", "()I", nullptr, $PUBLIC, $virtualMethod(ClassGen, getSuperclassNameIndex, int32_t)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ClassGen, hashCode, int32_t)},
	{"removeAttribute", "(Lcom/sun/org/apache/bcel/internal/classfile/Attribute;)V", nullptr, $PUBLIC, $virtualMethod(ClassGen, removeAttribute, void, $Attribute*)},
	{"removeField", "(Lcom/sun/org/apache/bcel/internal/classfile/Field;)V", nullptr, $PUBLIC, $virtualMethod(ClassGen, removeField, void, $Field*)},
	{"removeInterface", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ClassGen, removeInterface, void, $String*)},
	{"removeMethod", "(Lcom/sun/org/apache/bcel/internal/classfile/Method;)V", nullptr, $PUBLIC, $virtualMethod(ClassGen, removeMethod, void, $Method*)},
	{"removeObserver", "(Lcom/sun/org/apache/bcel/internal/generic/ClassObserver;)V", nullptr, $PUBLIC, $virtualMethod(ClassGen, removeObserver, void, $ClassObserver*)},
	{"replaceField", "(Lcom/sun/org/apache/bcel/internal/classfile/Field;Lcom/sun/org/apache/bcel/internal/classfile/Field;)V", nullptr, $PUBLIC, $virtualMethod(ClassGen, replaceField, void, $Field*, $Field*)},
	{"replaceMethod", "(Lcom/sun/org/apache/bcel/internal/classfile/Method;Lcom/sun/org/apache/bcel/internal/classfile/Method;)V", nullptr, $PUBLIC, $virtualMethod(ClassGen, replaceMethod, void, $Method*, $Method*)},
	{"setClassName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ClassGen, setClassName, void, $String*)},
	{"setClassNameIndex", "(I)V", nullptr, $PUBLIC, $virtualMethod(ClassGen, setClassNameIndex, void, int32_t)},
	{"setComparator", "(Lcom/sun/org/apache/bcel/internal/util/BCELComparator;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ClassGen, setComparator, void, $BCELComparator*)},
	{"setConstantPool", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PUBLIC, $virtualMethod(ClassGen, setConstantPool, void, $ConstantPoolGen*)},
	{"setMajor", "(I)V", nullptr, $PUBLIC, $virtualMethod(ClassGen, setMajor, void, int32_t)},
	{"setMethodAt", "(Lcom/sun/org/apache/bcel/internal/classfile/Method;I)V", nullptr, $PUBLIC, $virtualMethod(ClassGen, setMethodAt, void, $Method*, int32_t)},
	{"setMethods", "([Lcom/sun/org/apache/bcel/internal/classfile/Method;)V", nullptr, $PUBLIC, $virtualMethod(ClassGen, setMethods, void, $MethodArray*)},
	{"setMinor", "(I)V", nullptr, $PUBLIC, $virtualMethod(ClassGen, setMinor, void, int32_t)},
	{"setSuperclassName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ClassGen, setSuperclassName, void, $String*)},
	{"setSuperclassNameIndex", "(I)V", nullptr, $PUBLIC, $virtualMethod(ClassGen, setSuperclassNameIndex, void, int32_t)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unpackAnnotations", "([Lcom/sun/org/apache/bcel/internal/classfile/Attribute;)[Lcom/sun/org/apache/bcel/internal/generic/AnnotationEntryGen;", nullptr, $PRIVATE, $method(ClassGen, unpackAnnotations, $AnnotationEntryGenArray*, $AttributeArray*)},
	{"update", "()V", nullptr, $PUBLIC, $virtualMethod(ClassGen, update, void)},
	{}
};

$InnerClassInfo _ClassGen_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.generic.ClassGen$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ClassGen_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.ClassGen",
	"com.sun.org.apache.bcel.internal.classfile.AccessFlags",
	"java.lang.Cloneable",
	_ClassGen_FieldInfo_,
	_ClassGen_MethodInfo_,
	nullptr,
	nullptr,
	_ClassGen_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.generic.ClassGen$1"
};

$Object* allocate$ClassGen($Class* clazz) {
	return $of($alloc(ClassGen));
}

$String* ClassGen::toString() {
	 return this->$AccessFlags::toString();
}

void ClassGen::finalize() {
	this->$AccessFlags::finalize();
}

$BCELComparator* ClassGen::bcelComparator = nullptr;

void ClassGen::init$($String* className, $String* superClassName, $String* fileName, int32_t accessFlags, $StringArray* interfaces, $ConstantPoolGen* cp) {
	$useLocalCurrentObjectStackCache();
	$AccessFlags::init$(accessFlags);
	this->classNameIndex = -1;
	this->superclass_name_index = -1;
	this->major = $Const::MAJOR_1_1;
	this->minor = $Const::MINOR_1_1;
	$set(this, fieldList, $new($ArrayList));
	$set(this, methodList, $new($ArrayList));
	$set(this, attributeList, $new($ArrayList));
	$set(this, interfaceList, $new($ArrayList));
	$set(this, annotationList, $new($ArrayList));
	$set(this, className, className);
	$set(this, superClassName, superClassName);
	$set(this, fileName, fileName);
	$set(this, cp, cp);
	if (fileName != nullptr) {
		int32_t var$0 = $nc(cp)->addUtf8("SourceFile"_s);
		int32_t var$1 = cp->addUtf8(fileName);
		addAttribute($$new($SourceFile, var$0, 2, var$1, $(cp->getConstantPool())));
	}
	this->classNameIndex = $nc(cp)->addClass(className);
	this->superclass_name_index = cp->addClass(superClassName);
	if (interfaces != nullptr) {
		{
			$var($StringArray, arr$, interfaces);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, interface1, arr$->get(i$));
				{
					addInterface(interface1);
				}
			}
		}
	}
}

void ClassGen::init$($String* className, $String* superClassName, $String* fileName, int32_t accessFlags, $StringArray* interfaces) {
	ClassGen::init$(className, superClassName, fileName, accessFlags, interfaces, $$new($ConstantPoolGen));
}

void ClassGen::init$($JavaClass* clazz) {
	$useLocalCurrentObjectStackCache();
	$AccessFlags::init$($nc(clazz)->getAccessFlags());
	this->classNameIndex = -1;
	this->superclass_name_index = -1;
	this->major = $Const::MAJOR_1_1;
	this->minor = $Const::MINOR_1_1;
	$set(this, fieldList, $new($ArrayList));
	$set(this, methodList, $new($ArrayList));
	$set(this, attributeList, $new($ArrayList));
	$set(this, interfaceList, $new($ArrayList));
	$set(this, annotationList, $new($ArrayList));
	this->classNameIndex = $nc(clazz)->getClassNameIndex();
	this->superclass_name_index = clazz->getSuperclassNameIndex();
	$set(this, className, clazz->getClassName());
	$set(this, superClassName, clazz->getSuperclassName());
	$set(this, fileName, clazz->getSourceFileName());
	$set(this, cp, $new($ConstantPoolGen, $(clazz->getConstantPool())));
	this->major = clazz->getMajor();
	this->minor = clazz->getMinor();
	$var($AttributeArray, attributes, clazz->getAttributes());
	$var($AnnotationEntryGenArray, annotations, unpackAnnotations(attributes));
	$var($MethodArray, methods, clazz->getMethods());
	$var($FieldArray, fields, clazz->getFields());
	$var($StringArray, interfaces, clazz->getInterfaceNames());
	{
		$var($StringArray, arr$, interfaces);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, interface1, arr$->get(i$));
			{
				addInterface(interface1);
			}
		}
	}
	{
		$var($AttributeArray, arr$, attributes);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Attribute, attribute, arr$->get(i$));
			{
				if (!($instanceOf($Annotations, attribute))) {
					addAttribute(attribute);
				}
			}
		}
	}
	{
		$var($AnnotationEntryGenArray, arr$, annotations);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($AnnotationEntryGen, annotation, arr$->get(i$));
			{
				addAnnotationEntry(annotation);
			}
		}
	}
	{
		$var($MethodArray, arr$, methods);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Method, method, arr$->get(i$));
			{
				addMethod(method);
			}
		}
	}
	{
		$var($FieldArray, arr$, fields);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Field, field, arr$->get(i$));
			{
				addField(field);
			}
		}
	}
}

$AnnotationEntryGenArray* ClassGen::unpackAnnotations($AttributeArray* attrs) {
	$useLocalCurrentObjectStackCache();
	$var($List, annotationGenObjs, $new($ArrayList));
	{
		$var($AttributeArray, arr$, attrs);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Attribute, attr, arr$->get(i$));
			{
				if ($instanceOf($RuntimeVisibleAnnotations, attr)) {
					$var($RuntimeVisibleAnnotations, rva, $cast($RuntimeVisibleAnnotations, attr));
					$var($AnnotationEntryArray, annos, $nc(rva)->getAnnotationEntries());
					{
						$var($AnnotationEntryArray, arr$, annos);
						int32_t len$ = arr$->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$var($AnnotationEntry, a, arr$->get(i$));
							{
								annotationGenObjs->add($$new($AnnotationEntryGen, a, $(getConstantPool()), false));
							}
						}
					}
				} else if ($instanceOf($RuntimeInvisibleAnnotations, attr)) {
					$var($RuntimeInvisibleAnnotations, ria, $cast($RuntimeInvisibleAnnotations, attr));
					$var($AnnotationEntryArray, annos, $nc(ria)->getAnnotationEntries());
					{
						$var($AnnotationEntryArray, arr$, annos);
						int32_t len$ = arr$->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$var($AnnotationEntry, a, arr$->get(i$));
							{
								annotationGenObjs->add($$new($AnnotationEntryGen, a, $(getConstantPool()), false));
							}
						}
					}
				}
			}
		}
	}
	return $fcast($AnnotationEntryGenArray, annotationGenObjs->toArray($$new($AnnotationEntryGenArray, annotationGenObjs->size())));
}

$JavaClass* ClassGen::getJavaClass() {
	$useLocalCurrentObjectStackCache();
	$var($ints, interfaces, getInterfaces());
	$var($FieldArray, fields, getFields());
	$var($MethodArray, methods, getMethods());
	$var($AttributeArray, attributes, nullptr);
	if ($nc(this->annotationList)->isEmpty()) {
		$assign(attributes, getAttributes());
	} else {
		$var($AttributeArray, annAttributes, $AnnotationEntryGen::getAnnotationAttributes(this->cp, $(getAnnotationEntries())));
		$assign(attributes, $new($AttributeArray, $nc(this->attributeList)->size() + $nc(annAttributes)->length));
		$nc(this->attributeList)->toArray(attributes);
		$System::arraycopy(annAttributes, 0, attributes, $nc(this->attributeList)->size(), annAttributes->length);
	}
	$var($ConstantPool, _cp, $nc(this->cp)->getFinalConstantPool());
	return $new($JavaClass, this->classNameIndex, this->superclass_name_index, this->fileName, this->major, this->minor, $AccessFlags::getAccessFlags(), _cp, interfaces, fields, methods, attributes);
}

void ClassGen::addInterface($String* name) {
	$nc(this->interfaceList)->add(name);
}

void ClassGen::removeInterface($String* name) {
	$nc(this->interfaceList)->remove($of(name));
}

int32_t ClassGen::getMajor() {
	return this->major;
}

void ClassGen::setMajor(int32_t major) {
	this->major = major;
}

void ClassGen::setMinor(int32_t minor) {
	this->minor = minor;
}

int32_t ClassGen::getMinor() {
	return this->minor;
}

void ClassGen::addAttribute($Attribute* a) {
	$nc(this->attributeList)->add(a);
}

void ClassGen::addAnnotationEntry($AnnotationEntryGen* a) {
	$nc(this->annotationList)->add(a);
}

void ClassGen::addMethod($Method* m) {
	$nc(this->methodList)->add(m);
}

void ClassGen::addEmptyConstructor(int32_t access_flags) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionList, il, $new($InstructionList));
	$init($InstructionConst);
	il->append(static_cast<$Instruction*>($InstructionConst::THIS));
	il->append(static_cast<$Instruction*>($$new($INVOKESPECIAL, $nc(this->cp)->addMethodref(this->superClassName, "<init>"_s, "()V"_s))));
	il->append(static_cast<$Instruction*>($InstructionConst::RETURN));
	$init($Type);
	$var($MethodGen, mg, $new($MethodGen, access_flags, $Type::VOID, $Type::NO_ARGS, nullptr, "<init>"_s, this->className, il, this->cp));
	mg->setMaxStack(1);
	addMethod($(mg->getMethod()));
}

void ClassGen::addField($Field* f) {
	$nc(this->fieldList)->add(f);
}

bool ClassGen::containsField($Field* f) {
	return $nc(this->fieldList)->contains(f);
}

$Field* ClassGen::containsField($String* name) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->fieldList)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Field, f, $cast($Field, i$->next()));
			{
				if ($nc($($nc(f)->getName()))->equals(name)) {
					return f;
				}
			}
		}
	}
	return nullptr;
}

$Method* ClassGen::containsMethod($String* name, $String* signature) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->methodList)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Method, m, $cast($Method, i$->next()));
			{
				bool var$0 = $nc($($nc(m)->getName()))->equals(name);
				if (var$0 && $nc($(m->getSignature()))->equals(signature)) {
					return m;
				}
			}
		}
	}
	return nullptr;
}

void ClassGen::removeAttribute($Attribute* a) {
	$nc(this->attributeList)->remove($of(a));
}

void ClassGen::removeMethod($Method* m) {
	$nc(this->methodList)->remove($of(m));
}

void ClassGen::replaceMethod($Method* old, $Method* new_) {
	if (new_ == nullptr) {
		$throwNew($ClassGenException, "Replacement method must not be null"_s);
	}
	int32_t i = $nc(this->methodList)->indexOf(old);
	if (i < 0) {
		$nc(this->methodList)->add(new_);
	} else {
		$nc(this->methodList)->set(i, new_);
	}
}

void ClassGen::replaceField($Field* old, $Field* new_) {
	if (new_ == nullptr) {
		$throwNew($ClassGenException, "Replacement method must not be null"_s);
	}
	int32_t i = $nc(this->fieldList)->indexOf(old);
	if (i < 0) {
		$nc(this->fieldList)->add(new_);
	} else {
		$nc(this->fieldList)->set(i, new_);
	}
}

void ClassGen::removeField($Field* f) {
	$nc(this->fieldList)->remove($of(f));
}

$String* ClassGen::getClassName() {
	return this->className;
}

$String* ClassGen::getSuperclassName() {
	return this->superClassName;
}

$String* ClassGen::getFileName() {
	return this->fileName;
}

void ClassGen::setClassName($String* name) {
	$set(this, className, $nc(name)->replace(u'/', u'.'));
	this->classNameIndex = $nc(this->cp)->addClass(name);
}

void ClassGen::setSuperclassName($String* name) {
	$set(this, superClassName, $nc(name)->replace(u'/', u'.'));
	this->superclass_name_index = $nc(this->cp)->addClass(name);
}

$MethodArray* ClassGen::getMethods() {
	return $fcast($MethodArray, $nc(this->methodList)->toArray($$new($MethodArray, $nc(this->methodList)->size())));
}

void ClassGen::setMethods($MethodArray* methods) {
	$useLocalCurrentObjectStackCache();
	$nc(this->methodList)->clear();
	{
		$var($MethodArray, arr$, methods);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Method, method, arr$->get(i$));
			{
				addMethod(method);
			}
		}
	}
}

void ClassGen::setMethodAt($Method* method, int32_t pos) {
	$nc(this->methodList)->set(pos, method);
}

$Method* ClassGen::getMethodAt(int32_t pos) {
	return $cast($Method, $nc(this->methodList)->get(pos));
}

$StringArray* ClassGen::getInterfaceNames() {
	int32_t size = $nc(this->interfaceList)->size();
	$var($StringArray, interfaces, $new($StringArray, size));
	$nc(this->interfaceList)->toArray(interfaces);
	return interfaces;
}

$ints* ClassGen::getInterfaces() {
	$useLocalCurrentObjectStackCache();
	int32_t size = $nc(this->interfaceList)->size();
	$var($ints, interfaces, $new($ints, size));
	for (int32_t i = 0; i < size; ++i) {
		interfaces->set(i, $nc(this->cp)->addClass($cast($String, $($nc(this->interfaceList)->get(i)))));
	}
	return interfaces;
}

$FieldArray* ClassGen::getFields() {
	return $fcast($FieldArray, $nc(this->fieldList)->toArray($$new($FieldArray, $nc(this->fieldList)->size())));
}

$AttributeArray* ClassGen::getAttributes() {
	return $fcast($AttributeArray, $nc(this->attributeList)->toArray($$new($AttributeArray, $nc(this->attributeList)->size())));
}

$AnnotationEntryGenArray* ClassGen::getAnnotationEntries() {
	return $fcast($AnnotationEntryGenArray, $nc(this->annotationList)->toArray($$new($AnnotationEntryGenArray, $nc(this->annotationList)->size())));
}

$ConstantPoolGen* ClassGen::getConstantPool() {
	return this->cp;
}

void ClassGen::setConstantPool($ConstantPoolGen* constant_pool) {
	$set(this, cp, constant_pool);
}

void ClassGen::setClassNameIndex(int32_t class_name_index) {
	$useLocalCurrentObjectStackCache();
	this->classNameIndex = class_name_index;
	$set(this, className, $nc($($nc($($nc(this->cp)->getConstantPool()))->getConstantString(class_name_index, $Const::CONSTANT_Class)))->replace(u'/', u'.'));
}

void ClassGen::setSuperclassNameIndex(int32_t superclass_name_index) {
	$useLocalCurrentObjectStackCache();
	this->superclass_name_index = superclass_name_index;
	$set(this, superClassName, $nc($($nc($($nc(this->cp)->getConstantPool()))->getConstantString(superclass_name_index, $Const::CONSTANT_Class)))->replace(u'/', u'.'));
}

int32_t ClassGen::getSuperclassNameIndex() {
	return this->superclass_name_index;
}

int32_t ClassGen::getClassNameIndex() {
	return this->classNameIndex;
}

void ClassGen::addObserver($ClassObserver* o) {
	if (this->observers == nullptr) {
		$set(this, observers, $new($ArrayList));
	}
	$nc(this->observers)->add(o);
}

void ClassGen::removeObserver($ClassObserver* o) {
	if (this->observers != nullptr) {
		$nc(this->observers)->remove($of(o));
	}
}

void ClassGen::update() {
	$useLocalCurrentObjectStackCache();
	if (this->observers != nullptr) {
		{
			$var($Iterator, i$, $nc(this->observers)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($ClassObserver, observer, $cast($ClassObserver, i$->next()));
				{
					$nc(observer)->notify(this);
				}
			}
		}
	}
}

$Object* ClassGen::clone() {
	try {
		return $of($AccessFlags::clone());
	} catch ($CloneNotSupportedException& e) {
		$throwNew($Error, "Clone Not Supported"_s);
	}
	$shouldNotReachHere();
}

$BCELComparator* ClassGen::getComparator() {
	$init(ClassGen);
	return ClassGen::bcelComparator;
}

void ClassGen::setComparator($BCELComparator* comparator) {
	$init(ClassGen);
	$assignStatic(ClassGen::bcelComparator, comparator);
}

bool ClassGen::equals(Object$* obj) {
	return $nc(ClassGen::bcelComparator)->equals(this, obj);
}

int32_t ClassGen::hashCode() {
	return $nc(ClassGen::bcelComparator)->hashCode(this);
}

void clinit$ClassGen($Class* class$) {
	$assignStatic(ClassGen::bcelComparator, $new($ClassGen$1));
}

ClassGen::ClassGen() {
}

$Class* ClassGen::load$($String* name, bool initialize) {
	$loadClass(ClassGen, name, initialize, &_ClassGen_ClassInfo_, clinit$ClassGen, allocate$ClassGen);
	return class$;
}

$Class* ClassGen::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com