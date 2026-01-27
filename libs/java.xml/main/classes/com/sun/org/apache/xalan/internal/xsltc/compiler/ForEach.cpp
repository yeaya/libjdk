#include <com/sun/org/apache/xalan/internal/xsltc/compiler/ForEach.h>

#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/GOTO.h>
#include <com/sun/org/apache/bcel/internal/generic/GotoInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IFGT.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CastExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Sort.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Variable.h>
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
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef DUP
#undef NOP
#undef REQUIRED_ATTR_ERR
#undef RESULT_TREE_SORT_ERR
#undef SWAP
#undef WARNING

using $BranchHandle = ::com::sun::org::apache::bcel::internal::generic::BranchHandle;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $GOTO = ::com::sun::org::apache::bcel::internal::generic::GOTO;
using $GotoInstruction = ::com::sun::org::apache::bcel::internal::generic::GotoInstruction;
using $IFGT = ::com::sun::org::apache::bcel::internal::generic::IFGT;
using $IfInstruction = ::com::sun::org::apache::bcel::internal::generic::IfInstruction;
using $1Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $CastExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CastExpr;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $Instruction = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $Sort = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Sort;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $Variable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Variable;
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

$FieldInfo _ForEach_FieldInfo_[] = {
	{"_select", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(ForEach, _select)},
	{"_type", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PRIVATE, $field(ForEach, _type)},
	{}
};

$MethodInfo _ForEach_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ForEach, init$, void)},
	{"display", "(I)V", nullptr, $PUBLIC, $virtualMethod(ForEach, display, void, int32_t)},
	{"initializeVariables", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $method(ForEach, initializeVariables, void, $ClassGenerator*, $MethodGenerator*)},
	{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(ForEach, parseContents, void, $Parser*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(ForEach, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(ForEach, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _ForEach_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.ForEach",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction",
	nullptr,
	_ForEach_FieldInfo_,
	_ForEach_MethodInfo_
};

$Object* allocate$ForEach($Class* clazz) {
	return $of($alloc(ForEach));
}

void ForEach::init$() {
	$Instruction::init$();
}

void ForEach::display(int32_t indent) {
	$useLocalCurrentObjectStackCache();
	this->indent(indent);
	$Util::println("ForEach"_s);
	this->indent(indent + $SyntaxTreeNode::IndentIncrement);
	$Util::println($$str({"select "_s, $($nc(this->_select)->toString())}));
	displayContents(indent + $SyntaxTreeNode::IndentIncrement);
}

void ForEach::parseContents($Parser* parser) {
	$set(this, _select, $nc(parser)->parseExpression(this, "select"_s, nullptr));
	parseChildren(parser);
	if ($nc(this->_select)->isDummy()) {
		$init($ErrorMsg);
		reportError(this, parser, $ErrorMsg::REQUIRED_ATTR_ERR, "select"_s);
	}
}

$Type* ForEach::typeCheck($SymbolTable* stable) {
	$set(this, _type, $nc(this->_select)->typeCheck(stable));
	if ($instanceOf($ReferenceType, this->_type) || $instanceOf($NodeType, this->_type)) {
		$init($Type);
		$set(this, _select, $new($CastExpr, this->_select, $Type::NodeSet));
		typeCheckContents(stable);
		return $Type::Void;
	}
	if ($instanceOf($NodeSetType, this->_type) || $instanceOf($ResultTreeType, this->_type)) {
		typeCheckContents(stable);
		$init($Type);
		return $Type::Void;
	}
	$throwNew($TypeCheckError, static_cast<$SyntaxTreeNode*>(this));
}

void ForEach::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$nc(il)->append($(methodGen->loadCurrentNode()));
	il->append($(methodGen->loadIterator()));
	$var($List, sortObjects, $new($ArrayList));
	$var($Iterator, children, elements());
	while ($nc(children)->hasNext()) {
		$var($SyntaxTreeNode, child, $cast($SyntaxTreeNode, children->next()));
		if ($instanceOf($Sort, child)) {
			sortObjects->add($cast($Sort, child));
		}
	}
	if ((this->_type != nullptr) && ($instanceOf($ResultTreeType, this->_type))) {
		il->append($(methodGen->loadDOM()));
		if (sortObjects->size() > 0) {
			$init($ErrorMsg);
			$var($ErrorMsg, msg, $new($ErrorMsg, $ErrorMsg::RESULT_TREE_SORT_ERR, static_cast<$SyntaxTreeNode*>(this)));
			$nc($(getParser()))->reportError($Constants::WARNING, msg);
		}
		$nc(this->_select)->translate(classGen, methodGen);
		$init($Type);
		$nc(this->_type)->translateTo(classGen, methodGen, $Type::NodeSet);
		$init($Constants);
		il->append(static_cast<$1Instruction*>($Constants::SWAP));
		il->append($(methodGen->storeDOM()));
	} else {
		if (sortObjects->size() > 0) {
			$Sort::translateSortIterator(classGen, methodGen, this->_select, sortObjects);
		} else {
			$nc(this->_select)->translate(classGen, methodGen);
		}
		if ($instanceOf($ReferenceType, this->_type) == false) {
			il->append($(methodGen->loadContextNode()));
			il->append($(methodGen->setStartNode()));
		}
	}
	il->append($(methodGen->storeIterator()));
	initializeVariables(classGen, methodGen);
	$var($BranchHandle, nextNode, il->append(static_cast<$BranchInstruction*>($$new($GOTO, nullptr))));
	$init($Constants);
	$var($InstructionHandle, loop, il->append($Constants::NOP));
	translateContents(classGen, methodGen);
	$nc(nextNode)->setTarget($(il->append($(methodGen->loadIterator()))));
	il->append($(methodGen->nextNode()));
	il->append(static_cast<$1Instruction*>($Constants::DUP));
	il->append($(methodGen->storeCurrentNode()));
	il->append(static_cast<$BranchInstruction*>($$new($IFGT, loop)));
	if ((this->_type != nullptr) && ($instanceOf($ResultTreeType, this->_type))) {
		il->append($(methodGen->storeDOM()));
	}
	il->append($(methodGen->storeIterator()));
	il->append($(methodGen->storeCurrentNode()));
}

void ForEach::initializeVariables($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	int32_t n = elementCount();
	for (int32_t i = 0; i < n; ++i) {
		$var($Object, child, $nc($(getContents()))->get(i));
		if ($instanceOf($Variable, child)) {
			$var($Variable, var, $cast($Variable, child));
			$nc(var)->initialize(classGen, methodGen);
		}
	}
}

ForEach::ForEach() {
}

$Class* ForEach::load$($String* name, bool initialize) {
	$loadClass(ForEach, name, initialize, &_ForEach_ClassInfo_, allocate$ForEach);
	return class$;
}

$Class* ForEach::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com