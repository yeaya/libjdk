#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeCounterGenerator.h>
#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <jcpp.h>

using $ALOAD = ::com::sun::org::apache::bcel::internal::generic::ALOAD;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
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

void NodeCounterGenerator::init$($String* className, $String* superClassName, $String* fileName, int32_t accessFlags, $StringArray* interfaces, $Stylesheet* stylesheet) {
	$ClassGenerator::init$(className, superClassName, fileName, accessFlags, interfaces, stylesheet);
}

void NodeCounterGenerator::setTransletIndex(int32_t index) {
	$set(this, _aloadTranslet, $new($ALOAD, index));
}

$Instruction* NodeCounterGenerator::loadTranslet() {
	return this->_aloadTranslet;
}

bool NodeCounterGenerator::isExternal() {
	return true;
}

NodeCounterGenerator::NodeCounterGenerator() {
}

$Class* NodeCounterGenerator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"_aloadTranslet", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE, $field(NodeCounterGenerator, _aloadTranslet)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I[Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;)V", nullptr, $PUBLIC, $method(NodeCounterGenerator, init$, void, $String*, $String*, $String*, int32_t, $StringArray*, $Stylesheet*)},
		{"isExternal", "()Z", nullptr, $PUBLIC, $virtualMethod(NodeCounterGenerator, isExternal, bool)},
		{"loadTranslet", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(NodeCounterGenerator, loadTranslet, $Instruction*)},
		{"setTransletIndex", "(I)V", nullptr, $PUBLIC, $method(NodeCounterGenerator, setTransletIndex, void, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.compiler.util.NodeCounterGenerator",
		"com.sun.org.apache.xalan.internal.xsltc.compiler.util.ClassGenerator",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NodeCounterGenerator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(NodeCounterGenerator));
	});
	return class$;
}

$Class* NodeCounterGenerator::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com