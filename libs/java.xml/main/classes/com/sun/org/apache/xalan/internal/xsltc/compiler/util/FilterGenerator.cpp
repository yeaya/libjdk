#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/FilterGenerator.h>

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

$FieldInfo _FilterGenerator_FieldInfo_[] = {
	{"TRANSLET_INDEX", "I", nullptr, $PRIVATE | $STATIC, $staticField(FilterGenerator, TRANSLET_INDEX)},
	{"_aloadTranslet", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PRIVATE | $FINAL, $field(FilterGenerator, _aloadTranslet)},
	{}
};

$MethodInfo _FilterGenerator_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I[Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;)V", nullptr, $PUBLIC, $method(FilterGenerator, init$, void, $String*, $String*, $String*, int32_t, $StringArray*, $Stylesheet*)},
	{"isExternal", "()Z", nullptr, $PUBLIC, $virtualMethod(FilterGenerator, isExternal, bool)},
	{"loadTranslet", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $FINAL, $virtualMethod(FilterGenerator, loadTranslet, $Instruction*)},
	{}
};

$ClassInfo _FilterGenerator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.FilterGenerator",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.ClassGenerator",
	nullptr,
	_FilterGenerator_FieldInfo_,
	_FilterGenerator_MethodInfo_
};

$Object* allocate$FilterGenerator($Class* clazz) {
	return $of($alloc(FilterGenerator));
}

int32_t FilterGenerator::TRANSLET_INDEX = 0;

void FilterGenerator::init$($String* className, $String* superClassName, $String* fileName, int32_t accessFlags, $StringArray* interfaces, $Stylesheet* stylesheet) {
	$ClassGenerator::init$(className, superClassName, fileName, accessFlags, interfaces, stylesheet);
	$set(this, _aloadTranslet, $new($ALOAD, FilterGenerator::TRANSLET_INDEX));
}

$Instruction* FilterGenerator::loadTranslet() {
	return this->_aloadTranslet;
}

bool FilterGenerator::isExternal() {
	return true;
}

void clinit$FilterGenerator($Class* class$) {
	FilterGenerator::TRANSLET_INDEX = 5;
}

FilterGenerator::FilterGenerator() {
}

$Class* FilterGenerator::load$($String* name, bool initialize) {
	$loadClass(FilterGenerator, name, initialize, &_FilterGenerator_ClassInfo_, clinit$FilterGenerator, allocate$FilterGenerator);
	return class$;
}

$Class* FilterGenerator::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com