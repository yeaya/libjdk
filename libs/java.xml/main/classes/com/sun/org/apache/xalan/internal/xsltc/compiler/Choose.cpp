#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Choose.h>

#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/GOTO.h>
#include <com/sun/org/apache/bcel/internal/generic/GotoInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IFEQ.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FlowList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FunctionCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Otherwise.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Text.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/When.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/TypeCheckError.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef ERROR
#undef MISSING_WHEN_ERR
#undef MULTIPLE_OTHERWISE_ERR
#undef NOP
#undef WHEN_ELEMENT_ERR

using $BranchHandle = ::com::sun::org::apache::bcel::internal::generic::BranchHandle;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $GOTO = ::com::sun::org::apache::bcel::internal::generic::GOTO;
using $GotoInstruction = ::com::sun::org::apache::bcel::internal::generic::GotoInstruction;
using $IFEQ = ::com::sun::org::apache::bcel::internal::generic::IFEQ;
using $IfInstruction = ::com::sun::org::apache::bcel::internal::generic::IfInstruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $FlowList = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList;
using $FunctionCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FunctionCall;
using $Instruction = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction;
using $Otherwise = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Otherwise;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $Text = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Text;
using $When = ::com::sun::org::apache::xalan::internal::xsltc::compiler::When;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $TypeCheckError = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::TypeCheckError;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
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

$MethodInfo _Choose_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Choose, init$, void)},
	{"display", "(I)V", nullptr, $PUBLIC, $virtualMethod(Choose, display, void, int32_t)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(Choose, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{}
};

$ClassInfo _Choose_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Choose",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction",
	nullptr,
	nullptr,
	_Choose_MethodInfo_
};

$Object* allocate$Choose($Class* clazz) {
	return $of($alloc(Choose));
}

void Choose::init$() {
	$Instruction::init$();
}

void Choose::display(int32_t indent) {
	this->indent(indent);
	$Util::println("Choose"_s);
	this->indent(indent + $SyntaxTreeNode::IndentIncrement);
	displayContents(indent + $SyntaxTreeNode::IndentIncrement);
}

void Choose::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($List, whenElements, $new($ArrayList));
	$var($Otherwise, otherwise, nullptr);
	$var($Iterator, elements, this->elements());
	$var($ErrorMsg, error, nullptr);
	int32_t line = getLineNumber();
	while ($nc(elements)->hasNext()) {
		$var($SyntaxTreeNode, element, $cast($SyntaxTreeNode, elements->next()));
		if ($instanceOf($When, element)) {
			whenElements->add(element);
		} else if ($instanceOf($Otherwise, element)) {
			if (otherwise == nullptr) {
				$assign(otherwise, $cast($Otherwise, element));
			} else {
				$init($ErrorMsg);
				$assign(error, $new($ErrorMsg, $ErrorMsg::MULTIPLE_OTHERWISE_ERR, static_cast<$SyntaxTreeNode*>(this)));
				$nc($(getParser()))->reportError($Constants::ERROR, error);
			}
		} else if ($instanceOf($Text, element)) {
			$nc(($cast($Text, element)))->ignore();
		} else {
			$init($ErrorMsg);
			$assign(error, $new($ErrorMsg, $ErrorMsg::WHEN_ELEMENT_ERR, static_cast<$SyntaxTreeNode*>(this)));
			$nc($(getParser()))->reportError($Constants::ERROR, error);
		}
	}
	if (whenElements->size() == 0) {
		$init($ErrorMsg);
		$assign(error, $new($ErrorMsg, $ErrorMsg::MISSING_WHEN_ERR, static_cast<$SyntaxTreeNode*>(this)));
		$nc($(getParser()))->reportError($Constants::ERROR, error);
		return;
	}
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$var($BranchHandle, nextElement, nullptr);
	$var($List, exitHandles, $new($ArrayList));
	$var($InstructionHandle, exit, nullptr);
	$var($Enumeration, whens, $Collections::enumeration(whenElements));
	while ($nc(whens)->hasMoreElements()) {
		$var($When, when, $cast($When, whens->nextElement()));
		$var($Expression, test, $nc(when)->getTest());
		$var($InstructionHandle, truec, $nc(il)->getEnd());
		if (nextElement != nullptr) {
			$init($Constants);
			nextElement->setTarget($(il->append($Constants::NOP)));
		}
		$nc(test)->translateDesynthesized(classGen, methodGen);
		if ($instanceOf($FunctionCall, test)) {
			$var($FunctionCall, call, $cast($FunctionCall, test));
			try {
				$var($Type, type, call->typeCheck($($nc($(getParser()))->getSymbolTable())));
				$init($Type);
				if (type != $Type::Boolean) {
					$nc(test->_falseList)->add($(il->append(static_cast<$BranchInstruction*>($$new($IFEQ, nullptr)))));
				}
			} catch ($TypeCheckError& e) {
			}
		}
		$assign(truec, il->getEnd());
		if (!when->ignore()) {
			when->translateContents(classGen, methodGen);
		}
		exitHandles->add($(il->append(static_cast<$BranchInstruction*>($$new($GOTO, nullptr)))));
		if (whens->hasMoreElements() || otherwise != nullptr) {
			$assign(nextElement, il->append(static_cast<$BranchInstruction*>($$new($GOTO, nullptr))));
			test->backPatchFalseList(nextElement);
		} else {
			$init($Constants);
			test->backPatchFalseList($assign(exit, il->append($Constants::NOP)));
		}
		test->backPatchTrueList($($nc(truec)->getNext()));
	}
	if (otherwise != nullptr) {
		$init($Constants);
		$nc(nextElement)->setTarget($($nc(il)->append($Constants::NOP)));
		otherwise->translateContents(classGen, methodGen);
		$assign(exit, $nc(il)->append($Constants::NOP));
	}
	$var($Enumeration, exitGotos, $Collections::enumeration(exitHandles));
	while ($nc(exitGotos)->hasMoreElements()) {
		$var($BranchHandle, gotoExit, $cast($BranchHandle, exitGotos->nextElement()));
		$nc(gotoExit)->setTarget(exit);
	}
}

Choose::Choose() {
}

$Class* Choose::load$($String* name, bool initialize) {
	$loadClass(Choose, name, initialize, &_Choose_ClassInfo_, allocate$Choose);
	return class$;
}

$Class* Choose::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com