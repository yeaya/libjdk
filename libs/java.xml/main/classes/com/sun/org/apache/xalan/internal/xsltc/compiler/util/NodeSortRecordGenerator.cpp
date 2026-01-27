#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeSortRecordGenerator.h>

#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <jcpp.h>

#undef TRANSLET_INDEX

using $ALOAD = ::com::sun::org::apache::bcel::internal::generic::ALOAD;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $Stylesheet = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
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

$FieldInfo _NodeSortRecordGenerator_FieldInfo_[] = {
	{"TRANSLET_INDEX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NodeSortRecordGenerator, TRANSLET_INDEX)},
	{"_aloadTranslet", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(NodeSortRecordGenerator, _aloadTranslet)},
	{}
};

$MethodInfo _NodeSortRecordGenerator_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I[Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;)V", nullptr, $PUBLIC, $method(NodeSortRecordGenerator, init$, void, $String*, $String*, $String*, int32_t, $StringArray*, $Stylesheet*)},
	{"isExternal", "()Z", nullptr, $PUBLIC, $virtualMethod(NodeSortRecordGenerator, isExternal, bool)},
	{"loadTranslet", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(NodeSortRecordGenerator, loadTranslet, $Instruction*)},
	{}
};

$ClassInfo _NodeSortRecordGenerator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.NodeSortRecordGenerator",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.ClassGenerator",
	nullptr,
	_NodeSortRecordGenerator_FieldInfo_,
	_NodeSortRecordGenerator_MethodInfo_
};

$Object* allocate$NodeSortRecordGenerator($Class* clazz) {
	return $of($alloc(NodeSortRecordGenerator));
}

void NodeSortRecordGenerator::init$($String* className, $String* superClassName, $String* fileName, int32_t accessFlags, $StringArray* interfaces, $Stylesheet* stylesheet) {
	$ClassGenerator::init$(className, superClassName, fileName, accessFlags, interfaces, stylesheet);
	$set(this, _aloadTranslet, $new($ALOAD, NodeSortRecordGenerator::TRANSLET_INDEX));
}

$Instruction* NodeSortRecordGenerator::loadTranslet() {
	return this->_aloadTranslet;
}

bool NodeSortRecordGenerator::isExternal() {
	return true;
}

NodeSortRecordGenerator::NodeSortRecordGenerator() {
}

$Class* NodeSortRecordGenerator::load$($String* name, bool initialize) {
	$loadClass(NodeSortRecordGenerator, name, initialize, &_NodeSortRecordGenerator_ClassInfo_, allocate$NodeSortRecordGenerator);
	return class$;
}

$Class* NodeSortRecordGenerator::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com