#include <com/sun/org/apache/bcel/internal/classfile/EmptyVisitor.h>

#include <com/sun/org/apache/bcel/internal/classfile/AnnotationDefault.h>
#include <com/sun/org/apache/bcel/internal/classfile/AnnotationEntry.h>
#include <com/sun/org/apache/bcel/internal/classfile/Annotations.h>
#include <com/sun/org/apache/bcel/internal/classfile/BootstrapMethods.h>
#include <com/sun/org/apache/bcel/internal/classfile/Code.h>
#include <com/sun/org/apache/bcel/internal/classfile/CodeException.h>
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
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantString.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantValue.h>
#include <com/sun/org/apache/bcel/internal/classfile/Deprecated.h>
#include <com/sun/org/apache/bcel/internal/classfile/EnclosingMethod.h>
#include <com/sun/org/apache/bcel/internal/classfile/ExceptionTable.h>
#include <com/sun/org/apache/bcel/internal/classfile/Field.h>
#include <com/sun/org/apache/bcel/internal/classfile/InnerClass.h>
#include <com/sun/org/apache/bcel/internal/classfile/InnerClasses.h>
#include <com/sun/org/apache/bcel/internal/classfile/JavaClass.h>
#include <com/sun/org/apache/bcel/internal/classfile/LineNumber.h>
#include <com/sun/org/apache/bcel/internal/classfile/LineNumberTable.h>
#include <com/sun/org/apache/bcel/internal/classfile/LocalVariable.h>
#include <com/sun/org/apache/bcel/internal/classfile/LocalVariableTable.h>
#include <com/sun/org/apache/bcel/internal/classfile/LocalVariableTypeTable.h>
#include <com/sun/org/apache/bcel/internal/classfile/Method.h>
#include <com/sun/org/apache/bcel/internal/classfile/MethodParameter.h>
#include <com/sun/org/apache/bcel/internal/classfile/MethodParameters.h>
#include <com/sun/org/apache/bcel/internal/classfile/Module.h>
#include <com/sun/org/apache/bcel/internal/classfile/ModuleExports.h>
#include <com/sun/org/apache/bcel/internal/classfile/ModuleMainClass.h>
#include <com/sun/org/apache/bcel/internal/classfile/ModuleOpens.h>
#include <com/sun/org/apache/bcel/internal/classfile/ModulePackages.h>
#include <com/sun/org/apache/bcel/internal/classfile/ModuleProvides.h>
#include <com/sun/org/apache/bcel/internal/classfile/ModuleRequires.h>
#include <com/sun/org/apache/bcel/internal/classfile/NestHost.h>
#include <com/sun/org/apache/bcel/internal/classfile/NestMembers.h>
#include <com/sun/org/apache/bcel/internal/classfile/ParameterAnnotationEntry.h>
#include <com/sun/org/apache/bcel/internal/classfile/ParameterAnnotations.h>
#include <com/sun/org/apache/bcel/internal/classfile/Signature.h>
#include <com/sun/org/apache/bcel/internal/classfile/SourceFile.h>
#include <com/sun/org/apache/bcel/internal/classfile/StackMap.h>
#include <com/sun/org/apache/bcel/internal/classfile/StackMapEntry.h>
#include <com/sun/org/apache/bcel/internal/classfile/Synthetic.h>
#include <com/sun/org/apache/bcel/internal/classfile/Unknown.h>
#include <jcpp.h>

using $AnnotationDefault = ::com::sun::org::apache::bcel::internal::classfile::AnnotationDefault;
using $AnnotationEntry = ::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry;
using $Annotations = ::com::sun::org::apache::bcel::internal::classfile::Annotations;
using $BootstrapMethods = ::com::sun::org::apache::bcel::internal::classfile::BootstrapMethods;
using $Code = ::com::sun::org::apache::bcel::internal::classfile::Code;
using $CodeException = ::com::sun::org::apache::bcel::internal::classfile::CodeException;
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
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ConstantString = ::com::sun::org::apache::bcel::internal::classfile::ConstantString;
using $ConstantUtf8 = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8;
using $ConstantValue = ::com::sun::org::apache::bcel::internal::classfile::ConstantValue;
using $Deprecated = ::com::sun::org::apache::bcel::internal::classfile::Deprecated;
using $EnclosingMethod = ::com::sun::org::apache::bcel::internal::classfile::EnclosingMethod;
using $ExceptionTable = ::com::sun::org::apache::bcel::internal::classfile::ExceptionTable;
using $Field = ::com::sun::org::apache::bcel::internal::classfile::Field;
using $InnerClass = ::com::sun::org::apache::bcel::internal::classfile::InnerClass;
using $InnerClasses = ::com::sun::org::apache::bcel::internal::classfile::InnerClasses;
using $JavaClass = ::com::sun::org::apache::bcel::internal::classfile::JavaClass;
using $LineNumber = ::com::sun::org::apache::bcel::internal::classfile::LineNumber;
using $LineNumberTable = ::com::sun::org::apache::bcel::internal::classfile::LineNumberTable;
using $LocalVariable = ::com::sun::org::apache::bcel::internal::classfile::LocalVariable;
using $LocalVariableTable = ::com::sun::org::apache::bcel::internal::classfile::LocalVariableTable;
using $LocalVariableTypeTable = ::com::sun::org::apache::bcel::internal::classfile::LocalVariableTypeTable;
using $Method = ::com::sun::org::apache::bcel::internal::classfile::Method;
using $MethodParameter = ::com::sun::org::apache::bcel::internal::classfile::MethodParameter;
using $MethodParameters = ::com::sun::org::apache::bcel::internal::classfile::MethodParameters;
using $Module = ::com::sun::org::apache::bcel::internal::classfile::Module;
using $ModuleExports = ::com::sun::org::apache::bcel::internal::classfile::ModuleExports;
using $ModuleMainClass = ::com::sun::org::apache::bcel::internal::classfile::ModuleMainClass;
using $ModuleOpens = ::com::sun::org::apache::bcel::internal::classfile::ModuleOpens;
using $ModulePackages = ::com::sun::org::apache::bcel::internal::classfile::ModulePackages;
using $ModuleProvides = ::com::sun::org::apache::bcel::internal::classfile::ModuleProvides;
using $ModuleRequires = ::com::sun::org::apache::bcel::internal::classfile::ModuleRequires;
using $NestHost = ::com::sun::org::apache::bcel::internal::classfile::NestHost;
using $NestMembers = ::com::sun::org::apache::bcel::internal::classfile::NestMembers;
using $ParameterAnnotationEntry = ::com::sun::org::apache::bcel::internal::classfile::ParameterAnnotationEntry;
using $ParameterAnnotations = ::com::sun::org::apache::bcel::internal::classfile::ParameterAnnotations;
using $Signature = ::com::sun::org::apache::bcel::internal::classfile::Signature;
using $SourceFile = ::com::sun::org::apache::bcel::internal::classfile::SourceFile;
using $StackMap = ::com::sun::org::apache::bcel::internal::classfile::StackMap;
using $StackMapEntry = ::com::sun::org::apache::bcel::internal::classfile::StackMapEntry;
using $Synthetic = ::com::sun::org::apache::bcel::internal::classfile::Synthetic;
using $Unknown = ::com::sun::org::apache::bcel::internal::classfile::Unknown;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$MethodInfo _EmptyVisitor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(EmptyVisitor, init$, void)},
	{"visitAnnotation", "(Lcom/sun/org/apache/bcel/internal/classfile/Annotations;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitAnnotation, void, $Annotations*)},
	{"visitAnnotationDefault", "(Lcom/sun/org/apache/bcel/internal/classfile/AnnotationDefault;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitAnnotationDefault, void, $AnnotationDefault*)},
	{"visitAnnotationEntry", "(Lcom/sun/org/apache/bcel/internal/classfile/AnnotationEntry;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitAnnotationEntry, void, $AnnotationEntry*)},
	{"visitBootstrapMethods", "(Lcom/sun/org/apache/bcel/internal/classfile/BootstrapMethods;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitBootstrapMethods, void, $BootstrapMethods*)},
	{"visitCode", "(Lcom/sun/org/apache/bcel/internal/classfile/Code;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitCode, void, $Code*)},
	{"visitCodeException", "(Lcom/sun/org/apache/bcel/internal/classfile/CodeException;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitCodeException, void, $CodeException*)},
	{"visitConstantClass", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantClass;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitConstantClass, void, $ConstantClass*)},
	{"visitConstantDouble", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantDouble;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitConstantDouble, void, $ConstantDouble*)},
	{"visitConstantDynamic", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantDynamic;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitConstantDynamic, void, $ConstantDynamic*)},
	{"visitConstantFieldref", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantFieldref;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitConstantFieldref, void, $ConstantFieldref*)},
	{"visitConstantFloat", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantFloat;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitConstantFloat, void, $ConstantFloat*)},
	{"visitConstantInteger", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantInteger;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitConstantInteger, void, $ConstantInteger*)},
	{"visitConstantInterfaceMethodref", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantInterfaceMethodref;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitConstantInterfaceMethodref, void, $ConstantInterfaceMethodref*)},
	{"visitConstantInvokeDynamic", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantInvokeDynamic;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitConstantInvokeDynamic, void, $ConstantInvokeDynamic*)},
	{"visitConstantLong", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantLong;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitConstantLong, void, $ConstantLong*)},
	{"visitConstantMethodHandle", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantMethodHandle;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitConstantMethodHandle, void, $ConstantMethodHandle*)},
	{"visitConstantMethodType", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantMethodType;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitConstantMethodType, void, $ConstantMethodType*)},
	{"visitConstantMethodref", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantMethodref;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitConstantMethodref, void, $ConstantMethodref*)},
	{"visitConstantModule", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantModule;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitConstantModule, void, $ConstantModule*)},
	{"visitConstantNameAndType", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantNameAndType;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitConstantNameAndType, void, $ConstantNameAndType*)},
	{"visitConstantPackage", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPackage;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitConstantPackage, void, $ConstantPackage*)},
	{"visitConstantPool", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitConstantPool, void, $ConstantPool*)},
	{"visitConstantString", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantString;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitConstantString, void, $ConstantString*)},
	{"visitConstantUtf8", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantUtf8;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitConstantUtf8, void, $ConstantUtf8*)},
	{"visitConstantValue", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantValue;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitConstantValue, void, $ConstantValue*)},
	{"visitDeprecated", "(Lcom/sun/org/apache/bcel/internal/classfile/Deprecated;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitDeprecated, void, $Deprecated*)},
	{"visitEnclosingMethod", "(Lcom/sun/org/apache/bcel/internal/classfile/EnclosingMethod;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitEnclosingMethod, void, $EnclosingMethod*)},
	{"visitExceptionTable", "(Lcom/sun/org/apache/bcel/internal/classfile/ExceptionTable;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitExceptionTable, void, $ExceptionTable*)},
	{"visitField", "(Lcom/sun/org/apache/bcel/internal/classfile/Field;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitField, void, $Field*)},
	{"visitInnerClass", "(Lcom/sun/org/apache/bcel/internal/classfile/InnerClass;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitInnerClass, void, $InnerClass*)},
	{"visitInnerClasses", "(Lcom/sun/org/apache/bcel/internal/classfile/InnerClasses;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitInnerClasses, void, $InnerClasses*)},
	{"visitJavaClass", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitJavaClass, void, $JavaClass*)},
	{"visitLineNumber", "(Lcom/sun/org/apache/bcel/internal/classfile/LineNumber;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitLineNumber, void, $LineNumber*)},
	{"visitLineNumberTable", "(Lcom/sun/org/apache/bcel/internal/classfile/LineNumberTable;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitLineNumberTable, void, $LineNumberTable*)},
	{"visitLocalVariable", "(Lcom/sun/org/apache/bcel/internal/classfile/LocalVariable;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitLocalVariable, void, $LocalVariable*)},
	{"visitLocalVariableTable", "(Lcom/sun/org/apache/bcel/internal/classfile/LocalVariableTable;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitLocalVariableTable, void, $LocalVariableTable*)},
	{"visitLocalVariableTypeTable", "(Lcom/sun/org/apache/bcel/internal/classfile/LocalVariableTypeTable;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitLocalVariableTypeTable, void, $LocalVariableTypeTable*)},
	{"visitMethod", "(Lcom/sun/org/apache/bcel/internal/classfile/Method;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitMethod, void, $Method*)},
	{"visitMethodParameter", "(Lcom/sun/org/apache/bcel/internal/classfile/MethodParameter;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitMethodParameter, void, $MethodParameter*)},
	{"visitMethodParameters", "(Lcom/sun/org/apache/bcel/internal/classfile/MethodParameters;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitMethodParameters, void, $MethodParameters*)},
	{"visitModule", "(Lcom/sun/org/apache/bcel/internal/classfile/Module;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitModule, void, $Module*)},
	{"visitModuleExports", "(Lcom/sun/org/apache/bcel/internal/classfile/ModuleExports;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitModuleExports, void, $ModuleExports*)},
	{"visitModuleMainClass", "(Lcom/sun/org/apache/bcel/internal/classfile/ModuleMainClass;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitModuleMainClass, void, $ModuleMainClass*)},
	{"visitModuleOpens", "(Lcom/sun/org/apache/bcel/internal/classfile/ModuleOpens;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitModuleOpens, void, $ModuleOpens*)},
	{"visitModulePackages", "(Lcom/sun/org/apache/bcel/internal/classfile/ModulePackages;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitModulePackages, void, $ModulePackages*)},
	{"visitModuleProvides", "(Lcom/sun/org/apache/bcel/internal/classfile/ModuleProvides;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitModuleProvides, void, $ModuleProvides*)},
	{"visitModuleRequires", "(Lcom/sun/org/apache/bcel/internal/classfile/ModuleRequires;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitModuleRequires, void, $ModuleRequires*)},
	{"visitNestHost", "(Lcom/sun/org/apache/bcel/internal/classfile/NestHost;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitNestHost, void, $NestHost*)},
	{"visitNestMembers", "(Lcom/sun/org/apache/bcel/internal/classfile/NestMembers;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitNestMembers, void, $NestMembers*)},
	{"visitParameterAnnotation", "(Lcom/sun/org/apache/bcel/internal/classfile/ParameterAnnotations;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitParameterAnnotation, void, $ParameterAnnotations*)},
	{"visitParameterAnnotationEntry", "(Lcom/sun/org/apache/bcel/internal/classfile/ParameterAnnotationEntry;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitParameterAnnotationEntry, void, $ParameterAnnotationEntry*)},
	{"visitSignature", "(Lcom/sun/org/apache/bcel/internal/classfile/Signature;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitSignature, void, $Signature*)},
	{"visitSourceFile", "(Lcom/sun/org/apache/bcel/internal/classfile/SourceFile;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitSourceFile, void, $SourceFile*)},
	{"visitStackMap", "(Lcom/sun/org/apache/bcel/internal/classfile/StackMap;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitStackMap, void, $StackMap*)},
	{"visitStackMapEntry", "(Lcom/sun/org/apache/bcel/internal/classfile/StackMapEntry;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitStackMapEntry, void, $StackMapEntry*)},
	{"visitSynthetic", "(Lcom/sun/org/apache/bcel/internal/classfile/Synthetic;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitSynthetic, void, $Synthetic*)},
	{"visitUnknown", "(Lcom/sun/org/apache/bcel/internal/classfile/Unknown;)V", nullptr, $PUBLIC, $virtualMethod(EmptyVisitor, visitUnknown, void, $Unknown*)},
	{}
};

$ClassInfo _EmptyVisitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.EmptyVisitor",
	"java.lang.Object",
	"com.sun.org.apache.bcel.internal.classfile.Visitor",
	nullptr,
	_EmptyVisitor_MethodInfo_
};

$Object* allocate$EmptyVisitor($Class* clazz) {
	return $of($alloc(EmptyVisitor));
}

void EmptyVisitor::init$() {
}

void EmptyVisitor::visitAnnotation($Annotations* obj) {
}

void EmptyVisitor::visitParameterAnnotation($ParameterAnnotations* obj) {
}

void EmptyVisitor::visitAnnotationEntry($AnnotationEntry* obj) {
}

void EmptyVisitor::visitAnnotationDefault($AnnotationDefault* obj) {
}

void EmptyVisitor::visitCode($Code* obj) {
}

void EmptyVisitor::visitCodeException($CodeException* obj) {
}

void EmptyVisitor::visitConstantClass($ConstantClass* obj) {
}

void EmptyVisitor::visitConstantDouble($ConstantDouble* obj) {
}

void EmptyVisitor::visitConstantFieldref($ConstantFieldref* obj) {
}

void EmptyVisitor::visitConstantFloat($ConstantFloat* obj) {
}

void EmptyVisitor::visitConstantInteger($ConstantInteger* obj) {
}

void EmptyVisitor::visitConstantInterfaceMethodref($ConstantInterfaceMethodref* obj) {
}

void EmptyVisitor::visitConstantInvokeDynamic($ConstantInvokeDynamic* obj) {
}

void EmptyVisitor::visitConstantLong($ConstantLong* obj) {
}

void EmptyVisitor::visitConstantMethodref($ConstantMethodref* obj) {
}

void EmptyVisitor::visitConstantNameAndType($ConstantNameAndType* obj) {
}

void EmptyVisitor::visitConstantPool($ConstantPool* obj) {
}

void EmptyVisitor::visitConstantString($ConstantString* obj) {
}

void EmptyVisitor::visitConstantUtf8($ConstantUtf8* obj) {
}

void EmptyVisitor::visitConstantValue($ConstantValue* obj) {
}

void EmptyVisitor::visitDeprecated($Deprecated* obj) {
}

void EmptyVisitor::visitExceptionTable($ExceptionTable* obj) {
}

void EmptyVisitor::visitField($Field* obj) {
}

void EmptyVisitor::visitInnerClass($InnerClass* obj) {
}

void EmptyVisitor::visitInnerClasses($InnerClasses* obj) {
}

void EmptyVisitor::visitBootstrapMethods($BootstrapMethods* obj) {
}

void EmptyVisitor::visitJavaClass($JavaClass* obj) {
}

void EmptyVisitor::visitLineNumber($LineNumber* obj) {
}

void EmptyVisitor::visitLineNumberTable($LineNumberTable* obj) {
}

void EmptyVisitor::visitLocalVariable($LocalVariable* obj) {
}

void EmptyVisitor::visitLocalVariableTable($LocalVariableTable* obj) {
}

void EmptyVisitor::visitMethod($Method* obj) {
}

void EmptyVisitor::visitSignature($Signature* obj) {
}

void EmptyVisitor::visitSourceFile($SourceFile* obj) {
}

void EmptyVisitor::visitSynthetic($Synthetic* obj) {
}

void EmptyVisitor::visitUnknown($Unknown* obj) {
}

void EmptyVisitor::visitStackMap($StackMap* obj) {
}

void EmptyVisitor::visitStackMapEntry($StackMapEntry* obj) {
}

void EmptyVisitor::visitEnclosingMethod($EnclosingMethod* obj) {
}

void EmptyVisitor::visitLocalVariableTypeTable($LocalVariableTypeTable* obj) {
}

void EmptyVisitor::visitMethodParameters($MethodParameters* obj) {
}

void EmptyVisitor::visitMethodParameter($MethodParameter* obj) {
}

void EmptyVisitor::visitConstantMethodType($ConstantMethodType* obj) {
}

void EmptyVisitor::visitConstantMethodHandle($ConstantMethodHandle* constantMethodHandle) {
}

void EmptyVisitor::visitParameterAnnotationEntry($ParameterAnnotationEntry* parameterAnnotationEntry) {
}

void EmptyVisitor::visitConstantPackage($ConstantPackage* constantPackage) {
}

void EmptyVisitor::visitConstantModule($ConstantModule* constantModule) {
}

void EmptyVisitor::visitConstantDynamic($ConstantDynamic* obj) {
}

void EmptyVisitor::visitModule($Module* obj) {
}

void EmptyVisitor::visitModuleRequires($ModuleRequires* obj) {
}

void EmptyVisitor::visitModuleExports($ModuleExports* obj) {
}

void EmptyVisitor::visitModuleOpens($ModuleOpens* obj) {
}

void EmptyVisitor::visitModuleProvides($ModuleProvides* obj) {
}

void EmptyVisitor::visitModulePackages($ModulePackages* obj) {
}

void EmptyVisitor::visitModuleMainClass($ModuleMainClass* obj) {
}

void EmptyVisitor::visitNestHost($NestHost* obj) {
}

void EmptyVisitor::visitNestMembers($NestMembers* obj) {
}

EmptyVisitor::EmptyVisitor() {
}

$Class* EmptyVisitor::load$($String* name, bool initialize) {
	$loadClass(EmptyVisitor, name, initialize, &_EmptyVisitor_ClassInfo_, allocate$EmptyVisitor);
	return class$;
}

$Class* EmptyVisitor::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com