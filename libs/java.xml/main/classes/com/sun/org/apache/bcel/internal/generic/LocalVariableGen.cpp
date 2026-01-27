#include <com/sun/org/apache/bcel/internal/generic/LocalVariableGen.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/LocalVariable.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGenException.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionTargeter.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Error.h>
#include <jcpp.h>

#undef MAX_SHORT

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $LocalVariable = ::com::sun::org::apache::bcel::internal::classfile::LocalVariable;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $ClassGenException = ::com::sun::org::apache::bcel::internal::generic::ClassGenException;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionTargeter = ::com::sun::org::apache::bcel::internal::generic::InstructionTargeter;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _LocalVariableGen_FieldInfo_[] = {
	{"index", "I", nullptr, $PRIVATE, $field(LocalVariableGen, index)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(LocalVariableGen, name)},
	{"type", "Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PRIVATE, $field(LocalVariableGen, type)},
	{"start", "Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PRIVATE, $field(LocalVariableGen, start)},
	{"end", "Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PRIVATE, $field(LocalVariableGen, end)},
	{"origIndex", "I", nullptr, $PRIVATE, $field(LocalVariableGen, origIndex)},
	{"liveToEnd", "Z", nullptr, $PRIVATE, $field(LocalVariableGen, liveToEnd)},
	{}
};

$MethodInfo _LocalVariableGen_MethodInfo_[] = {
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(ILjava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/Type;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(LocalVariableGen, init$, void, int32_t, $String*, $Type*, $InstructionHandle*, $InstructionHandle*)},
	{"<init>", "(ILjava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/Type;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;I)V", nullptr, $PUBLIC, $method(LocalVariableGen, init$, void, int32_t, $String*, $Type*, $InstructionHandle*, $InstructionHandle*, int32_t)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(LocalVariableGen, clone, $Object*)},
	{"containsTarget", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)Z", nullptr, $PUBLIC, $virtualMethod(LocalVariableGen, containsTarget, bool, $InstructionHandle*)},
	{"dispose", "()V", nullptr, 0, $virtualMethod(LocalVariableGen, dispose, void)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(LocalVariableGen, equals, bool, Object$*)},
	{"getEnd", "()Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $virtualMethod(LocalVariableGen, getEnd, $InstructionHandle*)},
	{"getIndex", "()I", nullptr, $PUBLIC, $virtualMethod(LocalVariableGen, getIndex, int32_t)},
	{"getLiveToEnd", "()Z", nullptr, $PUBLIC, $virtualMethod(LocalVariableGen, getLiveToEnd, bool)},
	{"getLocalVariable", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/classfile/LocalVariable;", nullptr, $PUBLIC, $virtualMethod(LocalVariableGen, getLocalVariable, $LocalVariable*, $ConstantPoolGen*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocalVariableGen, getName, $String*)},
	{"getOrigIndex", "()I", nullptr, $PUBLIC, $virtualMethod(LocalVariableGen, getOrigIndex, int32_t)},
	{"getStart", "()Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $virtualMethod(LocalVariableGen, getStart, $InstructionHandle*)},
	{"getType", "()Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(LocalVariableGen, getType, $Type*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(LocalVariableGen, hashCode, int32_t)},
	{"setEnd", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $virtualMethod(LocalVariableGen, setEnd, void, $InstructionHandle*)},
	{"setIndex", "(I)V", nullptr, $PUBLIC, $virtualMethod(LocalVariableGen, setIndex, void, int32_t)},
	{"setLiveToEnd", "(Z)V", nullptr, $PUBLIC, $virtualMethod(LocalVariableGen, setLiveToEnd, void, bool)},
	{"setName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(LocalVariableGen, setName, void, $String*)},
	{"setStart", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $virtualMethod(LocalVariableGen, setStart, void, $InstructionHandle*)},
	{"setType", "(Lcom/sun/org/apache/bcel/internal/generic/Type;)V", nullptr, $PUBLIC, $virtualMethod(LocalVariableGen, setType, void, $Type*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocalVariableGen, toString, $String*)},
	{"updateTarget", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $virtualMethod(LocalVariableGen, updateTarget, void, $InstructionHandle*, $InstructionHandle*)},
	{}
};

$ClassInfo _LocalVariableGen_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.LocalVariableGen",
	"java.lang.Object",
	"com.sun.org.apache.bcel.internal.generic.InstructionTargeter,com.sun.org.apache.bcel.internal.generic.NamedAndTyped,java.lang.Cloneable",
	_LocalVariableGen_FieldInfo_,
	_LocalVariableGen_MethodInfo_
};

$Object* allocate$LocalVariableGen($Class* clazz) {
	return $of($alloc(LocalVariableGen));
}

void LocalVariableGen::finalize() {
	this->$InstructionTargeter::finalize();
}

void LocalVariableGen::init$(int32_t index, $String* name, $Type* type, $InstructionHandle* start, $InstructionHandle* end) {
	$useLocalCurrentObjectStackCache();
	if ((index < 0) || (index > $Const::MAX_SHORT)) {
		$throwNew($ClassGenException, $$str({"Invalid index index: "_s, $$str(index)}));
	}
	$set(this, name, name);
	$set(this, type, type);
	this->index = index;
	setStart(start);
	setEnd(end);
	this->origIndex = index;
	this->liveToEnd = end == nullptr;
}

void LocalVariableGen::init$(int32_t index, $String* name, $Type* type, $InstructionHandle* start, $InstructionHandle* end, int32_t origIndex) {
	LocalVariableGen::init$(index, name, type, start, end);
	this->origIndex = origIndex;
}

$LocalVariable* LocalVariableGen::getLocalVariable($ConstantPoolGen* cp) {
	$useLocalCurrentObjectStackCache();
	int32_t start_pc = 0;
	int32_t length = 0;
	if ((this->start != nullptr) && (this->end != nullptr)) {
		start_pc = $nc(this->start)->getPosition();
		length = $nc(this->end)->getPosition() - start_pc;
		if (($nc(this->end)->getNext() == nullptr) && this->liveToEnd) {
			length += $nc($($nc(this->end)->getInstruction()))->getLength();
		}
	}
	int32_t name_index = $nc(cp)->addUtf8(this->name);
	int32_t signature_index = cp->addUtf8($($nc(this->type)->getSignature()));
	return $new($LocalVariable, start_pc, length, name_index, signature_index, this->index, $(cp->getConstantPool()), this->origIndex);
}

void LocalVariableGen::setIndex(int32_t index) {
	this->index = index;
}

int32_t LocalVariableGen::getIndex() {
	return this->index;
}

int32_t LocalVariableGen::getOrigIndex() {
	return this->origIndex;
}

void LocalVariableGen::setLiveToEnd(bool live_to_end) {
	this->liveToEnd = live_to_end;
}

bool LocalVariableGen::getLiveToEnd() {
	return this->liveToEnd;
}

void LocalVariableGen::setName($String* name) {
	$set(this, name, name);
}

$String* LocalVariableGen::getName() {
	return this->name;
}

void LocalVariableGen::setType($Type* type) {
	$set(this, type, type);
}

$Type* LocalVariableGen::getType() {
	return this->type;
}

$InstructionHandle* LocalVariableGen::getStart() {
	return this->start;
}

$InstructionHandle* LocalVariableGen::getEnd() {
	return this->end;
}

void LocalVariableGen::setStart($InstructionHandle* start) {
	$BranchInstruction::notifyTarget(this->start, start, this);
	$set(this, start, start);
}

void LocalVariableGen::setEnd($InstructionHandle* end) {
	$BranchInstruction::notifyTarget(this->end, end, this);
	$set(this, end, end);
}

void LocalVariableGen::updateTarget($InstructionHandle* old_ih, $InstructionHandle* new_ih) {
	bool targeted = false;
	if (this->start == old_ih) {
		targeted = true;
		setStart(new_ih);
	}
	if (this->end == old_ih) {
		targeted = true;
		setEnd(new_ih);
	}
	if (!targeted) {
		$throwNew($ClassGenException, $$str({"Not targeting "_s, old_ih, ", but {"_s, this->start, ", "_s, this->end, "}"_s}));
	}
}

void LocalVariableGen::dispose() {
	setStart(nullptr);
	setEnd(nullptr);
}

bool LocalVariableGen::containsTarget($InstructionHandle* ih) {
	return (this->start == ih) || (this->end == ih);
}

int32_t LocalVariableGen::hashCode() {
	int32_t var$0 = $nc(this->name)->hashCode();
	return var$0 ^ $nc(this->type)->hashCode();
}

bool LocalVariableGen::equals(Object$* o) {
	if (!($instanceOf(LocalVariableGen, o))) {
		return false;
	}
	$var(LocalVariableGen, l, $cast(LocalVariableGen, o));
	return ($nc(l)->index == this->index) && (l->start == this->start) && (l->end == this->end);
}

$String* LocalVariableGen::toString() {
	return $str({"LocalVariableGen("_s, this->name, ", "_s, this->type, ", "_s, this->start, ", "_s, this->end, ")"_s});
}

$Object* LocalVariableGen::clone() {
	try {
		return $of($InstructionTargeter::clone());
	} catch ($CloneNotSupportedException& e) {
		$throwNew($Error, "Clone Not Supported"_s);
	}
	$shouldNotReachHere();
}

LocalVariableGen::LocalVariableGen() {
}

$Class* LocalVariableGen::load$($String* name, bool initialize) {
	$loadClass(LocalVariableGen, name, initialize, &_LocalVariableGen_ClassInfo_, allocate$LocalVariableGen);
	return class$;
}

$Class* LocalVariableGen::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com