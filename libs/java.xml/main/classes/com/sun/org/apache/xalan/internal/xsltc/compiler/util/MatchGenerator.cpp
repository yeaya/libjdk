#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MatchGenerator.h>

#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
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

#undef CURRENT_INDEX
#undef INVALID_INDEX

using $TypeArray = $Array<::com::sun::org::apache::bcel::internal::generic::Type>;
using $ALOAD = ::com::sun::org::apache::bcel::internal::generic::ALOAD;
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

$FieldInfo _MatchGenerator_FieldInfo_[] = {
	{"CURRENT_INDEX", "I", nullptr, $PRIVATE | $STATIC, $staticField(MatchGenerator, CURRENT_INDEX)},
	{"_iteratorIndex", "I", nullptr, $PRIVATE, $field(MatchGenerator, _iteratorIndex)},
	{"_iloadCurrent", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(MatchGenerator, _iloadCurrent)},
	{"_istoreCurrent", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(MatchGenerator, _istoreCurrent)},
	{"_aloadDom", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE, $field(MatchGenerator, _aloadDom)},
	{}
};

$MethodInfo _MatchGenerator_MethodInfo_[] = {
	{"<init>", "(ILcom/sun/org/apache/bcel/internal/generic/Type;[Lcom/sun/org/apache/bcel/internal/generic/Type;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/InstructionList;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PUBLIC, $method(MatchGenerator, init$, void, int32_t, $Type*, $TypeArray*, $StringArray*, $String*, $String*, $InstructionList*, $ConstantPoolGen*)},
	{"getHandlerIndex", "()I", nullptr, $PUBLIC, $method(MatchGenerator, getHandlerIndex, int32_t)},
	{"getIteratorIndex", "()I", nullptr, $PUBLIC, $method(MatchGenerator, getIteratorIndex, int32_t)},
	{"getLocalIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(MatchGenerator, getLocalIndex, int32_t, $String*)},
	{"loadCurrentNode", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(MatchGenerator, loadCurrentNode, $Instruction*)},
	{"loadDOM", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(MatchGenerator, loadDOM, $Instruction*)},
	{"setDomIndex", "(I)V", nullptr, $PUBLIC, $method(MatchGenerator, setDomIndex, void, int32_t)},
	{"setIteratorIndex", "(I)V", nullptr, $PUBLIC, $method(MatchGenerator, setIteratorIndex, void, int32_t)},
	{"storeCurrentNode", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(MatchGenerator, storeCurrentNode, $Instruction*)},
	{}
};

$ClassInfo _MatchGenerator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.MatchGenerator",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator",
	nullptr,
	_MatchGenerator_FieldInfo_,
	_MatchGenerator_MethodInfo_
};

$Object* allocate$MatchGenerator($Class* clazz) {
	return $of($alloc(MatchGenerator));
}

int32_t MatchGenerator::CURRENT_INDEX = 0;

void MatchGenerator::init$(int32_t access_flags, $Type* return_type, $TypeArray* arg_types, $StringArray* arg_names, $String* method_name, $String* class_name, $InstructionList* il, $ConstantPoolGen* cp) {
	$MethodGenerator::init$(access_flags, return_type, arg_types, arg_names, method_name, class_name, il, cp);
	this->_iteratorIndex = $MethodGenerator::INVALID_INDEX;
	$set(this, _iloadCurrent, $new($ILOAD, MatchGenerator::CURRENT_INDEX));
	$set(this, _istoreCurrent, $new($ISTORE, MatchGenerator::CURRENT_INDEX));
}

$Instruction* MatchGenerator::loadCurrentNode() {
	return this->_iloadCurrent;
}

$Instruction* MatchGenerator::storeCurrentNode() {
	return this->_istoreCurrent;
}

int32_t MatchGenerator::getHandlerIndex() {
	return $MethodGenerator::INVALID_INDEX;
}

$Instruction* MatchGenerator::loadDOM() {
	return this->_aloadDom;
}

void MatchGenerator::setDomIndex(int32_t domIndex) {
	$set(this, _aloadDom, $new($ALOAD, domIndex));
}

int32_t MatchGenerator::getIteratorIndex() {
	return this->_iteratorIndex;
}

void MatchGenerator::setIteratorIndex(int32_t iteratorIndex) {
	this->_iteratorIndex = iteratorIndex;
}

int32_t MatchGenerator::getLocalIndex($String* name) {
	if ($nc(name)->equals("current"_s)) {
		return MatchGenerator::CURRENT_INDEX;
	}
	return $MethodGenerator::getLocalIndex(name);
}

void clinit$MatchGenerator($Class* class$) {
	MatchGenerator::CURRENT_INDEX = 1;
}

MatchGenerator::MatchGenerator() {
}

$Class* MatchGenerator::load$($String* name, bool initialize) {
	$loadClass(MatchGenerator, name, initialize, &_MatchGenerator_ClassInfo_, clinit$MatchGenerator, allocate$MatchGenerator);
	return class$;
}

$Class* MatchGenerator::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com