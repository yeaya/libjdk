#include <com/sun/org/apache/xalan/internal/xsltc/compiler/ApplyTemplates.h>

#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CastExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Mode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Sort.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/WithParam.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeSetType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ReferenceType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ResultTreeType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/TypeCheckError.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <com/sun/org/apache/xml/internal/utils/XML11Char.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef ERROR
#undef INVALID_QNAME_ERR
#undef NODE_ITERATOR
#undef NODE_ITERATOR_SIG
#undef POP_PARAM_FRAME
#undef POP_PARAM_FRAME_SIG
#undef PUSH_PARAM_FRAME
#undef PUSH_PARAM_FRAME_SIG
#undef RESULT_TREE_SORT_ERR
#undef SET_START_NODE
#undef TRANSLET_CLASS
#undef WARNING

using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $1Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $CastExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CastExpr;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $Instruction = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction;
using $Mode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Mode;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $Sort = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Sort;
using $Stylesheet = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $WithParam = ::com::sun::org::apache::xalan::internal::xsltc::compiler::WithParam;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $NodeSetType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NodeSetType;
using $NodeType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NodeType;
using $ReferenceType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ReferenceType;
using $ResultTreeType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ResultTreeType;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $TypeCheckError = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::TypeCheckError;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $XML11Char = ::com::sun::org::apache::xml::internal::utils::XML11Char;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _ApplyTemplates_FieldInfo_[] = {
	{"_select", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(ApplyTemplates, _select)},
	{"_type", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PRIVATE, $field(ApplyTemplates, _type)},
	{"_modeName", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, $PRIVATE, $field(ApplyTemplates, _modeName)},
	{"_functionName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ApplyTemplates, _functionName)},
	{}
};

$MethodInfo _ApplyTemplates_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ApplyTemplates, init$, void)},
	{"display", "(I)V", nullptr, $PUBLIC, $virtualMethod(ApplyTemplates, display, void, int32_t)},
	{"hasWithParams", "()Z", nullptr, $PUBLIC, $method(ApplyTemplates, hasWithParams, bool)},
	{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(ApplyTemplates, parseContents, void, $Parser*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(ApplyTemplates, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(ApplyTemplates, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _ApplyTemplates_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.ApplyTemplates",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction",
	nullptr,
	_ApplyTemplates_FieldInfo_,
	_ApplyTemplates_MethodInfo_
};

$Object* allocate$ApplyTemplates($Class* clazz) {
	return $of($alloc(ApplyTemplates));
}

void ApplyTemplates::init$() {
	$Instruction::init$();
	$set(this, _type, nullptr);
}

void ApplyTemplates::display(int32_t indent) {
	$useLocalCurrentObjectStackCache();
	this->indent(indent);
	$Util::println("ApplyTemplates"_s);
	this->indent(indent + $SyntaxTreeNode::IndentIncrement);
	$Util::println($$str({"select "_s, $($nc(this->_select)->toString())}));
	if (this->_modeName != nullptr) {
		this->indent(indent + $SyntaxTreeNode::IndentIncrement);
		$Util::println($$str({"mode "_s, this->_modeName}));
	}
}

bool ApplyTemplates::hasWithParams() {
	return hasContents();
}

void ApplyTemplates::parseContents($Parser* parser) {
	$useLocalCurrentObjectStackCache();
	$var($String, select, getAttribute("select"_s));
	$var($String, mode, getAttribute("mode"_s));
	if ($nc(select)->length() > 0) {
		$set(this, _select, $nc(parser)->parseExpression(this, "select"_s, nullptr));
	}
	if ($nc(mode)->length() > 0) {
		if (!$XML11Char::isXML11ValidQName(mode)) {
			$init($ErrorMsg);
			$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::INVALID_QNAME_ERR, $of(mode), static_cast<$SyntaxTreeNode*>(this)));
			$nc(parser)->reportError($Constants::ERROR, err);
		}
		$set(this, _modeName, $nc(parser)->getQNameIgnoreDefaultNs(mode));
	}
	$set(this, _functionName, $nc($($nc($($nc(parser)->getTopLevelStylesheet()))->getMode(this->_modeName)))->functionName());
	parseChildren(parser);
}

$Type* ApplyTemplates::typeCheck($SymbolTable* stable) {
	if (this->_select != nullptr) {
		$set(this, _type, $nc(this->_select)->typeCheck(stable));
		if ($instanceOf($NodeType, this->_type) || $instanceOf($ReferenceType, this->_type)) {
			$init($Type);
			$set(this, _select, $new($CastExpr, this->_select, $Type::NodeSet));
			$set(this, _type, $Type::NodeSet);
		}
		if ($instanceOf($NodeSetType, this->_type) || $instanceOf($ResultTreeType, this->_type)) {
			typeCheckContents(stable);
			$init($Type);
			return $Type::Void;
		}
		$throwNew($TypeCheckError, static_cast<$SyntaxTreeNode*>(this));
	} else {
		typeCheckContents(stable);
		$init($Type);
		return $Type::Void;
	}
}

void ApplyTemplates::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	bool setStartNodeCalled = false;
	$var($Stylesheet, stylesheet, $nc(classGen)->getStylesheet());
	$var($ConstantPoolGen, cpg, classGen->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	int32_t current = methodGen->getLocalIndex("current"_s);
	$var($List, sortObjects, $new($ArrayList));
	{
		$var($Iterator, i$, $nc($(getContents()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SyntaxTreeNode, child, $cast($SyntaxTreeNode, i$->next()));
			{
				if ($instanceOf($Sort, child)) {
					sortObjects->add($cast($Sort, child));
				}
			}
		}
	}
	bool var$0 = $nc(stylesheet)->hasLocalParams();
	if (var$0 || hasContents()) {
		$nc(il)->append($(classGen->loadTranslet()));
		$init($Constants);
		int32_t pushFrame = $nc(cpg)->addMethodref($Constants::TRANSLET_CLASS, $Constants::PUSH_PARAM_FRAME, $Constants::PUSH_PARAM_FRAME_SIG);
		il->append(static_cast<$1Instruction*>($$new($INVOKEVIRTUAL, pushFrame)));
		translateContents(classGen, methodGen);
	}
	$nc(il)->append($(classGen->loadTranslet()));
	if ((this->_type != nullptr) && ($instanceOf($ResultTreeType, this->_type))) {
		if (sortObjects->size() > 0) {
			$init($ErrorMsg);
			$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::RESULT_TREE_SORT_ERR, static_cast<$SyntaxTreeNode*>(this)));
			$nc($(getParser()))->reportError($Constants::WARNING, err);
		}
		$nc(this->_select)->translate(classGen, methodGen);
		$init($Type);
		$nc(this->_type)->translateTo(classGen, methodGen, $Type::NodeSet);
	} else {
		il->append($(methodGen->loadDOM()));
		if (sortObjects->size() > 0) {
			$Sort::translateSortIterator(classGen, methodGen, this->_select, sortObjects);
			$init($Constants);
			int32_t setStartNode = $nc(cpg)->addInterfaceMethodref($Constants::NODE_ITERATOR, $Constants::SET_START_NODE, $$str({"(I)"_s, $Constants::NODE_ITERATOR_SIG}));
			il->append($(methodGen->loadCurrentNode()));
			il->append(static_cast<$1Instruction*>($$new($INVOKEINTERFACE, setStartNode, 2)));
			setStartNodeCalled = true;
		} else if (this->_select == nullptr) {
			$Mode::compileGetChildren(classGen, methodGen, current);
		} else {
			$nc(this->_select)->translate(classGen, methodGen);
		}
	}
	if (this->_select != nullptr && !setStartNodeCalled) {
		$nc(this->_select)->startIterator(classGen, methodGen);
	}
	$var($String, className, $nc($(classGen->getStylesheet()))->getClassName());
	il->append($(methodGen->loadHandler()));
	$var($String, applyTemplatesSig, classGen->getApplyTemplatesSig());
	int32_t applyTemplates = $nc(cpg)->addMethodref(className, this->_functionName, applyTemplatesSig);
	il->append(static_cast<$1Instruction*>($$new($INVOKEVIRTUAL, applyTemplates)));
	{
		$var($Iterator, i$, $nc($(getContents()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SyntaxTreeNode, child, $cast($SyntaxTreeNode, i$->next()));
			{
				if ($instanceOf($WithParam, child)) {
					$nc(($cast($WithParam, child)))->releaseResultTree(classGen, methodGen);
				}
			}
		}
	}
	bool var$1 = $nc(stylesheet)->hasLocalParams();
	if (var$1 || hasContents()) {
		il->append($(classGen->loadTranslet()));
		$init($Constants);
		int32_t popFrame = cpg->addMethodref($Constants::TRANSLET_CLASS, $Constants::POP_PARAM_FRAME, $Constants::POP_PARAM_FRAME_SIG);
		il->append(static_cast<$1Instruction*>($$new($INVOKEVIRTUAL, popFrame)));
	}
}

ApplyTemplates::ApplyTemplates() {
}

$Class* ApplyTemplates::load$($String* name, bool initialize) {
	$loadClass(ApplyTemplates, name, initialize, &_ApplyTemplates_ClassInfo_, allocate$ApplyTemplates);
	return class$;
}

$Class* ApplyTemplates::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com