#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SimpleAttributeValue.h>

#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValue.h>
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
using $AttributeValue = ::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValue;
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

$FieldInfo _SimpleAttributeValue_FieldInfo_[] = {
	{"_value", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SimpleAttributeValue, _value)},
	{}
};

$MethodInfo _SimpleAttributeValue_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SimpleAttributeValue, init$, void, $String*)},
	{"contextDependent", "()Z", nullptr, $PROTECTED, $virtualMethod(SimpleAttributeValue, contextDependent, bool)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SimpleAttributeValue, toString, $String*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(SimpleAttributeValue, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(SimpleAttributeValue, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _SimpleAttributeValue_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.SimpleAttributeValue",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.AttributeValue",
	nullptr,
	_SimpleAttributeValue_FieldInfo_,
	_SimpleAttributeValue_MethodInfo_
};

$Object* allocate$SimpleAttributeValue($Class* clazz) {
	return $of($alloc(SimpleAttributeValue));
}

void SimpleAttributeValue::init$($String* value) {
	$AttributeValue::init$();
	$set(this, _value, value);
}

$Type* SimpleAttributeValue::typeCheck($SymbolTable* stable) {
	$init($Type);
	return $set(this, _type, $Type::String);
}

$String* SimpleAttributeValue::toString() {
	return this->_value;
}

bool SimpleAttributeValue::contextDependent() {
	return false;
}

void SimpleAttributeValue::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$nc(il)->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_value)));
}

SimpleAttributeValue::SimpleAttributeValue() {
}

$Class* SimpleAttributeValue::load$($String* name, bool initialize) {
	$loadClass(SimpleAttributeValue, name, initialize, &_SimpleAttributeValue_ClassInfo_, allocate$SimpleAttributeValue);
	return class$;
}

$Class* SimpleAttributeValue::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com