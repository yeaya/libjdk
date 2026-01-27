#include <com/sun/org/apache/xalan/internal/xsltc/compiler/When.h>

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

#undef ERROR
#undef REQUIRED_ATTR_ERR
#undef STRAY_WHEN_ERR

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

$FieldInfo _When_FieldInfo_[] = {
	{"_test", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(When, _test)},
	{"_ignore", "Z", nullptr, $PRIVATE, $field(When, _ignore)},
	{}
};

$MethodInfo _When_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(When, init$, void)},
	{"display", "(I)V", nullptr, $PUBLIC, $virtualMethod(When, display, void, int32_t)},
	{"getTest", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PUBLIC, $method(When, getTest, $Expression*)},
	{"ignore", "()Z", nullptr, $PUBLIC, $method(When, ignore, bool)},
	{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(When, parseContents, void, $Parser*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(When, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(When, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _When_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.When",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction",
	nullptr,
	_When_FieldInfo_,
	_When_MethodInfo_
};

$Object* allocate$When($Class* clazz) {
	return $of($alloc(When));
}

void When::init$() {
	$Instruction::init$();
	this->_ignore = false;
}

void When::display(int32_t indent) {
	this->indent(indent);
	$Util::println("When"_s);
	this->indent(indent + $SyntaxTreeNode::IndentIncrement);
	$nc($System::out)->print("test "_s);
	$Util::println($($nc(this->_test)->toString()));
	displayContents(indent + $SyntaxTreeNode::IndentIncrement);
}

$Expression* When::getTest() {
	return this->_test;
}

bool When::ignore() {
	return (this->_ignore);
}

void When::parseContents($Parser* parser) {
	$set(this, _test, $nc(parser)->parseExpression(this, "test"_s, nullptr));
	$var($Object, result, $nc(this->_test)->evaluateAtCompileTime());
	if (result != nullptr && $instanceOf($Boolean, result)) {
		this->_ignore = !$nc(($cast($Boolean, result)))->booleanValue();
	}
	parseChildren(parser);
	if ($nc(this->_test)->isDummy()) {
		$init($ErrorMsg);
		reportError(this, parser, $ErrorMsg::REQUIRED_ATTR_ERR, "test"_s);
	}
}

$Type* When::typeCheck($SymbolTable* stable) {
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

void When::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$init($ErrorMsg);
	$var($ErrorMsg, msg, $new($ErrorMsg, $ErrorMsg::STRAY_WHEN_ERR, static_cast<$SyntaxTreeNode*>(this)));
	$nc($(getParser()))->reportError($Constants::ERROR, msg);
}

When::When() {
}

$Class* When::load$($String* name, bool initialize) {
	$loadClass(When, name, initialize, &_When_ClassInfo_, allocate$When);
	return class$;
}

$Class* When::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com