#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/CompareGenerator.h>

#include <com/sun/org/apache/bcel/internal/generic/ACONST_NULL.h>
#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/ASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ILOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/ISTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableGen.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <jcpp.h>

#undef CURRENT_INDEX
#undef DOM_INDEX
#undef INVALID_INDEX
#undef ITERATOR_INDEX
#undef LAST_INDEX
#undef LEVEL_INDEX
#undef NODE_ITERATOR_SIG
#undef TRANSLET_INDEX

using $TypeArray = $Array<::com::sun::org::apache::bcel::internal::generic::Type>;
using $ACONST_NULL = ::com::sun::org::apache::bcel::internal::generic::ACONST_NULL;
using $ALOAD = ::com::sun::org::apache::bcel::internal::generic::ALOAD;
using $ASTORE = ::com::sun::org::apache::bcel::internal::generic::ASTORE;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ILOAD = ::com::sun::org::apache::bcel::internal::generic::ILOAD;
using $ISTORE = ::com::sun::org::apache::bcel::internal::generic::ISTORE;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $LocalVariableGen = ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $StoreInstruction = ::com::sun::org::apache::bcel::internal::generic::StoreInstruction;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
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

$FieldInfo _CompareGenerator_FieldInfo_[] = {
	{"DOM_INDEX", "I", nullptr, $PRIVATE | $STATIC, $staticField(CompareGenerator, DOM_INDEX)},
	{"CURRENT_INDEX", "I", nullptr, $PRIVATE | $STATIC, $staticField(CompareGenerator, CURRENT_INDEX)},
	{"LEVEL_INDEX", "I", nullptr, $PRIVATE | $STATIC, $staticField(CompareGenerator, LEVEL_INDEX)},
	{"TRANSLET_INDEX", "I", nullptr, $PRIVATE | $STATIC, $staticField(CompareGenerator, TRANSLET_INDEX)},
	{"LAST_INDEX", "I", nullptr, $PRIVATE | $STATIC, $staticField(CompareGenerator, LAST_INDEX)},
	{"ITERATOR_INDEX", "I", nullptr, $PRIVATE, $field(CompareGenerator, ITERATOR_INDEX)},
	{"_iloadCurrent", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(CompareGenerator, _iloadCurrent)},
	{"_istoreCurrent", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(CompareGenerator, _istoreCurrent)},
	{"_aloadDom", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(CompareGenerator, _aloadDom)},
	{"_iloadLast", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(CompareGenerator, _iloadLast)},
	{"_aloadIterator", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(CompareGenerator, _aloadIterator)},
	{"_astoreIterator", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(CompareGenerator, _astoreIterator)},
	{}
};

$MethodInfo _CompareGenerator_MethodInfo_[] = {
	{"<init>", "(ILcom/sun/org/apache/bcel/internal/generic/Type;[Lcom/sun/org/apache/bcel/internal/generic/Type;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/InstructionList;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PUBLIC, $method(CompareGenerator, init$, void, int32_t, $Type*, $TypeArray*, $StringArray*, $String*, $String*, $InstructionList*, $ConstantPoolGen*)},
	{"getHandlerIndex", "()I", nullptr, $PUBLIC, $method(CompareGenerator, getHandlerIndex, int32_t)},
	{"getIteratorIndex", "()I", nullptr, $PUBLIC, $method(CompareGenerator, getIteratorIndex, int32_t)},
	{"getLocalIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(CompareGenerator, getLocalIndex, int32_t, $String*)},
	{"loadCurrentNode", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(CompareGenerator, loadCurrentNode, $Instruction*)},
	{"loadDOM", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(CompareGenerator, loadDOM, $Instruction*)},
	{"loadIterator", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(CompareGenerator, loadIterator, $Instruction*)},
	{"loadLastNode", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $method(CompareGenerator, loadLastNode, $Instruction*)},
	{"storeCurrentNode", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(CompareGenerator, storeCurrentNode, $Instruction*)},
	{"storeIterator", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(CompareGenerator, storeIterator, $Instruction*)},
	{}
};

$ClassInfo _CompareGenerator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.CompareGenerator",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator",
	nullptr,
	_CompareGenerator_FieldInfo_,
	_CompareGenerator_MethodInfo_
};

$Object* allocate$CompareGenerator($Class* clazz) {
	return $of($alloc(CompareGenerator));
}

int32_t CompareGenerator::DOM_INDEX = 0;
int32_t CompareGenerator::CURRENT_INDEX = 0;
int32_t CompareGenerator::LEVEL_INDEX = 0;
int32_t CompareGenerator::TRANSLET_INDEX = 0;
int32_t CompareGenerator::LAST_INDEX = 0;

void CompareGenerator::init$(int32_t access_flags, $Type* return_type, $TypeArray* arg_types, $StringArray* arg_names, $String* method_name, $String* class_name, $InstructionList* il, $ConstantPoolGen* cp) {
	$useLocalCurrentObjectStackCache();
	$MethodGenerator::init$(access_flags, return_type, arg_types, arg_names, method_name, class_name, il, cp);
	this->ITERATOR_INDEX = 6;
	$set(this, _iloadCurrent, $new($ILOAD, CompareGenerator::CURRENT_INDEX));
	$set(this, _istoreCurrent, $new($ISTORE, CompareGenerator::CURRENT_INDEX));
	$set(this, _aloadDom, $new($ALOAD, CompareGenerator::DOM_INDEX));
	$set(this, _iloadLast, $new($ILOAD, CompareGenerator::LAST_INDEX));
	$init($Constants);
	$var($LocalVariableGen, iterator, addLocalVariable("iterator"_s, $($Util::getJCRefType($Constants::NODE_ITERATOR_SIG)), nullptr, nullptr));
	this->ITERATOR_INDEX = $nc(iterator)->getIndex();
	$set(this, _aloadIterator, $new($ALOAD, this->ITERATOR_INDEX));
	$set(this, _astoreIterator, $new($ASTORE, this->ITERATOR_INDEX));
	$nc(il)->append(static_cast<$Instruction*>($$new($ACONST_NULL)));
	il->append($(storeIterator()));
}

$Instruction* CompareGenerator::loadLastNode() {
	return this->_iloadLast;
}

$Instruction* CompareGenerator::loadCurrentNode() {
	return this->_iloadCurrent;
}

$Instruction* CompareGenerator::storeCurrentNode() {
	return this->_istoreCurrent;
}

$Instruction* CompareGenerator::loadDOM() {
	return this->_aloadDom;
}

int32_t CompareGenerator::getHandlerIndex() {
	return $MethodGenerator::INVALID_INDEX;
}

int32_t CompareGenerator::getIteratorIndex() {
	return $MethodGenerator::INVALID_INDEX;
}

$Instruction* CompareGenerator::storeIterator() {
	return this->_astoreIterator;
}

$Instruction* CompareGenerator::loadIterator() {
	return this->_aloadIterator;
}

int32_t CompareGenerator::getLocalIndex($String* name) {
	if ($nc(name)->equals("current"_s)) {
		return CompareGenerator::CURRENT_INDEX;
	}
	return $MethodGenerator::getLocalIndex(name);
}

void clinit$CompareGenerator($Class* class$) {
	CompareGenerator::DOM_INDEX = 1;
	CompareGenerator::CURRENT_INDEX = 2;
	CompareGenerator::LEVEL_INDEX = 3;
	CompareGenerator::TRANSLET_INDEX = 4;
	CompareGenerator::LAST_INDEX = 5;
}

CompareGenerator::CompareGenerator() {
}

$Class* CompareGenerator::load$($String* name, bool initialize) {
	$loadClass(CompareGenerator, name, initialize, &_CompareGenerator_ClassInfo_, clinit$CompareGenerator, allocate$CompareGenerator);
	return class$;
}

$Class* CompareGenerator::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com