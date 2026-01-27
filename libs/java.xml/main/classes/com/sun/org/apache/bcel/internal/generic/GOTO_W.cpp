#include <com/sun/org/apache/bcel/internal/generic/GOTO_W.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/GotoInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/UnconditionalBranch.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <com/sun/org/apache/bcel/internal/util/ByteSequence.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef GOTO_W

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $GotoInstruction = ::com::sun::org::apache::bcel::internal::generic::GotoInstruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $UnconditionalBranch = ::com::sun::org::apache::bcel::internal::generic::UnconditionalBranch;
using $Visitor = ::com::sun::org::apache::bcel::internal::generic::Visitor;
using $ByteSequence = ::com::sun::org::apache::bcel::internal::util::ByteSequence;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$MethodInfo _GOTO_W_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(GOTO_W, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(GOTO_W, init$, void, $InstructionHandle*)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(GOTO_W, accept, void, $Visitor*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(GOTO_W, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"initFromFile", "(Lcom/sun/org/apache/bcel/internal/util/ByteSequence;Z)V", nullptr, $PROTECTED, $virtualMethod(GOTO_W, initFromFile, void, $ByteSequence*, bool), "java.io.IOException"},
	{}
};

$ClassInfo _GOTO_W_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.GOTO_W",
	"com.sun.org.apache.bcel.internal.generic.GotoInstruction",
	nullptr,
	nullptr,
	_GOTO_W_MethodInfo_
};

$Object* allocate$GOTO_W($Class* clazz) {
	return $of($alloc(GOTO_W));
}

void GOTO_W::init$() {
	$GotoInstruction::init$();
}

void GOTO_W::init$($InstructionHandle* target) {
	$GotoInstruction::init$($Const::GOTO_W, target);
	$GotoInstruction::setLength(5);
}

void GOTO_W::dump($DataOutputStream* out) {
	$GotoInstruction::setIndex(getTargetOffset());
	$nc(out)->writeByte($GotoInstruction::getOpcode());
	out->writeInt($GotoInstruction::getIndex());
}

void GOTO_W::initFromFile($ByteSequence* bytes, bool wide) {
	$GotoInstruction::setIndex($nc(bytes)->readInt());
	$GotoInstruction::setLength(5);
}

void GOTO_W::accept($Visitor* v) {
	$nc(v)->visitUnconditionalBranch(this);
	v->visitBranchInstruction(this);
	v->visitGotoInstruction(this);
	v->visitGOTO_W(this);
}

GOTO_W::GOTO_W() {
}

$Class* GOTO_W::load$($String* name, bool initialize) {
	$loadClass(GOTO_W, name, initialize, &_GOTO_W_ClassInfo_, allocate$GOTO_W);
	return class$;
}

$Class* GOTO_W::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com