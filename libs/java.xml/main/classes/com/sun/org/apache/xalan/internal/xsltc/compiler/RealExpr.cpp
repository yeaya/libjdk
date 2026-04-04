#include <com/sun/org/apache/xalan/internal/xsltc/compiler/RealExpr.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <jcpp.h>

using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
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

void RealExpr::init$(double value) {
	$Expression::init$();
	this->_value = value;
}

$Type* RealExpr::typeCheck($SymbolTable* stable) {
	$init($Type);
	return $set(this, _type, $Type::Real);
}

$String* RealExpr::toString() {
	$useLocalObjectStack();
	return $str({"real-expr("_s, $$str(this->_value), $$str(u')')});
}

void RealExpr::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalObjectStack();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$nc(il)->append($$new($PUSH, cpg, this->_value));
}

RealExpr::RealExpr() {
}

$Class* RealExpr::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"_value", "D", nullptr, $PRIVATE, $field(RealExpr, _value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(D)V", nullptr, $PUBLIC, $method(RealExpr, init$, void, double)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RealExpr, toString, $String*)},
		{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(RealExpr, translate, void, $ClassGenerator*, $MethodGenerator*)},
		{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(RealExpr, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.compiler.RealExpr",
		"com.sun.org.apache.xalan.internal.xsltc.compiler.Expression",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RealExpr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RealExpr);
	});
	return class$;
}

$Class* RealExpr::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com