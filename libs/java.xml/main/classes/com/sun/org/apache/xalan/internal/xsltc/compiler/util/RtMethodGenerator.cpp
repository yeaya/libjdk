#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/RtMethodGenerator.h>

#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/ASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <jcpp.h>

#undef HANDLER_INDEX
#undef INVALID_INDEX

using $TypeArray = $Array<::com::sun::org::apache::bcel::internal::generic::Type>;
using $ALOAD = ::com::sun::org::apache::bcel::internal::generic::ALOAD;
using $ASTORE = ::com::sun::org::apache::bcel::internal::generic::ASTORE;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
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

$FieldInfo _RtMethodGenerator_FieldInfo_[] = {
	{"HANDLER_INDEX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RtMethodGenerator, HANDLER_INDEX)},
	{"_astoreHandler", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(RtMethodGenerator, _astoreHandler)},
	{"_aloadHandler", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(RtMethodGenerator, _aloadHandler)},
	{}
};

$MethodInfo _RtMethodGenerator_MethodInfo_[] = {
	{"<init>", "(ILcom/sun/org/apache/bcel/internal/generic/Type;[Lcom/sun/org/apache/bcel/internal/generic/Type;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/InstructionList;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PUBLIC, $method(RtMethodGenerator, init$, void, int32_t, $Type*, $TypeArray*, $StringArray*, $String*, $String*, $InstructionList*, $ConstantPoolGen*)},
	{"getIteratorIndex", "()I", nullptr, $PUBLIC, $method(RtMethodGenerator, getIteratorIndex, int32_t)},
	{"getLocalIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(RtMethodGenerator, getLocalIndex, int32_t, $String*)},
	{"loadHandler", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $FINAL, $virtualMethod(RtMethodGenerator, loadHandler, $Instruction*)},
	{"storeHandler", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $FINAL, $virtualMethod(RtMethodGenerator, storeHandler, $Instruction*)},
	{}
};

$ClassInfo _RtMethodGenerator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.RtMethodGenerator",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator",
	nullptr,
	_RtMethodGenerator_FieldInfo_,
	_RtMethodGenerator_MethodInfo_
};

$Object* allocate$RtMethodGenerator($Class* clazz) {
	return $of($alloc(RtMethodGenerator));
}

void RtMethodGenerator::init$(int32_t access_flags, $Type* return_type, $TypeArray* arg_types, $StringArray* arg_names, $String* method_name, $String* class_name, $InstructionList* il, $ConstantPoolGen* cp) {
	$MethodGenerator::init$(access_flags, return_type, arg_types, arg_names, method_name, class_name, il, cp);
	$set(this, _astoreHandler, $new($ASTORE, RtMethodGenerator::HANDLER_INDEX));
	$set(this, _aloadHandler, $new($ALOAD, RtMethodGenerator::HANDLER_INDEX));
}

int32_t RtMethodGenerator::getIteratorIndex() {
	return $MethodGenerator::INVALID_INDEX;
}

$Instruction* RtMethodGenerator::storeHandler() {
	return this->_astoreHandler;
}

$Instruction* RtMethodGenerator::loadHandler() {
	return this->_aloadHandler;
}

int32_t RtMethodGenerator::getLocalIndex($String* name) {
	return $MethodGenerator::INVALID_INDEX;
}

RtMethodGenerator::RtMethodGenerator() {
}

$Class* RtMethodGenerator::load$($String* name, bool initialize) {
	$loadClass(RtMethodGenerator, name, initialize, &_RtMethodGenerator_ClassInfo_, allocate$RtMethodGenerator);
	return class$;
}

$Class* RtMethodGenerator::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com