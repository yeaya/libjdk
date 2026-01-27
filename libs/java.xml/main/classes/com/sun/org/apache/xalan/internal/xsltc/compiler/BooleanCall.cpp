#include <com/sun/org/apache/xalan/internal/xsltc/compiler/BooleanCall.h>

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FunctionCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <java/util/List.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $FunctionCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FunctionCall;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _BooleanCall_FieldInfo_[] = {
	{"_arg", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(BooleanCall, _arg)},
	{}
};

$MethodInfo _BooleanCall_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Ljava/util/List;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;>;)V", $PUBLIC, $method(BooleanCall, init$, void, $QName*, $List*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(BooleanCall, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(BooleanCall, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _BooleanCall_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.BooleanCall",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.FunctionCall",
	nullptr,
	_BooleanCall_FieldInfo_,
	_BooleanCall_MethodInfo_
};

$Object* allocate$BooleanCall($Class* clazz) {
	return $of($alloc(BooleanCall));
}

void BooleanCall::init$($QName* fname, $List* arguments) {
	$FunctionCall::init$(fname, arguments);
	$set(this, _arg, nullptr);
	$set(this, _arg, argument(0));
}

$Type* BooleanCall::typeCheck($SymbolTable* stable) {
	$nc(this->_arg)->typeCheck(stable);
	$init($Type);
	return $set(this, _type, $Type::Boolean);
}

void BooleanCall::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$nc(this->_arg)->translate(classGen, methodGen);
	$var($Type, targ, $nc(this->_arg)->getType());
	$init($Type);
	if (!$nc(targ)->identicalTo($Type::Boolean)) {
		$nc(this->_arg)->startIterator(classGen, methodGen);
		targ->translateTo(classGen, methodGen, $Type::Boolean);
	}
}

BooleanCall::BooleanCall() {
}

$Class* BooleanCall::load$($String* name, bool initialize) {
	$loadClass(BooleanCall, name, initialize, &_BooleanCall_ClassInfo_, allocate$BooleanCall);
	return class$;
}

$Class* BooleanCall::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com