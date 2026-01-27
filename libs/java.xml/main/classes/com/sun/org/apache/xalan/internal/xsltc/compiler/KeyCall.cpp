#include <com/sun/org/apache/xalan/internal/xsltc/compiler/KeyCall.h>

#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CastExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FunctionCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Key.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LiteralExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/TopLevelElement.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/StringType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef DOM_INTF_SIG
#undef DUP
#undef ICONST_0
#undef ICONST_1
#undef KEY_INDEX_CLASS
#undef KEY_INDEX_ITERATOR_SIG
#undef KEY_INDEX_SIG
#undef TRANSLET_CLASS

using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $CastExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CastExpr;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $FunctionCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FunctionCall;
using $LiteralExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::LiteralExpr;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $TopLevelElement = ::com::sun::org::apache::xalan::internal::xsltc::compiler::TopLevelElement;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $StringType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::StringType;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _KeyCall_FieldInfo_[] = {
	{"_name", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(KeyCall, _name)},
	{"_value", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(KeyCall, _value)},
	{"_valueType", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PRIVATE, $field(KeyCall, _valueType)},
	{"_resolvedQName", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PRIVATE, $field(KeyCall, _resolvedQName)},
	{}
};

$MethodInfo _KeyCall_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Ljava/util/List;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;>;)V", $PUBLIC, $method(KeyCall, init$, void, $QName*, $List*)},
	{"addParentDependency", "()V", nullptr, $PUBLIC, $method(KeyCall, addParentDependency, void)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(KeyCall, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(KeyCall, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _KeyCall_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.KeyCall",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.FunctionCall",
	nullptr,
	_KeyCall_FieldInfo_,
	_KeyCall_MethodInfo_
};

$Object* allocate$KeyCall($Class* clazz) {
	return $of($alloc(KeyCall));
}

void KeyCall::init$($QName* fname, $List* arguments) {
	$FunctionCall::init$(fname, arguments);
	$set(this, _resolvedQName, nullptr);
	switch (argumentCount()) {
	case 1:
		{
			$set(this, _name, nullptr);
			$set(this, _value, argument(0));
			break;
		}
	case 2:
		{
			$set(this, _name, argument(0));
			$set(this, _value, argument(1));
			break;
		}
	default:
		{
			$set(this, _name, ($set(this, _value, nullptr)));
			break;
		}
	}
}

void KeyCall::addParentDependency() {
	$useLocalCurrentObjectStackCache();
	if (this->_resolvedQName == nullptr) {
		return;
	}
	$var($SyntaxTreeNode, node, this);
	while (node != nullptr && $instanceOf($TopLevelElement, node) == false) {
		$assign(node, node->getParent());
	}
	$var($TopLevelElement, parent, $cast($TopLevelElement, node));
	if (parent != nullptr) {
		parent->addDependency($($nc($(getSymbolTable()))->getKey(this->_resolvedQName)));
	}
}

$Type* KeyCall::typeCheck($SymbolTable* stable) {
	$useLocalCurrentObjectStackCache();
	$var($Type, returnType, $FunctionCall::typeCheck(stable));
	if (this->_name != nullptr) {
		$var($Type, nameType, $nc(this->_name)->typeCheck(stable));
		if ($instanceOf($LiteralExpr, this->_name)) {
			$var($LiteralExpr, literal, $cast($LiteralExpr, this->_name));
			$set(this, _resolvedQName, $nc($(getParser()))->getQNameIgnoreDefaultNs($($nc(literal)->getValue())));
		} else if ($instanceOf($StringType, nameType) == false) {
			$init($Type);
			$set(this, _name, $new($CastExpr, this->_name, $Type::String));
		}
	}
	$set(this, _valueType, $nc(this->_value)->typeCheck(stable));
	$init($Type);
	if (this->_valueType != $Type::NodeSet && this->_valueType != $Type::Reference && this->_valueType != $Type::String) {
		$set(this, _value, $new($CastExpr, this->_value, $Type::String));
		$set(this, _valueType, $nc(this->_value)->typeCheck(stable));
	}
	addParentDependency();
	return returnType;
}

void KeyCall::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	int32_t getKeyIndex = $nc(cpg)->addMethodref($Constants::TRANSLET_CLASS, "getKeyIndex"_s, $$str({"(Ljava/lang/String;)"_s, $Constants::KEY_INDEX_SIG}));
	int32_t keyDom = cpg->addMethodref($Constants::KEY_INDEX_CLASS, "setDom"_s, $$str({"("_s, $Constants::DOM_INTF_SIG, "I)V"_s}));
	int32_t getKeyIterator = cpg->addMethodref($Constants::KEY_INDEX_CLASS, "getKeyIndexIterator"_s, $$str({"("_s, $($nc(this->_valueType)->toSignature()), "Z)"_s, $Constants::KEY_INDEX_ITERATOR_SIG}));
	$nc(il)->append($(classGen->loadTranslet()));
	if (this->_name == nullptr) {
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, "##id"_s)));
	} else if (this->_resolvedQName != nullptr) {
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $($nc(this->_resolvedQName)->toString()))));
	} else {
		$nc(this->_name)->translate(classGen, methodGen);
	}
	il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, getKeyIndex)));
	il->append(static_cast<$Instruction*>($Constants::DUP));
	il->append($(methodGen->loadDOM()));
	il->append($(methodGen->loadCurrentNode()));
	il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, keyDom)));
	$nc(this->_value)->translate(classGen, methodGen);
	il->append((this->_name != nullptr) ? $Constants::ICONST_1 : $Constants::ICONST_0);
	il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, getKeyIterator)));
}

KeyCall::KeyCall() {
}

$Class* KeyCall::load$($String* name, bool initialize) {
	$loadClass(KeyCall, name, initialize, &_KeyCall_ClassInfo_, allocate$KeyCall);
	return class$;
}

$Class* KeyCall::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com