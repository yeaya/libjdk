#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Pattern.h>

#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FlowList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <jcpp.h>

using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $FlowList = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $MethodType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodType;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
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

$MethodInfo _Pattern_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Pattern, init$, void)},
	{"backPatchFalseList", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Pattern, backPatchFalseList, void, $InstructionHandle*)},
	{"backPatchTrueList", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Pattern, backPatchTrueList, void, $InstructionHandle*)},
	{"desynthesize", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Pattern, desynthesize, void, $ClassGenerator*, $MethodGenerator*)},
	{"evaluateAtCompileTime", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Pattern, evaluateAtCompileTime, $Object*)},
	{"getFalseList", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/FlowList;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Pattern, getFalseList, $FlowList*)},
	{"getPriority", "()D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Pattern, getPriority, double)},
	{"getTrueList", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/FlowList;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Pattern, getTrueList, $FlowList*)},
	{"getType", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Pattern, getType, $Type*)},
	{"hasLastCall", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Pattern, hasLastCall, bool)},
	{"hasPositionCall", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Pattern, hasPositionCall, bool)},
	{"lookupPrimop", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodType;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodType;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Pattern, lookupPrimop, $MethodType*, $SymbolTable*, $String*, $MethodType*)},
	{"startIterator", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Pattern, startIterator, void, $ClassGenerator*, $MethodGenerator*)},
	{"synthesize", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Pattern, synthesize, void, $ClassGenerator*, $MethodGenerator*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"translateDesynthesized", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Pattern, translateDesynthesized, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Pattern_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Pattern",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Expression",
	nullptr,
	nullptr,
	_Pattern_MethodInfo_
};

$Object* allocate$Pattern($Class* clazz) {
	return $of($alloc(Pattern));
}

$Type* Pattern::typeCheck($SymbolTable* stable) {
	 return this->$Expression::typeCheck(stable);
}

void Pattern::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	this->$Expression::translate(classGen, methodGen);
}

void Pattern::init$() {
	$Expression::init$();
}

$MethodType* Pattern::lookupPrimop($SymbolTable* stable, $String* op, $MethodType* ctype) {
	return $Expression::lookupPrimop(stable, op, ctype);
}

void Pattern::backPatchTrueList($InstructionHandle* ih) {
	$Expression::backPatchTrueList(ih);
}

void Pattern::backPatchFalseList($InstructionHandle* ih) {
	$Expression::backPatchFalseList(ih);
}

$FlowList* Pattern::getTrueList() {
	return $Expression::getTrueList();
}

$FlowList* Pattern::getFalseList() {
	return $Expression::getFalseList();
}

void Pattern::desynthesize($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$Expression::desynthesize(classGen, methodGen);
}

void Pattern::synthesize($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$Expression::synthesize(classGen, methodGen);
}

void Pattern::startIterator($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$Expression::startIterator(classGen, methodGen);
}

void Pattern::translateDesynthesized($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$Expression::translateDesynthesized(classGen, methodGen);
}

$Object* Pattern::evaluateAtCompileTime() {
	return $of($Expression::evaluateAtCompileTime());
}

bool Pattern::hasLastCall() {
	return $Expression::hasLastCall();
}

bool Pattern::hasPositionCall() {
	return $Expression::hasPositionCall();
}

$Type* Pattern::getType() {
	return $Expression::getType();
}

Pattern::Pattern() {
}

$Class* Pattern::load$($String* name, bool initialize) {
	$loadClass(Pattern, name, initialize, &_Pattern_ClassInfo_, allocate$Pattern);
	return class$;
}

$Class* Pattern::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com