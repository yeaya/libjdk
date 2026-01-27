#include <com/sun/org/apache/xalan/internal/xsltc/compiler/If.h>

#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CastExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/BooleanType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <jcpp.h>

#undef NOP
#undef REQUIRED_ATTR_ERR

using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $CastExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CastExpr;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $Instruction = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $BooleanType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::BooleanType;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
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

$FieldInfo _If_FieldInfo_[] = {
	{"_test", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(If, _test)},
	{"_ignore", "Z", nullptr, $PRIVATE, $field(If, _ignore)},
	{}
};

$MethodInfo _If_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(If, init$, void)},
	{"display", "(I)V", nullptr, $PUBLIC, $virtualMethod(If, display, void, int32_t)},
	{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(If, parseContents, void, $Parser*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(If, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(If, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _If_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.If",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction",
	nullptr,
	_If_FieldInfo_,
	_If_MethodInfo_
};

$Object* allocate$If($Class* clazz) {
	return $of($alloc(If));
}

void If::init$() {
	$Instruction::init$();
	this->_ignore = false;
}

void If::display(int32_t indent) {
	this->indent(indent);
	$Util::println("If"_s);
	this->indent(indent + $SyntaxTreeNode::IndentIncrement);
	$nc($System::out)->print("test "_s);
	$Util::println($($nc(this->_test)->toString()));
	displayContents(indent + $SyntaxTreeNode::IndentIncrement);
}

void If::parseContents($Parser* parser) {
	$set(this, _test, $nc(parser)->parseExpression(this, "test"_s, nullptr));
	if ($nc(this->_test)->isDummy()) {
		$init($ErrorMsg);
		reportError(this, parser, $ErrorMsg::REQUIRED_ATTR_ERR, "test"_s);
		return;
	}
	$var($Object, result, $nc(this->_test)->evaluateAtCompileTime());
	if (result != nullptr && $instanceOf($Boolean, result)) {
		this->_ignore = !$nc(($cast($Boolean, result)))->booleanValue();
	}
	parseChildren(parser);
}

$Type* If::typeCheck($SymbolTable* stable) {
	if ($instanceOf($BooleanType, $($nc(this->_test)->typeCheck(stable))) == false) {
		$init($Type);
		$set(this, _test, $new($CastExpr, this->_test, $Type::Boolean));
	}
	if (!this->_ignore) {
		typeCheckContents(stable);
	}
	$init($Type);
	return $Type::Void;
}

void If::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$nc(this->_test)->translateDesynthesized(classGen, methodGen);
	$var($InstructionHandle, truec, $nc(il)->getEnd());
	if (!this->_ignore) {
		translateContents(classGen, methodGen);
	}
	$init($Constants);
	$nc(this->_test)->backPatchFalseList($(il->append($Constants::NOP)));
	$nc(this->_test)->backPatchTrueList($($nc(truec)->getNext()));
}

If::If() {
}

$Class* If::load$($String* name, bool initialize) {
	$loadClass(If, name, initialize, &_If_ClassInfo_, allocate$If);
	return class$;
}

$Class* If::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com