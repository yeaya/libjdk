#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>

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

$MethodInfo _Visitor_MethodInfo_[] = {
	{"visitAnnotation", "(Lcom/sun/org/apache/bcel/internal/classfile/Annotations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitAnnotation, void, $Annotations*)},
	{"visitAnnotationDefault", "(Lcom/sun/org/apache/bcel/internal/classfile/AnnotationDefault;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitAnnotationDefault, void, $AnnotationDefault*)},
	{"visitAnnotationEntry", "(Lcom/sun/org/apache/bcel/internal/classfile/AnnotationEntry;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitAnnotationEntry, void, $AnnotationEntry*)},
	{"visitBootstrapMethods", "(Lcom/sun/org/apache/bcel/internal/classfile/BootstrapMethods;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitBootstrapMethods, void, $BootstrapMethods*)},
	{"visitCode", "(Lcom/sun/org/apache/bcel/internal/classfile/Code;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitCode, void, $Code*)},
	{"visitCodeException", "(Lcom/sun/org/apache/bcel/internal/classfile/CodeException;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitCodeException, void, $CodeException*)},
	{"visitConstantClass", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantClass;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitConstantClass, void, $ConstantClass*)},
	{"visitConstantDouble", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantDouble;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitConstantDouble, void, $ConstantDouble*)},
	{"visitConstantDynamic", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantDynamic;)V", nullptr, $PUBLIC, $virtualMethod(Visitor, visitConstantDynamic, void, $ConstantDynamic*)},
	{"visitConstantFieldref", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantFieldref;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitConstantFieldref, void, $ConstantFieldref*)},
	{"visitConstantFloat", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantFloat;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitConstantFloat, void, $ConstantFloat*)},
	{"visitConstantInteger", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantInteger;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitConstantInteger, void, $ConstantInteger*)},
	{"visitConstantInterfaceMethodref", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantInterfaceMethodref;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitConstantInterfaceMethodref, void, $ConstantInterfaceMethodref*)},
	{"visitConstantInvokeDynamic", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantInvokeDynamic;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitConstantInvokeDynamic, void, $ConstantInvokeDynamic*)},
	{"visitConstantLong", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantLong;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitConstantLong, void, $ConstantLong*)},
	{"visitConstantMethodHandle", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantMethodHandle;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitConstantMethodHandle, void, $ConstantMethodHandle*)},
	{"visitConstantMethodType", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantMethodType;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitConstantMethodType, void, $ConstantMethodType*)},
	{"visitConstantMethodref", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantMethodref;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitConstantMethodref, void, $ConstantMethodref*)},
	{"visitConstantModule", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantModule;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitConstantModule, void, $ConstantModule*)},
	{"visitConstantNameAndType", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantNameAndType;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitConstantNameAndType, void, $ConstantNameAndType*)},
	{"visitConstantPackage", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPackage;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitConstantPackage, void, $ConstantPackage*)},
	{"visitConstantPool", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitConstantPool, void, $ConstantPool*)},
	{"visitConstantString", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantString;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitConstantString, void, $ConstantString*)},
	{"visitConstantUtf8", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantUtf8;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitConstantUtf8, void, $ConstantUtf8*)},
	{"visitConstantValue", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantValue;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitConstantValue, void, $ConstantValue*)},
	{"visitDeprecated", "(Lcom/sun/org/apache/bcel/internal/classfile/Deprecated;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitDeprecated, void, $Deprecated*)},
	{"visitEnclosingMethod", "(Lcom/sun/org/apache/bcel/internal/classfile/EnclosingMethod;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitEnclosingMethod, void, $EnclosingMethod*)},
	{"visitExceptionTable", "(Lcom/sun/org/apache/bcel/internal/classfile/ExceptionTable;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitExceptionTable, void, $ExceptionTable*)},
	{"visitField", "(Lcom/sun/org/apache/bcel/internal/classfile/Field;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitField, void, $Field*)},
	{"visitInnerClass", "(Lcom/sun/org/apache/bcel/internal/classfile/InnerClass;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitInnerClass, void, $InnerClass*)},
	{"visitInnerClasses", "(Lcom/sun/org/apache/bcel/internal/classfile/InnerClasses;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitInnerClasses, void, $InnerClasses*)},
	{"visitJavaClass", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitJavaClass, void, $JavaClass*)},
	{"visitLineNumber", "(Lcom/sun/org/apache/bcel/internal/classfile/LineNumber;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitLineNumber, void, $LineNumber*)},
	{"visitLineNumberTable", "(Lcom/sun/org/apache/bcel/internal/classfile/LineNumberTable;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitLineNumberTable, void, $LineNumberTable*)},
	{"visitLocalVariable", "(Lcom/sun/org/apache/bcel/internal/classfile/LocalVariable;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitLocalVariable, void, $LocalVariable*)},
	{"visitLocalVariableTable", "(Lcom/sun/org/apache/bcel/internal/classfile/LocalVariableTable;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitLocalVariableTable, void, $LocalVariableTable*)},
	{"visitLocalVariableTypeTable", "(Lcom/sun/org/apache/bcel/internal/classfile/LocalVariableTypeTable;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitLocalVariableTypeTable, void, $LocalVariableTypeTable*)},
	{"visitMethod", "(Lcom/sun/org/apache/bcel/internal/classfile/Method;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitMethod, void, $Method*)},
	{"visitMethodParameter", "(Lcom/sun/org/apache/bcel/internal/classfile/MethodParameter;)V", nullptr, $PUBLIC, $virtualMethod(Visitor, visitMethodParameter, void, $MethodParameter*)},
	{"visitMethodParameters", "(Lcom/sun/org/apache/bcel/internal/classfile/MethodParameters;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitMethodParameters, void, $MethodParameters*)},
	{"visitModule", "(Lcom/sun/org/apache/bcel/internal/classfile/Module;)V", nullptr, $PUBLIC, $virtualMethod(Visitor, visitModule, void, $Module*)},
	{"visitModuleExports", "(Lcom/sun/org/apache/bcel/internal/classfile/ModuleExports;)V", nullptr, $PUBLIC, $virtualMethod(Visitor, visitModuleExports, void, $ModuleExports*)},
	{"visitModuleMainClass", "(Lcom/sun/org/apache/bcel/internal/classfile/ModuleMainClass;)V", nullptr, $PUBLIC, $virtualMethod(Visitor, visitModuleMainClass, void, $ModuleMainClass*)},
	{"visitModuleOpens", "(Lcom/sun/org/apache/bcel/internal/classfile/ModuleOpens;)V", nullptr, $PUBLIC, $virtualMethod(Visitor, visitModuleOpens, void, $ModuleOpens*)},
	{"visitModulePackages", "(Lcom/sun/org/apache/bcel/internal/classfile/ModulePackages;)V", nullptr, $PUBLIC, $virtualMethod(Visitor, visitModulePackages, void, $ModulePackages*)},
	{"visitModuleProvides", "(Lcom/sun/org/apache/bcel/internal/classfile/ModuleProvides;)V", nullptr, $PUBLIC, $virtualMethod(Visitor, visitModuleProvides, void, $ModuleProvides*)},
	{"visitModuleRequires", "(Lcom/sun/org/apache/bcel/internal/classfile/ModuleRequires;)V", nullptr, $PUBLIC, $virtualMethod(Visitor, visitModuleRequires, void, $ModuleRequires*)},
	{"visitNestHost", "(Lcom/sun/org/apache/bcel/internal/classfile/NestHost;)V", nullptr, $PUBLIC, $virtualMethod(Visitor, visitNestHost, void, $NestHost*)},
	{"visitNestMembers", "(Lcom/sun/org/apache/bcel/internal/classfile/NestMembers;)V", nullptr, $PUBLIC, $virtualMethod(Visitor, visitNestMembers, void, $NestMembers*)},
	{"visitParameterAnnotation", "(Lcom/sun/org/apache/bcel/internal/classfile/ParameterAnnotations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitParameterAnnotation, void, $ParameterAnnotations*)},
	{"visitParameterAnnotationEntry", "(Lcom/sun/org/apache/bcel/internal/classfile/ParameterAnnotationEntry;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitParameterAnnotationEntry, void, $ParameterAnnotationEntry*)},
	{"visitSignature", "(Lcom/sun/org/apache/bcel/internal/classfile/Signature;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitSignature, void, $Signature*)},
	{"visitSourceFile", "(Lcom/sun/org/apache/bcel/internal/classfile/SourceFile;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitSourceFile, void, $SourceFile*)},
	{"visitStackMap", "(Lcom/sun/org/apache/bcel/internal/classfile/StackMap;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitStackMap, void, $StackMap*)},
	{"visitStackMapEntry", "(Lcom/sun/org/apache/bcel/internal/classfile/StackMapEntry;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitStackMapEntry, void, $StackMapEntry*)},
	{"visitSynthetic", "(Lcom/sun/org/apache/bcel/internal/classfile/Synthetic;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitSynthetic, void, $Synthetic*)},
	{"visitUnknown", "(Lcom/sun/org/apache/bcel/internal/classfile/Unknown;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitUnknown, void, $Unknown*)},
	{}
};

$ClassInfo _Visitor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.classfile.Visitor",
	nullptr,
	nullptr,
	nullptr,
	_Visitor_MethodInfo_
};

$Object* allocate$Visitor($Class* clazz) {
	return $of($alloc(Visitor));
}

void Visitor::visitMethodParameter($MethodParameter* obj) {
}

void Visitor::visitConstantDynamic($ConstantDynamic* constantDynamic) {
}

void Visitor::visitModule($Module* constantModule) {
}

void Visitor::visitModuleRequires($ModuleRequires* constantModule) {
}

void Visitor::visitModuleExports($ModuleExports* constantModule) {
}

void Visitor::visitModuleOpens($ModuleOpens* constantModule) {
}

void Visitor::visitModuleProvides($ModuleProvides* constantModule) {
}

void Visitor::visitModulePackages($ModulePackages* constantModule) {
}

void Visitor::visitModuleMainClass($ModuleMainClass* obj) {
}

void Visitor::visitNestHost($NestHost* obj) {
}

void Visitor::visitNestMembers($NestMembers* obj) {
}

$Class* Visitor::load$($String* name, bool initialize) {
	$loadClass(Visitor, name, initialize, &_Visitor_ClassInfo_, allocate$Visitor);
	return class$;
}

$Class* Visitor::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com