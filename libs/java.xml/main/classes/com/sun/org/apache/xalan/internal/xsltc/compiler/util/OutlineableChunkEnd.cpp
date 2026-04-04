#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/OutlineableChunkEnd.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MarkerInstruction.h>
#include <jcpp.h>

#undef OUTLINEABLECHUNKEND

using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $MarkerInstruction = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MarkerInstruction;
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

$Instruction* OutlineableChunkEnd::OUTLINEABLECHUNKEND = nullptr;

void OutlineableChunkEnd::init$() {
	$MarkerInstruction::init$();
}

$String* OutlineableChunkEnd::getName() {
	return OutlineableChunkEnd::class$->getName();
}

$String* OutlineableChunkEnd::toString() {
	return getName();
}

$String* OutlineableChunkEnd::toString(bool verbose) {
	return getName();
}

void OutlineableChunkEnd::clinit$($Class* clazz) {
	$assignStatic(OutlineableChunkEnd::OUTLINEABLECHUNKEND, $new(OutlineableChunkEnd));
}

OutlineableChunkEnd::OutlineableChunkEnd() {
}

$Class* OutlineableChunkEnd::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"OUTLINEABLECHUNKEND", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OutlineableChunkEnd, OUTLINEABLECHUNKEND)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(OutlineableChunkEnd, init$, void)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(OutlineableChunkEnd, getName, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(OutlineableChunkEnd, toString, $String*)},
		{"toString", "(Z)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(OutlineableChunkEnd, toString, $String*, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.compiler.util.OutlineableChunkEnd",
		"com.sun.org.apache.xalan.internal.xsltc.compiler.util.MarkerInstruction",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(OutlineableChunkEnd, name, initialize, &classInfo$$, OutlineableChunkEnd::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(OutlineableChunkEnd);
	});
	return class$;
}

$Class* OutlineableChunkEnd::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com