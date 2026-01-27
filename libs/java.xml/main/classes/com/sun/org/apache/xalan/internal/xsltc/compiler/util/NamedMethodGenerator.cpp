#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NamedMethodGenerator.h>

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

#undef CURRENT_INDEX
#undef PARAM_START_INDEX

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

$FieldInfo _NamedMethodGenerator_FieldInfo_[] = {
	{"CURRENT_INDEX", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(NamedMethodGenerator, CURRENT_INDEX)},
	{"PARAM_START_INDEX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NamedMethodGenerator, PARAM_START_INDEX)},
	{}
};

$MethodInfo _NamedMethodGenerator_MethodInfo_[] = {
	{"<init>", "(ILcom/sun/org/apache/bcel/internal/generic/Type;[Lcom/sun/org/apache/bcel/internal/generic/Type;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/InstructionList;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PUBLIC, $method(NamedMethodGenerator, init$, void, int32_t, $Type*, $TypeArray*, $StringArray*, $String*, $String*, $InstructionList*, $ConstantPoolGen*)},
	{"getLocalIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(NamedMethodGenerator, getLocalIndex, int32_t, $String*)},
	{"loadParameter", "(I)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $method(NamedMethodGenerator, loadParameter, $Instruction*, int32_t)},
	{"storeParameter", "(I)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $method(NamedMethodGenerator, storeParameter, $Instruction*, int32_t)},
	{}
};

$ClassInfo _NamedMethodGenerator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.NamedMethodGenerator",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator",
	nullptr,
	_NamedMethodGenerator_FieldInfo_,
	_NamedMethodGenerator_MethodInfo_
};

$Object* allocate$NamedMethodGenerator($Class* clazz) {
	return $of($alloc(NamedMethodGenerator));
}

void NamedMethodGenerator::init$(int32_t access_flags, $Type* return_type, $TypeArray* arg_types, $StringArray* arg_names, $String* method_name, $String* class_name, $InstructionList* il, $ConstantPoolGen* cp) {
	$MethodGenerator::init$(access_flags, return_type, arg_types, arg_names, method_name, class_name, il, cp);
}

int32_t NamedMethodGenerator::getLocalIndex($String* name) {
	if ($nc(name)->equals("current"_s)) {
		return NamedMethodGenerator::CURRENT_INDEX;
	}
	return $MethodGenerator::getLocalIndex(name);
}

$Instruction* NamedMethodGenerator::loadParameter(int32_t index) {
	return $new($ALOAD, index + NamedMethodGenerator::PARAM_START_INDEX);
}

$Instruction* NamedMethodGenerator::storeParameter(int32_t index) {
	return $new($ASTORE, index + NamedMethodGenerator::PARAM_START_INDEX);
}

NamedMethodGenerator::NamedMethodGenerator() {
}

$Class* NamedMethodGenerator::load$($String* name, bool initialize) {
	$loadClass(NamedMethodGenerator, name, initialize, &_NamedMethodGenerator_ClassInfo_, allocate$NamedMethodGenerator);
	return class$;
}

$Class* NamedMethodGenerator::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com