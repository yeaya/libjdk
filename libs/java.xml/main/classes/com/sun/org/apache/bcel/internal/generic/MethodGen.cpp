#include <com/sun/org/apache/bcel/internal/generic/MethodGen.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/AccessFlags.h>
#include <com/sun/org/apache/bcel/internal/classfile/AnnotationEntry.h>
#include <com/sun/org/apache/bcel/internal/classfile/Annotations.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/Code.h>
#include <com/sun/org/apache/bcel/internal/classfile/CodeException.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ExceptionTable.h>
#include <com/sun/org/apache/bcel/internal/classfile/LineNumber.h>
#include <com/sun/org/apache/bcel/internal/classfile/LineNumberTable.h>
#include <com/sun/org/apache/bcel/internal/classfile/LocalVariable.h>
#include <com/sun/org/apache/bcel/internal/classfile/LocalVariableTable.h>
#include <com/sun/org/apache/bcel/internal/classfile/LocalVariableTypeTable.h>
#include <com/sun/org/apache/bcel/internal/classfile/Method.h>
#include <com/sun/org/apache/bcel/internal/classfile/ParameterAnnotationEntry.h>
#include <com/sun/org/apache/bcel/internal/classfile/ParameterAnnotations.h>
#include <com/sun/org/apache/bcel/internal/classfile/RuntimeVisibleParameterAnnotations.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <com/sun/org/apache/bcel/internal/generic/AnnotationEntryGen.h>
#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGenException.h>
#include <com/sun/org/apache/bcel/internal/generic/CodeExceptionGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldGenOrMethodGen.h>
#include <com/sun/org/apache/bcel/internal/generic/IINC.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IndexedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionTargeter.h>
#include <com/sun/org/apache/bcel/internal/generic/LineNumberGen.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableGen.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/MethodGen$1.h>
#include <com/sun/org/apache/bcel/internal/generic/MethodGen$BranchStack.h>
#include <com/sun/org/apache/bcel/internal/generic/MethodGen$BranchTarget.h>
#include <com/sun/org/apache/bcel/internal/generic/MethodObserver.h>
#include <com/sun/org/apache/bcel/internal/generic/NOP.h>
#include <com/sun/org/apache/bcel/internal/generic/ObjectType.h>
#include <com/sun/org/apache/bcel/internal/generic/RET.h>
#include <com/sun/org/apache/bcel/internal/generic/ReferenceType.h>
#include <com/sun/org/apache/bcel/internal/generic/Select.h>
#include <com/sun/org/apache/bcel/internal/generic/TargetLostException.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/util/BCELComparator.h>
#include <java/io/Serializable.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef ACC_ABSTRACT
#undef ACC_NATIVE
#undef ATHROW
#undef IRETURN
#undef JSR
#undef JSR_W
#undef RET
#undef RETURN
#undef T_ADDRESS
#undef VOID

using $AnnotationEntryArray = $Array<::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry>;
using $AttributeArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>;
using $CodeExceptionArray = $Array<::com::sun::org::apache::bcel::internal::classfile::CodeException>;
using $LineNumberArray = $Array<::com::sun::org::apache::bcel::internal::classfile::LineNumber>;
using $LocalVariableArray = $Array<::com::sun::org::apache::bcel::internal::classfile::LocalVariable>;
using $ParameterAnnotationEntryArray = $Array<::com::sun::org::apache::bcel::internal::classfile::ParameterAnnotationEntry>;
using $CodeExceptionGenArray = $Array<::com::sun::org::apache::bcel::internal::generic::CodeExceptionGen>;
using $InstructionHandleArray = $Array<::com::sun::org::apache::bcel::internal::generic::InstructionHandle>;
using $InstructionTargeterArray = $Array<::com::sun::org::apache::bcel::internal::generic::InstructionTargeter>;
using $LineNumberGenArray = $Array<::com::sun::org::apache::bcel::internal::generic::LineNumberGen>;
using $LocalVariableGenArray = $Array<::com::sun::org::apache::bcel::internal::generic::LocalVariableGen>;
using $TypeArray = $Array<::com::sun::org::apache::bcel::internal::generic::Type>;
using $ListArray = $Array<::java::util::List>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $AnnotationEntry = ::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry;
using $Annotations = ::com::sun::org::apache::bcel::internal::classfile::Annotations;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $Code = ::com::sun::org::apache::bcel::internal::classfile::Code;
using $CodeException = ::com::sun::org::apache::bcel::internal::classfile::CodeException;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ExceptionTable = ::com::sun::org::apache::bcel::internal::classfile::ExceptionTable;
using $LineNumber = ::com::sun::org::apache::bcel::internal::classfile::LineNumber;
using $LineNumberTable = ::com::sun::org::apache::bcel::internal::classfile::LineNumberTable;
using $LocalVariable = ::com::sun::org::apache::bcel::internal::classfile::LocalVariable;
using $LocalVariableTable = ::com::sun::org::apache::bcel::internal::classfile::LocalVariableTable;
using $LocalVariableTypeTable = ::com::sun::org::apache::bcel::internal::classfile::LocalVariableTypeTable;
using $Method = ::com::sun::org::apache::bcel::internal::classfile::Method;
using $ParameterAnnotationEntry = ::com::sun::org::apache::bcel::internal::classfile::ParameterAnnotationEntry;
using $ParameterAnnotations = ::com::sun::org::apache::bcel::internal::classfile::ParameterAnnotations;
using $RuntimeVisibleParameterAnnotations = ::com::sun::org::apache::bcel::internal::classfile::RuntimeVisibleParameterAnnotations;
using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
using $AnnotationEntryGen = ::com::sun::org::apache::bcel::internal::generic::AnnotationEntryGen;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $ClassGenException = ::com::sun::org::apache::bcel::internal::generic::ClassGenException;
using $CodeExceptionGen = ::com::sun::org::apache::bcel::internal::generic::CodeExceptionGen;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldGenOrMethodGen = ::com::sun::org::apache::bcel::internal::generic::FieldGenOrMethodGen;
using $IINC = ::com::sun::org::apache::bcel::internal::generic::IINC;
using $IfInstruction = ::com::sun::org::apache::bcel::internal::generic::IfInstruction;
using $IndexedInstruction = ::com::sun::org::apache::bcel::internal::generic::IndexedInstruction;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InstructionTargeter = ::com::sun::org::apache::bcel::internal::generic::InstructionTargeter;
using $LineNumberGen = ::com::sun::org::apache::bcel::internal::generic::LineNumberGen;
using $LocalVariableGen = ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $MethodGen$1 = ::com::sun::org::apache::bcel::internal::generic::MethodGen$1;
using $MethodGen$BranchStack = ::com::sun::org::apache::bcel::internal::generic::MethodGen$BranchStack;
using $MethodGen$BranchTarget = ::com::sun::org::apache::bcel::internal::generic::MethodGen$BranchTarget;
using $MethodObserver = ::com::sun::org::apache::bcel::internal::generic::MethodObserver;
using $NOP = ::com::sun::org::apache::bcel::internal::generic::NOP;
using $ObjectType = ::com::sun::org::apache::bcel::internal::generic::ObjectType;
using $RET = ::com::sun::org::apache::bcel::internal::generic::RET;
using $ReferenceType = ::com::sun::org::apache::bcel::internal::generic::ReferenceType;
using $Select = ::com::sun::org::apache::bcel::internal::generic::Select;
using $TargetLostException = ::com::sun::org::apache::bcel::internal::generic::TargetLostException;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $TypedInstruction = ::com::sun::org::apache::bcel::internal::generic::TypedInstruction;
using $BCELComparator = ::com::sun::org::apache::bcel::internal::util::BCELComparator;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

class MethodGen$$Lambda$lambda$getLocalVariables$0 : public $Comparator {
	$class(MethodGen$$Lambda$lambda$getLocalVariables$0, $NO_CLASS_INIT, $Comparator)
public:
	void init$() {
	}
	virtual int32_t compare(Object$* o1, Object$* o2) override {
		 return MethodGen::lambda$getLocalVariables$0($cast($LocalVariableGen, o1), $cast($LocalVariableGen, o2));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MethodGen$$Lambda$lambda$getLocalVariables$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MethodGen$$Lambda$lambda$getLocalVariables$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(MethodGen$$Lambda$lambda$getLocalVariables$0, init$, void)},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(MethodGen$$Lambda$lambda$getLocalVariables$0, compare, int32_t, Object$*, Object$*)},
	{}
};
$ClassInfo MethodGen$$Lambda$lambda$getLocalVariables$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.org.apache.bcel.internal.generic.MethodGen$$Lambda$lambda$getLocalVariables$0",
	"java.lang.Object",
	"java.util.Comparator",
	nullptr,
	methodInfos
};
$Class* MethodGen$$Lambda$lambda$getLocalVariables$0::load$($String* name, bool initialize) {
	$loadClass(MethodGen$$Lambda$lambda$getLocalVariables$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MethodGen$$Lambda$lambda$getLocalVariables$0::class$ = nullptr;

$FieldInfo _MethodGen_FieldInfo_[] = {
	{"className", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MethodGen, className)},
	{"argTypes", "[Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PRIVATE, $field(MethodGen, argTypes)},
	{"argNames", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(MethodGen, argNames)},
	{"maxLocals", "I", nullptr, $PRIVATE, $field(MethodGen, maxLocals)},
	{"maxStack", "I", nullptr, $PRIVATE, $field(MethodGen, maxStack)},
	{"il", "Lcom/sun/org/apache/bcel/internal/generic/InstructionList;", nullptr, $PRIVATE, $field(MethodGen, il)},
	{"stripAttributes", "Z", nullptr, $PRIVATE, $field(MethodGen, stripAttributes$)},
	{"localVariableTypeTable", "Lcom/sun/org/apache/bcel/internal/classfile/LocalVariableTypeTable;", nullptr, $PRIVATE, $field(MethodGen, localVariableTypeTable)},
	{"variableList", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/bcel/internal/generic/LocalVariableGen;>;", $PRIVATE | $FINAL, $field(MethodGen, variableList)},
	{"lineNumberList", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/bcel/internal/generic/LineNumberGen;>;", $PRIVATE | $FINAL, $field(MethodGen, lineNumberList)},
	{"exceptionList", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/bcel/internal/generic/CodeExceptionGen;>;", $PRIVATE | $FINAL, $field(MethodGen, exceptionList)},
	{"throwsList", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(MethodGen, throwsList)},
	{"codeAttrsList", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/bcel/internal/classfile/Attribute;>;", $PRIVATE | $FINAL, $field(MethodGen, codeAttrsList)},
	{"paramAnnotations", "[Ljava/util/List;", "[Ljava/util/List<Lcom/sun/org/apache/bcel/internal/generic/AnnotationEntryGen;>;", $PRIVATE, $field(MethodGen, paramAnnotations)},
	{"hasParameterAnnotations", "Z", nullptr, $PRIVATE, $field(MethodGen, hasParameterAnnotations)},
	{"haveUnpackedParameterAnnotations", "Z", nullptr, $PRIVATE, $field(MethodGen, haveUnpackedParameterAnnotations)},
	{"bcelComparator", "Lcom/sun/org/apache/bcel/internal/util/BCELComparator;", nullptr, $PRIVATE | $STATIC, $staticField(MethodGen, bcelComparator)},
	{"observers", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/bcel/internal/generic/MethodObserver;>;", $PRIVATE, $field(MethodGen, observers)},
	{}
};

$MethodInfo _MethodGen_MethodInfo_[] = {
	{"<init>", "(ILcom/sun/org/apache/bcel/internal/generic/Type;[Lcom/sun/org/apache/bcel/internal/generic/Type;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/InstructionList;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PUBLIC, $method(MethodGen, init$, void, int32_t, $Type*, $TypeArray*, $StringArray*, $String*, $String*, $InstructionList*, $ConstantPoolGen*)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/Method;Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PUBLIC, $method(MethodGen, init$, void, $Method*, $String*, $ConstantPoolGen*)},
	{"addAnnotationsAsAttribute", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PUBLIC, $virtualMethod(MethodGen, addAnnotationsAsAttribute, void, $ConstantPoolGen*)},
	{"addCodeAttribute", "(Lcom/sun/org/apache/bcel/internal/classfile/Attribute;)V", nullptr, $PUBLIC, $virtualMethod(MethodGen, addCodeAttribute, void, $Attribute*)},
	{"addException", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(MethodGen, addException, void, $String*)},
	{"addExceptionHandler", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/ObjectType;)Lcom/sun/org/apache/bcel/internal/generic/CodeExceptionGen;", nullptr, $PUBLIC, $virtualMethod(MethodGen, addExceptionHandler, $CodeExceptionGen*, $InstructionHandle*, $InstructionHandle*, $InstructionHandle*, $ObjectType*)},
	{"addLineNumber", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;I)Lcom/sun/org/apache/bcel/internal/generic/LineNumberGen;", nullptr, $PUBLIC, $virtualMethod(MethodGen, addLineNumber, $LineNumberGen*, $InstructionHandle*, int32_t)},
	{"addLocalVariable", "(Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/Type;ILcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;I)Lcom/sun/org/apache/bcel/internal/generic/LocalVariableGen;", nullptr, $PUBLIC, $virtualMethod(MethodGen, addLocalVariable, $LocalVariableGen*, $String*, $Type*, int32_t, $InstructionHandle*, $InstructionHandle*, int32_t)},
	{"addLocalVariable", "(Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/Type;ILcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)Lcom/sun/org/apache/bcel/internal/generic/LocalVariableGen;", nullptr, $PUBLIC, $virtualMethod(MethodGen, addLocalVariable, $LocalVariableGen*, $String*, $Type*, int32_t, $InstructionHandle*, $InstructionHandle*)},
	{"addLocalVariable", "(Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/Type;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)Lcom/sun/org/apache/bcel/internal/generic/LocalVariableGen;", nullptr, $PUBLIC, $virtualMethod(MethodGen, addLocalVariable, $LocalVariableGen*, $String*, $Type*, $InstructionHandle*, $InstructionHandle*)},
	{"addObserver", "(Lcom/sun/org/apache/bcel/internal/generic/MethodObserver;)V", nullptr, $PUBLIC, $virtualMethod(MethodGen, addObserver, void, $MethodObserver*)},
	{"addParameterAnnotation", "(ILcom/sun/org/apache/bcel/internal/generic/AnnotationEntryGen;)V", nullptr, $PUBLIC, $virtualMethod(MethodGen, addParameterAnnotation, void, int32_t, $AnnotationEntryGen*)},
	{"addParameterAnnotationsAsAttribute", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PUBLIC, $virtualMethod(MethodGen, addParameterAnnotationsAsAttribute, void, $ConstantPoolGen*)},
	{"addRuntimeAnnotationsAsAttribute", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)[Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PRIVATE, $method(MethodGen, addRuntimeAnnotationsAsAttribute, $AttributeArray*, $ConstantPoolGen*)},
	{"addRuntimeParameterAnnotationsAsAttribute", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)[Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PRIVATE, $method(MethodGen, addRuntimeParameterAnnotationsAsAttribute, $AttributeArray*, $ConstantPoolGen*)},
	{"adjustLocalVariableTypeTable", "(Lcom/sun/org/apache/bcel/internal/classfile/LocalVariableTable;)V", nullptr, $PRIVATE, $method(MethodGen, adjustLocalVariableTypeTable, void, $LocalVariableTable*)},
	{"copy", "(Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/MethodGen;", nullptr, $PUBLIC, $virtualMethod(MethodGen, copy, MethodGen*, $String*, $ConstantPoolGen*)},
	{"ensureExistingParameterAnnotationsUnpacked", "()V", nullptr, $PRIVATE, $method(MethodGen, ensureExistingParameterAnnotationsUnpacked, void)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MethodGen, equals, bool, Object$*)},
	{"getAnnotationsOnParameter", "(I)Ljava/util/List;", "(I)Ljava/util/List<Lcom/sun/org/apache/bcel/internal/generic/AnnotationEntryGen;>;", $PUBLIC, $virtualMethod(MethodGen, getAnnotationsOnParameter, $List*, int32_t)},
	{"getArgumentName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MethodGen, getArgumentName, $String*, int32_t)},
	{"getArgumentNames", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MethodGen, getArgumentNames, $StringArray*)},
	{"getArgumentType", "(I)Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(MethodGen, getArgumentType, $Type*, int32_t)},
	{"getArgumentTypes", "()[Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(MethodGen, getArgumentTypes, $TypeArray*)},
	{"getByteCodes", "(Lcom/sun/org/apache/bcel/internal/classfile/Method;)[B", nullptr, $PRIVATE | $STATIC, $staticMethod(MethodGen, getByteCodes, $bytes*, $Method*)},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MethodGen, getClassName, $String*)},
	{"getCodeAttributes", "()[Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC, $virtualMethod(MethodGen, getCodeAttributes, $AttributeArray*)},
	{"getCodeExceptions", "()[Lcom/sun/org/apache/bcel/internal/classfile/CodeException;", nullptr, $PRIVATE, $method(MethodGen, getCodeExceptions, $CodeExceptionArray*)},
	{"getComparator", "()Lcom/sun/org/apache/bcel/internal/util/BCELComparator;", nullptr, $PUBLIC | $STATIC, $staticMethod(MethodGen, getComparator, $BCELComparator*)},
	{"getExceptionHandlers", "()[Lcom/sun/org/apache/bcel/internal/generic/CodeExceptionGen;", nullptr, $PUBLIC, $virtualMethod(MethodGen, getExceptionHandlers, $CodeExceptionGenArray*)},
	{"getExceptionTable", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/classfile/ExceptionTable;", nullptr, $PRIVATE, $method(MethodGen, getExceptionTable, $ExceptionTable*, $ConstantPoolGen*)},
	{"getExceptions", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MethodGen, getExceptions, $StringArray*)},
	{"getInstructionList", "()Lcom/sun/org/apache/bcel/internal/generic/InstructionList;", nullptr, $PUBLIC, $virtualMethod(MethodGen, getInstructionList, $InstructionList*)},
	{"getLineNumberTable", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/classfile/LineNumberTable;", nullptr, $PUBLIC, $virtualMethod(MethodGen, getLineNumberTable, $LineNumberTable*, $ConstantPoolGen*)},
	{"getLineNumbers", "()[Lcom/sun/org/apache/bcel/internal/generic/LineNumberGen;", nullptr, $PUBLIC, $virtualMethod(MethodGen, getLineNumbers, $LineNumberGenArray*)},
	{"getLocalVariableTable", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/classfile/LocalVariableTable;", nullptr, $PUBLIC, $virtualMethod(MethodGen, getLocalVariableTable, $LocalVariableTable*, $ConstantPoolGen*)},
	{"getLocalVariableTypeTable", "()Lcom/sun/org/apache/bcel/internal/classfile/LocalVariableTypeTable;", nullptr, $PUBLIC, $virtualMethod(MethodGen, getLocalVariableTypeTable, $LocalVariableTypeTable*)},
	{"getLocalVariables", "()[Lcom/sun/org/apache/bcel/internal/generic/LocalVariableGen;", nullptr, $PUBLIC, $virtualMethod(MethodGen, getLocalVariables, $LocalVariableGenArray*)},
	{"getMaxLocals", "()I", nullptr, $PUBLIC, $virtualMethod(MethodGen, getMaxLocals, int32_t)},
	{"getMaxStack", "()I", nullptr, $PUBLIC, $virtualMethod(MethodGen, getMaxStack, int32_t)},
	{"getMaxStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;Lcom/sun/org/apache/bcel/internal/generic/InstructionList;[Lcom/sun/org/apache/bcel/internal/generic/CodeExceptionGen;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(MethodGen, getMaxStack, int32_t, $ConstantPoolGen*, $InstructionList*, $CodeExceptionGenArray*)},
	{"getMethod", "()Lcom/sun/org/apache/bcel/internal/classfile/Method;", nullptr, $PUBLIC, $virtualMethod(MethodGen, getMethod, $Method*)},
	{"getReturnType", "()Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(MethodGen, getReturnType, $Type*)},
	{"getSignature", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MethodGen, getSignature, $String*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(MethodGen, hashCode, int32_t)},
	{"lambda$getLocalVariables$0", "(Lcom/sun/org/apache/bcel/internal/generic/LocalVariableGen;Lcom/sun/org/apache/bcel/internal/generic/LocalVariableGen;)I", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MethodGen, lambda$getLocalVariables$0, int32_t, $LocalVariableGen*, $LocalVariableGen*)},
	{"makeMutableVersion", "([Lcom/sun/org/apache/bcel/internal/classfile/AnnotationEntry;)Ljava/util/List;", "([Lcom/sun/org/apache/bcel/internal/classfile/AnnotationEntry;)Ljava/util/List<Lcom/sun/org/apache/bcel/internal/generic/AnnotationEntryGen;>;", $PRIVATE, $method(MethodGen, makeMutableVersion, $List*, $AnnotationEntryArray*)},
	{"removeCodeAttribute", "(Lcom/sun/org/apache/bcel/internal/classfile/Attribute;)V", nullptr, $PUBLIC, $virtualMethod(MethodGen, removeCodeAttribute, void, $Attribute*)},
	{"removeCodeAttributes", "()V", nullptr, $PUBLIC, $virtualMethod(MethodGen, removeCodeAttributes, void)},
	{"removeException", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(MethodGen, removeException, void, $String*)},
	{"removeExceptionHandler", "(Lcom/sun/org/apache/bcel/internal/generic/CodeExceptionGen;)V", nullptr, $PUBLIC, $virtualMethod(MethodGen, removeExceptionHandler, void, $CodeExceptionGen*)},
	{"removeExceptionHandlers", "()V", nullptr, $PUBLIC, $virtualMethod(MethodGen, removeExceptionHandlers, void)},
	{"removeExceptions", "()V", nullptr, $PUBLIC, $virtualMethod(MethodGen, removeExceptions, void)},
	{"removeLineNumber", "(Lcom/sun/org/apache/bcel/internal/generic/LineNumberGen;)V", nullptr, $PUBLIC, $virtualMethod(MethodGen, removeLineNumber, void, $LineNumberGen*)},
	{"removeLineNumbers", "()V", nullptr, $PUBLIC, $virtualMethod(MethodGen, removeLineNumbers, void)},
	{"removeLocalVariable", "(Lcom/sun/org/apache/bcel/internal/generic/LocalVariableGen;)V", nullptr, $PUBLIC, $virtualMethod(MethodGen, removeLocalVariable, void, $LocalVariableGen*)},
	{"removeLocalVariableTypeTable", "()V", nullptr, $PUBLIC, $virtualMethod(MethodGen, removeLocalVariableTypeTable, void)},
	{"removeLocalVariables", "()V", nullptr, $PUBLIC, $virtualMethod(MethodGen, removeLocalVariables, void)},
	{"removeNOPs", "()V", nullptr, $PUBLIC, $virtualMethod(MethodGen, removeNOPs, void)},
	{"removeObserver", "(Lcom/sun/org/apache/bcel/internal/generic/MethodObserver;)V", nullptr, $PUBLIC, $virtualMethod(MethodGen, removeObserver, void, $MethodObserver*)},
	{"removeRuntimeAttributes", "([Lcom/sun/org/apache/bcel/internal/classfile/Attribute;)V", nullptr, $PUBLIC, $virtualMethod(MethodGen, removeRuntimeAttributes, void, $AttributeArray*)},
	{"setArgumentName", "(ILjava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(MethodGen, setArgumentName, void, int32_t, $String*)},
	{"setArgumentNames", "([Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(MethodGen, setArgumentNames, void, $StringArray*)},
	{"setArgumentType", "(ILcom/sun/org/apache/bcel/internal/generic/Type;)V", nullptr, $PUBLIC, $virtualMethod(MethodGen, setArgumentType, void, int32_t, $Type*)},
	{"setArgumentTypes", "([Lcom/sun/org/apache/bcel/internal/generic/Type;)V", nullptr, $PUBLIC, $virtualMethod(MethodGen, setArgumentTypes, void, $TypeArray*)},
	{"setClassName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(MethodGen, setClassName, void, $String*)},
	{"setComparator", "(Lcom/sun/org/apache/bcel/internal/util/BCELComparator;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(MethodGen, setComparator, void, $BCELComparator*)},
	{"setInstructionList", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionList;)V", nullptr, $PUBLIC, $virtualMethod(MethodGen, setInstructionList, void, $InstructionList*)},
	{"setMaxLocals", "(I)V", nullptr, $PUBLIC, $virtualMethod(MethodGen, setMaxLocals, void, int32_t)},
	{"setMaxLocals", "()V", nullptr, $PUBLIC, $virtualMethod(MethodGen, setMaxLocals, void)},
	{"setMaxStack", "(I)V", nullptr, $PUBLIC, $virtualMethod(MethodGen, setMaxStack, void, int32_t)},
	{"setMaxStack", "()V", nullptr, $PUBLIC, $virtualMethod(MethodGen, setMaxStack, void)},
	{"setReturnType", "(Lcom/sun/org/apache/bcel/internal/generic/Type;)V", nullptr, $PUBLIC, $virtualMethod(MethodGen, setReturnType, void, $Type*)},
	{"stripAttributes", "(Z)V", nullptr, $PUBLIC, $virtualMethod(MethodGen, stripAttributes, void, bool)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(MethodGen, toString, $String*)},
	{"update", "()V", nullptr, $PUBLIC, $virtualMethod(MethodGen, update, void)},
	{"updateLocalVariableTable", "(Lcom/sun/org/apache/bcel/internal/classfile/LocalVariableTable;)V", nullptr, $PRIVATE, $method(MethodGen, updateLocalVariableTable, void, $LocalVariableTable*)},
	{}
};

$InnerClassInfo _MethodGen_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.generic.MethodGen$BranchStack", "com.sun.org.apache.bcel.internal.generic.MethodGen", "BranchStack", $STATIC | $FINAL},
	{"com.sun.org.apache.bcel.internal.generic.MethodGen$BranchTarget", "com.sun.org.apache.bcel.internal.generic.MethodGen", "BranchTarget", $STATIC | $FINAL},
	{"com.sun.org.apache.bcel.internal.generic.MethodGen$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MethodGen_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.MethodGen",
	"com.sun.org.apache.bcel.internal.generic.FieldGenOrMethodGen",
	nullptr,
	_MethodGen_FieldInfo_,
	_MethodGen_MethodInfo_,
	nullptr,
	nullptr,
	_MethodGen_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.generic.MethodGen$BranchStack,com.sun.org.apache.bcel.internal.generic.MethodGen$BranchTarget,com.sun.org.apache.bcel.internal.generic.MethodGen$1"
};

$Object* allocate$MethodGen($Class* clazz) {
	return $of($alloc(MethodGen));
}

$BCELComparator* MethodGen::bcelComparator = nullptr;

void MethodGen::init$(int32_t access_flags, $Type* return_type, $TypeArray* argTypes, $StringArray* argNames$renamed, $String* method_name, $String* className, $InstructionList* il, $ConstantPoolGen* cp) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, argNames, argNames$renamed);
	$FieldGenOrMethodGen::init$(access_flags);
	$set(this, localVariableTypeTable, nullptr);
	$set(this, variableList, $new($ArrayList));
	$set(this, lineNumberList, $new($ArrayList));
	$set(this, exceptionList, $new($ArrayList));
	$set(this, throwsList, $new($ArrayList));
	$set(this, codeAttrsList, $new($ArrayList));
	this->hasParameterAnnotations = false;
	this->haveUnpackedParameterAnnotations = false;
	setType(return_type);
	setArgumentTypes(argTypes);
	setArgumentNames(argNames);
	setName(method_name);
	setClassName(className);
	setInstructionList(il);
	setConstantPool(cp);
	bool var$0 = isAbstract();
	bool abstract_ = var$0 || isNative();
	$var($InstructionHandle, start, nullptr);
	$var($InstructionHandle, end, nullptr);
	if (!abstract_) {
		$assign(start, $nc(il)->getStart());
		if (!isStatic() && (className != nullptr)) {
			addLocalVariable("this"_s, $($ObjectType::getInstance(className)), start, end);
		}
	}
	if (argTypes != nullptr) {
		int32_t size = argTypes->length;
		{
			$var($TypeArray, arr$, argTypes);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Type, arg_type, arr$->get(i$));
				{
					$init($Type);
					if ($equals($Type::VOID, arg_type)) {
						$throwNew($ClassGenException, "\'void\' is an illegal argument type for a method"_s);
					}
				}
			}
		}
		if (argNames != nullptr) {
			if (size != argNames->length) {
				$throwNew($ClassGenException, $$str({"Mismatch in argument array lengths: "_s, $$str(size), " vs. "_s, $$str(argNames->length)}));
			}
		} else {
			$assign(argNames, $new($StringArray, size));
			for (int32_t i = 0; i < size; ++i) {
				argNames->set(i, $$str({"arg"_s, $$str(i)}));
			}
			setArgumentNames(argNames);
		}
		if (!abstract_) {
			for (int32_t i = 0; i < size; ++i) {
				addLocalVariable($nc(argNames)->get(i), argTypes->get(i), start, end);
			}
		}
	}
}

void MethodGen::init$($Method* method, $String* className, $ConstantPoolGen* cp) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(method)->getAccessFlags();
	$var($Type, var$1, $Type::getReturnType($(method->getSignature())));
	$var($TypeArray, var$2, $Type::getArgumentTypes($(method->getSignature())));
	$var($String, var$3, method->getName());
	$var($String, var$4, className);
	MethodGen::init$(var$0, var$1, var$2, nullptr, var$3, var$4, (((int32_t)(method->getAccessFlags() & (uint32_t)($Const::ACC_ABSTRACT | $Const::ACC_NATIVE))) == 0) ? $$new($InstructionList, $(getByteCodes(method))) : ($InstructionList*)nullptr, cp);
	$var($AttributeArray, attributes, $nc(method)->getAttributes());
	{
		$var($AttributeArray, arr$, attributes);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Attribute, attribute, arr$->get(i$));
			{
				$var($Attribute, a, attribute);
				if ($instanceOf($Code, a)) {
					$var($Code, c, $cast($Code, a));
					setMaxStack($nc(c)->getMaxStack());
					setMaxLocals($nc(c)->getMaxLocals());
					$var($CodeExceptionArray, ces, $nc(c)->getExceptionTable());
					if (ces != nullptr) {
						{
							$var($CodeExceptionArray, arr$, ces);
							int32_t len$ = arr$->length;
							int32_t i$ = 0;
							for (; i$ < len$; ++i$) {
								$var($CodeException, ce, arr$->get(i$));
								{
									int32_t type = $nc(ce)->getCatchType();
									$var($ObjectType, c_type, nullptr);
									if (type > 0) {
										$var($String, cen, $nc($(method->getConstantPool()))->getConstantString(type, $Const::CONSTANT_Class));
										$assign(c_type, $ObjectType::getInstance(cen));
									}
									int32_t end_pc = ce->getEndPC();
									int32_t length = $nc($(getByteCodes(method)))->length;
									$var($InstructionHandle, end, nullptr);
									if (length == end_pc) {
										$assign(end, $nc(this->il)->getEnd());
									} else {
										$assign(end, $nc(this->il)->findHandle(end_pc));
										$assign(end, $nc(end)->getPrev());
									}
									$var($InstructionHandle, var$5, $nc(this->il)->findHandle(ce->getStartPC()));
									$var($InstructionHandle, var$6, end);
									addExceptionHandler(var$5, var$6, $($nc(this->il)->findHandle(ce->getHandlerPC())), c_type);
								}
							}
						}
					}
					$var($AttributeArray, c_attributes, c->getAttributes());
					{
						$var($AttributeArray, arr$, c_attributes);
						int32_t len$ = arr$->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$var($Attribute, c_attribute, arr$->get(i$));
							{
								$assign(a, c_attribute);
								if ($instanceOf($LineNumberTable, a)) {
									$var($LineNumberArray, ln, $nc(($cast($LineNumberTable, a)))->getLineNumberTable());
									{
										$var($LineNumberArray, arr$, ln);
										int32_t len$ = arr$->length;
										int32_t i$ = 0;
										for (; i$ < len$; ++i$) {
											$var($LineNumber, l, arr$->get(i$));
											{
												$var($InstructionHandle, ih, $nc(this->il)->findHandle($nc(l)->getStartPC()));
												if (ih != nullptr) {
													addLineNumber(ih, $nc(l)->getLineNumber());
												}
											}
										}
									}
								} else if ($instanceOf($LocalVariableTable, a)) {
									updateLocalVariableTable($cast($LocalVariableTable, a));
								} else if ($instanceOf($LocalVariableTypeTable, a)) {
									$set(this, localVariableTypeTable, $cast($LocalVariableTypeTable, $nc(a)->copy($($nc(cp)->getConstantPool()))));
								} else {
									addCodeAttribute(a);
								}
							}
						}
					}
				} else if ($instanceOf($ExceptionTable, a)) {
					$var($StringArray, names, $nc(($cast($ExceptionTable, a)))->getExceptionNames());
					{
						$var($StringArray, arr$, names);
						int32_t len$ = arr$->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$var($String, name2, arr$->get(i$));
							{
								addException(name2);
							}
						}
					}
				} else if ($instanceOf($Annotations, a)) {
					$var($Annotations, runtimeAnnotations, $cast($Annotations, a));
					$var($AnnotationEntryArray, aes, $nc(runtimeAnnotations)->getAnnotationEntries());
					{
						$var($AnnotationEntryArray, arr$, aes);
						int32_t len$ = arr$->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$var($AnnotationEntry, element, arr$->get(i$));
							{
								addAnnotationEntry($$new($AnnotationEntryGen, element, cp, false));
							}
						}
					}
				} else {
					addAttribute(a);
				}
			}
		}
	}
}

$bytes* MethodGen::getByteCodes($Method* method) {
	$init(MethodGen);
	$useLocalCurrentObjectStackCache();
	$var($Code, code, $nc(method)->getCode());
	if (code == nullptr) {
		$throwNew($IllegalStateException, $($String::format("The method \'%s\' has no code."_s, $$new($ObjectArray, {$of(method)}))));
	}
	return $nc(code)->getCode();
}

$LocalVariableGen* MethodGen::addLocalVariable($String* name, $Type* type, int32_t slot, $InstructionHandle* start, $InstructionHandle* end, int32_t orig_index) {
	$useLocalCurrentObjectStackCache();
	int8_t t = $nc(type)->getType();
	if (t != $Const::T_ADDRESS) {
		int32_t add = type->getSize();
		if (slot + add > this->maxLocals) {
			this->maxLocals = slot + add;
		}
		$var($LocalVariableGen, l, $new($LocalVariableGen, slot, name, type, start, end, orig_index));
		int32_t i = 0;
		if ((i = $nc(this->variableList)->indexOf(l)) >= 0) {
			$nc(this->variableList)->set(i, l);
		} else {
			$nc(this->variableList)->add(l);
		}
		return l;
	}
	$throwNew($IllegalArgumentException, $$str({"Can not use "_s, type, " as type for local variable"_s}));
}

$LocalVariableGen* MethodGen::addLocalVariable($String* name, $Type* type, int32_t slot, $InstructionHandle* start, $InstructionHandle* end) {
	return addLocalVariable(name, type, slot, start, end, slot);
}

$LocalVariableGen* MethodGen::addLocalVariable($String* name, $Type* type, $InstructionHandle* start, $InstructionHandle* end) {
	return addLocalVariable(name, type, this->maxLocals, start, end);
}

void MethodGen::removeLocalVariable($LocalVariableGen* l) {
	$nc(this->variableList)->remove($of(l));
}

void MethodGen::removeLocalVariables() {
	$nc(this->variableList)->clear();
}

$LocalVariableGenArray* MethodGen::getLocalVariables() {
	$useLocalCurrentObjectStackCache();
	int32_t size = $nc(this->variableList)->size();
	$var($LocalVariableGenArray, lg, $new($LocalVariableGenArray, size));
	$nc(this->variableList)->toArray(lg);
	for (int32_t i = 0; i < size; ++i) {
		if (($nc(lg->get(i))->getStart() == nullptr) && (this->il != nullptr)) {
			$nc(lg->get(i))->setStart($($nc(this->il)->getStart()));
		}
		if (($nc(lg->get(i))->getEnd() == nullptr) && (this->il != nullptr)) {
			$nc(lg->get(i))->setEnd($($nc(this->il)->getEnd()));
		}
	}
	if (size > 1) {
		$Arrays::sort(lg, static_cast<$Comparator*>($$new(MethodGen$$Lambda$lambda$getLocalVariables$0)));
	}
	return lg;
}

$LocalVariableTable* MethodGen::getLocalVariableTable($ConstantPoolGen* cp) {
	$useLocalCurrentObjectStackCache();
	$var($LocalVariableGenArray, lg, getLocalVariables());
	int32_t size = $nc(lg)->length;
	$var($LocalVariableArray, lv, $new($LocalVariableArray, size));
	for (int32_t i = 0; i < size; ++i) {
		lv->set(i, $($nc(lg->get(i))->getLocalVariable(cp)));
	}
	int32_t var$0 = $nc(cp)->addUtf8("LocalVariableTable"_s);
	int32_t var$1 = 2 + lv->length * 10;
	$var($LocalVariableArray, var$2, lv);
	return $new($LocalVariableTable, var$0, var$1, var$2, $(cp->getConstantPool()));
}

$LocalVariableTypeTable* MethodGen::getLocalVariableTypeTable() {
	return this->localVariableTypeTable;
}

$LineNumberGen* MethodGen::addLineNumber($InstructionHandle* ih, int32_t srcLine) {
	$var($LineNumberGen, l, $new($LineNumberGen, ih, srcLine));
	$nc(this->lineNumberList)->add(l);
	return l;
}

void MethodGen::removeLineNumber($LineNumberGen* l) {
	$nc(this->lineNumberList)->remove($of(l));
}

void MethodGen::removeLineNumbers() {
	$nc(this->lineNumberList)->clear();
}

$LineNumberGenArray* MethodGen::getLineNumbers() {
	$var($LineNumberGenArray, lg, $new($LineNumberGenArray, $nc(this->lineNumberList)->size()));
	$nc(this->lineNumberList)->toArray(lg);
	return lg;
}

$LineNumberTable* MethodGen::getLineNumberTable($ConstantPoolGen* cp) {
	$useLocalCurrentObjectStackCache();
	int32_t size = $nc(this->lineNumberList)->size();
	$var($LineNumberArray, ln, $new($LineNumberArray, size));
	for (int32_t i = 0; i < size; ++i) {
		ln->set(i, $($nc(($cast($LineNumberGen, $($nc(this->lineNumberList)->get(i)))))->getLineNumber()));
	}
	int32_t var$0 = $nc(cp)->addUtf8("LineNumberTable"_s);
	int32_t var$1 = 2 + ln->length * 4;
	$var($LineNumberArray, var$2, ln);
	return $new($LineNumberTable, var$0, var$1, var$2, $(cp->getConstantPool()));
}

$CodeExceptionGen* MethodGen::addExceptionHandler($InstructionHandle* start_pc, $InstructionHandle* end_pc, $InstructionHandle* handler_pc, $ObjectType* catch_type) {
	if ((start_pc == nullptr) || (end_pc == nullptr) || (handler_pc == nullptr)) {
		$throwNew($ClassGenException, "Exception handler target is null instruction"_s);
	}
	$var($CodeExceptionGen, c, $new($CodeExceptionGen, start_pc, end_pc, handler_pc, catch_type));
	$nc(this->exceptionList)->add(c);
	return c;
}

void MethodGen::removeExceptionHandler($CodeExceptionGen* c) {
	$nc(this->exceptionList)->remove($of(c));
}

void MethodGen::removeExceptionHandlers() {
	$nc(this->exceptionList)->clear();
}

$CodeExceptionGenArray* MethodGen::getExceptionHandlers() {
	$var($CodeExceptionGenArray, cg, $new($CodeExceptionGenArray, $nc(this->exceptionList)->size()));
	$nc(this->exceptionList)->toArray(cg);
	return cg;
}

$CodeExceptionArray* MethodGen::getCodeExceptions() {
	$useLocalCurrentObjectStackCache();
	int32_t size = $nc(this->exceptionList)->size();
	$var($CodeExceptionArray, c_exc, $new($CodeExceptionArray, size));
	for (int32_t i = 0; i < size; ++i) {
		$var($CodeExceptionGen, c, $cast($CodeExceptionGen, $nc(this->exceptionList)->get(i)));
		c_exc->set(i, $($nc(c)->getCodeException($($FieldGenOrMethodGen::getConstantPool()))));
	}
	return c_exc;
}

void MethodGen::addException($String* className) {
	$nc(this->throwsList)->add(className);
}

void MethodGen::removeException($String* c) {
	$nc(this->throwsList)->remove($of(c));
}

void MethodGen::removeExceptions() {
	$nc(this->throwsList)->clear();
}

$StringArray* MethodGen::getExceptions() {
	return $fcast($StringArray, $nc(this->throwsList)->toArray($$new($StringArray, 0)));
}

$ExceptionTable* MethodGen::getExceptionTable($ConstantPoolGen* cp) {
	$useLocalCurrentObjectStackCache();
	int32_t size = $nc(this->throwsList)->size();
	$var($ints, ex, $new($ints, size));
	for (int32_t i = 0; i < size; ++i) {
		ex->set(i, $nc(cp)->addClass($cast($String, $($nc(this->throwsList)->get(i)))));
	}
	int32_t var$0 = $nc(cp)->addUtf8("Exceptions"_s);
	int32_t var$1 = 2 + 2 * size;
	$var($ints, var$2, ex);
	return $new($ExceptionTable, var$0, var$1, var$2, $(cp->getConstantPool()));
}

void MethodGen::addCodeAttribute($Attribute* a) {
	$nc(this->codeAttrsList)->add(a);
}

void MethodGen::removeLocalVariableTypeTable() {
	$set(this, localVariableTypeTable, nullptr);
}

void MethodGen::removeCodeAttribute($Attribute* a) {
	$nc(this->codeAttrsList)->remove($of(a));
}

void MethodGen::removeCodeAttributes() {
	$set(this, localVariableTypeTable, nullptr);
	$nc(this->codeAttrsList)->clear();
}

$AttributeArray* MethodGen::getCodeAttributes() {
	return $fcast($AttributeArray, $nc(this->codeAttrsList)->toArray($$new($AttributeArray, 0)));
}

void MethodGen::addAnnotationsAsAttribute($ConstantPoolGen* cp) {
	$useLocalCurrentObjectStackCache();
	$var($AttributeArray, attrs, $AnnotationEntryGen::getAnnotationAttributes(cp, $($FieldGenOrMethodGen::getAnnotationEntries())));
	{
		$var($AttributeArray, arr$, attrs);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Attribute, attr, arr$->get(i$));
			{
				addAttribute(attr);
			}
		}
	}
}

void MethodGen::addParameterAnnotationsAsAttribute($ConstantPoolGen* cp) {
	$useLocalCurrentObjectStackCache();
	if (!this->hasParameterAnnotations) {
		return;
	}
	$var($AttributeArray, attrs, $AnnotationEntryGen::getParameterAnnotationAttributes(cp, this->paramAnnotations));
	if (attrs != nullptr) {
		{
			$var($AttributeArray, arr$, attrs);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Attribute, attr, arr$->get(i$));
				{
					addAttribute(attr);
				}
			}
		}
	}
}

$AttributeArray* MethodGen::addRuntimeAnnotationsAsAttribute($ConstantPoolGen* cp) {
	$useLocalCurrentObjectStackCache();
	$var($AttributeArray, attrs, $AnnotationEntryGen::getAnnotationAttributes(cp, $($FieldGenOrMethodGen::getAnnotationEntries())));
	{
		$var($AttributeArray, arr$, attrs);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Attribute, attr, arr$->get(i$));
			{
				addAttribute(attr);
			}
		}
	}
	return attrs;
}

$AttributeArray* MethodGen::addRuntimeParameterAnnotationsAsAttribute($ConstantPoolGen* cp) {
	$useLocalCurrentObjectStackCache();
	if (!this->hasParameterAnnotations) {
		return $new($AttributeArray, 0);
	}
	$var($AttributeArray, attrs, $AnnotationEntryGen::getParameterAnnotationAttributes(cp, this->paramAnnotations));
	{
		$var($AttributeArray, arr$, attrs);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Attribute, attr, arr$->get(i$));
			{
				addAttribute(attr);
			}
		}
	}
	return attrs;
}

void MethodGen::removeRuntimeAttributes($AttributeArray* attrs) {
	$useLocalCurrentObjectStackCache();
	{
		$var($AttributeArray, arr$, attrs);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Attribute, attr, arr$->get(i$));
			{
				removeAttribute(attr);
			}
		}
	}
}

$Method* MethodGen::getMethod() {
	$useLocalCurrentObjectStackCache();
	$var($String, signature, getSignature());
	$var($ConstantPoolGen, _cp, $FieldGenOrMethodGen::getConstantPool());
	int32_t name_index = $nc(_cp)->addUtf8($($FieldGenOrMethodGen::getName()));
	int32_t signature_index = _cp->addUtf8(signature);
	$var($bytes, byte_code, nullptr);
	if (this->il != nullptr) {
		$assign(byte_code, $nc(this->il)->getByteCode());
	}
	$var($LineNumberTable, lnt, nullptr);
	$var($LocalVariableTable, lvt, nullptr);
	if (($nc(this->variableList)->size() > 0) && !this->stripAttributes$) {
		updateLocalVariableTable($(getLocalVariableTable(_cp)));
		addCodeAttribute(($assign(lvt, getLocalVariableTable(_cp))));
	}
	if (this->localVariableTypeTable != nullptr) {
		if (lvt != nullptr) {
			adjustLocalVariableTypeTable(lvt);
		}
		addCodeAttribute(this->localVariableTypeTable);
	}
	if (($nc(this->lineNumberList)->size() > 0) && !this->stripAttributes$) {
		addCodeAttribute(($assign(lnt, getLineNumberTable(_cp))));
	}
	$var($AttributeArray, code_attrs, getCodeAttributes());
	int32_t attrs_len = 0;
	{
		$var($AttributeArray, arr$, code_attrs);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Attribute, code_attr, arr$->get(i$));
			{
				attrs_len += $nc(code_attr)->getLength() + 6;
			}
		}
	}
	$var($CodeExceptionArray, c_exc, getCodeExceptions());
	int32_t exc_len = $nc(c_exc)->length * 8;
	$var($Code, code, nullptr);
	bool var$0 = (this->il != nullptr) && !isAbstract();
	if (var$0 && !isNative()) {
		$var($AttributeArray, attributes, getAttributes());
		{
			$var($AttributeArray, arr$, attributes);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Attribute, a, arr$->get(i$));
				{
					if ($instanceOf($Code, a)) {
						removeAttribute(a);
					}
				}
			}
		}
		int32_t var$1 = _cp->addUtf8("Code"_s);
		int32_t var$2 = 8 + $nc(byte_code)->length + 2 + exc_len + 2 + attrs_len;
		int32_t var$3 = this->maxStack;
		int32_t var$4 = this->maxLocals;
		$var($bytes, var$5, byte_code);
		$var($CodeExceptionArray, var$6, c_exc);
		$var($AttributeArray, var$7, code_attrs);
		$assign(code, $new($Code, var$1, var$2, var$3, var$4, var$5, var$6, var$7, $(_cp->getConstantPool())));
		addAttribute(code);
	}
	$var($AttributeArray, annotations, addRuntimeAnnotationsAsAttribute(_cp));
	$var($AttributeArray, parameterAnnotations, addRuntimeParameterAnnotationsAsAttribute(_cp));
	$var($ExceptionTable, et, nullptr);
	if ($nc(this->throwsList)->size() > 0) {
		addAttribute(($assign(et, getExceptionTable(_cp))));
	}
	int32_t var$8 = $FieldGenOrMethodGen::getAccessFlags();
	int32_t var$9 = name_index;
	int32_t var$10 = signature_index;
	$var($AttributeArray, var$11, getAttributes());
	$var($Method, m, $new($Method, var$8, var$9, var$10, var$11, $(_cp->getConstantPool())));
	if (lvt != nullptr) {
		removeCodeAttribute(lvt);
	}
	if (this->localVariableTypeTable != nullptr) {
		removeCodeAttribute(this->localVariableTypeTable);
	}
	if (lnt != nullptr) {
		removeCodeAttribute(lnt);
	}
	if (code != nullptr) {
		removeAttribute(code);
	}
	if (et != nullptr) {
		removeAttribute(et);
	}
	removeRuntimeAttributes(annotations);
	removeRuntimeAttributes(parameterAnnotations);
	return m;
}

void MethodGen::updateLocalVariableTable($LocalVariableTable* a) {
	$useLocalCurrentObjectStackCache();
	$var($LocalVariableArray, lv, $nc(a)->getLocalVariableTable());
	removeLocalVariables();
	{
		$var($LocalVariableArray, arr$, lv);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($LocalVariable, l, arr$->get(i$));
			{
				$var($InstructionHandle, start, $nc(this->il)->findHandle($nc(l)->getStartPC()));
				int32_t var$0 = $nc(l)->getStartPC();
				$var($InstructionHandle, end, $nc(this->il)->findHandle(var$0 + l->getLength()));
				if (nullptr == start) {
					$assign(start, $nc(this->il)->getStart());
				}
				$var($String, var$1, $nc(l)->getName());
				$var($Type, var$2, $Type::getType($(l->getSignature())));
				int32_t var$3 = l->getIndex();
				$var($InstructionHandle, var$4, start);
				$var($InstructionHandle, var$5, end);
				addLocalVariable(var$1, var$2, var$3, var$4, var$5, l->getOrigIndex());
			}
		}
	}
}

void MethodGen::adjustLocalVariableTypeTable($LocalVariableTable* lvt) {
	$useLocalCurrentObjectStackCache();
	$var($LocalVariableArray, lv, $nc(lvt)->getLocalVariableTable());
	$var($LocalVariableArray, lvg, $nc(this->localVariableTypeTable)->getLocalVariableTypeTable());
	{
		$var($LocalVariableArray, arr$, lvg);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($LocalVariable, element, arr$->get(i$));
			{
				{
					$var($LocalVariableArray, arr$, lv);
					int32_t len$ = arr$->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($LocalVariable, l, arr$->get(i$));
						{
							bool var$0 = $nc($($nc(element)->getName()))->equals($($nc(l)->getName()));
							if (var$0) {
								int32_t var$1 = element->getIndex();
								var$0 = var$1 == $nc(l)->getOrigIndex();
							}
							if (var$0) {
								element->setLength(l->getLength());
								element->setStartPC(l->getStartPC());
								element->setIndex(l->getIndex());
								break;
							}
						}
					}
				}
			}
		}
	}
}

void MethodGen::removeNOPs() {
	$useLocalCurrentObjectStackCache();
	if (this->il != nullptr) {
		$var($InstructionHandle, next, nullptr);
		{
			$var($InstructionHandle, ih, $nc(this->il)->getStart());
			for (; ih != nullptr; $assign(ih, next)) {
				$assign(next, $nc(ih)->getNext());
				if ((next != nullptr) && ($instanceOf($NOP, $(ih->getInstruction())))) {
					try {
						$nc(this->il)->delete$(ih);
					} catch ($TargetLostException& e) {
						{
							$var($InstructionHandleArray, arr$, e->getTargets());
							int32_t len$ = $nc(arr$)->length;
							int32_t i$ = 0;
							for (; i$ < len$; ++i$) {
								$var($InstructionHandle, target, arr$->get(i$));
								{
									{
										$var($InstructionTargeterArray, arr$, $nc(target)->getTargeters());
										int32_t len$ = arr$->length;
										int32_t i$ = 0;
										for (; i$ < len$; ++i$) {
											$var($InstructionTargeter, targeter, arr$->get(i$));
											{
												$nc(targeter)->updateTarget(target, next);
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void MethodGen::setMaxLocals(int32_t m) {
	this->maxLocals = m;
}

int32_t MethodGen::getMaxLocals() {
	return this->maxLocals;
}

void MethodGen::setMaxStack(int32_t m) {
	this->maxStack = m;
}

int32_t MethodGen::getMaxStack() {
	return this->maxStack;
}

$String* MethodGen::getClassName() {
	return this->className;
}

void MethodGen::setClassName($String* class_name) {
	$set(this, className, class_name);
}

void MethodGen::setReturnType($Type* return_type) {
	setType(return_type);
}

$Type* MethodGen::getReturnType() {
	return getType();
}

void MethodGen::setArgumentTypes($TypeArray* arg_types) {
	$set(this, argTypes, arg_types);
}

$TypeArray* MethodGen::getArgumentTypes() {
	return $cast($TypeArray, $nc(this->argTypes)->clone());
}

void MethodGen::setArgumentType(int32_t i, $Type* type) {
	$nc(this->argTypes)->set(i, type);
}

$Type* MethodGen::getArgumentType(int32_t i) {
	return $nc(this->argTypes)->get(i);
}

void MethodGen::setArgumentNames($StringArray* arg_names) {
	$set(this, argNames, arg_names);
}

$StringArray* MethodGen::getArgumentNames() {
	return $cast($StringArray, $nc(this->argNames)->clone());
}

void MethodGen::setArgumentName(int32_t i, $String* name) {
	$nc(this->argNames)->set(i, name);
}

$String* MethodGen::getArgumentName(int32_t i) {
	return $nc(this->argNames)->get(i);
}

$InstructionList* MethodGen::getInstructionList() {
	return this->il;
}

void MethodGen::setInstructionList($InstructionList* il) {
	$set(this, il, il);
}

$String* MethodGen::getSignature() {
	return $Type::getMethodSignature($($FieldGenOrMethodGen::getType()), this->argTypes);
}

void MethodGen::setMaxStack() {
	$useLocalCurrentObjectStackCache();
	if (this->il != nullptr) {
		$var($ConstantPoolGen, var$0, $FieldGenOrMethodGen::getConstantPool());
		$var($InstructionList, var$1, this->il);
		this->maxStack = getMaxStack(var$0, var$1, $(getExceptionHandlers()));
	} else {
		this->maxStack = 0;
	}
}

void MethodGen::setMaxLocals() {
	$useLocalCurrentObjectStackCache();
	if (this->il != nullptr) {
		int32_t max = isStatic() ? 0 : 1;
		if (this->argTypes != nullptr) {
			{
				$var($TypeArray, arr$, this->argTypes);
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($Type, arg_type, arr$->get(i$));
					{
						max += $nc(arg_type)->getSize();
					}
				}
			}
		}
		{
			$var($InstructionHandle, ih, $nc(this->il)->getStart());
			for (; ih != nullptr; $assign(ih, $nc(ih)->getNext())) {
				$var($Instruction, ins, ih->getInstruction());
				if (($instanceOf($LocalVariableInstruction, ins)) || ($instanceOf($RET, ins)) || ($instanceOf($IINC, ins))) {
					int32_t var$0 = $nc(($cast($IndexedInstruction, ins)))->getIndex();
					int32_t index = var$0 + $nc($($nc(($cast($TypedInstruction, ins)))->getType($($FieldGenOrMethodGen::getConstantPool()))))->getSize();
					if (index > max) {
						max = index;
					}
				}
			}
		}
		this->maxLocals = max;
	} else {
		this->maxLocals = 0;
	}
}

void MethodGen::stripAttributes(bool flag) {
	this->stripAttributes$ = flag;
}

int32_t MethodGen::getMaxStack($ConstantPoolGen* cp, $InstructionList* il, $CodeExceptionGenArray* et) {
	$init(MethodGen);
	$useLocalCurrentObjectStackCache();
	$var($MethodGen$BranchStack, branchTargets, $new($MethodGen$BranchStack));
	{
		$var($CodeExceptionGenArray, arr$, et);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($CodeExceptionGen, element, arr$->get(i$));
			{
				$var($InstructionHandle, handler_pc, $nc(element)->getHandlerPC());
				if (handler_pc != nullptr) {
					branchTargets->push(handler_pc, 1);
				}
			}
		}
	}
	int32_t stackDepth = 0;
	int32_t maxStackDepth = 0;
	$var($InstructionHandle, ih, $nc(il)->getStart());
	while (ih != nullptr) {
		$var($Instruction, instruction, ih->getInstruction());
		int16_t opcode = $nc(instruction)->getOpcode();
		int32_t var$0 = instruction->produceStack(cp);
		int32_t delta = var$0 - instruction->consumeStack(cp);
		stackDepth += delta;
		if (stackDepth > maxStackDepth) {
			maxStackDepth = stackDepth;
		}
		if ($instanceOf($BranchInstruction, instruction)) {
			$var($BranchInstruction, branch, $cast($BranchInstruction, instruction));
			if ($instanceOf($Select, instruction)) {
				$var($Select, select, $cast($Select, branch));
				$var($InstructionHandleArray, targets, select->getTargets());
				{
					$var($InstructionHandleArray, arr$, targets);
					int32_t len$ = $nc(arr$)->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($InstructionHandle, target, arr$->get(i$));
						{
							branchTargets->push(target, stackDepth);
						}
					}
				}
				$assign(ih, nullptr);
			} else if (!($instanceOf($IfInstruction, branch))) {
				if (opcode == $Const::JSR || opcode == $Const::JSR_W) {
					branchTargets->push($(ih->getNext()), stackDepth - 1);
				}
				$assign(ih, nullptr);
			}
			branchTargets->push($(branch->getTarget()), stackDepth);
		} else if (opcode == $Const::ATHROW || opcode == $Const::RET || (opcode >= $Const::IRETURN && opcode <= $Const::RETURN)) {
			$assign(ih, nullptr);
		}
		if (ih != nullptr) {
			$assign(ih, ih->getNext());
		}
		if (ih == nullptr) {
			$var($MethodGen$BranchTarget, bt, branchTargets->pop());
			if (bt != nullptr) {
				$assign(ih, bt->target);
				stackDepth = bt->stackDepth;
			}
		}
	}
	return maxStackDepth;
}

void MethodGen::addObserver($MethodObserver* o) {
	if (this->observers == nullptr) {
		$set(this, observers, $new($ArrayList));
	}
	$nc(this->observers)->add(o);
}

void MethodGen::removeObserver($MethodObserver* o) {
	if (this->observers != nullptr) {
		$nc(this->observers)->remove($of(o));
	}
}

void MethodGen::update() {
	$useLocalCurrentObjectStackCache();
	if (this->observers != nullptr) {
		{
			$var($Iterator, i$, $nc(this->observers)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($MethodObserver, observer, $cast($MethodObserver, i$->next()));
				{
					$nc(observer)->notify(this);
				}
			}
		}
	}
}

$String* MethodGen::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, access, $Utility::accessToString($FieldGenOrMethodGen::getAccessFlags()));
	$var($String, signature, $Type::getMethodSignature($($FieldGenOrMethodGen::getType()), this->argTypes));
	$var($String, var$0, signature);
	$var($String, var$1, $FieldGenOrMethodGen::getName());
	$var($String, var$2, access);
	$assign(signature, $Utility::methodSignatureToString(var$0, var$1, var$2, true, $(getLocalVariableTable($($FieldGenOrMethodGen::getConstantPool())))));
	$var($StringBuilder, buf, $new($StringBuilder, signature));
	{
		$var($AttributeArray, arr$, getAttributes());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Attribute, a, arr$->get(i$));
			{
				if (!(($instanceOf($Code, a)) || ($instanceOf($ExceptionTable, a)))) {
					buf->append(" ["_s)->append($of(a))->append("]"_s);
				}
			}
		}
	}
	if ($nc(this->throwsList)->size() > 0) {
		{
			$var($Iterator, i$, $nc(this->throwsList)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, throwsDescriptor, $cast($String, i$->next()));
				{
					buf->append("\n\t\tthrows "_s)->append(throwsDescriptor);
				}
			}
		}
	}
	return buf->toString();
}

MethodGen* MethodGen::copy($String* className, $ConstantPoolGen* cp) {
	$useLocalCurrentObjectStackCache();
	$var($Method, m, $nc(($cast(MethodGen, $(clone()))))->getMethod());
	$var(MethodGen, mg, $new(MethodGen, m, className, $($FieldGenOrMethodGen::getConstantPool())));
	if ($FieldGenOrMethodGen::getConstantPool() != cp) {
		mg->setConstantPool(cp);
		$nc($(mg->getInstructionList()))->replaceConstantPool($($FieldGenOrMethodGen::getConstantPool()), cp);
	}
	return mg;
}

$List* MethodGen::getAnnotationsOnParameter(int32_t i) {
	ensureExistingParameterAnnotationsUnpacked();
	if (!this->hasParameterAnnotations || i > $nc(this->argTypes)->length) {
		return nullptr;
	}
	return $nc(this->paramAnnotations)->get(i);
}

void MethodGen::ensureExistingParameterAnnotationsUnpacked() {
	$useLocalCurrentObjectStackCache();
	if (this->haveUnpackedParameterAnnotations) {
		return;
	}
	$var($AttributeArray, attrs, getAttributes());
	$var($ParameterAnnotations, paramAnnVisAttr, nullptr);
	$var($ParameterAnnotations, paramAnnInvisAttr, nullptr);
	{
		$var($AttributeArray, arr$, attrs);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Attribute, attribute, arr$->get(i$));
			{
				if ($instanceOf($ParameterAnnotations, attribute)) {
					if (!this->hasParameterAnnotations) {
						$var($ListArray, parmList, $new($ListArray, $nc(this->argTypes)->length));
						$set(this, paramAnnotations, parmList);
						for (int32_t j = 0; j < $nc(this->argTypes)->length; ++j) {
							$nc(this->paramAnnotations)->set(j, $$new($ArrayList));
						}
					}
					this->hasParameterAnnotations = true;
					$var($ParameterAnnotations, rpa, $cast($ParameterAnnotations, attribute));
					if ($instanceOf($RuntimeVisibleParameterAnnotations, rpa)) {
						$assign(paramAnnVisAttr, rpa);
					} else {
						$assign(paramAnnInvisAttr, rpa);
					}
					$var($ParameterAnnotationEntryArray, parameterAnnotationEntries, $nc(rpa)->getParameterAnnotationEntries());
					for (int32_t j = 0; j < $nc(parameterAnnotationEntries)->length; ++j) {
						$var($ParameterAnnotationEntry, immutableArray, $nc($(rpa->getParameterAnnotationEntries()))->get(j));
						$var($List, mutable$, makeMutableVersion($($nc(immutableArray)->getAnnotationEntries())));
						$nc($nc(this->paramAnnotations)->get(j))->addAll(mutable$);
					}
				}
			}
		}
	}
	if (paramAnnVisAttr != nullptr) {
		removeAttribute(paramAnnVisAttr);
	}
	if (paramAnnInvisAttr != nullptr) {
		removeAttribute(paramAnnInvisAttr);
	}
	this->haveUnpackedParameterAnnotations = true;
}

$List* MethodGen::makeMutableVersion($AnnotationEntryArray* mutableArray) {
	$useLocalCurrentObjectStackCache();
	$var($List, result, $new($ArrayList));
	{
		$var($AnnotationEntryArray, arr$, mutableArray);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($AnnotationEntry, element, arr$->get(i$));
			{
				result->add($$new($AnnotationEntryGen, element, $(getConstantPool()), false));
			}
		}
	}
	return result;
}

void MethodGen::addParameterAnnotation(int32_t parameterIndex, $AnnotationEntryGen* annotation) {
	$useLocalCurrentObjectStackCache();
	ensureExistingParameterAnnotationsUnpacked();
	if (!this->hasParameterAnnotations) {
		$var($ListArray, parmList, $new($ListArray, $nc(this->argTypes)->length));
		$set(this, paramAnnotations, parmList);
		this->hasParameterAnnotations = true;
	}
	$var($List, existingAnnotations, $nc(this->paramAnnotations)->get(parameterIndex));
	if (existingAnnotations != nullptr) {
		existingAnnotations->add(annotation);
	} else {
		$var($List, l, $new($ArrayList));
		l->add(annotation);
		$nc(this->paramAnnotations)->set(parameterIndex, l);
	}
}

$BCELComparator* MethodGen::getComparator() {
	$init(MethodGen);
	return MethodGen::bcelComparator;
}

void MethodGen::setComparator($BCELComparator* comparator) {
	$init(MethodGen);
	$assignStatic(MethodGen::bcelComparator, comparator);
}

bool MethodGen::equals(Object$* obj) {
	return $nc(MethodGen::bcelComparator)->equals(this, obj);
}

int32_t MethodGen::hashCode() {
	return $nc(MethodGen::bcelComparator)->hashCode(this);
}

int32_t MethodGen::lambda$getLocalVariables$0($LocalVariableGen* o1, $LocalVariableGen* o2) {
	$init(MethodGen);
	int32_t var$0 = $nc(o1)->getIndex();
	return var$0 - $nc(o2)->getIndex();
}

void clinit$MethodGen($Class* class$) {
	$assignStatic(MethodGen::bcelComparator, $new($MethodGen$1));
}

MethodGen::MethodGen() {
}

$Class* MethodGen::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(MethodGen$$Lambda$lambda$getLocalVariables$0::classInfo$.name)) {
			return MethodGen$$Lambda$lambda$getLocalVariables$0::load$(name, initialize);
		}
	}
	$loadClass(MethodGen, name, initialize, &_MethodGen_ClassInfo_, clinit$MethodGen, allocate$MethodGen);
	return class$;
}

$Class* MethodGen::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com