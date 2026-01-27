#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AlternativePattern.h>

#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/GOTO.h>
#include <com/sun/org/apache/bcel/internal/generic/GotoInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FlowList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Pattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <jcpp.h>

using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $GOTO = ::com::sun::org::apache::bcel::internal::generic::GOTO;
using $GotoInstruction = ::com::sun::org::apache::bcel::internal::generic::GotoInstruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $FlowList = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $Pattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
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

$FieldInfo _AlternativePattern_FieldInfo_[] = {
	{"_left", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Pattern;", nullptr, $PRIVATE | $FINAL, $field(AlternativePattern, _left)},
	{"_right", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Pattern;", nullptr, $PRIVATE | $FINAL, $field(AlternativePattern, _right)},
	{}
};

$MethodInfo _AlternativePattern_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Pattern;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Pattern;)V", nullptr, $PUBLIC, $method(AlternativePattern, init$, void, $Pattern*, $Pattern*)},
	{"getLeft", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Pattern;", nullptr, $PUBLIC, $method(AlternativePattern, getLeft, $Pattern*)},
	{"getPriority", "()D", nullptr, $PUBLIC, $virtualMethod(AlternativePattern, getPriority, double)},
	{"getRight", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Pattern;", nullptr, $PUBLIC, $method(AlternativePattern, getRight, $Pattern*)},
	{"setParser", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(AlternativePattern, setParser, void, $Parser*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AlternativePattern, toString, $String*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(AlternativePattern, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(AlternativePattern, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _AlternativePattern_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.AlternativePattern",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Pattern",
	nullptr,
	_AlternativePattern_FieldInfo_,
	_AlternativePattern_MethodInfo_
};

$Object* allocate$AlternativePattern($Class* clazz) {
	return $of($alloc(AlternativePattern));
}

void AlternativePattern::init$($Pattern* left, $Pattern* right) {
	$Pattern::init$();
	$set(this, _left, left);
	$set(this, _right, right);
}

void AlternativePattern::setParser($Parser* parser) {
	$Pattern::setParser(parser);
	$nc(this->_left)->setParser(parser);
	$nc(this->_right)->setParser(parser);
}

$Pattern* AlternativePattern::getLeft() {
	return this->_left;
}

$Pattern* AlternativePattern::getRight() {
	return this->_right;
}

$Type* AlternativePattern::typeCheck($SymbolTable* stable) {
	$nc(this->_left)->typeCheck(stable);
	$nc(this->_right)->typeCheck(stable);
	return nullptr;
}

double AlternativePattern::getPriority() {
	double left = $nc(this->_left)->getPriority();
	double right = $nc(this->_right)->getPriority();
	if (left < right) {
		return (left);
	} else {
		return (right);
	}
}

$String* AlternativePattern::toString() {
	return $str({"alternative("_s, this->_left, ", "_s, this->_right, $$str(u')')});
}

void AlternativePattern::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$nc(this->_left)->translate(classGen, methodGen);
	$var($InstructionHandle, gotot, $nc(il)->append(static_cast<$BranchInstruction*>($$new($GOTO, nullptr))));
	il->append($(methodGen->loadContextNode()));
	$nc(this->_right)->translate(classGen, methodGen);
	$nc($nc(this->_left)->_trueList)->backPatch(gotot);
	$nc($nc(this->_left)->_falseList)->backPatch($($nc(gotot)->getNext()));
	$nc(this->_trueList)->append($($nc($nc(this->_right)->_trueList)->add(gotot)));
	$nc(this->_falseList)->append($nc(this->_right)->_falseList);
}

AlternativePattern::AlternativePattern() {
}

$Class* AlternativePattern::load$($String* name, bool initialize) {
	$loadClass(AlternativePattern, name, initialize, &_AlternativePattern_ClassInfo_, allocate$AlternativePattern);
	return class$;
}

$Class* AlternativePattern::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com