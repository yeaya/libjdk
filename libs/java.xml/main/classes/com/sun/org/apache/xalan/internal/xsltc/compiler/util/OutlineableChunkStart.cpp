#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/OutlineableChunkStart.h>

#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MarkerInstruction.h>
#include <jcpp.h>

#undef OUTLINEABLECHUNKSTART

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

$FieldInfo _OutlineableChunkStart_FieldInfo_[] = {
	{"OUTLINEABLECHUNKSTART", "Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OutlineableChunkStart, OUTLINEABLECHUNKSTART)},
	{}
};

$MethodInfo _OutlineableChunkStart_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(OutlineableChunkStart, init$, void)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(OutlineableChunkStart, getName, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(OutlineableChunkStart, toString, $String*)},
	{"toString", "(Z)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(OutlineableChunkStart, toString, $String*, bool)},
	{}
};

$ClassInfo _OutlineableChunkStart_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.OutlineableChunkStart",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.MarkerInstruction",
	nullptr,
	_OutlineableChunkStart_FieldInfo_,
	_OutlineableChunkStart_MethodInfo_
};

$Object* allocate$OutlineableChunkStart($Class* clazz) {
	return $of($alloc(OutlineableChunkStart));
}

$Instruction* OutlineableChunkStart::OUTLINEABLECHUNKSTART = nullptr;

void OutlineableChunkStart::init$() {
	$MarkerInstruction::init$();
}

$String* OutlineableChunkStart::getName() {
	return OutlineableChunkStart::class$->getName();
}

$String* OutlineableChunkStart::toString() {
	return getName();
}

$String* OutlineableChunkStart::toString(bool verbose) {
	return getName();
}

void clinit$OutlineableChunkStart($Class* class$) {
	$assignStatic(OutlineableChunkStart::OUTLINEABLECHUNKSTART, $new(OutlineableChunkStart));
}

OutlineableChunkStart::OutlineableChunkStart() {
}

$Class* OutlineableChunkStart::load$($String* name, bool initialize) {
	$loadClass(OutlineableChunkStart, name, initialize, &_OutlineableChunkStart_ClassInfo_, clinit$OutlineableChunkStart, allocate$OutlineableChunkStart);
	return class$;
}

$Class* OutlineableChunkStart::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com