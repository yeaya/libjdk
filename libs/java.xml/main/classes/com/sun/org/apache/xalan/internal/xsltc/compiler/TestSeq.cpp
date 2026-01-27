#include <com/sun/org/apache/xalan/internal/xsltc/compiler/TestSeq.h>

#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/GOTO_W.h>
#include <com/sun/org/apache/bcel/internal/generic/GotoInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FlowList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LocationPathPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Mode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Pattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Template.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <java/lang/StringBuffer.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $GOTO_W = ::com::sun::org::apache::bcel::internal::generic::GOTO_W;
using $GotoInstruction = ::com::sun::org::apache::bcel::internal::generic::GotoInstruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $FlowList = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList;
using $LocationPathPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::LocationPathPattern;
using $Mode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Mode;
using $Pattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern;
using $Template = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Template;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _TestSeq_FieldInfo_[] = {
	{"_kernelType", "I", nullptr, $PRIVATE, $field(TestSeq, _kernelType)},
	{"_patterns", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/LocationPathPattern;>;", $PRIVATE, $field(TestSeq, _patterns)},
	{"_mode", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Mode;", nullptr, $PRIVATE, $field(TestSeq, _mode)},
	{"_default", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;", nullptr, $PRIVATE, $field(TestSeq, _default)},
	{"_instructionList", "Lcom/sun/org/apache/bcel/internal/generic/InstructionList;", nullptr, $PRIVATE, $field(TestSeq, _instructionList)},
	{"_start", "Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PRIVATE, $field(TestSeq, _start)},
	{}
};

$MethodInfo _TestSeq_MethodInfo_[] = {
	{"<init>", "(Ljava/util/List;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Mode;)V", "(Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/LocationPathPattern;>;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Mode;)V", $PUBLIC, $method(TestSeq, init$, void, $List*, $Mode*)},
	{"<init>", "(Ljava/util/List;ILcom/sun/org/apache/xalan/internal/xsltc/compiler/Mode;)V", "(Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/LocationPathPattern;>;ILcom/sun/org/apache/xalan/internal/xsltc/compiler/Mode;)V", $PUBLIC, $method(TestSeq, init$, void, $List*, int32_t, $Mode*)},
	{"compile", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $method(TestSeq, compile, $InstructionHandle*, $ClassGenerator*, $MethodGenerator*, $InstructionHandle*)},
	{"findTemplates", "(Ljava/util/Map;)V", "(Ljava/util/Map<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;Ljava/lang/Object;>;)V", $PUBLIC, $method(TestSeq, findTemplates, void, $Map*)},
	{"getInstructionList", "()Lcom/sun/org/apache/bcel/internal/generic/InstructionList;", nullptr, $PUBLIC, $method(TestSeq, getInstructionList, $InstructionList*)},
	{"getPattern", "(I)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/LocationPathPattern;", nullptr, $PRIVATE, $method(TestSeq, getPattern, $LocationPathPattern*, int32_t)},
	{"getPosition", "()I", nullptr, $PUBLIC, $method(TestSeq, getPosition, int32_t)},
	{"getPriority", "()D", nullptr, $PUBLIC, $method(TestSeq, getPriority, double)},
	{"getTemplateHandle", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Template;)Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PRIVATE, $method(TestSeq, getTemplateHandle, $InstructionHandle*, $Template*)},
	{"reduce", "()V", nullptr, $PUBLIC, $method(TestSeq, reduce, void)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TestSeq, toString, $String*)},
	{}
};

$ClassInfo _TestSeq_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.TestSeq",
	"java.lang.Object",
	nullptr,
	_TestSeq_FieldInfo_,
	_TestSeq_MethodInfo_
};

$Object* allocate$TestSeq($Class* clazz) {
	return $of($alloc(TestSeq));
}

void TestSeq::init$($List* patterns, $Mode* mode) {
	TestSeq::init$(patterns, -2, mode);
}

void TestSeq::init$($List* patterns, int32_t kernelType, $Mode* mode) {
	$set(this, _patterns, nullptr);
	$set(this, _mode, nullptr);
	$set(this, _default, nullptr);
	$set(this, _start, nullptr);
	$set(this, _patterns, patterns);
	this->_kernelType = kernelType;
	$set(this, _mode, mode);
}

$String* TestSeq::toString() {
	$useLocalCurrentObjectStackCache();
	int32_t count = $nc(this->_patterns)->size();
	$var($StringBuffer, result, $new($StringBuffer));
	for (int32_t i = 0; i < count; ++i) {
		$var($LocationPathPattern, pattern, $cast($LocationPathPattern, $nc(this->_patterns)->get(i)));
		if (i == 0) {
			result->append("Testseq for kernel "_s)->append(this->_kernelType)->append(u'\n');
		}
		result->append("   pattern "_s)->append(i)->append(": "_s)->append($($nc(pattern)->toString()))->append(u'\n');
	}
	return result->toString();
}

$InstructionList* TestSeq::getInstructionList() {
	return this->_instructionList;
}

double TestSeq::getPriority() {
	$useLocalCurrentObjectStackCache();
	$var($Template, template$, ($nc(this->_patterns)->isEmpty()) ? this->_default : $nc(($cast($Pattern, $($nc(this->_patterns)->get(0)))))->getTemplate());
	return $nc(template$)->getPriority();
}

int32_t TestSeq::getPosition() {
	$useLocalCurrentObjectStackCache();
	$var($Template, template$, ($nc(this->_patterns)->isEmpty()) ? this->_default : $nc(($cast($Pattern, $($nc(this->_patterns)->get(0)))))->getTemplate());
	return $nc(template$)->getPosition();
}

void TestSeq::reduce() {
	$useLocalCurrentObjectStackCache();
	$var($List, newPatterns, $new($ArrayList));
	{
		$var($Iterator, i$, $nc(this->_patterns)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($LocationPathPattern, pattern, $cast($LocationPathPattern, i$->next()));
			{
				$nc(pattern)->reduceKernelPattern();
				if (pattern->isWildcard()) {
					$set(this, _default, pattern->getTemplate());
					break;
				} else {
					newPatterns->add(pattern);
				}
			}
		}
	}
	$set(this, _patterns, newPatterns);
}

void TestSeq::findTemplates($Map* templates) {
	$useLocalCurrentObjectStackCache();
	if (this->_default != nullptr) {
		$nc(templates)->put(this->_default, this);
	}
	{
		$var($Iterator, i$, $nc(this->_patterns)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($LocationPathPattern, pattern, $cast($LocationPathPattern, i$->next()));
			{
				$nc(templates)->put($($nc(pattern)->getTemplate()), this);
			}
		}
	}
}

$InstructionHandle* TestSeq::getTemplateHandle($Template* template$) {
	return $nc(this->_mode)->getTemplateInstructionHandle(template$);
}

$LocationPathPattern* TestSeq::getPattern(int32_t n) {
	return $cast($LocationPathPattern, $nc(this->_patterns)->get(n));
}

$InstructionHandle* TestSeq::compile($ClassGenerator* classGen, $MethodGenerator* methodGen, $InstructionHandle* continuation) {
	$useLocalCurrentObjectStackCache();
	if (this->_start != nullptr) {
		return this->_start;
	}
	int32_t count = $nc(this->_patterns)->size();
	if (count == 0) {
		return ($set(this, _start, getTemplateHandle(this->_default)));
	}
	$var($InstructionHandle, fail, (this->_default == nullptr) ? continuation : getTemplateHandle(this->_default));
	for (int32_t n = count - 1; n >= 0; --n) {
		$var($LocationPathPattern, pattern, getPattern(n));
		$var($Template, template$, $nc(pattern)->getTemplate());
		$var($InstructionList, il, $new($InstructionList));
		il->append($($nc(methodGen)->loadCurrentNode()));
		$var($InstructionList, ilist, $nc(methodGen)->getInstructionList(pattern));
		if (ilist == nullptr) {
			$assign(ilist, pattern->compile(classGen, methodGen));
			methodGen->addInstructionList(pattern, ilist);
		}
		$var($InstructionList, copyOfilist, $nc(ilist)->copy());
		$var($FlowList, trueList, pattern->getTrueList());
		if (trueList != nullptr) {
			$assign(trueList, trueList->copyAndRedirect(ilist, copyOfilist));
		}
		$var($FlowList, falseList, pattern->getFalseList());
		if (falseList != nullptr) {
			$assign(falseList, falseList->copyAndRedirect(ilist, copyOfilist));
		}
		il->append(copyOfilist);
		$var($InstructionHandle, gtmpl, getTemplateHandle(template$));
		$var($InstructionHandle, success, il->append(static_cast<$BranchInstruction*>($$new($GOTO_W, gtmpl))));
		if (trueList != nullptr) {
			trueList->backPatch(success);
		}
		if (falseList != nullptr) {
			falseList->backPatch(fail);
		}
		$assign(fail, il->getStart());
		if (this->_instructionList != nullptr) {
			il->append(this->_instructionList);
		}
		$set(this, _instructionList, il);
	}
	return ($set(this, _start, fail));
}

TestSeq::TestSeq() {
}

$Class* TestSeq::load$($String* name, bool initialize) {
	$loadClass(TestSeq, name, initialize, &_TestSeq_ClassInfo_, allocate$TestSeq);
	return class$;
}

$Class* TestSeq::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com