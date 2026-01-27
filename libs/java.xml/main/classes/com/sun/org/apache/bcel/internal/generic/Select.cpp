#include <com/sun/org/apache/bcel/internal/generic/Select.h>

#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGenException.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionTargeter.h>
#include <com/sun/org/apache/bcel/internal/util/ByteSequence.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

using $InstructionHandleArray = $Array<::com::sun::org::apache::bcel::internal::generic::InstructionHandle>;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $ClassGenException = ::com::sun::org::apache::bcel::internal::generic::ClassGenException;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionTargeter = ::com::sun::org::apache::bcel::internal::generic::InstructionTargeter;
using $ByteSequence = ::com::sun::org::apache::bcel::internal::util::ByteSequence;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _Select_FieldInfo_[] = {
	{"match", "[I", nullptr, $PRIVATE, $field(Select, match)},
	{"indices", "[I", nullptr, $PRIVATE, $field(Select, indices)},
	{"targets", "[Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PRIVATE, $field(Select, targets)},
	{"fixed_length", "I", nullptr, $PRIVATE, $field(Select, fixed_length)},
	{"match_length", "I", nullptr, $PRIVATE, $field(Select, match_length)},
	{"padding", "I", nullptr, $PRIVATE, $field(Select, padding)},
	{}
};

$MethodInfo _Select_MethodInfo_[] = {
	{"*consumeStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, 0, $method(Select, init$, void)},
	{"<init>", "(S[I[Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, 0, $method(Select, init$, void, int16_t, $ints*, $InstructionHandleArray*, $InstructionHandle*)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(Select, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{"containsTarget", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)Z", nullptr, $PUBLIC, $virtualMethod(Select, containsTarget, bool, $InstructionHandle*)},
	{"dispose", "()V", nullptr, 0, $virtualMethod(Select, dispose, void)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(Select, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getFixed_length", "()I", nullptr, $FINAL, $method(Select, getFixed_length, int32_t)},
	{"getIndices", "()[I", nullptr, $PUBLIC, $virtualMethod(Select, getIndices, $ints*)},
	{"getIndices", "(I)I", nullptr, $FINAL, $method(Select, getIndices, int32_t, int32_t)},
	{"getMatch", "(I)I", nullptr, $FINAL, $method(Select, getMatch, int32_t, int32_t)},
	{"getMatch_length", "()I", nullptr, $FINAL, $method(Select, getMatch_length, int32_t)},
	{"getMatchs", "()[I", nullptr, $PUBLIC, $virtualMethod(Select, getMatchs, $ints*)},
	{"getPadding", "()I", nullptr, $FINAL, $method(Select, getPadding, int32_t)},
	{"getTarget", "(I)Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $FINAL, $method(Select, getTarget, $InstructionHandle*, int32_t)},
	{"getTargets", "()[Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $virtualMethod(Select, getTargets, $InstructionHandleArray*)},
	{"initFromFile", "(Lcom/sun/org/apache/bcel/internal/util/ByteSequence;Z)V", nullptr, $PROTECTED, $virtualMethod(Select, initFromFile, void, $ByteSequence*, bool), "java.io.IOException"},
	{"*produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC},
	{"setFixed_length", "(I)V", nullptr, $FINAL, $method(Select, setFixed_length, void, int32_t)},
	{"setIndices", "([I)V", nullptr, $FINAL, $method(Select, setIndices, void, $ints*)},
	{"setIndices", "(II)I", nullptr, $FINAL, $method(Select, setIndices, int32_t, int32_t, int32_t)},
	{"setMatch", "(II)V", nullptr, $FINAL, $method(Select, setMatch, void, int32_t, int32_t)},
	{"setMatch_length", "(I)I", nullptr, $FINAL, $method(Select, setMatch_length, int32_t, int32_t)},
	{"setMatches", "([I)V", nullptr, $FINAL, $method(Select, setMatches, void, $ints*)},
	{"setTarget", "(ILcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $virtualMethod(Select, setTarget, void, int32_t, $InstructionHandle*)},
	{"setTargets", "([Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $FINAL, $method(Select, setTargets, void, $InstructionHandleArray*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "(Z)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Select, toString, $String*, bool)},
	{"updatePosition", "(II)I", nullptr, $PROTECTED, $virtualMethod(Select, updatePosition, int32_t, int32_t, int32_t)},
	{"updateTarget", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $virtualMethod(Select, updateTarget, void, $InstructionHandle*, $InstructionHandle*)},
	{}
};

$ClassInfo _Select_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.Select",
	"com.sun.org.apache.bcel.internal.generic.BranchInstruction",
	"com.sun.org.apache.bcel.internal.generic.VariableLengthInstruction,com.sun.org.apache.bcel.internal.generic.StackConsumer,com.sun.org.apache.bcel.internal.generic.StackProducer",
	_Select_FieldInfo_,
	_Select_MethodInfo_
};

$Object* allocate$Select($Class* clazz) {
	return $of($alloc(Select));
}

$String* Select::toString() {
	 return this->$BranchInstruction::toString();
}

int32_t Select::consumeStack($ConstantPoolGen* cpg) {
	 return this->$BranchInstruction::consumeStack(cpg);
}

int32_t Select::produceStack($ConstantPoolGen* cpg) {
	 return this->$BranchInstruction::produceStack(cpg);
}

bool Select::equals(Object$* that) {
	 return this->$BranchInstruction::equals(that);
}

int32_t Select::hashCode() {
	 return this->$BranchInstruction::hashCode();
}

void Select::finalize() {
	this->$BranchInstruction::finalize();
}

void Select::init$() {
	$BranchInstruction::init$();
	this->padding = 0;
}

void Select::init$(int16_t opcode, $ints* match, $InstructionHandleArray* targets, $InstructionHandle* defaultTarget) {
	$useLocalCurrentObjectStackCache();
	$BranchInstruction::init$(opcode, nullptr);
	this->padding = 0;
	$set(this, match, match);
	$set(this, targets, targets);
	setTarget(defaultTarget);
	{
		$var($InstructionHandleArray, arr$, targets);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($InstructionHandle, target2, arr$->get(i$));
			{
				notifyTarget(nullptr, target2, this);
			}
		}
	}
	if ((this->match_length = $nc(match)->length) != $nc(targets)->length) {
		$throwNew($ClassGenException, $$str({"Match and target array have not the same length: Match length: "_s, $$str(match->length), " Target length: "_s, $$str(targets->length)}));
	}
	$set(this, indices, $new($ints, this->match_length));
}

int32_t Select::updatePosition(int32_t offset, int32_t max_offset) {
	setPosition(getPosition() + offset);
	int16_t old_length = (int16_t)$BranchInstruction::getLength();
	this->padding = (4 - ((getPosition() + 1) % 4)) % 4;
	$BranchInstruction::setLength((int16_t)(this->fixed_length + this->padding));
	return $BranchInstruction::getLength() - old_length;
}

void Select::dump($DataOutputStream* out) {
	$nc(out)->writeByte($BranchInstruction::getOpcode());
	for (int32_t i = 0; i < this->padding; ++i) {
		out->writeByte(0);
	}
	$BranchInstruction::setIndex(getTargetOffset());
	out->writeInt($BranchInstruction::getIndex());
}

void Select::initFromFile($ByteSequence* bytes, bool wide) {
	this->padding = (4 - ($nc(bytes)->getIndex() % 4)) % 4;
	for (int32_t i = 0; i < this->padding; ++i) {
		bytes->readByte();
	}
	$BranchInstruction::setIndex(bytes->readInt());
}

$String* Select::toString(bool verbose) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder, $($BranchInstruction::toString(verbose))));
	if (verbose) {
		for (int32_t i = 0; i < this->match_length; ++i) {
			$var($String, s, "null"_s);
			if ($nc(this->targets)->get(i) != nullptr) {
				$assign(s, $nc($($nc($nc(this->targets)->get(i))->getInstruction()))->toString());
			}
			buf->append("("_s)->append($nc(this->match)->get(i))->append(", "_s)->append(s)->append(" = {"_s)->append($nc(this->indices)->get(i))->append("})"_s);
		}
	} else {
		buf->append(" ..."_s);
	}
	return buf->toString();
}

void Select::setTarget(int32_t i, $InstructionHandle* target) {
	notifyTarget($nc(this->targets)->get(i), target, this);
	$nc(this->targets)->set(i, target);
}

void Select::updateTarget($InstructionHandle* old_ih, $InstructionHandle* new_ih) {
	bool targeted = false;
	if ($BranchInstruction::getTarget() == old_ih) {
		targeted = true;
		setTarget(new_ih);
	}
	for (int32_t i = 0; i < $nc(this->targets)->length; ++i) {
		if ($nc(this->targets)->get(i) == old_ih) {
			targeted = true;
			setTarget(i, new_ih);
		}
	}
	if (!targeted) {
		$throwNew($ClassGenException, $$str({"Not targeting "_s, old_ih}));
	}
}

bool Select::containsTarget($InstructionHandle* ih) {
	$useLocalCurrentObjectStackCache();
	if ($BranchInstruction::getTarget() == ih) {
		return true;
	}
	{
		$var($InstructionHandleArray, arr$, this->targets);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($InstructionHandle, target2, arr$->get(i$));
			{
				if (target2 == ih) {
					return true;
				}
			}
		}
	}
	return false;
}

$Object* Select::clone() {
	$var(Select, copy, $cast(Select, $BranchInstruction::clone()));
	$set($nc(copy), match, $cast($ints, $nc(this->match)->clone()));
	$set(copy, indices, $cast($ints, $nc(this->indices)->clone()));
	$set(copy, targets, $cast($InstructionHandleArray, $nc(this->targets)->clone()));
	return $of(copy);
}

void Select::dispose() {
	$useLocalCurrentObjectStackCache();
	$BranchInstruction::dispose();
	{
		$var($InstructionHandleArray, arr$, this->targets);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($InstructionHandle, target2, arr$->get(i$));
			{
				$nc(target2)->removeTargeter(this);
			}
		}
	}
}

$ints* Select::getMatchs() {
	return this->match;
}

$ints* Select::getIndices() {
	return this->indices;
}

$InstructionHandleArray* Select::getTargets() {
	return this->targets;
}

int32_t Select::getMatch(int32_t index) {
	return $nc(this->match)->get(index);
}

int32_t Select::getIndices(int32_t index) {
	return $nc(this->indices)->get(index);
}

$InstructionHandle* Select::getTarget(int32_t index) {
	return $nc(this->targets)->get(index);
}

int32_t Select::getFixed_length() {
	return this->fixed_length;
}

void Select::setFixed_length(int32_t fixed_length) {
	this->fixed_length = fixed_length;
}

int32_t Select::getMatch_length() {
	return this->match_length;
}

int32_t Select::setMatch_length(int32_t match_length) {
	this->match_length = match_length;
	return match_length;
}

void Select::setMatch(int32_t index, int32_t value) {
	$nc(this->match)->set(index, value);
}

void Select::setIndices($ints* array) {
	$set(this, indices, array);
}

void Select::setMatches($ints* array) {
	$set(this, match, array);
}

void Select::setTargets($InstructionHandleArray* array) {
	$set(this, targets, array);
}

int32_t Select::getPadding() {
	return this->padding;
}

int32_t Select::setIndices(int32_t i, int32_t value) {
	$nc(this->indices)->set(i, value);
	return value;
}

Select::Select() {
}

$Class* Select::load$($String* name, bool initialize) {
	$loadClass(Select, name, initialize, &_Select_ClassInfo_, allocate$Select);
	return class$;
}

$Class* Select::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com