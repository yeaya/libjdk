#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Otherwise.h>

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
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

#undef ERROR
#undef STRAY_OTHERWISE_ERR

using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
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
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$MethodInfo _Otherwise_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Otherwise, init$, void)},
	{"display", "(I)V", nullptr, $PUBLIC, $virtualMethod(Otherwise, display, void, int32_t)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(Otherwise, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(Otherwise, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _Otherwise_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Otherwise",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction",
	nullptr,
	nullptr,
	_Otherwise_MethodInfo_
};

$Object* allocate$Otherwise($Class* clazz) {
	return $of($alloc(Otherwise));
}

void Otherwise::init$() {
	$Instruction::init$();
}

void Otherwise::display(int32_t indent) {
	this->indent(indent);
	$Util::println("Otherwise"_s);
	this->indent(indent + $SyntaxTreeNode::IndentIncrement);
	displayContents(indent + $SyntaxTreeNode::IndentIncrement);
}

$Type* Otherwise::typeCheck($SymbolTable* stable) {
	typeCheckContents(stable);
	$init($Type);
	return $Type::Void;
}

void Otherwise::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($Parser, parser, getParser());
	$init($ErrorMsg);
	$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::STRAY_OTHERWISE_ERR, static_cast<$SyntaxTreeNode*>(this)));
	$nc(parser)->reportError($Constants::ERROR, err);
}

Otherwise::Otherwise() {
}

$Class* Otherwise::load$($String* name, bool initialize) {
	$loadClass(Otherwise, name, initialize, &_Otherwise_ClassInfo_, allocate$Otherwise);
	return class$;
}

$Class* Otherwise::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com