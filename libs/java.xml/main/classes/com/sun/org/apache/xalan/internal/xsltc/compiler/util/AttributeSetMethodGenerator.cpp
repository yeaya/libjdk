#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/AttributeSetMethodGenerator.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/ASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <jcpp.h>

#undef ACC_PRIVATE
#undef CURRENT_INDEX
#undef DOCUMENT_PNAME
#undef DOM_INTF_SIG
#undef INT
#undef ITERATOR_PNAME
#undef NODE_ITERATOR_SIG
#undef NODE_PNAME
#undef PARAM_START_INDEX
#undef TRANSLET_OUTPUT_PNAME
#undef TRANSLET_OUTPUT_SIG
#undef VOID

using $TypeArray = $Array<::com::sun::org::apache::bcel::internal::generic::Type>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ALOAD = ::com::sun::org::apache::bcel::internal::generic::ALOAD;
using $ASTORE = ::com::sun::org::apache::bcel::internal::generic::ASTORE;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $StoreInstruction = ::com::sun::org::apache::bcel::internal::generic::StoreInstruction;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
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

$FieldInfo _AttributeSetMethodGenerator_FieldInfo_[] = {
	{"CURRENT_INDEX", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AttributeSetMethodGenerator, CURRENT_INDEX)},
	{"PARAM_START_INDEX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AttributeSetMethodGenerator, PARAM_START_INDEX)},
	{"argNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AttributeSetMethodGenerator, argNames)},
	{"argTypes", "[Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AttributeSetMethodGenerator, argTypes)},
	{}
};

$MethodInfo _AttributeSetMethodGenerator_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;)V", nullptr, $PUBLIC, $method(AttributeSetMethodGenerator, init$, void, $String*, $ClassGenerator*)},
	{"getLocalIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(AttributeSetMethodGenerator, getLocalIndex, int32_t, $String*)},
	{"loadParameter", "(I)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $method(AttributeSetMethodGenerator, loadParameter, $Instruction*, int32_t)},
	{"storeParameter", "(I)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $method(AttributeSetMethodGenerator, storeParameter, $Instruction*, int32_t)},
	{}
};

$ClassInfo _AttributeSetMethodGenerator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.AttributeSetMethodGenerator",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator",
	nullptr,
	_AttributeSetMethodGenerator_FieldInfo_,
	_AttributeSetMethodGenerator_MethodInfo_
};

$Object* allocate$AttributeSetMethodGenerator($Class* clazz) {
	return $of($alloc(AttributeSetMethodGenerator));
}

$StringArray* AttributeSetMethodGenerator::argNames = nullptr;
$TypeArray* AttributeSetMethodGenerator::argTypes = nullptr;

void AttributeSetMethodGenerator::init$($String* methodName, $ClassGenerator* classGen) {
	$useLocalCurrentObjectStackCache();
	$init($Type);
	$var($Type, var$0, static_cast<$Type*>($Type::VOID));
	$var($TypeArray, var$1, AttributeSetMethodGenerator::argTypes);
	$var($StringArray, var$2, AttributeSetMethodGenerator::argNames);
	$var($String, var$3, methodName);
	$var($String, var$4, $nc(classGen)->getClassName());
	$var($InstructionList, var$5, $new($InstructionList));
	$MethodGenerator::init$($Const::ACC_PRIVATE, var$0, var$1, var$2, var$3, var$4, var$5, $(classGen->getConstantPool()));
}

int32_t AttributeSetMethodGenerator::getLocalIndex($String* name) {
	if ($nc(name)->equals("current"_s)) {
		return AttributeSetMethodGenerator::CURRENT_INDEX;
	}
	return $MethodGenerator::getLocalIndex(name);
}

$Instruction* AttributeSetMethodGenerator::loadParameter(int32_t index) {
	return $new($ALOAD, index + AttributeSetMethodGenerator::PARAM_START_INDEX);
}

$Instruction* AttributeSetMethodGenerator::storeParameter(int32_t index) {
	return $new($ASTORE, index + AttributeSetMethodGenerator::PARAM_START_INDEX);
}

void clinit$AttributeSetMethodGenerator($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(AttributeSetMethodGenerator::argNames, $new($StringArray, 4));
	$assignStatic(AttributeSetMethodGenerator::argTypes, $new($TypeArray, 4));
	{
		$init($Constants);
		$nc(AttributeSetMethodGenerator::argTypes)->set(0, $($Util::getJCRefType($Constants::DOM_INTF_SIG)));
		$nc(AttributeSetMethodGenerator::argTypes)->set(1, $($Util::getJCRefType($Constants::NODE_ITERATOR_SIG)));
		$nc(AttributeSetMethodGenerator::argTypes)->set(2, $($Util::getJCRefType($Constants::TRANSLET_OUTPUT_SIG)));
		$init($Type);
		$nc(AttributeSetMethodGenerator::argTypes)->set(3, $Type::INT);
		$nc(AttributeSetMethodGenerator::argNames)->set(0, $Constants::DOCUMENT_PNAME);
		$nc(AttributeSetMethodGenerator::argNames)->set(1, $Constants::ITERATOR_PNAME);
		$nc(AttributeSetMethodGenerator::argNames)->set(2, $Constants::TRANSLET_OUTPUT_PNAME);
		$nc(AttributeSetMethodGenerator::argNames)->set(3, $Constants::NODE_PNAME);
	}
}

AttributeSetMethodGenerator::AttributeSetMethodGenerator() {
}

$Class* AttributeSetMethodGenerator::load$($String* name, bool initialize) {
	$loadClass(AttributeSetMethodGenerator, name, initialize, &_AttributeSetMethodGenerator_ClassInfo_, clinit$AttributeSetMethodGenerator, allocate$AttributeSetMethodGenerator);
	return class$;
}

$Class* AttributeSetMethodGenerator::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com