#include <com/sun/org/apache/xalan/internal/xsltc/compiler/IntExpr.h>

#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
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

using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
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

$FieldInfo _IntExpr_FieldInfo_[] = {
	{"_value", "I", nullptr, $PRIVATE | $FINAL, $field(IntExpr, _value)},
	{}
};

$MethodInfo _IntExpr_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(IntExpr, init$, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IntExpr, toString, $String*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(IntExpr, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(IntExpr, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _IntExpr_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.IntExpr",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Expression",
	nullptr,
	_IntExpr_FieldInfo_,
	_IntExpr_MethodInfo_
};

$Object* allocate$IntExpr($Class* clazz) {
	return $of($alloc(IntExpr));
}

void IntExpr::init$(int32_t value) {
	$Expression::init$();
	this->_value = value;
}

$Type* IntExpr::typeCheck($SymbolTable* stable) {
	$init($Type);
	return $set(this, _type, $Type::Int);
}

$String* IntExpr::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"int-expr("_s, $$str(this->_value), $$str(u')')});
}

void IntExpr::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$nc(il)->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_value)));
}

IntExpr::IntExpr() {
}

$Class* IntExpr::load$($String* name, bool initialize) {
	$loadClass(IntExpr, name, initialize, &_IntExpr_ClassInfo_, allocate$IntExpr);
	return class$;
}

$Class* IntExpr::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com