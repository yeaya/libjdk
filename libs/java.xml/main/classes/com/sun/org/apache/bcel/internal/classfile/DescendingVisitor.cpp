#include <com/sun/org/apache/bcel/internal/classfile/DescendingVisitor.h>

#include <com/sun/org/apache/bcel/internal/classfile/AnnotationDefault.h>
#include <com/sun/org/apache/bcel/internal/classfile/AnnotationEntry.h>
#include <com/sun/org/apache/bcel/internal/classfile/Annotations.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/BootstrapMethods.h>
#include <com/sun/org/apache/bcel/internal/classfile/Code.h>
#include <com/sun/org/apache/bcel/internal/classfile/CodeException.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
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
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/util/Stack.h>
#include <jcpp.h>

using $AnnotationEntryArray = $Array<::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry>;
using $AttributeArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>;
using $CodeExceptionArray = $Array<::com::sun::org::apache::bcel::internal::classfile::CodeException>;
using $ConstantArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Constant>;
using $FieldArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Field>;
using $InnerClassArray = $Array<::com::sun::org::apache::bcel::internal::classfile::InnerClass>;
using $LineNumberArray = $Array<::com::sun::org::apache::bcel::internal::classfile::LineNumber>;
using $LocalVariableArray = $Array<::com::sun::org::apache::bcel::internal::classfile::LocalVariable>;
using $MethodArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Method>;
using $MethodParameterArray = $Array<::com::sun::org::apache::bcel::internal::classfile::MethodParameter>;
using $ModuleExportsArray = $Array<::com::sun::org::apache::bcel::internal::classfile::ModuleExports>;
using $ModuleOpensArray = $Array<::com::sun::org::apache::bcel::internal::classfile::ModuleOpens>;
using $ModuleProvidesArray = $Array<::com::sun::org::apache::bcel::internal::classfile::ModuleProvides>;
using $ModuleRequiresArray = $Array<::com::sun::org::apache::bcel::internal::classfile::ModuleRequires>;
using $StackMapEntryArray = $Array<::com::sun::org::apache::bcel::internal::classfile::StackMapEntry>;
using $AnnotationDefault = ::com::sun::org::apache::bcel::internal::classfile::AnnotationDefault;
using $AnnotationEntry = ::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry;
using $Annotations = ::com::sun::org::apache::bcel::internal::classfile::Annotations;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $BootstrapMethods = ::com::sun::org::apache::bcel::internal::classfile::BootstrapMethods;
using $Code = ::com::sun::org::apache::bcel::internal::classfile::Code;
using $CodeException = ::com::sun::org::apache::bcel::internal::classfile::CodeException;
using $Constant = ::com::sun::org::apache::bcel::internal::classfile::Constant;
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
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Stack = ::java::util::Stack;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _DescendingVisitor_FieldInfo_[] = {
	{"clazz", "Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;", nullptr, $PRIVATE | $FINAL, $field(DescendingVisitor, clazz)},
	{"visitor", "Lcom/sun/org/apache/bcel/internal/classfile/Visitor;", nullptr, $PRIVATE | $FINAL, $field(DescendingVisitor, visitor)},
	{"stack", "Ljava/util/Stack;", "Ljava/util/Stack<Ljava/lang/Object;>;", $PRIVATE | $FINAL, $field(DescendingVisitor, stack)},
	{}
};

$MethodInfo _DescendingVisitor_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $method(DescendingVisitor, init$, void, $JavaClass*, $Visitor*)},
	{"current", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, current, $Object*)},
	{"predecessor", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, predecessor, $Object*)},
	{"predecessor", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, predecessor, $Object*, int32_t)},
	{"visit", "()V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visit, void)},
	{"visitAnnotation", "(Lcom/sun/org/apache/bcel/internal/classfile/Annotations;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitAnnotation, void, $Annotations*)},
	{"visitAnnotationDefault", "(Lcom/sun/org/apache/bcel/internal/classfile/AnnotationDefault;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitAnnotationDefault, void, $AnnotationDefault*)},
	{"visitAnnotationEntry", "(Lcom/sun/org/apache/bcel/internal/classfile/AnnotationEntry;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitAnnotationEntry, void, $AnnotationEntry*)},
	{"visitBootstrapMethods", "(Lcom/sun/org/apache/bcel/internal/classfile/BootstrapMethods;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitBootstrapMethods, void, $BootstrapMethods*)},
	{"visitCode", "(Lcom/sun/org/apache/bcel/internal/classfile/Code;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitCode, void, $Code*)},
	{"visitCodeException", "(Lcom/sun/org/apache/bcel/internal/classfile/CodeException;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitCodeException, void, $CodeException*)},
	{"visitConstantClass", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantClass;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitConstantClass, void, $ConstantClass*)},
	{"visitConstantDouble", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantDouble;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitConstantDouble, void, $ConstantDouble*)},
	{"visitConstantDynamic", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantDynamic;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitConstantDynamic, void, $ConstantDynamic*)},
	{"visitConstantFieldref", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantFieldref;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitConstantFieldref, void, $ConstantFieldref*)},
	{"visitConstantFloat", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantFloat;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitConstantFloat, void, $ConstantFloat*)},
	{"visitConstantInteger", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantInteger;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitConstantInteger, void, $ConstantInteger*)},
	{"visitConstantInterfaceMethodref", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantInterfaceMethodref;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitConstantInterfaceMethodref, void, $ConstantInterfaceMethodref*)},
	{"visitConstantInvokeDynamic", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantInvokeDynamic;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitConstantInvokeDynamic, void, $ConstantInvokeDynamic*)},
	{"visitConstantLong", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantLong;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitConstantLong, void, $ConstantLong*)},
	{"visitConstantMethodHandle", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantMethodHandle;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitConstantMethodHandle, void, $ConstantMethodHandle*)},
	{"visitConstantMethodType", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantMethodType;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitConstantMethodType, void, $ConstantMethodType*)},
	{"visitConstantMethodref", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantMethodref;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitConstantMethodref, void, $ConstantMethodref*)},
	{"visitConstantModule", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantModule;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitConstantModule, void, $ConstantModule*)},
	{"visitConstantNameAndType", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantNameAndType;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitConstantNameAndType, void, $ConstantNameAndType*)},
	{"visitConstantPackage", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPackage;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitConstantPackage, void, $ConstantPackage*)},
	{"visitConstantPool", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitConstantPool, void, $ConstantPool*)},
	{"visitConstantString", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantString;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitConstantString, void, $ConstantString*)},
	{"visitConstantUtf8", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantUtf8;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitConstantUtf8, void, $ConstantUtf8*)},
	{"visitConstantValue", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantValue;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitConstantValue, void, $ConstantValue*)},
	{"visitDeprecated", "(Lcom/sun/org/apache/bcel/internal/classfile/Deprecated;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitDeprecated, void, $Deprecated*)},
	{"visitEnclosingMethod", "(Lcom/sun/org/apache/bcel/internal/classfile/EnclosingMethod;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitEnclosingMethod, void, $EnclosingMethod*)},
	{"visitExceptionTable", "(Lcom/sun/org/apache/bcel/internal/classfile/ExceptionTable;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitExceptionTable, void, $ExceptionTable*)},
	{"visitField", "(Lcom/sun/org/apache/bcel/internal/classfile/Field;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitField, void, $Field*)},
	{"visitInnerClass", "(Lcom/sun/org/apache/bcel/internal/classfile/InnerClass;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitInnerClass, void, $InnerClass*)},
	{"visitInnerClasses", "(Lcom/sun/org/apache/bcel/internal/classfile/InnerClasses;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitInnerClasses, void, $InnerClasses*)},
	{"visitJavaClass", "(Lcom/sun/org/apache/bcel/internal/classfile/JavaClass;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitJavaClass, void, $JavaClass*)},
	{"visitLineNumber", "(Lcom/sun/org/apache/bcel/internal/classfile/LineNumber;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitLineNumber, void, $LineNumber*)},
	{"visitLineNumberTable", "(Lcom/sun/org/apache/bcel/internal/classfile/LineNumberTable;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitLineNumberTable, void, $LineNumberTable*)},
	{"visitLocalVariable", "(Lcom/sun/org/apache/bcel/internal/classfile/LocalVariable;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitLocalVariable, void, $LocalVariable*)},
	{"visitLocalVariableTable", "(Lcom/sun/org/apache/bcel/internal/classfile/LocalVariableTable;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitLocalVariableTable, void, $LocalVariableTable*)},
	{"visitLocalVariableTypeTable", "(Lcom/sun/org/apache/bcel/internal/classfile/LocalVariableTypeTable;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitLocalVariableTypeTable, void, $LocalVariableTypeTable*)},
	{"visitMethod", "(Lcom/sun/org/apache/bcel/internal/classfile/Method;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitMethod, void, $Method*)},
	{"visitMethodParameter", "(Lcom/sun/org/apache/bcel/internal/classfile/MethodParameter;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitMethodParameter, void, $MethodParameter*)},
	{"visitMethodParameters", "(Lcom/sun/org/apache/bcel/internal/classfile/MethodParameters;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitMethodParameters, void, $MethodParameters*)},
	{"visitModule", "(Lcom/sun/org/apache/bcel/internal/classfile/Module;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitModule, void, $Module*)},
	{"visitModuleExports", "(Lcom/sun/org/apache/bcel/internal/classfile/ModuleExports;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitModuleExports, void, $ModuleExports*)},
	{"visitModuleMainClass", "(Lcom/sun/org/apache/bcel/internal/classfile/ModuleMainClass;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitModuleMainClass, void, $ModuleMainClass*)},
	{"visitModuleOpens", "(Lcom/sun/org/apache/bcel/internal/classfile/ModuleOpens;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitModuleOpens, void, $ModuleOpens*)},
	{"visitModulePackages", "(Lcom/sun/org/apache/bcel/internal/classfile/ModulePackages;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitModulePackages, void, $ModulePackages*)},
	{"visitModuleProvides", "(Lcom/sun/org/apache/bcel/internal/classfile/ModuleProvides;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitModuleProvides, void, $ModuleProvides*)},
	{"visitModuleRequires", "(Lcom/sun/org/apache/bcel/internal/classfile/ModuleRequires;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitModuleRequires, void, $ModuleRequires*)},
	{"visitNestHost", "(Lcom/sun/org/apache/bcel/internal/classfile/NestHost;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitNestHost, void, $NestHost*)},
	{"visitNestMembers", "(Lcom/sun/org/apache/bcel/internal/classfile/NestMembers;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitNestMembers, void, $NestMembers*)},
	{"visitParameterAnnotation", "(Lcom/sun/org/apache/bcel/internal/classfile/ParameterAnnotations;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitParameterAnnotation, void, $ParameterAnnotations*)},
	{"visitParameterAnnotationEntry", "(Lcom/sun/org/apache/bcel/internal/classfile/ParameterAnnotationEntry;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitParameterAnnotationEntry, void, $ParameterAnnotationEntry*)},
	{"visitSignature", "(Lcom/sun/org/apache/bcel/internal/classfile/Signature;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitSignature, void, $Signature*)},
	{"visitSourceFile", "(Lcom/sun/org/apache/bcel/internal/classfile/SourceFile;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitSourceFile, void, $SourceFile*)},
	{"visitStackMap", "(Lcom/sun/org/apache/bcel/internal/classfile/StackMap;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitStackMap, void, $StackMap*)},
	{"visitStackMapEntry", "(Lcom/sun/org/apache/bcel/internal/classfile/StackMapEntry;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitStackMapEntry, void, $StackMapEntry*)},
	{"visitSynthetic", "(Lcom/sun/org/apache/bcel/internal/classfile/Synthetic;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitSynthetic, void, $Synthetic*)},
	{"visitUnknown", "(Lcom/sun/org/apache/bcel/internal/classfile/Unknown;)V", nullptr, $PUBLIC, $virtualMethod(DescendingVisitor, visitUnknown, void, $Unknown*)},
	{}
};

$ClassInfo _DescendingVisitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.DescendingVisitor",
	"java.lang.Object",
	"com.sun.org.apache.bcel.internal.classfile.Visitor",
	_DescendingVisitor_FieldInfo_,
	_DescendingVisitor_MethodInfo_
};

$Object* allocate$DescendingVisitor($Class* clazz) {
	return $of($alloc(DescendingVisitor));
}

$Object* DescendingVisitor::predecessor() {
	return $of(predecessor(0));
}

$Object* DescendingVisitor::predecessor(int32_t level) {
	int32_t size = $nc(this->stack)->size();
	if ((size < 2) || (level < 0)) {
		return $of(nullptr);
	}
	return $of($nc(this->stack)->elementAt(size - (level + 2)));
}

$Object* DescendingVisitor::current() {
	return $of($nc(this->stack)->peek());
}

void DescendingVisitor::init$($JavaClass* clazz, $Visitor* visitor) {
	$set(this, stack, $new($Stack));
	$set(this, clazz, clazz);
	$set(this, visitor, visitor);
}

void DescendingVisitor::visit() {
	$nc(this->clazz)->accept(this);
}

void DescendingVisitor::visitJavaClass($JavaClass* _clazz) {
	$useLocalCurrentObjectStackCache();
	$nc(this->stack)->push(_clazz);
	$nc(_clazz)->accept(this->visitor);
	$var($FieldArray, fields, _clazz->getFields());
	{
		$var($FieldArray, arr$, fields);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Field, field, arr$->get(i$));
			{
				$nc(field)->accept(this);
			}
		}
	}
	$var($MethodArray, methods, _clazz->getMethods());
	{
		$var($MethodArray, arr$, methods);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Method, method, arr$->get(i$));
			{
				$nc(method)->accept(this);
			}
		}
	}
	$var($AttributeArray, attributes, _clazz->getAttributes());
	{
		$var($AttributeArray, arr$, attributes);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Attribute, attribute, arr$->get(i$));
			{
				$nc(attribute)->accept(this);
			}
		}
	}
	$nc($(_clazz->getConstantPool()))->accept(this);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitAnnotation($Annotations* annotation) {
	$useLocalCurrentObjectStackCache();
	$nc(this->stack)->push(annotation);
	$nc(annotation)->accept(this->visitor);
	$var($AnnotationEntryArray, entries, annotation->getAnnotationEntries());
	{
		$var($AnnotationEntryArray, arr$, entries);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($AnnotationEntry, entrie, arr$->get(i$));
			{
				$nc(entrie)->accept(this);
			}
		}
	}
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitAnnotationEntry($AnnotationEntry* annotationEntry) {
	$nc(this->stack)->push(annotationEntry);
	$nc(annotationEntry)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitField($Field* field) {
	$useLocalCurrentObjectStackCache();
	$nc(this->stack)->push(field);
	$nc(field)->accept(this->visitor);
	$var($AttributeArray, attributes, field->getAttributes());
	{
		$var($AttributeArray, arr$, attributes);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Attribute, attribute, arr$->get(i$));
			{
				$nc(attribute)->accept(this);
			}
		}
	}
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitConstantValue($ConstantValue* cv) {
	$nc(this->stack)->push(cv);
	$nc(cv)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitMethod($Method* method) {
	$useLocalCurrentObjectStackCache();
	$nc(this->stack)->push(method);
	$nc(method)->accept(this->visitor);
	$var($AttributeArray, attributes, method->getAttributes());
	{
		$var($AttributeArray, arr$, attributes);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Attribute, attribute, arr$->get(i$));
			{
				$nc(attribute)->accept(this);
			}
		}
	}
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitExceptionTable($ExceptionTable* table) {
	$nc(this->stack)->push(table);
	$nc(table)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitCode($Code* code) {
	$useLocalCurrentObjectStackCache();
	$nc(this->stack)->push(code);
	$nc(code)->accept(this->visitor);
	$var($CodeExceptionArray, table, code->getExceptionTable());
	{
		$var($CodeExceptionArray, arr$, table);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($CodeException, element, arr$->get(i$));
			{
				$nc(element)->accept(this);
			}
		}
	}
	$var($AttributeArray, attributes, code->getAttributes());
	{
		$var($AttributeArray, arr$, attributes);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Attribute, attribute, arr$->get(i$));
			{
				$nc(attribute)->accept(this);
			}
		}
	}
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitCodeException($CodeException* ce) {
	$nc(this->stack)->push(ce);
	$nc(ce)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitLineNumberTable($LineNumberTable* table) {
	$useLocalCurrentObjectStackCache();
	$nc(this->stack)->push(table);
	$nc(table)->accept(this->visitor);
	$var($LineNumberArray, numbers, table->getLineNumberTable());
	{
		$var($LineNumberArray, arr$, numbers);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($LineNumber, number, arr$->get(i$));
			{
				$nc(number)->accept(this);
			}
		}
	}
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitLineNumber($LineNumber* number) {
	$nc(this->stack)->push(number);
	$nc(number)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitLocalVariableTable($LocalVariableTable* table) {
	$useLocalCurrentObjectStackCache();
	$nc(this->stack)->push(table);
	$nc(table)->accept(this->visitor);
	$var($LocalVariableArray, vars, table->getLocalVariableTable());
	{
		$var($LocalVariableArray, arr$, vars);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($LocalVariable, var, arr$->get(i$));
			{
				$nc(var)->accept(this);
			}
		}
	}
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitStackMap($StackMap* table) {
	$useLocalCurrentObjectStackCache();
	$nc(this->stack)->push(table);
	$nc(table)->accept(this->visitor);
	$var($StackMapEntryArray, vars, table->getStackMap());
	{
		$var($StackMapEntryArray, arr$, vars);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($StackMapEntry, var, arr$->get(i$));
			{
				$nc(var)->accept(this);
			}
		}
	}
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitStackMapEntry($StackMapEntry* var) {
	$nc(this->stack)->push(var);
	$nc(var)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitLocalVariable($LocalVariable* var) {
	$nc(this->stack)->push(var);
	$nc(var)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitConstantPool($ConstantPool* cp) {
	$nc(this->stack)->push(cp);
	$nc(cp)->accept(this->visitor);
	$var($ConstantArray, constants, cp->getConstantPool());
	for (int32_t i = 1; i < $nc(constants)->length; ++i) {
		if (constants->get(i) != nullptr) {
			$nc(constants->get(i))->accept(this);
		}
	}
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitConstantClass($ConstantClass* constant) {
	$nc(this->stack)->push(constant);
	$nc(constant)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitConstantDouble($ConstantDouble* constant) {
	$nc(this->stack)->push(constant);
	$nc(constant)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitConstantFieldref($ConstantFieldref* constant) {
	$nc(this->stack)->push(constant);
	$nc(constant)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitConstantFloat($ConstantFloat* constant) {
	$nc(this->stack)->push(constant);
	$nc(constant)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitConstantInteger($ConstantInteger* constant) {
	$nc(this->stack)->push(constant);
	$nc(constant)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitConstantInterfaceMethodref($ConstantInterfaceMethodref* constant) {
	$nc(this->stack)->push(constant);
	$nc(constant)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitConstantInvokeDynamic($ConstantInvokeDynamic* constant) {
	$nc(this->stack)->push(constant);
	$nc(constant)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitConstantLong($ConstantLong* constant) {
	$nc(this->stack)->push(constant);
	$nc(constant)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitConstantMethodref($ConstantMethodref* constant) {
	$nc(this->stack)->push(constant);
	$nc(constant)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitConstantNameAndType($ConstantNameAndType* constant) {
	$nc(this->stack)->push(constant);
	$nc(constant)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitConstantString($ConstantString* constant) {
	$nc(this->stack)->push(constant);
	$nc(constant)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitConstantUtf8($ConstantUtf8* constant) {
	$nc(this->stack)->push(constant);
	$nc(constant)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitInnerClasses($InnerClasses* ic) {
	$useLocalCurrentObjectStackCache();
	$nc(this->stack)->push(ic);
	$nc(ic)->accept(this->visitor);
	$var($InnerClassArray, ics, ic->getInnerClasses());
	{
		$var($InnerClassArray, arr$, ics);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($InnerClass, ic2, arr$->get(i$));
			{
				$nc(ic2)->accept(this);
			}
		}
	}
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitInnerClass($InnerClass* inner) {
	$nc(this->stack)->push(inner);
	$nc(inner)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitBootstrapMethods($BootstrapMethods* bm) {
	$nc(this->stack)->push(bm);
	$nc(bm)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitDeprecated($Deprecated* attribute) {
	$nc(this->stack)->push(attribute);
	$nc(attribute)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitSignature($Signature* attribute) {
	$nc(this->stack)->push(attribute);
	$nc(attribute)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitSourceFile($SourceFile* attribute) {
	$nc(this->stack)->push(attribute);
	$nc(attribute)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitSynthetic($Synthetic* attribute) {
	$nc(this->stack)->push(attribute);
	$nc(attribute)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitUnknown($Unknown* attribute) {
	$nc(this->stack)->push(attribute);
	$nc(attribute)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitAnnotationDefault($AnnotationDefault* obj) {
	$nc(this->stack)->push(obj);
	$nc(obj)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitEnclosingMethod($EnclosingMethod* obj) {
	$nc(this->stack)->push(obj);
	$nc(obj)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitLocalVariableTypeTable($LocalVariableTypeTable* obj) {
	$nc(this->stack)->push(obj);
	$nc(obj)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitParameterAnnotation($ParameterAnnotations* obj) {
	$nc(this->stack)->push(obj);
	$nc(obj)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitMethodParameters($MethodParameters* obj) {
	$useLocalCurrentObjectStackCache();
	$nc(this->stack)->push(obj);
	$nc(obj)->accept(this->visitor);
	$var($MethodParameterArray, table, obj->getParameters());
	{
		$var($MethodParameterArray, arr$, table);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($MethodParameter, element, arr$->get(i$));
			{
				$nc(element)->accept(this);
			}
		}
	}
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitMethodParameter($MethodParameter* obj) {
	$nc(this->stack)->push(obj);
	$nc(obj)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitConstantMethodType($ConstantMethodType* obj) {
	$nc(this->stack)->push(obj);
	$nc(obj)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitConstantMethodHandle($ConstantMethodHandle* obj) {
	$nc(this->stack)->push(obj);
	$nc(obj)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitParameterAnnotationEntry($ParameterAnnotationEntry* obj) {
	$nc(this->stack)->push(obj);
	$nc(obj)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitConstantPackage($ConstantPackage* obj) {
	$nc(this->stack)->push(obj);
	$nc(obj)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitConstantModule($ConstantModule* obj) {
	$nc(this->stack)->push(obj);
	$nc(obj)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitConstantDynamic($ConstantDynamic* obj) {
	$nc(this->stack)->push(obj);
	$nc(obj)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitModule($Module* obj) {
	$useLocalCurrentObjectStackCache();
	$nc(this->stack)->push(obj);
	$nc(obj)->accept(this->visitor);
	$var($ModuleRequiresArray, rtable, obj->getRequiresTable());
	{
		$var($ModuleRequiresArray, arr$, rtable);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ModuleRequires, element, arr$->get(i$));
			{
				$nc(element)->accept(this);
			}
		}
	}
	$var($ModuleExportsArray, etable, obj->getExportsTable());
	{
		$var($ModuleExportsArray, arr$, etable);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ModuleExports, element, arr$->get(i$));
			{
				$nc(element)->accept(this);
			}
		}
	}
	$var($ModuleOpensArray, otable, obj->getOpensTable());
	{
		$var($ModuleOpensArray, arr$, otable);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ModuleOpens, element, arr$->get(i$));
			{
				$nc(element)->accept(this);
			}
		}
	}
	$var($ModuleProvidesArray, ptable, obj->getProvidesTable());
	{
		$var($ModuleProvidesArray, arr$, ptable);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ModuleProvides, element, arr$->get(i$));
			{
				$nc(element)->accept(this);
			}
		}
	}
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitModuleRequires($ModuleRequires* obj) {
	$nc(this->stack)->push(obj);
	$nc(obj)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitModuleExports($ModuleExports* obj) {
	$nc(this->stack)->push(obj);
	$nc(obj)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitModuleOpens($ModuleOpens* obj) {
	$nc(this->stack)->push(obj);
	$nc(obj)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitModuleProvides($ModuleProvides* obj) {
	$nc(this->stack)->push(obj);
	$nc(obj)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitModulePackages($ModulePackages* obj) {
	$nc(this->stack)->push(obj);
	$nc(obj)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitModuleMainClass($ModuleMainClass* obj) {
	$nc(this->stack)->push(obj);
	$nc(obj)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitNestHost($NestHost* obj) {
	$nc(this->stack)->push(obj);
	$nc(obj)->accept(this->visitor);
	$nc(this->stack)->pop();
}

void DescendingVisitor::visitNestMembers($NestMembers* obj) {
	$nc(this->stack)->push(obj);
	$nc(obj)->accept(this->visitor);
	$nc(this->stack)->pop();
}

DescendingVisitor::DescendingVisitor() {
}

$Class* DescendingVisitor::load$($String* name, bool initialize) {
	$loadClass(DescendingVisitor, name, initialize, &_DescendingVisitor_ClassInfo_, allocate$DescendingVisitor);
	return class$;
}

$Class* DescendingVisitor::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com