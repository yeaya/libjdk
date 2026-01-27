#include <com/sun/org/apache/xalan/internal/xsltc/compiler/NamespaceUriCall.h>

#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/NameBase.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef DOM_INTF
#undef STRING_SIG

using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $NameBase = ::com::sun::org::apache::xalan::internal::xsltc::compiler::NameBase;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $ClassInfo = ::java::lang::ClassInfo;
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

$MethodInfo _NamespaceUriCall_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;)V", nullptr, $PUBLIC, $method(NamespaceUriCall, init$, void, $QName*)},
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Ljava/util/List;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;>;)V", $PUBLIC, $method(NamespaceUriCall, init$, void, $QName*, $List*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(NamespaceUriCall, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{}
};

$ClassInfo _NamespaceUriCall_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.NamespaceUriCall",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.NameBase",
	nullptr,
	nullptr,
	_NamespaceUriCall_MethodInfo_
};

$Object* allocate$NamespaceUriCall($Class* clazz) {
	return $of($alloc(NamespaceUriCall));
}

void NamespaceUriCall::init$($QName* fname) {
	$NameBase::init$(fname);
}

void NamespaceUriCall::init$($QName* fname, $List* arguments) {
	$NameBase::init$(fname, arguments);
}

void NamespaceUriCall::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	int32_t getNamespace = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, "getNamespaceName"_s, $$str({"(I)"_s, $Constants::STRING_SIG}));
	$NameBase::translate(classGen, methodGen);
	$nc(il)->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, getNamespace, 2)));
}

NamespaceUriCall::NamespaceUriCall() {
}

$Class* NamespaceUriCall::load$($String* name, bool initialize) {
	$loadClass(NamespaceUriCall, name, initialize, &_NamespaceUriCall_ClassInfo_, allocate$NamespaceUriCall);
	return class$;
}

$Class* NamespaceUriCall::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com