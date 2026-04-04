#include <com/sun/org/apache/xalan/internal/xsltc/compiler/WithParam.h>
#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/ASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/CHECKCAST.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableGen.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CastExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ReferenceType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <com/sun/org/apache/xml/internal/utils/XML11Char.h>
#include <jcpp.h>

#undef ADD_PARAMETER
#undef ADD_PARAMETER_SIG
#undef DOM_ADAPTER_CLASS
#undef DOM_ADAPTER_SIG
#undef DOM_IMPL_CLASS
#undef DUP
#undef EMPTYSTRING
#undef ERROR
#undef INVALID_QNAME_ERR
#undef MULTI_DOM_CLASS
#undef POP
#undef REQUIRED_ATTR_ERR
#undef TRANSLET_CLASS

using $ALOAD = ::com::sun::org::apache::bcel::internal::generic::ALOAD;
using $ASTORE = ::com::sun::org::apache::bcel::internal::generic::ASTORE;
using $CHECKCAST = ::com::sun::org::apache::bcel::internal::generic::CHECKCAST;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $1Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $CastExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CastExpr;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Instruction = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $ReferenceType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ReferenceType;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $XML11Char = ::com::sun::org::apache::xml::internal::utils::XML11Char;
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

void WithParam::init$() {
	$Instruction::init$();
	this->_doParameterOptimization = false;
}

void WithParam::display(int32_t indent) {
	$useLocalObjectStack();
	this->indent(indent);
	$Util::println($$str({"with-param "_s, this->_name}));
	if (this->_select != nullptr) {
		this->indent(indent + $SyntaxTreeNode::IndentIncrement);
		$Util::println($$str({"select "_s, $($nc(this->_select)->toString())}));
	}
	displayContents(indent + $SyntaxTreeNode::IndentIncrement);
}

$String* WithParam::getEscapedName() {
	return this->_escapedName;
}

$QName* WithParam::getName() {
	return this->_name;
}

void WithParam::setName($QName* name) {
	$set(this, _name, name);
	$set(this, _escapedName, $Util::escape($($nc(name)->getStringRep())));
}

void WithParam::setDoParameterOptimization(bool flag) {
	this->_doParameterOptimization = flag;
}

void WithParam::parseContents($Parser* parser) {
	$useLocalObjectStack();
	$var($String, name, getAttribute("name"_s));
	if ($nc(name)->length() > 0) {
		if (!$XML11Char::isXML11ValidQName(name)) {
			$init($ErrorMsg);
			$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::INVALID_QNAME_ERR, name, this));
			$nc(parser)->reportError($Constants::ERROR, err);
		}
		setName($($nc(parser)->getQNameIgnoreDefaultNs(name)));
	} else {
		$init($ErrorMsg);
		reportError(this, parser, $ErrorMsg::REQUIRED_ATTR_ERR, "name"_s);
	}
	$var($String, select, getAttribute("select"_s));
	if ($nc(select)->length() > 0) {
		$set(this, _select, $nc(parser)->parseExpression(this, "select"_s, nullptr));
	}
	parseChildren(parser);
}

$Type* WithParam::typeCheck($SymbolTable* stable) {
	if (this->_select != nullptr) {
		$var($Type, tselect, this->_select->typeCheck(stable));
		if ($instanceOf($ReferenceType, tselect) == false) {
			$init($Type);
			$set(this, _select, $new($CastExpr, this->_select, $Type::Reference));
		}
	} else {
		typeCheckContents(stable);
	}
	$init($Type);
	return $Type::Void;
}

void WithParam::translateValue($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalObjectStack();
	if (this->_select != nullptr) {
		this->_select->translate(classGen, methodGen);
		$nc(this->_select)->startIterator(classGen, methodGen);
	} else if (hasContents()) {
		$var($InstructionList, il, $nc(methodGen)->getInstructionList());
		compileResultTree(classGen, methodGen);
		$var($String, var$0, $str({"@"_s, this->_escapedName}));
		$init($Type);
		$var($1Type, var$1, $nc($Type::ResultTree)->toJCType());
		$set(this, _domAdapter, methodGen->addLocalVariable2(var$0, var$1, $($nc(il)->getEnd())));
		$init($Constants);
		il->append($Constants::DUP);
		il->append($$new($ASTORE, $nc(this->_domAdapter)->getIndex()));
	} else {
		$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
		$var($InstructionList, il, $nc(methodGen)->getInstructionList());
		$init($Constants);
		$nc(il)->append($$new($PUSH, cpg, $Constants::EMPTYSTRING));
	}
}

void WithParam::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalObjectStack();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	if (this->_doParameterOptimization) {
		translateValue(classGen, methodGen);
		return;
	}
	$var($String, name, $Util::escape($(getEscapedName())));
	$nc(il)->append($(classGen->loadTranslet()));
	il->append($$new($PUSH, cpg, name));
	translateValue(classGen, methodGen);
	il->append($$new($PUSH, cpg, false));
	$init($Constants);
	il->append($$new($INVOKEVIRTUAL, $nc(cpg)->addMethodref($Constants::TRANSLET_CLASS, $Constants::ADD_PARAMETER, $Constants::ADD_PARAMETER_SIG)));
	il->append($Constants::POP);
}

void WithParam::releaseResultTree($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalObjectStack();
	if (this->_domAdapter != nullptr) {
		$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
		$var($InstructionList, il, $nc(methodGen)->getInstructionList());
		bool var$0 = $$nc(classGen->getStylesheet())->callsNodeset();
		$init($Constants);
		if (var$0 && $$nc(classGen->getDOMClass())->equals($Constants::MULTI_DOM_CLASS)) {
			int32_t removeDA = $nc(cpg)->addMethodref($Constants::MULTI_DOM_CLASS, "removeDOMAdapter"_s, $$str({"("_s, $Constants::DOM_ADAPTER_SIG, ")V"_s}));
			$nc(il)->append($(methodGen->loadDOM()));
			il->append($$new($CHECKCAST, cpg->addClass($Constants::MULTI_DOM_CLASS)));
			il->append($$new($ALOAD, $nc(this->_domAdapter)->getIndex()));
			il->append($$new($CHECKCAST, cpg->addClass($Constants::DOM_ADAPTER_CLASS)));
			il->append($$new($INVOKEVIRTUAL, removeDA));
		}
		int32_t release = $nc(cpg)->addInterfaceMethodref($Constants::DOM_IMPL_CLASS, "release"_s, "()V"_s);
		$nc(il)->append($$new($ALOAD, $nc(this->_domAdapter)->getIndex()));
		il->append($$new($INVOKEINTERFACE, release, 1));
		$nc(this->_domAdapter)->setEnd($(il->getEnd()));
		methodGen->removeLocalVariable(this->_domAdapter);
		$set(this, _domAdapter, nullptr);
	}
}

WithParam::WithParam() {
}

$Class* WithParam::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"_name", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PRIVATE, $field(WithParam, _name)},
		{"_escapedName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(WithParam, _escapedName)},
		{"_select", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(WithParam, _select)},
		{"_domAdapter", "Lcom/sun/org/apache/bcel/internal/generic/LocalVariableGen;", nullptr, $PRIVATE, $field(WithParam, _domAdapter)},
		{"_doParameterOptimization", "Z", nullptr, $PRIVATE, $field(WithParam, _doParameterOptimization)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(WithParam, init$, void)},
		{"display", "(I)V", nullptr, $PUBLIC, $virtualMethod(WithParam, display, void, int32_t)},
		{"getEscapedName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(WithParam, getEscapedName, $String*)},
		{"getName", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PUBLIC, $method(WithParam, getName, $QName*)},
		{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(WithParam, parseContents, void, $Parser*)},
		{"releaseResultTree", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $method(WithParam, releaseResultTree, void, $ClassGenerator*, $MethodGenerator*)},
		{"setDoParameterOptimization", "(Z)V", nullptr, $PUBLIC, $method(WithParam, setDoParameterOptimization, void, bool)},
		{"setName", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;)V", nullptr, $PUBLIC, $method(WithParam, setName, void, $QName*)},
		{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(WithParam, translate, void, $ClassGenerator*, $MethodGenerator*)},
		{"translateValue", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $method(WithParam, translateValue, void, $ClassGenerator*, $MethodGenerator*)},
		{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(WithParam, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.compiler.WithParam",
		"com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WithParam, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WithParam);
	});
	return class$;
}

$Class* WithParam::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com