#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FunctionCall.h>

#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/IFEQ.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESPECIAL.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESTATIC.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionConst.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LDC.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableGen.h>
#include <com/sun/org/apache/bcel/internal/generic/NEW.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/utils/ObjectFactory.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CastExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FlowList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FunctionCall$JavaType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/BooleanType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/IntType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MultiHashtable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ObjectType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ReferenceType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/TypeCheckError.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Error.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jdk/xml/internal/JdkXmlFeatures$XmlFeature.h>
#include <jcpp.h>

#undef ADD_READS
#undef ADD_READS_SIG
#undef ARGUMENT_CONVERSION_ERR
#undef BASIS_LIBRARY_CLASS
#undef CLASS_CLASS
#undef CLASS_NOT_FOUND_ERR
#undef CONSTRUCTOR_NOT_FOUND
#undef DOM_INTF_SIG
#undef DUP
#undef EMPTYSTRING
#undef EMPTY_ARG_LIST
#undef ENABLE_EXTENSION_FUNCTION
#undef ERROR
#undef EXSLT_COMMON
#undef EXSLT_DATETIME
#undef EXSLT_MATH
#undef EXSLT_SETS
#undef EXSLT_STRINGS
#undef EXTENSIONFUNCTION
#undef EXTENSIONNAMESPACE
#undef EXT_XALAN
#undef EXT_XSLTC
#undef FOR_NAME
#undef FOR_NAME_SIG
#undef FUNCTION_RESOLVE_ERR
#undef GET_MODULE
#undef GET_MODULE_SIG
#undef JAVA2INTERNAL
#undef JAVA_EXT_XALAN
#undef JAVA_EXT_XALAN_OLD
#undef JAVA_EXT_XSLTC
#undef MAX_VALUE
#undef METHOD_NOT_FOUND_ERR
#undef MODULE_CLASS
#undef NAMESPACE_FORMAT_CLASS
#undef NAMESPACE_FORMAT_CLASS_OR_PACKAGE
#undef NAMESPACE_FORMAT_JAVA
#undef NAMESPACE_FORMAT_PACKAGE
#undef NO_JAVA_FUNCT_THIS_REF
#undef POP
#undef TRANSLET_URI
#undef TYPE
#undef UNKNOWN_SIG_TYPE_ERR
#undef XALAN_CLASSPACKAGE_NAMESPACE

using $LocalVariableGenArray = $Array<::com::sun::org::apache::bcel::internal::generic::LocalVariableGen>;
using $ConstructorArray = $Array<::java::lang::reflect::Constructor>;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $IFEQ = ::com::sun::org::apache::bcel::internal::generic::IFEQ;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $INVOKESPECIAL = ::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL;
using $INVOKESTATIC = ::com::sun::org::apache::bcel::internal::generic::INVOKESTATIC;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $IfInstruction = ::com::sun::org::apache::bcel::internal::generic::IfInstruction;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionConst = ::com::sun::org::apache::bcel::internal::generic::InstructionConst;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $LDC = ::com::sun::org::apache::bcel::internal::generic::LDC;
using $LocalVariableGen = ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen;
using $NEW = ::com::sun::org::apache::bcel::internal::generic::NEW;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $ObjectFactory = ::com::sun::org::apache::xalan::internal::utils::ObjectFactory;
using $CastExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CastExpr;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $FlowList = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList;
using $FunctionCall$JavaType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FunctionCall$JavaType;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $XSLTC = ::com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC;
using $BooleanType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::BooleanType;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $IntType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::IntType;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $MethodType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodType;
using $MultiHashtable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MultiHashtable;
using $ObjectType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ObjectType;
using $ReferenceType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ReferenceType;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $TypeCheckError = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::TypeCheckError;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Double = ::java::lang::Double;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $StringBuffer = ::java::lang::StringBuffer;
using $Void = ::java::lang::Void;
using $Constructor = ::java::lang::reflect::Constructor;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $JdkXmlFeatures$XmlFeature = ::jdk::xml::internal::JdkXmlFeatures$XmlFeature;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _FunctionCall_FieldInfo_[] = {
	{"_fname", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PRIVATE, $field(FunctionCall, _fname)},
	{"_arguments", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;>;", $PRIVATE | $FINAL, $field(FunctionCall, _arguments)},
	{"EMPTY_ARG_LIST", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;>;", $PRIVATE | $STATIC | $FINAL, $staticField(FunctionCall, EMPTY_ARG_LIST)},
	{"EXT_XSLTC", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(FunctionCall, EXT_XSLTC)},
	{"JAVA_EXT_XSLTC", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(FunctionCall, JAVA_EXT_XSLTC)},
	{"EXT_XALAN", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(FunctionCall, EXT_XALAN)},
	{"JAVA_EXT_XALAN", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(FunctionCall, JAVA_EXT_XALAN)},
	{"JAVA_EXT_XALAN_OLD", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(FunctionCall, JAVA_EXT_XALAN_OLD)},
	{"EXSLT_COMMON", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(FunctionCall, EXSLT_COMMON)},
	{"EXSLT_MATH", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(FunctionCall, EXSLT_MATH)},
	{"EXSLT_SETS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(FunctionCall, EXSLT_SETS)},
	{"EXSLT_DATETIME", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(FunctionCall, EXSLT_DATETIME)},
	{"EXSLT_STRINGS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(FunctionCall, EXSLT_STRINGS)},
	{"XALAN_CLASSPACKAGE_NAMESPACE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(FunctionCall, XALAN_CLASSPACKAGE_NAMESPACE)},
	{"NAMESPACE_FORMAT_JAVA", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(FunctionCall, NAMESPACE_FORMAT_JAVA)},
	{"NAMESPACE_FORMAT_CLASS", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(FunctionCall, NAMESPACE_FORMAT_CLASS)},
	{"NAMESPACE_FORMAT_PACKAGE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(FunctionCall, NAMESPACE_FORMAT_PACKAGE)},
	{"NAMESPACE_FORMAT_CLASS_OR_PACKAGE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(FunctionCall, NAMESPACE_FORMAT_CLASS_OR_PACKAGE)},
	{"_namespace_format", "I", nullptr, $PRIVATE, $field(FunctionCall, _namespace_format)},
	{"_thisArgument", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, 0, $field(FunctionCall, _thisArgument)},
	{"_className", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FunctionCall, _className)},
	{"_clazz", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(FunctionCall, _clazz)},
	{"_chosenMethod", "Ljava/lang/reflect/Method;", nullptr, $PRIVATE, $field(FunctionCall, _chosenMethod)},
	{"_chosenConstructor", "Ljava/lang/reflect/Constructor;", "Ljava/lang/reflect/Constructor<*>;", $PRIVATE, $field(FunctionCall, _chosenConstructor)},
	{"_chosenMethodType", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodType;", nullptr, $PRIVATE, $field(FunctionCall, _chosenMethodType)},
	{"unresolvedExternal", "Z", nullptr, $PRIVATE, $field(FunctionCall, unresolvedExternal)},
	{"_isExtConstructor", "Z", nullptr, $PRIVATE, $field(FunctionCall, _isExtConstructor)},
	{"_isStatic", "Z", nullptr, $PRIVATE, $field(FunctionCall, _isStatic)},
	{"_internal2Java", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MultiHashtable;", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MultiHashtable<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/FunctionCall$JavaType;>;", $PRIVATE | $STATIC | $FINAL, $staticField(FunctionCall, _internal2Java)},
	{"JAVA2INTERNAL", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<*>;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;>;", $PRIVATE | $STATIC | $FINAL, $staticField(FunctionCall, JAVA2INTERNAL)},
	{"EXTENSIONNAMESPACE", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(FunctionCall, EXTENSIONNAMESPACE)},
	{"EXTENSIONFUNCTION", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(FunctionCall, EXTENSIONFUNCTION)},
	{}
};

$MethodInfo _FunctionCall_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Ljava/util/List;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;>;)V", $PUBLIC, $method(FunctionCall, init$, void, $QName*, $List*)},
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;)V", nullptr, $PUBLIC, $method(FunctionCall, init$, void, $QName*)},
	{"argument", "(I)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PROTECTED | $FINAL, $method(FunctionCall, argument, $Expression*, int32_t)},
	{"argument", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PROTECTED | $FINAL, $method(FunctionCall, argument, $Expression*)},
	{"argumentCount", "()I", nullptr, $PROTECTED | $FINAL, $method(FunctionCall, argumentCount, int32_t)},
	{"findConstructors", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/reflect/Constructor<*>;>;", $PRIVATE, $method(FunctionCall, findConstructors, $List*)},
	{"findMethods", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/reflect/Method;>;", $PRIVATE, $method(FunctionCall, findMethods, $List*)},
	{"generateAddReads", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(FunctionCall, generateAddReads, void, $ClassGenerator*, $MethodGenerator*, $String*)},
	{"getClassNameFromUri", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FunctionCall, getClassNameFromUri, $String*, $String*)},
	{"getMethodSignature", "(Ljava/util/List;)Ljava/lang/String;", "(Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;>;)Ljava/lang/String;", $PRIVATE, $method(FunctionCall, getMethodSignature, $String*, $List*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FunctionCall, getName, $String*)},
	{"getSignature", "(Ljava/lang/Class;)Ljava/lang/String;", "(Ljava/lang/Class<*>;)Ljava/lang/String;", $STATIC | $FINAL, $staticMethod(FunctionCall, getSignature, $String*, $Class*)},
	{"getSignature", "(Ljava/lang/reflect/Method;)Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticMethod(FunctionCall, getSignature, $String*, $Method*)},
	{"getSignature", "(Ljava/lang/reflect/Constructor;)Ljava/lang/String;", "(Ljava/lang/reflect/Constructor<*>;)Ljava/lang/String;", $STATIC | $FINAL, $staticMethod(FunctionCall, getSignature, $String*, $Constructor*)},
	{"isExtension", "()Z", nullptr, $PUBLIC, $virtualMethod(FunctionCall, isExtension, bool)},
	{"isStandard", "()Z", nullptr, $PUBLIC, $virtualMethod(FunctionCall, isStandard, bool)},
	{"replaceDash", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $staticMethod(FunctionCall, replaceDash, $String*, $String*)},
	{"setArgument", "(ILcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;)V", nullptr, $PROTECTED | $FINAL, $method(FunctionCall, setArgument, void, int32_t, $Expression*)},
	{"setParser", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(FunctionCall, setParser, void, $Parser*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FunctionCall, toString, $String*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(FunctionCall, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"translateDesynthesized", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(FunctionCall, translateDesynthesized, void, $ClassGenerator*, $MethodGenerator*)},
	{"translateUnallowedExtension", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;Lcom/sun/org/apache/bcel/internal/generic/InstructionList;)V", nullptr, $PRIVATE, $method(FunctionCall, translateUnallowedExtension, void, $ConstantPoolGen*, $InstructionList*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(FunctionCall, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{"typeCheckArgs", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Ljava/util/List;", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;>;", $PUBLIC, $virtualMethod(FunctionCall, typeCheckArgs, $List*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{"typeCheckConstructor", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(FunctionCall, typeCheckConstructor, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{"typeCheckExternal", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(FunctionCall, typeCheckExternal, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{"typeCheckStandard", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(FunctionCall, typeCheckStandard, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$InnerClassInfo _FunctionCall_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.compiler.FunctionCall$JavaType", "com.sun.org.apache.xalan.internal.xsltc.compiler.FunctionCall", "JavaType", $STATIC},
	{}
};

$ClassInfo _FunctionCall_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.FunctionCall",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Expression",
	nullptr,
	_FunctionCall_FieldInfo_,
	_FunctionCall_MethodInfo_,
	nullptr,
	nullptr,
	_FunctionCall_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.FunctionCall$JavaType"
};

$Object* allocate$FunctionCall($Class* clazz) {
	return $of($alloc(FunctionCall));
}

$List* FunctionCall::EMPTY_ARG_LIST = nullptr;
$String* FunctionCall::EXT_XSLTC = nullptr;
$String* FunctionCall::JAVA_EXT_XSLTC = nullptr;
$String* FunctionCall::EXT_XALAN = nullptr;
$String* FunctionCall::JAVA_EXT_XALAN = nullptr;
$String* FunctionCall::JAVA_EXT_XALAN_OLD = nullptr;
$String* FunctionCall::EXSLT_COMMON = nullptr;
$String* FunctionCall::EXSLT_MATH = nullptr;
$String* FunctionCall::EXSLT_SETS = nullptr;
$String* FunctionCall::EXSLT_DATETIME = nullptr;
$String* FunctionCall::EXSLT_STRINGS = nullptr;
$String* FunctionCall::XALAN_CLASSPACKAGE_NAMESPACE = nullptr;
$MultiHashtable* FunctionCall::_internal2Java = nullptr;
$Map* FunctionCall::JAVA2INTERNAL = nullptr;
$Map* FunctionCall::EXTENSIONNAMESPACE = nullptr;
$Map* FunctionCall::EXTENSIONFUNCTION = nullptr;

void FunctionCall::init$($QName* fname, $List* arguments) {
	$Expression::init$();
	this->_namespace_format = FunctionCall::NAMESPACE_FORMAT_JAVA;
	$set(this, _thisArgument, nullptr);
	this->_isExtConstructor = false;
	this->_isStatic = false;
	$set(this, _fname, fname);
	$set(this, _arguments, arguments);
	$set(this, _type, nullptr);
}

void FunctionCall::init$($QName* fname) {
	FunctionCall::init$(fname, FunctionCall::EMPTY_ARG_LIST);
}

$String* FunctionCall::getName() {
	return ($nc(this->_fname)->toString());
}

void FunctionCall::setParser($Parser* parser) {
	$useLocalCurrentObjectStackCache();
	$Expression::setParser(parser);
	if (this->_arguments != nullptr) {
		int32_t n = $nc(this->_arguments)->size();
		for (int32_t i = 0; i < n; ++i) {
			$var($Expression, exp, $cast($Expression, $nc(this->_arguments)->get(i)));
			$nc(exp)->setParser(parser);
			exp->setParent(this);
		}
	}
}

$String* FunctionCall::getClassNameFromUri($String* uri) {
	$var($String, className, $cast($String, $nc(FunctionCall::EXTENSIONNAMESPACE)->get(uri)));
	if (className != nullptr) {
		return className;
	} else if ($nc(uri)->startsWith(FunctionCall::JAVA_EXT_XSLTC)) {
		int32_t length = $nc(FunctionCall::JAVA_EXT_XSLTC)->length() + 1;
		$init($Constants);
		return (uri->length() > length) ? uri->substring(length) : $Constants::EMPTYSTRING;
	} else if (uri->startsWith(FunctionCall::JAVA_EXT_XALAN)) {
		int32_t length = $nc(FunctionCall::JAVA_EXT_XALAN)->length() + 1;
		$init($Constants);
		return (uri->length() > length) ? uri->substring(length) : $Constants::EMPTYSTRING;
	} else if (uri->startsWith(FunctionCall::JAVA_EXT_XALAN_OLD)) {
		int32_t length = $nc(FunctionCall::JAVA_EXT_XALAN_OLD)->length() + 1;
		$init($Constants);
		return (uri->length() > length) ? uri->substring(length) : $Constants::EMPTYSTRING;
	} else {
		int32_t index = uri->lastIndexOf((int32_t)u'/');
		return (index > 0) ? uri->substring(index + 1) : uri;
	}
}

$Type* FunctionCall::typeCheck($SymbolTable* stable) {
	$useLocalCurrentObjectStackCache();
	if (this->_type != nullptr) {
		return this->_type;
	}
	$var($String, namespace$, $nc(this->_fname)->getNamespace());
	$var($String, local, $nc(this->_fname)->getLocalPart());
	if (isExtension()) {
		$set(this, _fname, $new($QName, nullptr, nullptr, local));
		return typeCheckStandard(stable);
	} else if (isStandard()) {
		return typeCheckStandard(stable);
	} else {
		try {
			$set(this, _className, getClassNameFromUri(namespace$));
			int32_t pos = $nc(local)->lastIndexOf((int32_t)u'.');
			if (pos > 0) {
				this->_isStatic = true;
				if (this->_className != nullptr && $nc(this->_className)->length() > 0) {
					this->_namespace_format = FunctionCall::NAMESPACE_FORMAT_PACKAGE;
					$set(this, _className, $str({this->_className, "."_s, $(local->substring(0, pos))}));
				} else {
					this->_namespace_format = FunctionCall::NAMESPACE_FORMAT_JAVA;
					$set(this, _className, local->substring(0, pos));
				}
				$set(this, _fname, $new($QName, namespace$, nullptr, $(local->substring(pos + 1))));
			} else {
				if (this->_className != nullptr && $nc(this->_className)->length() > 0) {
					try {
						$set(this, _clazz, $ObjectFactory::findProviderClass(this->_className, true));
						this->_namespace_format = FunctionCall::NAMESPACE_FORMAT_CLASS;
					} catch ($ClassNotFoundException& e) {
						this->_namespace_format = FunctionCall::NAMESPACE_FORMAT_PACKAGE;
					}
				} else {
					this->_namespace_format = FunctionCall::NAMESPACE_FORMAT_JAVA;
				}
				if (local->indexOf((int32_t)u'-') > 0) {
					$assign(local, replaceDash(local));
				}
				$var($String, extFunction, $cast($String, $nc(FunctionCall::EXTENSIONFUNCTION)->get($$str({namespace$, ":"_s, local}))));
				if (extFunction != nullptr) {
					$set(this, _fname, $new($QName, nullptr, nullptr, extFunction));
					return typeCheckStandard(stable);
				} else {
					$set(this, _fname, $new($QName, namespace$, nullptr, local));
				}
			}
			return typeCheckExternal(stable);
		} catch ($TypeCheckError& e) {
			$var($ErrorMsg, errorMsg, e->getErrorMsg());
			if (errorMsg == nullptr) {
				$var($String, name, $nc(this->_fname)->getLocalPart());
				$init($ErrorMsg);
				$assign(errorMsg, $new($ErrorMsg, $ErrorMsg::METHOD_NOT_FOUND_ERR, $of(name)));
			}
			$nc($(getParser()))->reportError($Constants::ERROR, errorMsg);
			$init($Type);
			return $set(this, _type, $Type::Void);
		}
	}
	$shouldNotReachHere();
}

$Type* FunctionCall::typeCheckStandard($SymbolTable* stable) {
	$useLocalCurrentObjectStackCache();
	$nc(this->_fname)->clearNamespace();
	int32_t n = $nc(this->_arguments)->size();
	$var($List, argsType, typeCheckArgs(stable));
	$init($Type);
	$var($MethodType, args, $new($MethodType, $Type::Void, argsType));
	$var($MethodType, ptype, lookupPrimop(stable, $($nc(this->_fname)->getLocalPart()), args));
	if (ptype != nullptr) {
		for (int32_t i = 0; i < n; ++i) {
			$var($Type, argType, $cast($Type, $nc($(ptype->argsType()))->get(i)));
			$var($Expression, exp, $cast($Expression, $nc(this->_arguments)->get(i)));
			if (!$nc(argType)->identicalTo($($nc(exp)->getType()))) {
				try {
					$nc(this->_arguments)->set(i, $$new($CastExpr, exp, argType));
				} catch ($TypeCheckError& e) {
					$throwNew($TypeCheckError, static_cast<$SyntaxTreeNode*>(this));
				}
			}
		}
		$set(this, _chosenMethodType, ptype);
		return $set(this, _type, ptype->resultType());
	}
	$throwNew($TypeCheckError, static_cast<$SyntaxTreeNode*>(this));
}

$Type* FunctionCall::typeCheckConstructor($SymbolTable* stable) {
	$useLocalCurrentObjectStackCache();
	$var($List, constructors, findConstructors());
	if (constructors == nullptr) {
		$init($ErrorMsg);
		$throwNew($TypeCheckError, $ErrorMsg::CONSTRUCTOR_NOT_FOUND, this->_className);
	}
	int32_t nConstructors = $nc(constructors)->size();
	int32_t nArgs = $nc(this->_arguments)->size();
	$var($List, argsType, typeCheckArgs(stable));
	int32_t bestConstrDistance = $Integer::MAX_VALUE;
	$set(this, _type, nullptr);
	{
		int32_t j = 0;
		int32_t i = 0;
		for (; i < nConstructors; ++i) {
			$var($Constructor, constructor, $cast($Constructor, constructors->get(i)));
			$var($ClassArray, paramTypes, $nc(constructor)->getParameterTypes());
			$Class* extType = nullptr;
			int32_t currConstrDistance = 0;
			for (j = 0; j < nArgs; ++j) {
				extType = $nc(paramTypes)->get(j);
				$var($Type, intType, $cast($Type, $nc(argsType)->get(j)));
				$var($FunctionCall$JavaType, match, $cast($FunctionCall$JavaType, $nc(FunctionCall::_internal2Java)->maps(intType, $$new($FunctionCall$JavaType, extType, 0))));
				if (match != nullptr) {
					currConstrDistance += match->distance;
				} else if ($instanceOf($ObjectType, intType)) {
					$var($ObjectType, objectType, $cast($ObjectType, intType));
					if ($nc(objectType)->getJavaClass() == extType) {
						continue;
					} else if ($nc(extType)->isAssignableFrom(objectType->getJavaClass())) {
						currConstrDistance += 1;
					} else {
						currConstrDistance = $Integer::MAX_VALUE;
						break;
					}
				} else {
					currConstrDistance = $Integer::MAX_VALUE;
					break;
				}
			}
			if (j == nArgs && currConstrDistance < bestConstrDistance) {
				$set(this, _chosenConstructor, constructor);
				this->_isExtConstructor = true;
				bestConstrDistance = currConstrDistance;
				$set(this, _type, (this->_clazz != nullptr) ? $Type::newObjectType(this->_clazz) : $Type::newObjectType(this->_className));
			}
		}
	}
	if (this->_type != nullptr) {
		return this->_type;
	}
	$init($ErrorMsg);
	$throwNew($TypeCheckError, $ErrorMsg::ARGUMENT_CONVERSION_ERR, $(getMethodSignature(argsType)));
}

$Type* FunctionCall::typeCheckExternal($SymbolTable* stable) {
	$useLocalCurrentObjectStackCache();
	int32_t nArgs = $nc(this->_arguments)->size();
	$var($String, name, $nc(this->_fname)->getLocalPart());
	if ($nc($($nc(this->_fname)->getLocalPart()))->equals("new"_s)) {
		return typeCheckConstructor(stable);
	} else {
		bool hasThisArgument = false;
		if (nArgs == 0) {
			this->_isStatic = true;
		}
		if (!this->_isStatic) {
			if (this->_namespace_format == FunctionCall::NAMESPACE_FORMAT_JAVA || this->_namespace_format == FunctionCall::NAMESPACE_FORMAT_PACKAGE) {
				hasThisArgument = true;
			}
			$var($Expression, firstArg, $cast($Expression, $nc(this->_arguments)->get(0)));
			$var($Type, firstArgType, $nc(firstArg)->typeCheck(stable));
			if (this->_namespace_format == FunctionCall::NAMESPACE_FORMAT_CLASS && $instanceOf($ObjectType, firstArgType) && this->_clazz != nullptr && $nc(this->_clazz)->isAssignableFrom($nc(($cast($ObjectType, firstArgType)))->getJavaClass())) {
				hasThisArgument = true;
			}
			if (hasThisArgument) {
				$set(this, _thisArgument, $cast($Expression, $nc(this->_arguments)->get(0)));
				$nc(this->_arguments)->remove(0);
				--nArgs;
				if ($instanceOf($ObjectType, firstArgType)) {
					$set(this, _className, $nc(($cast($ObjectType, firstArgType)))->getJavaClassName());
				} else {
					$init($ErrorMsg);
					$throwNew($TypeCheckError, $ErrorMsg::NO_JAVA_FUNCT_THIS_REF, name);
				}
			}
		} else if ($nc(this->_className)->length() == 0) {
			$var($Parser, parser, getParser());
			if (parser != nullptr) {
				$init($ErrorMsg);
				reportWarning(this, parser, $ErrorMsg::FUNCTION_RESOLVE_ERR, $($nc(this->_fname)->toString()));
			}
			this->unresolvedExternal = true;
			$init($Type);
			return $set(this, _type, $Type::Int);
		}
	}
	$var($List, methods, findMethods());
	if (methods == nullptr) {
		$init($ErrorMsg);
		$throwNew($TypeCheckError, $ErrorMsg::METHOD_NOT_FOUND_ERR, $$str({this->_className, "."_s, name}));
	}
	$Class* extType = nullptr;
	int32_t nMethods = $nc(methods)->size();
	$var($List, argsType, typeCheckArgs(stable));
	int32_t bestMethodDistance = $Integer::MAX_VALUE;
	$set(this, _type, nullptr);
	{
		int32_t j = 0;
		int32_t i = 0;
		for (; i < nMethods; ++i) {
			$var($Method, method, $cast($Method, methods->get(i)));
			$var($ClassArray, paramTypes, $nc(method)->getParameterTypes());
			int32_t currMethodDistance = 0;
			for (j = 0; j < nArgs; ++j) {
				extType = $nc(paramTypes)->get(j);
				$var($Type, intType, $cast($Type, $nc(argsType)->get(j)));
				$var($FunctionCall$JavaType, match, $cast($FunctionCall$JavaType, $nc(FunctionCall::_internal2Java)->maps(intType, $$new($FunctionCall$JavaType, extType, 0))));
				if (match != nullptr) {
					currMethodDistance += match->distance;
				} else if ($instanceOf($ReferenceType, intType)) {
					currMethodDistance += 1;
				} else if ($instanceOf($ObjectType, intType)) {
					$var($ObjectType, object, $cast($ObjectType, intType));
					if ($nc($($nc(extType)->getName()))->equals($($nc(object)->getJavaClassName()))) {
						currMethodDistance += 0;
					} else if (extType->isAssignableFrom($nc(object)->getJavaClass())) {
						currMethodDistance += 1;
					} else {
						currMethodDistance = $Integer::MAX_VALUE;
						break;
					}
				} else {
					currMethodDistance = $Integer::MAX_VALUE;
					break;
				}
			}
			if (j == nArgs) {
				extType = method->getReturnType();
				$set(this, _type, $cast($Type, $nc(FunctionCall::JAVA2INTERNAL)->get(extType)));
				if (this->_type == nullptr) {
					$set(this, _type, $Type::newObjectType(extType));
				}
				if (this->_type != nullptr && currMethodDistance < bestMethodDistance) {
					$set(this, _chosenMethod, method);
					bestMethodDistance = currMethodDistance;
				}
			}
		}
	}
	if (this->_chosenMethod != nullptr && this->_thisArgument == nullptr && !$Modifier::isStatic($nc(this->_chosenMethod)->getModifiers())) {
		$init($ErrorMsg);
		$throwNew($TypeCheckError, $ErrorMsg::NO_JAVA_FUNCT_THIS_REF, $(getMethodSignature(argsType)));
	}
	if (this->_type != nullptr) {
		$init($Type);
		if (this->_type == $Type::NodeSet) {
			$nc($(getXSLTC()))->setMultiDocument(true);
		}
		return this->_type;
	}
	$init($ErrorMsg);
	$throwNew($TypeCheckError, $ErrorMsg::ARGUMENT_CONVERSION_ERR, $(getMethodSignature(argsType)));
}

$List* FunctionCall::typeCheckArgs($SymbolTable* stable) {
	$useLocalCurrentObjectStackCache();
	$var($List, result, $new($ArrayList));
	{
		$var($Iterator, i$, $nc(this->_arguments)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Expression, exp, $cast($Expression, i$->next()));
			{
				result->add($($nc(exp)->typeCheck(stable)));
			}
		}
	}
	return result;
}

$Expression* FunctionCall::argument(int32_t i) {
	return $cast($Expression, $nc(this->_arguments)->get(i));
}

$Expression* FunctionCall::argument() {
	return argument(0);
}

int32_t FunctionCall::argumentCount() {
	return $nc(this->_arguments)->size();
}

void FunctionCall::setArgument(int32_t i, $Expression* exp) {
	$nc(this->_arguments)->set(i, exp);
}

void FunctionCall::translateDesynthesized($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$init($Type);
	$var($Type, type, $Type::Boolean);
	if (this->_chosenMethodType != nullptr) {
		$assign(type, $nc(this->_chosenMethodType)->resultType());
	}
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	translate(classGen, methodGen);
	if (($instanceOf($BooleanType, type)) || ($instanceOf($IntType, type))) {
		$nc(this->_falseList)->add($($nc(il)->append(static_cast<$BranchInstruction*>($$new($IFEQ, nullptr)))));
	}
}

void FunctionCall::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	int32_t n = argumentCount();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	bool isSecureProcessing = $nc($($nc($(classGen->getParser()))->getXSLTC()))->isSecureProcessing();
	$init($JdkXmlFeatures$XmlFeature);
	bool isExtensionFunctionEnabled = $nc($($nc($(classGen->getParser()))->getXSLTC()))->getFeature($JdkXmlFeatures$XmlFeature::ENABLE_EXTENSION_FUNCTION);
	int32_t index = 0;
	bool var$0 = isStandard();
	if (var$0 || isExtension()) {
		for (int32_t i = 0; i < n; ++i) {
			$var($Expression, exp, argument(i));
			$nc(exp)->translate(classGen, methodGen);
			exp->startIterator(classGen, methodGen);
		}
		$var($String, name, $str({$($nc($($nc(this->_fname)->toString()))->replace(u'-', u'_')), "F"_s}));
		$init($Constants);
		$var($String, args, $Constants::EMPTYSTRING);
		if ($nc(name)->equals("sumF"_s)) {
			$assign(args, $Constants::DOM_INTF_SIG);
			$nc(il)->append($(methodGen->loadDOM()));
		} else if (name->equals("normalize_spaceF"_s)) {
			if ($nc($($nc(this->_chosenMethodType)->toSignature(args)))->equals("()Ljava/lang/String;"_s)) {
				$assign(args, $str({"I"_s, $Constants::DOM_INTF_SIG}));
				$nc(il)->append($(methodGen->loadContextNode()));
				il->append($(methodGen->loadDOM()));
			}
		}
		index = $nc(cpg)->addMethodref($Constants::BASIS_LIBRARY_CLASS, name, $($nc(this->_chosenMethodType)->toSignature(args)));
		$nc(il)->append(static_cast<$Instruction*>($$new($INVOKESTATIC, index)));
	} else if (this->unresolvedExternal) {
		$init($Constants);
		index = $nc(cpg)->addMethodref($Constants::BASIS_LIBRARY_CLASS, "unresolved_externalF"_s, "(Ljava/lang/String;)V"_s);
		$nc(il)->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $($nc(this->_fname)->toString()))));
		il->append(static_cast<$Instruction*>($$new($INVOKESTATIC, index)));
	} else if (this->_isExtConstructor) {
		if (isSecureProcessing && !isExtensionFunctionEnabled) {
			translateUnallowedExtension(cpg, il);
		}
		$var($String, clazz, $nc($nc(this->_chosenConstructor)->getDeclaringClass())->getName());
		generateAddReads(classGen, methodGen, clazz);
		$var($ClassArray, paramTypes, $nc(this->_chosenConstructor)->getParameterTypes());
		$var($LocalVariableGenArray, paramTemp, $new($LocalVariableGenArray, n));
		for (int32_t i = 0; i < n; ++i) {
			$var($Expression, exp, argument(i));
			$var($Type, expType, $nc(exp)->getType());
			exp->translate(classGen, methodGen);
			exp->startIterator(classGen, methodGen);
			$nc(expType)->translateTo(classGen, methodGen, $nc(paramTypes)->get(i));
			paramTemp->set(i, $(methodGen->addLocalVariable($$str({"function_call_tmp"_s, $$str(i)}), $(expType->toJCType()), nullptr, nullptr)));
			$nc(paramTemp->get(i))->setStart($($nc(il)->append($(expType->STORE($nc(paramTemp->get(i))->getIndex())))));
		}
		$nc(il)->append(static_cast<$Instruction*>($$new($NEW, $nc(cpg)->addClass(this->_className))));
		$init($InstructionConst);
		il->append(static_cast<$Instruction*>($InstructionConst::DUP));
		for (int32_t i = 0; i < n; ++i) {
			$var($Expression, arg, argument(i));
			$nc(paramTemp->get(i))->setEnd($(il->append($($nc($($nc(arg)->getType()))->LOAD($nc(paramTemp->get(i))->getIndex())))));
		}
		$var($StringBuffer, buffer, $new($StringBuffer));
		buffer->append(u'(');
		for (int32_t i = 0; i < $nc(paramTypes)->length; ++i) {
			buffer->append($(getSignature(paramTypes->get(i))));
		}
		buffer->append(u')');
		buffer->append("V"_s);
		index = $nc(cpg)->addMethodref(clazz, "<init>"_s, $(buffer->toString()));
		il->append(static_cast<$Instruction*>($$new($INVOKESPECIAL, index)));
		$init($Type);
		$nc(($Type::Object))->translateFrom(classGen, methodGen, $nc(this->_chosenConstructor)->getDeclaringClass());
	} else {
		if (isSecureProcessing && !isExtensionFunctionEnabled) {
			translateUnallowedExtension(cpg, il);
		}
		$var($String, clazz, $nc($nc(this->_chosenMethod)->getDeclaringClass())->getName());
		$var($ClassArray, paramTypes, $nc(this->_chosenMethod)->getParameterTypes());
		generateAddReads(classGen, methodGen, clazz);
		if (this->_thisArgument != nullptr) {
			$nc(this->_thisArgument)->translate(classGen, methodGen);
		}
		for (int32_t i = 0; i < n; ++i) {
			$var($Expression, exp, argument(i));
			$nc(exp)->translate(classGen, methodGen);
			exp->startIterator(classGen, methodGen);
			$nc($(exp->getType()))->translateTo(classGen, methodGen, $nc(paramTypes)->get(i));
		}
		$var($StringBuffer, buffer, $new($StringBuffer));
		buffer->append(u'(');
		for (int32_t i = 0; i < $nc(paramTypes)->length; ++i) {
			buffer->append($(getSignature(paramTypes->get(i))));
		}
		buffer->append(u')');
		buffer->append($(getSignature($nc(this->_chosenMethod)->getReturnType())));
		if (this->_thisArgument != nullptr && $nc(this->_clazz)->isInterface()) {
			$var($String, var$1, clazz);
			$var($String, var$2, $nc(this->_fname)->getLocalPart());
			index = $nc(cpg)->addInterfaceMethodref(var$1, var$2, $(buffer->toString()));
			$nc(il)->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, index, n + 1)));
		} else {
			$var($String, var$3, clazz);
			$var($String, var$4, $nc(this->_fname)->getLocalPart());
			index = $nc(cpg)->addMethodref(var$3, var$4, $(buffer->toString()));
			$nc(il)->append(this->_thisArgument != nullptr ? static_cast<$InvokeInstruction*>($$new($INVOKEVIRTUAL, index)) : static_cast<$InvokeInstruction*>($$new($INVOKESTATIC, index)));
		}
		$nc(this->_type)->translateFrom(classGen, methodGen, $nc(this->_chosenMethod)->getReturnType());
	}
}

void FunctionCall::generateAddReads($ClassGenerator* classGen, $MethodGenerator* methodGen, $String* clazz) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	methodGen->markChunkStart();
	$init($Constants);
	int32_t index = $nc(cpg)->addMethodref($Constants::CLASS_CLASS, $Constants::GET_MODULE, $Constants::GET_MODULE_SIG);
	int32_t index2 = cpg->addMethodref($Constants::CLASS_CLASS, $Constants::FOR_NAME, $Constants::FOR_NAME_SIG);
	$nc(il)->append(static_cast<$Instruction*>($$new($LDC, cpg->addString($(classGen->getClassName())))));
	il->append(static_cast<$Instruction*>($$new($INVOKESTATIC, index2)));
	il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, index)));
	il->append(static_cast<$Instruction*>($$new($LDC, cpg->addString(clazz))));
	il->append(static_cast<$Instruction*>($$new($INVOKESTATIC, index2)));
	il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, index)));
	index = cpg->addMethodref($Constants::MODULE_CLASS, $Constants::ADD_READS, $Constants::ADD_READS_SIG);
	il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, index)));
	$init($InstructionConst);
	il->append(static_cast<$Instruction*>($InstructionConst::POP));
	methodGen->markChunkEnd();
}

$String* FunctionCall::toString() {
	return $str({"funcall("_s, this->_fname, ", "_s, this->_arguments, $$str(u')')});
}

bool FunctionCall::isStandard() {
	$var($String, namespace$, $nc(this->_fname)->getNamespace());
	$init($Constants);
	return (namespace$ == nullptr) || ($nc(namespace$)->equals($Constants::EMPTYSTRING));
}

bool FunctionCall::isExtension() {
	$var($String, namespace$, $nc(this->_fname)->getNamespace());
	return (namespace$ != nullptr) && (namespace$->equals(FunctionCall::EXT_XSLTC));
}

$List* FunctionCall::findMethods() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($List, result, nullptr);
	$var($String, namespace$, $nc(this->_fname)->getNamespace());
	if (this->_className != nullptr && $nc(this->_className)->length() > 0) {
		int32_t nArgs = $nc(this->_arguments)->size();
		try {
			if (this->_clazz == nullptr) {
				bool isSecureProcessing = $nc($(getXSLTC()))->isSecureProcessing();
				$init($JdkXmlFeatures$XmlFeature);
				bool isExtensionFunctionEnabled = $nc($(getXSLTC()))->getFeature($JdkXmlFeatures$XmlFeature::ENABLE_EXTENSION_FUNCTION);
				bool var$0 = namespace$ != nullptr && isSecureProcessing && isExtensionFunctionEnabled;
				if (var$0) {
					bool var$3 = namespace$->startsWith(FunctionCall::JAVA_EXT_XALAN);
					bool var$2 = var$3 || $nc(namespace$)->startsWith(FunctionCall::JAVA_EXT_XSLTC);
					bool var$1 = var$2 || $nc(namespace$)->startsWith(FunctionCall::JAVA_EXT_XALAN_OLD);
					var$0 = (var$1 || namespace$->startsWith(FunctionCall::XALAN_CLASSPACKAGE_NAMESPACE));
				}
				if (var$0) {
					$set(this, _clazz, $nc($(getXSLTC()))->loadExternalFunction(this->_className));
				} else {
					$set(this, _clazz, $ObjectFactory::findProviderClass(this->_className, true));
				}
				if (this->_clazz == nullptr) {
					$init($ErrorMsg);
					$var($ErrorMsg, msg, $new($ErrorMsg, $ErrorMsg::CLASS_NOT_FOUND_ERR, $of(this->_className)));
					$nc($(getParser()))->reportError($Constants::ERROR, msg);
				}
			}
			$var($String, methodName, $nc(this->_fname)->getLocalPart());
			$var($MethodArray, methods, $nc(this->_clazz)->getMethods());
			for (int32_t i = 0; i < $nc(methods)->length; ++i) {
				int32_t mods = $nc(methods->get(i))->getModifiers();
				bool var$5 = $Modifier::isPublic(mods);
				bool var$4 = var$5 && $nc($($nc(methods->get(i))->getName()))->equals(methodName);
				if (var$4 && $nc($($nc(methods->get(i))->getParameterTypes()))->length == nArgs) {
					if (result == nullptr) {
						$assign(result, $new($ArrayList));
					}
					$nc(result)->add(methods->get(i));
				}
			}
		} catch ($ClassNotFoundException& e) {
			$init($ErrorMsg);
			$var($ErrorMsg, msg, $new($ErrorMsg, $ErrorMsg::CLASS_NOT_FOUND_ERR, $of(this->_className)));
			$nc($(getParser()))->reportError($Constants::ERROR, msg);
		}
	}
	return result;
}

$List* FunctionCall::findConstructors() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($List, result, nullptr);
	int32_t nArgs = $nc(this->_arguments)->size();
	try {
		if (this->_clazz == nullptr) {
			$set(this, _clazz, $ObjectFactory::findProviderClass(this->_className, true));
			if (this->_clazz == nullptr) {
				$init($ErrorMsg);
				$var($ErrorMsg, msg, $new($ErrorMsg, $ErrorMsg::CLASS_NOT_FOUND_ERR, $of(this->_className)));
				$nc($(getParser()))->reportError($Constants::ERROR, msg);
			}
		}
		$var($ConstructorArray, constructors, $nc(this->_clazz)->getConstructors());
		{
			$var($ConstructorArray, arr$, constructors);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Constructor, constructor, arr$->get(i$));
				{
					int32_t mods = $nc(constructor)->getModifiers();
					bool var$0 = $Modifier::isPublic(mods);
					if (var$0 && $nc($(constructor->getParameterTypes()))->length == nArgs) {
						if (result == nullptr) {
							$assign(result, $new($ArrayList));
						}
						$nc(result)->add(constructor);
					}
				}
			}
		}
	} catch ($ClassNotFoundException& e) {
		$init($ErrorMsg);
		$var($ErrorMsg, msg, $new($ErrorMsg, $ErrorMsg::CLASS_NOT_FOUND_ERR, $of(this->_className)));
		$nc($(getParser()))->reportError($Constants::ERROR, msg);
	}
	return result;
}

$String* FunctionCall::getSignature($Class* clazz) {
	$init(FunctionCall);
	$useLocalCurrentObjectStackCache();
	if ($nc(clazz)->isArray()) {
		$var($StringBuffer, sb, $new($StringBuffer));
		$Class* cl = clazz;
		while ($nc(cl)->isArray()) {
			sb->append("["_s);
			cl = cl->getComponentType();
		}
		sb->append($(getSignature(cl)));
		return sb->toString();
	} else if (clazz->isPrimitive()) {
		$init($Integer);
		if (clazz == $Integer::TYPE) {
			return "I"_s;
		} else {
			$init($Byte);
			if (clazz == $Byte::TYPE) {
				return "B"_s;
			} else {
				$init($Long);
				if (clazz == $Long::TYPE) {
					return "J"_s;
				} else {
					$init($Float);
					if (clazz == $Float::TYPE) {
						return "F"_s;
					} else {
						$init($Double);
						if (clazz == $Double::TYPE) {
							return "D"_s;
						} else {
							$init($Short);
							if (clazz == $Short::TYPE) {
								return "S"_s;
							} else {
								$init($Character);
								if (clazz == $Character::TYPE) {
									return "C"_s;
								} else {
									$init($Boolean);
									if (clazz == $Boolean::TYPE) {
										return "Z"_s;
									} else {
										$init($Void);
										if (clazz == $Void::TYPE) {
											return "V"_s;
										} else {
											$var($String, name, clazz->toString());
											$init($ErrorMsg);
											$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::UNKNOWN_SIG_TYPE_ERR, $of(name)));
											$throwNew($Error, $(err->toString()));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	} else {
		return $str({"L"_s, $($nc($(clazz->getName()))->replace(u'.', u'/')), $$str(u';')});
	}
}

$String* FunctionCall::getSignature($Method* meth) {
	$init(FunctionCall);
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, sb, $new($StringBuffer));
	sb->append(u'(');
	$var($ClassArray, params, $nc(meth)->getParameterTypes());
	for (int32_t j = 0; j < $nc(params)->length; ++j) {
		sb->append($(getSignature(params->get(j))));
	}
	return sb->append(u')')->append($(getSignature(meth->getReturnType())))->toString();
}

$String* FunctionCall::getSignature($Constructor* cons) {
	$init(FunctionCall);
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, sb, $new($StringBuffer));
	sb->append(u'(');
	$var($ClassArray, params, $nc(cons)->getParameterTypes());
	for (int32_t j = 0; j < $nc(params)->length; ++j) {
		sb->append($(getSignature(params->get(j))));
	}
	return sb->append(")V"_s)->toString();
}

$String* FunctionCall::getMethodSignature($List* argsType) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, buf, $new($StringBuffer, this->_className));
	buf->append(u'.')->append($($nc(this->_fname)->getLocalPart()))->append(u'(');
	int32_t nArgs = $nc(argsType)->size();
	for (int32_t i = 0; i < nArgs; ++i) {
		$var($Type, intType, $cast($Type, argsType->get(i)));
		buf->append($($nc(intType)->toString()));
		if (i < nArgs - 1) {
			buf->append(", "_s);
		}
	}
	buf->append(u')');
	return buf->toString();
}

$String* FunctionCall::replaceDash($String* name) {
	$init(FunctionCall);
	char16_t dash = u'-';
	$var($StringBuilder, buff, $new($StringBuilder, ""_s));
	for (int32_t i = 0; i < $nc(name)->length(); ++i) {
		if (i > 0 && name->charAt(i - 1) == dash) {
			buff->append($Character::toUpperCase(name->charAt(i)));
		} else if (name->charAt(i) != dash) {
			buff->append(name->charAt(i));
		}
	}
	return buff->toString();
}

void FunctionCall::translateUnallowedExtension($ConstantPoolGen* cpg, $InstructionList* il) {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	int32_t index = $nc(cpg)->addMethodref($Constants::BASIS_LIBRARY_CLASS, "unallowed_extension_functionF"_s, "(Ljava/lang/String;)V"_s);
	$nc(il)->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $($nc(this->_fname)->toString()))));
	il->append(static_cast<$Instruction*>($$new($INVOKESTATIC, index)));
}

void clinit$FunctionCall($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	$assignStatic(FunctionCall::EXT_XSLTC, $Constants::TRANSLET_URI);
	$assignStatic(FunctionCall::JAVA_EXT_XSLTC, $str({FunctionCall::EXT_XSLTC, "/java"_s}));
	$assignStatic(FunctionCall::EXT_XALAN, "http://xml.apache.org/xalan"_s);
	$assignStatic(FunctionCall::JAVA_EXT_XALAN, "http://xml.apache.org/xalan/java"_s);
	$assignStatic(FunctionCall::JAVA_EXT_XALAN_OLD, "http://xml.apache.org/xslt/java"_s);
	$assignStatic(FunctionCall::EXSLT_COMMON, "http://exslt.org/common"_s);
	$assignStatic(FunctionCall::EXSLT_MATH, "http://exslt.org/math"_s);
	$assignStatic(FunctionCall::EXSLT_SETS, "http://exslt.org/sets"_s);
	$assignStatic(FunctionCall::EXSLT_DATETIME, "http://exslt.org/dates-and-times"_s);
	$assignStatic(FunctionCall::EXSLT_STRINGS, "http://exslt.org/strings"_s);
	$assignStatic(FunctionCall::XALAN_CLASSPACKAGE_NAMESPACE, "xalan://"_s);
	$beforeCallerSensitive();
	$assignStatic(FunctionCall::EMPTY_ARG_LIST, $new($ArrayList, 0));
	$assignStatic(FunctionCall::_internal2Java, $new($MultiHashtable));
	{
		$Class* nodeClass = nullptr;
		$Class* nodeListClass = nullptr;
		try {
			nodeClass = $Class::forName("org.w3c.dom.Node"_s);
			nodeListClass = $Class::forName("org.w3c.dom.NodeList"_s);
		} catch ($ClassNotFoundException& e) {
			$init($ErrorMsg);
			$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::CLASS_NOT_FOUND_ERR, $of("org.w3c.dom.Node or NodeList"_s)));
			$throwNew($Error, $(err->toString()));
		}
		$init($Type);
		$init($Boolean);
		$nc(FunctionCall::_internal2Java)->put($Type::Boolean, $$new($FunctionCall$JavaType, $Boolean::TYPE, 0));
		$nc(FunctionCall::_internal2Java)->put($Type::Boolean, $$new($FunctionCall$JavaType, $Boolean::class$, 1));
		$nc(FunctionCall::_internal2Java)->put($Type::Boolean, $$new($FunctionCall$JavaType, $Object::class$, 2));
		$init($Double);
		$nc(FunctionCall::_internal2Java)->put($Type::Real, $$new($FunctionCall$JavaType, $Double::TYPE, 0));
		$nc(FunctionCall::_internal2Java)->put($Type::Real, $$new($FunctionCall$JavaType, $Double::class$, 1));
		$init($Float);
		$nc(FunctionCall::_internal2Java)->put($Type::Real, $$new($FunctionCall$JavaType, $Float::TYPE, 2));
		$init($Long);
		$nc(FunctionCall::_internal2Java)->put($Type::Real, $$new($FunctionCall$JavaType, $Long::TYPE, 3));
		$init($Integer);
		$nc(FunctionCall::_internal2Java)->put($Type::Real, $$new($FunctionCall$JavaType, $Integer::TYPE, 4));
		$init($Short);
		$nc(FunctionCall::_internal2Java)->put($Type::Real, $$new($FunctionCall$JavaType, $Short::TYPE, 5));
		$init($Byte);
		$nc(FunctionCall::_internal2Java)->put($Type::Real, $$new($FunctionCall$JavaType, $Byte::TYPE, 6));
		$init($Character);
		$nc(FunctionCall::_internal2Java)->put($Type::Real, $$new($FunctionCall$JavaType, $Character::TYPE, 7));
		$nc(FunctionCall::_internal2Java)->put($Type::Real, $$new($FunctionCall$JavaType, $Object::class$, 8));
		$nc(FunctionCall::_internal2Java)->put($Type::Int, $$new($FunctionCall$JavaType, $Double::TYPE, 0));
		$nc(FunctionCall::_internal2Java)->put($Type::Int, $$new($FunctionCall$JavaType, $Double::class$, 1));
		$nc(FunctionCall::_internal2Java)->put($Type::Int, $$new($FunctionCall$JavaType, $Float::TYPE, 2));
		$nc(FunctionCall::_internal2Java)->put($Type::Int, $$new($FunctionCall$JavaType, $Long::TYPE, 3));
		$nc(FunctionCall::_internal2Java)->put($Type::Int, $$new($FunctionCall$JavaType, $Integer::TYPE, 4));
		$nc(FunctionCall::_internal2Java)->put($Type::Int, $$new($FunctionCall$JavaType, $Short::TYPE, 5));
		$nc(FunctionCall::_internal2Java)->put($Type::Int, $$new($FunctionCall$JavaType, $Byte::TYPE, 6));
		$nc(FunctionCall::_internal2Java)->put($Type::Int, $$new($FunctionCall$JavaType, $Character::TYPE, 7));
		$nc(FunctionCall::_internal2Java)->put($Type::Int, $$new($FunctionCall$JavaType, $Object::class$, 8));
		$nc(FunctionCall::_internal2Java)->put($Type::String, $$new($FunctionCall$JavaType, $String::class$, 0));
		$nc(FunctionCall::_internal2Java)->put($Type::String, $$new($FunctionCall$JavaType, $Object::class$, 1));
		$nc(FunctionCall::_internal2Java)->put($Type::NodeSet, $$new($FunctionCall$JavaType, nodeListClass, 0));
		$nc(FunctionCall::_internal2Java)->put($Type::NodeSet, $$new($FunctionCall$JavaType, nodeClass, 1));
		$nc(FunctionCall::_internal2Java)->put($Type::NodeSet, $$new($FunctionCall$JavaType, $Object::class$, 2));
		$nc(FunctionCall::_internal2Java)->put($Type::NodeSet, $$new($FunctionCall$JavaType, $String::class$, 3));
		$nc(FunctionCall::_internal2Java)->put($Type::Node, $$new($FunctionCall$JavaType, nodeListClass, 0));
		$nc(FunctionCall::_internal2Java)->put($Type::Node, $$new($FunctionCall$JavaType, nodeClass, 1));
		$nc(FunctionCall::_internal2Java)->put($Type::Node, $$new($FunctionCall$JavaType, $Object::class$, 2));
		$nc(FunctionCall::_internal2Java)->put($Type::Node, $$new($FunctionCall$JavaType, $String::class$, 3));
		$nc(FunctionCall::_internal2Java)->put($Type::ResultTree, $$new($FunctionCall$JavaType, nodeListClass, 0));
		$nc(FunctionCall::_internal2Java)->put($Type::ResultTree, $$new($FunctionCall$JavaType, nodeClass, 1));
		$nc(FunctionCall::_internal2Java)->put($Type::ResultTree, $$new($FunctionCall$JavaType, $Object::class$, 2));
		$nc(FunctionCall::_internal2Java)->put($Type::ResultTree, $$new($FunctionCall$JavaType, $String::class$, 3));
		$nc(FunctionCall::_internal2Java)->put($Type::Reference, $$new($FunctionCall$JavaType, $Object::class$, 0));
		$nc(FunctionCall::_internal2Java)->makeUnmodifiable();
		$var($Map, java2Internal, $new($HashMap));
		$var($Map, extensionNamespaceTable, $new($HashMap));
		$var($Map, extensionFunctionTable, $new($HashMap));
		java2Internal->put($Boolean::TYPE, $Type::Boolean);
		$init($Void);
		java2Internal->put($Void::TYPE, $Type::Void);
		java2Internal->put($Character::TYPE, $Type::Real);
		java2Internal->put($Byte::TYPE, $Type::Real);
		java2Internal->put($Short::TYPE, $Type::Real);
		java2Internal->put($Integer::TYPE, $Type::Real);
		java2Internal->put($Long::TYPE, $Type::Real);
		java2Internal->put($Float::TYPE, $Type::Real);
		java2Internal->put($Double::TYPE, $Type::Real);
		java2Internal->put($String::class$, $Type::String);
		java2Internal->put($Object::class$, $Type::Reference);
		java2Internal->put(nodeListClass, $Type::NodeSet);
		java2Internal->put(nodeClass, $Type::NodeSet);
		extensionNamespaceTable->put(FunctionCall::EXT_XALAN, "com.sun.org.apache.xalan.internal.lib.Extensions"_s);
		extensionNamespaceTable->put(FunctionCall::EXSLT_COMMON, "com.sun.org.apache.xalan.internal.lib.ExsltCommon"_s);
		extensionNamespaceTable->put(FunctionCall::EXSLT_MATH, "com.sun.org.apache.xalan.internal.lib.ExsltMath"_s);
		extensionNamespaceTable->put(FunctionCall::EXSLT_SETS, "com.sun.org.apache.xalan.internal.lib.ExsltSets"_s);
		extensionNamespaceTable->put(FunctionCall::EXSLT_DATETIME, "com.sun.org.apache.xalan.internal.lib.ExsltDatetime"_s);
		extensionNamespaceTable->put(FunctionCall::EXSLT_STRINGS, "com.sun.org.apache.xalan.internal.lib.ExsltStrings"_s);
		extensionFunctionTable->put($$str({FunctionCall::EXSLT_COMMON, ":nodeSet"_s}), "nodeset"_s);
		extensionFunctionTable->put($$str({FunctionCall::EXSLT_COMMON, ":objectType"_s}), "objectType"_s);
		extensionFunctionTable->put($$str({FunctionCall::EXT_XALAN, ":nodeset"_s}), "nodeset"_s);
		$assignStatic(FunctionCall::JAVA2INTERNAL, $Collections::unmodifiableMap(java2Internal));
		$assignStatic(FunctionCall::EXTENSIONNAMESPACE, $Collections::unmodifiableMap(extensionNamespaceTable));
		$assignStatic(FunctionCall::EXTENSIONFUNCTION, $Collections::unmodifiableMap(extensionFunctionTable));
	}
}

FunctionCall::FunctionCall() {
}

$Class* FunctionCall::load$($String* name, bool initialize) {
	$loadClass(FunctionCall, name, initialize, &_FunctionCall_ClassInfo_, clinit$FunctionCall, allocate$FunctionCall);
	return class$;
}

$Class* FunctionCall::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com