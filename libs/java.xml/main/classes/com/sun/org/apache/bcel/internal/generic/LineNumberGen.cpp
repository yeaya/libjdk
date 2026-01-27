#include <com/sun/org/apache/bcel/internal/generic/LineNumberGen.h>

#include <com/sun/org/apache/bcel/internal/classfile/LineNumber.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGenException.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionTargeter.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Error.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $LineNumber = ::com::sun::org::apache::bcel::internal::classfile::LineNumber;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $ClassGenException = ::com::sun::org::apache::bcel::internal::generic::ClassGenException;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionTargeter = ::com::sun::org::apache::bcel::internal::generic::InstructionTargeter;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _LineNumberGen_FieldInfo_[] = {
	{"ih", "Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PRIVATE, $field(LineNumberGen, ih)},
	{"srcLine", "I", nullptr, $PRIVATE, $field(LineNumberGen, srcLine)},
	{}
};

$MethodInfo _LineNumberGen_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;I)V", nullptr, $PUBLIC, $method(LineNumberGen, init$, void, $InstructionHandle*, int32_t)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(LineNumberGen, clone, $Object*)},
	{"containsTarget", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)Z", nullptr, $PUBLIC, $virtualMethod(LineNumberGen, containsTarget, bool, $InstructionHandle*)},
	{"getInstruction", "()Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $virtualMethod(LineNumberGen, getInstruction, $InstructionHandle*)},
	{"getLineNumber", "()Lcom/sun/org/apache/bcel/internal/classfile/LineNumber;", nullptr, $PUBLIC, $virtualMethod(LineNumberGen, getLineNumber, $LineNumber*)},
	{"getSourceLine", "()I", nullptr, $PUBLIC, $virtualMethod(LineNumberGen, getSourceLine, int32_t)},
	{"setInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $virtualMethod(LineNumberGen, setInstruction, void, $InstructionHandle*)},
	{"setSourceLine", "(I)V", nullptr, $PUBLIC, $virtualMethod(LineNumberGen, setSourceLine, void, int32_t)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateTarget", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $virtualMethod(LineNumberGen, updateTarget, void, $InstructionHandle*, $InstructionHandle*)},
	{}
};

$ClassInfo _LineNumberGen_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.LineNumberGen",
	"java.lang.Object",
	"com.sun.org.apache.bcel.internal.generic.InstructionTargeter,java.lang.Cloneable",
	_LineNumberGen_FieldInfo_,
	_LineNumberGen_MethodInfo_
};

$Object* allocate$LineNumberGen($Class* clazz) {
	return $of($alloc(LineNumberGen));
}

int32_t LineNumberGen::hashCode() {
	 return this->$InstructionTargeter::hashCode();
}

bool LineNumberGen::equals(Object$* arg0) {
	 return this->$InstructionTargeter::equals(arg0);
}

$String* LineNumberGen::toString() {
	 return this->$InstructionTargeter::toString();
}

void LineNumberGen::finalize() {
	this->$InstructionTargeter::finalize();
}

void LineNumberGen::init$($InstructionHandle* ih, int32_t src_line) {
	setInstruction(ih);
	setSourceLine(src_line);
}

bool LineNumberGen::containsTarget($InstructionHandle* ih) {
	return this->ih == ih;
}

void LineNumberGen::updateTarget($InstructionHandle* old_ih, $InstructionHandle* new_ih) {
	if (old_ih != this->ih) {
		$throwNew($ClassGenException, $$str({"Not targeting "_s, old_ih, ", but "_s, this->ih, "}"_s}));
	}
	setInstruction(new_ih);
}

$LineNumber* LineNumberGen::getLineNumber() {
	return $new($LineNumber, $nc(this->ih)->getPosition(), this->srcLine);
}

void LineNumberGen::setInstruction($InstructionHandle* instructionHandle) {
	$Objects::requireNonNull($of(instructionHandle), "instructionHandle"_s);
	$BranchInstruction::notifyTarget(this->ih, instructionHandle, this);
	$set(this, ih, instructionHandle);
}

$Object* LineNumberGen::clone() {
	try {
		return $of($InstructionTargeter::clone());
	} catch ($CloneNotSupportedException& e) {
		$throwNew($Error, "Clone Not Supported"_s);
	}
	$shouldNotReachHere();
}

$InstructionHandle* LineNumberGen::getInstruction() {
	return this->ih;
}

void LineNumberGen::setSourceLine(int32_t src_line) {
	this->srcLine = src_line;
}

int32_t LineNumberGen::getSourceLine() {
	return this->srcLine;
}

LineNumberGen::LineNumberGen() {
}

$Class* LineNumberGen::load$($String* name, bool initialize) {
	$loadClass(LineNumberGen, name, initialize, &_LineNumberGen_ClassInfo_, allocate$LineNumberGen);
	return class$;
}

$Class* LineNumberGen::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com