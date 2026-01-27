#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>

#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FlowList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/NodeTest.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/BooleanType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/IntType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeSetType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NumberType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ObjectType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/RealType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ReferenceType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ResultTreeType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/StringType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/VoidType.h>
#include <java/lang/RuntimePermission.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <jcpp.h>

#undef ADD
#undef ANODE
#undef ATTRIBUTE
#undef CMP
#undef COMMENT
#undef DATA_CONVERSION_ERR
#undef DIV
#undef DUP
#undef ELEMENT
#undef EMPTYSTRING
#undef FATAL
#undef GE
#undef GT
#undef LE
#undef LOAD
#undef LT
#undef MAX_VALUE
#undef MUL
#undef NEG
#undef PI
#undef POP
#undef REM
#undef ROOT
#undef STORE
#undef SUB
#undef TEXT

using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $FlowList = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList;
using $NodeTest = ::com::sun::org::apache::xalan::internal::xsltc::compiler::NodeTest;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $BooleanType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::BooleanType;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $IntType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::IntType;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $NodeSetType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NodeSetType;
using $NodeType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NodeType;
using $NumberType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NumberType;
using $ObjectType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ObjectType;
using $RealType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::RealType;
using $ReferenceType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ReferenceType;
using $ResultTreeType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ResultTreeType;
using $StringType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::StringType;
using $VoidType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::VoidType;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {

$FieldInfo _Type_FieldInfo_[] = {
	{"Int", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, Int)},
	{"Real", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, Real)},
	{"Boolean", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, Boolean)},
	{"NodeSet", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, NodeSet)},
	{"String", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, String)},
	{"ResultTree", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, ResultTree)},
	{"Reference", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, Reference)},
	{"Void", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, Void)},
	{"Object", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, Object)},
	{"ObjectString", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, ObjectString)},
	{"Node", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, Node)},
	{"Root", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, Root)},
	{"Element", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, Element)},
	{"Attribute", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, Attribute)},
	{"Text", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, Text)},
	{"Comment", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, Comment)},
	{"Processing_Instruction", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Type, Processing_Instruction)},
	{}
};

$MethodInfo _Type_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Type, init$, void)},
	{"ADD", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(Type, ADD, $Instruction*)},
	{"CMP", "(Z)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(Type, CMP, $Instruction*, bool)},
	{"DIV", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(Type, DIV, $Instruction*)},
	{"DUP", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(Type, DUP, $Instruction*)},
	{"GE", "(Z)Lcom/sun/org/apache/bcel/internal/generic/BranchInstruction;", nullptr, $PUBLIC, $virtualMethod(Type, GE, $BranchInstruction*, bool)},
	{"GT", "(Z)Lcom/sun/org/apache/bcel/internal/generic/BranchInstruction;", nullptr, $PUBLIC, $virtualMethod(Type, GT, $BranchInstruction*, bool)},
	{"LE", "(Z)Lcom/sun/org/apache/bcel/internal/generic/BranchInstruction;", nullptr, $PUBLIC, $virtualMethod(Type, LE, $BranchInstruction*, bool)},
	{"LOAD", "(I)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(Type, LOAD, $Instruction*, int32_t)},
	{"LT", "(Z)Lcom/sun/org/apache/bcel/internal/generic/BranchInstruction;", nullptr, $PUBLIC, $virtualMethod(Type, LT, $BranchInstruction*, bool)},
	{"MUL", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(Type, MUL, $Instruction*)},
	{"NEG", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(Type, NEG, $Instruction*)},
	{"POP", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(Type, POP, $Instruction*)},
	{"REM", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(Type, REM, $Instruction*)},
	{"STORE", "(I)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(Type, STORE, $Instruction*, int32_t)},
	{"SUB", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(Type, SUB, $Instruction*)},
	{"distanceTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)I", nullptr, $PUBLIC, $virtualMethod(Type, distanceTo, int32_t, Type*)},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Type, getClassName, $String*)},
	{"identicalTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Type, identicalTo, bool, Type*)},
	{"implementedAsMethod", "()Z", nullptr, $PUBLIC, $virtualMethod(Type, implementedAsMethod, bool)},
	{"isNumber", "()Z", nullptr, $PUBLIC, $virtualMethod(Type, isNumber, bool)},
	{"isSimple", "()Z", nullptr, $PUBLIC, $virtualMethod(Type, isSimple, bool)},
	{"newObjectType", "(Ljava/lang/String;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC | $STATIC, $staticMethod(Type, newObjectType, Type*, $String*)},
	{"newObjectType", "(Ljava/lang/Class;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", "(Ljava/lang/Class<*>;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", $PUBLIC | $STATIC, $staticMethod(Type, newObjectType, Type*, $Class*)},
	{"toJCType", "()Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Type, toJCType, $Type*)},
	{"toSignature", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Type, toSignature, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"translateBox", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(Type, translateBox, void, $ClassGenerator*, $MethodGenerator*)},
	{"translateFrom", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class<*>;)V", $PUBLIC, $virtualMethod(Type, translateFrom, void, $ClassGenerator*, $MethodGenerator*, $Class*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)V", nullptr, $PUBLIC, $virtualMethod(Type, translateTo, void, $ClassGenerator*, $MethodGenerator*, Type*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class<*>;)V", $PUBLIC, $virtualMethod(Type, translateTo, void, $ClassGenerator*, $MethodGenerator*, $Class*)},
	{"translateToDesynthesized", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/FlowList;", nullptr, $PUBLIC, $virtualMethod(Type, translateToDesynthesized, $FlowList*, $ClassGenerator*, $MethodGenerator*, Type*)},
	{"translateToDesynthesized", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/BooleanType;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/FlowList;", nullptr, $PUBLIC, $virtualMethod(Type, translateToDesynthesized, $FlowList*, $ClassGenerator*, $MethodGenerator*, $BooleanType*)},
	{"translateUnBox", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(Type, translateUnBox, void, $ClassGenerator*, $MethodGenerator*)},
	{}
};

$ClassInfo _Type_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.Type",
	"java.lang.Object",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Constants",
	_Type_FieldInfo_,
	_Type_MethodInfo_
};

$Object* allocate$Type($Class* clazz) {
	return $of($alloc(Type));
}

$String* Type::toString() {
	 return this->$Constants::toString();
}

Type* Type::Int = nullptr;
Type* Type::Real = nullptr;
Type* Type::Boolean = nullptr;
Type* Type::NodeSet = nullptr;
Type* Type::String = nullptr;
Type* Type::ResultTree = nullptr;
Type* Type::Reference = nullptr;
Type* Type::Void = nullptr;
Type* Type::Object = nullptr;
Type* Type::ObjectString = nullptr;
Type* Type::Node = nullptr;
Type* Type::Root = nullptr;
Type* Type::Element = nullptr;
Type* Type::Attribute = nullptr;
Type* Type::Text = nullptr;
Type* Type::Comment = nullptr;
Type* Type::Processing_Instruction = nullptr;

void Type::init$() {
}

Type* Type::newObjectType($String* javaClassName) {
	$init(Type);
	$useLocalCurrentObjectStackCache();
	if (javaClassName == "java.lang.Object"_s) {
		return Type::Object;
	} else if (javaClassName == "java.lang.String"_s) {
		return Type::ObjectString;
	} else {
		$var($AccessControlContext, acc, $AccessController::getContext());
		$nc(acc)->checkPermission($$new($RuntimePermission, "getContextClassLoader"_s));
		return $new($ObjectType, javaClassName);
	}
}

Type* Type::newObjectType($Class* clazz) {
	$init(Type);
	if (clazz == $Object::class$) {
		return Type::Object;
	} else if (clazz == $String::class$) {
		return Type::ObjectString;
	} else {
		return $new($ObjectType, clazz);
	}
}

bool Type::isNumber() {
	return false;
}

bool Type::implementedAsMethod() {
	return false;
}

bool Type::isSimple() {
	return false;
}

int32_t Type::distanceTo(Type* type) {
	return type == this ? 0 : $Integer::MAX_VALUE;
}

void Type::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, Type* type) {
	$useLocalCurrentObjectStackCache();
	$init($ErrorMsg);
	$var($String, var$0, $ErrorMsg::DATA_CONVERSION_ERR);
	$var($Object, var$1, $of(toString()));
	$var($ErrorMsg, err, $new($ErrorMsg, var$0, var$1, $($of($nc(type)->toString()))));
	$nc($($nc(classGen)->getParser()))->reportError($Constants::FATAL, err);
}

$FlowList* Type::translateToDesynthesized($ClassGenerator* classGen, $MethodGenerator* methodGen, Type* type) {
	$var($FlowList, fl, nullptr);
	if (type == Type::Boolean) {
		$assign(fl, translateToDesynthesized(classGen, methodGen, $cast($BooleanType, type)));
	} else {
		translateTo(classGen, methodGen, type);
	}
	return fl;
}

$FlowList* Type::translateToDesynthesized($ClassGenerator* classGen, $MethodGenerator* methodGen, $BooleanType* type) {
	$useLocalCurrentObjectStackCache();
	$init($ErrorMsg);
	$var($String, var$0, $ErrorMsg::DATA_CONVERSION_ERR);
	$var($Object, var$1, $of(toString()));
	$var($ErrorMsg, err, $new($ErrorMsg, var$0, var$1, $($of($nc(type)->toString()))));
	$nc($($nc(classGen)->getParser()))->reportError($Constants::FATAL, err);
	return nullptr;
}

void Type::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $Class* clazz) {
	$useLocalCurrentObjectStackCache();
	$init($ErrorMsg);
	$var($String, var$0, $ErrorMsg::DATA_CONVERSION_ERR);
	$var($Object, var$1, $of(toString()));
	$var($ErrorMsg, err, $new($ErrorMsg, var$0, var$1, $($of($nc($of(clazz))->getClass()->toString()))));
	$nc($($nc(classGen)->getParser()))->reportError($Constants::FATAL, err);
}

void Type::translateFrom($ClassGenerator* classGen, $MethodGenerator* methodGen, $Class* clazz) {
	$useLocalCurrentObjectStackCache();
	$init($ErrorMsg);
	$var($String, var$0, $ErrorMsg::DATA_CONVERSION_ERR);
	$var($Object, var$1, $of($nc($of(clazz))->getClass()->toString()));
	$var($ErrorMsg, err, $new($ErrorMsg, var$0, var$1, $($of(toString()))));
	$nc($($nc(classGen)->getParser()))->reportError($Constants::FATAL, err);
}

void Type::translateBox($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$init($ErrorMsg);
	$var($String, var$0, $ErrorMsg::DATA_CONVERSION_ERR);
	$var($Object, var$1, $of(toString()));
	$var($ErrorMsg, err, $new($ErrorMsg, var$0, var$1, $of($$str({"["_s, $(toString()), "]"_s}))));
	$nc($($nc(classGen)->getParser()))->reportError($Constants::FATAL, err);
}

void Type::translateUnBox($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$init($ErrorMsg);
	$var($String, var$0, $ErrorMsg::DATA_CONVERSION_ERR);
	$var($Object, var$1, $of($str({"["_s, $(toString()), "]"_s})));
	$var($ErrorMsg, err, $new($ErrorMsg, var$0, var$1, $($of(toString()))));
	$nc($($nc(classGen)->getParser()))->reportError($Constants::FATAL, err);
}

$String* Type::getClassName() {
	$init($Constants);
	return ($Constants::EMPTYSTRING);
}

$Instruction* Type::ADD() {
	return nullptr;
}

$Instruction* Type::SUB() {
	return nullptr;
}

$Instruction* Type::MUL() {
	return nullptr;
}

$Instruction* Type::DIV() {
	return nullptr;
}

$Instruction* Type::REM() {
	return nullptr;
}

$Instruction* Type::NEG() {
	return nullptr;
}

$Instruction* Type::LOAD(int32_t slot) {
	return nullptr;
}

$Instruction* Type::STORE(int32_t slot) {
	return nullptr;
}

$Instruction* Type::POP() {
	$init($Constants);
	return $Constants::POP;
}

$BranchInstruction* Type::GT(bool tozero) {
	return nullptr;
}

$BranchInstruction* Type::GE(bool tozero) {
	return nullptr;
}

$BranchInstruction* Type::LT(bool tozero) {
	return nullptr;
}

$BranchInstruction* Type::LE(bool tozero) {
	return nullptr;
}

$Instruction* Type::CMP(bool less) {
	return nullptr;
}

$Instruction* Type::DUP() {
	$init($Constants);
	return $Constants::DUP;
}

void clinit$Type($Class* class$) {
	$assignStatic(Type::Int, $new($IntType));
	$assignStatic(Type::Real, $new($RealType));
	$assignStatic(Type::Boolean, $new($BooleanType));
	$assignStatic(Type::NodeSet, $new($NodeSetType));
	$assignStatic(Type::String, $new($StringType));
	$assignStatic(Type::ResultTree, $new($ResultTreeType));
	$assignStatic(Type::Reference, $new($ReferenceType));
	$assignStatic(Type::Void, $new($VoidType));
	$assignStatic(Type::Object, $new($ObjectType, $Object::class$));
	$assignStatic(Type::ObjectString, $new($ObjectType, $String::class$));
	$assignStatic(Type::Node, $new($NodeType, $NodeTest::ANODE));
	$assignStatic(Type::Root, $new($NodeType, $NodeTest::ROOT));
	$assignStatic(Type::Element, $new($NodeType, $NodeTest::ELEMENT));
	$assignStatic(Type::Attribute, $new($NodeType, $NodeTest::ATTRIBUTE));
	$assignStatic(Type::Text, $new($NodeType, $NodeTest::TEXT));
	$assignStatic(Type::Comment, $new($NodeType, $NodeTest::COMMENT));
	$assignStatic(Type::Processing_Instruction, $new($NodeType, $NodeTest::PI));
}

Type::Type() {
}

$Class* Type::load$($String* name, bool initialize) {
	$loadClass(Type, name, initialize, &_Type_ClassInfo_, clinit$Type, allocate$Type);
	return class$;
}

$Class* Type::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com