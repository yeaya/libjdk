#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/TestGenerator.h>

#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/ASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ILOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/ISTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <jcpp.h>

#undef CONTEXT_NODE_INDEX
#undef CURRENT_NODE_INDEX
#undef INVALID_INDEX
#undef ITERATOR_INDEX

using $TypeArray = $Array<::com::sun::org::apache::bcel::internal::generic::Type>;
using $ALOAD = ::com::sun::org::apache::bcel::internal::generic::ALOAD;
using $ASTORE = ::com::sun::org::apache::bcel::internal::generic::ASTORE;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ILOAD = ::com::sun::org::apache::bcel::internal::generic::ILOAD;
using $ISTORE = ::com::sun::org::apache::bcel::internal::generic::ISTORE;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $StoreInstruction = ::com::sun::org::apache::bcel::internal::generic::StoreInstruction;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
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
								namespace util {

$FieldInfo _TestGenerator_FieldInfo_[] = {
	{"CONTEXT_NODE_INDEX", "I", nullptr, $PRIVATE | $STATIC, $staticField(TestGenerator, CONTEXT_NODE_INDEX)},
	{"CURRENT_NODE_INDEX", "I", nullptr, $PRIVATE | $STATIC, $staticField(TestGenerator, CURRENT_NODE_INDEX)},
	{"ITERATOR_INDEX", "I", nullptr, $PRIVATE | $STATIC, $staticField(TestGenerator, ITERATOR_INDEX)},
	{"_aloadDom", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE, $field(TestGenerator, _aloadDom)},
	{"_iloadCurrent", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(TestGenerator, _iloadCurrent)},
	{"_iloadContext", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(TestGenerator, _iloadContext)},
	{"_istoreCurrent", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(TestGenerator, _istoreCurrent)},
	{"_istoreContext", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(TestGenerator, _istoreContext)},
	{"_astoreIterator", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(TestGenerator, _astoreIterator)},
	{"_aloadIterator", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(TestGenerator, _aloadIterator)},
	{}
};

$MethodInfo _TestGenerator_MethodInfo_[] = {
	{"<init>", "(ILcom/sun/org/apache/bcel/internal/generic/Type;[Lcom/sun/org/apache/bcel/internal/generic/Type;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/InstructionList;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PUBLIC, $method(TestGenerator, init$, void, int32_t, $Type*, $TypeArray*, $StringArray*, $String*, $String*, $InstructionList*, $ConstantPoolGen*)},
	{"getHandlerIndex", "()I", nullptr, $PUBLIC, $method(TestGenerator, getHandlerIndex, int32_t)},
	{"getIteratorIndex", "()I", nullptr, $PUBLIC, $method(TestGenerator, getIteratorIndex, int32_t)},
	{"getLocalIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(TestGenerator, getLocalIndex, int32_t, $String*)},
	{"loadContextNode", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(TestGenerator, loadContextNode, $Instruction*)},
	{"loadCurrentNode", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(TestGenerator, loadCurrentNode, $Instruction*)},
	{"loadDOM", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(TestGenerator, loadDOM, $Instruction*)},
	{"loadIterator", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(TestGenerator, loadIterator, $Instruction*)},
	{"setDomIndex", "(I)V", nullptr, $PUBLIC, $method(TestGenerator, setDomIndex, void, int32_t)},
	{"storeContextNode", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(TestGenerator, storeContextNode, $Instruction*)},
	{"storeCurrentNode", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(TestGenerator, storeCurrentNode, $Instruction*)},
	{"storeIterator", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(TestGenerator, storeIterator, $Instruction*)},
	{}
};

$ClassInfo _TestGenerator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.TestGenerator",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator",
	nullptr,
	_TestGenerator_FieldInfo_,
	_TestGenerator_MethodInfo_
};

$Object* allocate$TestGenerator($Class* clazz) {
	return $of($alloc(TestGenerator));
}

int32_t TestGenerator::CONTEXT_NODE_INDEX = 0;
int32_t TestGenerator::CURRENT_NODE_INDEX = 0;
int32_t TestGenerator::ITERATOR_INDEX = 0;

void TestGenerator::init$(int32_t access_flags, $Type* return_type, $TypeArray* arg_types, $StringArray* arg_names, $String* method_name, $String* class_name, $InstructionList* il, $ConstantPoolGen* cp) {
	$MethodGenerator::init$(access_flags, return_type, arg_types, arg_names, method_name, class_name, il, cp);
	$set(this, _iloadCurrent, $new($ILOAD, TestGenerator::CURRENT_NODE_INDEX));
	$set(this, _istoreCurrent, $new($ISTORE, TestGenerator::CURRENT_NODE_INDEX));
	$set(this, _iloadContext, $new($ILOAD, TestGenerator::CONTEXT_NODE_INDEX));
	$set(this, _istoreContext, $new($ILOAD, TestGenerator::CONTEXT_NODE_INDEX));
	$set(this, _astoreIterator, $new($ASTORE, TestGenerator::ITERATOR_INDEX));
	$set(this, _aloadIterator, $new($ALOAD, TestGenerator::ITERATOR_INDEX));
}

int32_t TestGenerator::getHandlerIndex() {
	return $MethodGenerator::INVALID_INDEX;
}

int32_t TestGenerator::getIteratorIndex() {
	return TestGenerator::ITERATOR_INDEX;
}

void TestGenerator::setDomIndex(int32_t domIndex) {
	$set(this, _aloadDom, $new($ALOAD, domIndex));
}

$Instruction* TestGenerator::loadDOM() {
	return this->_aloadDom;
}

$Instruction* TestGenerator::loadCurrentNode() {
	return this->_iloadCurrent;
}

$Instruction* TestGenerator::loadContextNode() {
	return this->_iloadContext;
}

$Instruction* TestGenerator::storeContextNode() {
	return this->_istoreContext;
}

$Instruction* TestGenerator::storeCurrentNode() {
	return this->_istoreCurrent;
}

$Instruction* TestGenerator::storeIterator() {
	return this->_astoreIterator;
}

$Instruction* TestGenerator::loadIterator() {
	return this->_aloadIterator;
}

int32_t TestGenerator::getLocalIndex($String* name) {
	if ($nc(name)->equals("current"_s)) {
		return TestGenerator::CURRENT_NODE_INDEX;
	} else {
		return $MethodGenerator::getLocalIndex(name);
	}
}

void clinit$TestGenerator($Class* class$) {
	TestGenerator::CONTEXT_NODE_INDEX = 1;
	TestGenerator::CURRENT_NODE_INDEX = 4;
	TestGenerator::ITERATOR_INDEX = 6;
}

TestGenerator::TestGenerator() {
}

$Class* TestGenerator::load$($String* name, bool initialize) {
	$loadClass(TestGenerator, name, initialize, &_TestGenerator_ClassInfo_, clinit$TestGenerator, allocate$TestGenerator);
	return class$;
}

$Class* TestGenerator::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com