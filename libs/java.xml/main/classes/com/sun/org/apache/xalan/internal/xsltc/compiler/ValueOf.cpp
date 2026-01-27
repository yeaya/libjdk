#include <com/sun/org/apache/xalan/internal/xsltc/compiler/ValueOf.h>

#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
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
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <jcpp.h>

#undef CHARACTERS
#undef CHARACTERSW
#undef CHARACTERSW_SIG
#undef CHARACTERS_SIG
#undef DOM_INTF
#undef OUTPUT_HANDLER
#undef POP
#undef REQUIRED_ATTR_ERR
#undef SWAP
#undef TRANSLET_CLASS

using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $1Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $CastExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CastExpr;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $Instruction = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _ValueOf_FieldInfo_[] = {
	{"_select", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(ValueOf, _select)},
	{"_escaping", "Z", nullptr, $PRIVATE, $field(ValueOf, _escaping)},
	{"_isString", "Z", nullptr, $PRIVATE, $field(ValueOf, _isString)},
	{}
};

$MethodInfo _ValueOf_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ValueOf, init$, void)},
	{"display", "(I)V", nullptr, $PUBLIC, $virtualMethod(ValueOf, display, void, int32_t)},
	{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(ValueOf, parseContents, void, $Parser*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(ValueOf, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(ValueOf, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _ValueOf_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.ValueOf",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction",
	nullptr,
	_ValueOf_FieldInfo_,
	_ValueOf_MethodInfo_
};

$Object* allocate$ValueOf($Class* clazz) {
	return $of($alloc(ValueOf));
}

void ValueOf::init$() {
	$Instruction::init$();
	this->_escaping = true;
	this->_isString = false;
}

void ValueOf::display(int32_t indent) {
	$useLocalCurrentObjectStackCache();
	this->indent(indent);
	$Util::println("ValueOf"_s);
	this->indent(indent + $SyntaxTreeNode::IndentIncrement);
	$Util::println($$str({"select "_s, $($nc(this->_select)->toString())}));
}

void ValueOf::parseContents($Parser* parser) {
	$set(this, _select, $nc(parser)->parseExpression(this, "select"_s, nullptr));
	if ($nc(this->_select)->isDummy()) {
		$init($ErrorMsg);
		reportError(this, parser, $ErrorMsg::REQUIRED_ATTR_ERR, "select"_s);
		return;
	}
	$var($String, str, getAttribute("disable-output-escaping"_s));
	if ((str != nullptr) && (str->equals("yes"_s))) {
		this->_escaping = false;
	}
}

$Type* ValueOf::typeCheck($SymbolTable* stable) {
	$var($Type, type, $nc(this->_select)->typeCheck(stable));
	$init($Type);
	if (type != nullptr && !type->identicalTo($Type::Node)) {
		if (type->identicalTo($Type::NodeSet)) {
			$set(this, _select, $new($CastExpr, this->_select, $Type::Node));
		} else {
			this->_isString = true;
			if (!type->identicalTo($Type::String)) {
				$set(this, _select, $new($CastExpr, this->_select, $Type::String));
			}
			this->_isString = true;
		}
	}
	return $Type::Void;
}

void ValueOf::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	int32_t setEscaping = $nc(cpg)->addInterfaceMethodref($Constants::OUTPUT_HANDLER, "setEscaping"_s, "(Z)Z"_s);
	if (!this->_escaping) {
		$nc(il)->append($(methodGen->loadHandler()));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, false)));
		il->append(static_cast<$1Instruction*>($$new($INVOKEINTERFACE, setEscaping, 2)));
	}
	if (this->_isString) {
		int32_t characters = cpg->addMethodref($Constants::TRANSLET_CLASS, $Constants::CHARACTERSW, $Constants::CHARACTERSW_SIG);
		$nc(il)->append($(classGen->loadTranslet()));
		$nc(this->_select)->translate(classGen, methodGen);
		il->append($(methodGen->loadHandler()));
		il->append(static_cast<$1Instruction*>($$new($INVOKEVIRTUAL, characters)));
	} else {
		int32_t characters = cpg->addInterfaceMethodref($Constants::DOM_INTF, $Constants::CHARACTERS, $Constants::CHARACTERS_SIG);
		$nc(il)->append($(methodGen->loadDOM()));
		$nc(this->_select)->translate(classGen, methodGen);
		il->append($(methodGen->loadHandler()));
		il->append(static_cast<$1Instruction*>($$new($INVOKEINTERFACE, characters, 3)));
	}
	if (!this->_escaping) {
		$nc(il)->append($(methodGen->loadHandler()));
		il->append(static_cast<$1Instruction*>($Constants::SWAP));
		il->append(static_cast<$1Instruction*>($$new($INVOKEINTERFACE, setEscaping, 2)));
		il->append(static_cast<$1Instruction*>($Constants::POP));
	}
}

ValueOf::ValueOf() {
}

$Class* ValueOf::load$($String* name, bool initialize) {
	$loadClass(ValueOf, name, initialize, &_ValueOf_ClassInfo_, allocate$ValueOf);
	return class$;
}

$Class* ValueOf::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com