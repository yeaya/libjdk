#include <com/sun/org/apache/bcel/internal/generic/LOOKUPSWITCH.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/Select.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/VariableLengthInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <com/sun/org/apache/bcel/internal/util/ByteSequence.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef LOOKUPSWITCH

using $InstructionHandleArray = $Array<::com::sun::org::apache::bcel::internal::generic::InstructionHandle>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $Select = ::com::sun::org::apache::bcel::internal::generic::Select;
using $StackConsumer = ::com::sun::org::apache::bcel::internal::generic::StackConsumer;
using $VariableLengthInstruction = ::com::sun::org::apache::bcel::internal::generic::VariableLengthInstruction;
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

$MethodInfo _LOOKUPSWITCH_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(LOOKUPSWITCH, init$, void)},
	{"<init>", "([I[Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(LOOKUPSWITCH, init$, void, $ints*, $InstructionHandleArray*, $InstructionHandle*)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(LOOKUPSWITCH, accept, void, $Visitor*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(LOOKUPSWITCH, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"initFromFile", "(Lcom/sun/org/apache/bcel/internal/util/ByteSequence;Z)V", nullptr, $PROTECTED, $virtualMethod(LOOKUPSWITCH, initFromFile, void, $ByteSequence*, bool), "java.io.IOException"},
	{}
};

$ClassInfo _LOOKUPSWITCH_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.LOOKUPSWITCH",
	"com.sun.org.apache.bcel.internal.generic.Select",
	nullptr,
	nullptr,
	_LOOKUPSWITCH_MethodInfo_
};

$Object* allocate$LOOKUPSWITCH($Class* clazz) {
	return $of($alloc(LOOKUPSWITCH));
}

void LOOKUPSWITCH::init$() {
	$Select::init$();
}

void LOOKUPSWITCH::init$($ints* match, $InstructionHandleArray* targets, $InstructionHandle* defaultTarget) {
	$Select::init$($Const::LOOKUPSWITCH, match, targets, defaultTarget);
	int16_t _length = (int16_t)(9 + getMatch_length() * 8);
	$Select::setLength(_length);
	setFixed_length(_length);
}

void LOOKUPSWITCH::dump($DataOutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$Select::dump(out);
	int32_t _match_length = getMatch_length();
	$nc(out)->writeInt(_match_length);
	for (int32_t i = 0; i < _match_length; ++i) {
		out->writeInt($Select::getMatch(i));
		out->writeInt(setIndices(i, getTargetOffset($($Select::getTarget(i)))));
	}
}

void LOOKUPSWITCH::initFromFile($ByteSequence* bytes, bool wide) {
	$useLocalCurrentObjectStackCache();
	$Select::initFromFile(bytes, wide);
	int32_t _match_length = $nc(bytes)->readInt();
	setMatch_length(_match_length);
	int16_t _fixed_length = (int16_t)(9 + _match_length * 8);
	setFixed_length(_fixed_length);
	int16_t _length = (int16_t)(_match_length + $Select::getPadding());
	$Select::setLength(_length);
	$Select::setMatches($$new($ints, _match_length));
	$Select::setIndices($$new($ints, _match_length));
	$Select::setTargets($$new($InstructionHandleArray, _match_length));
	for (int32_t i = 0; i < _match_length; ++i) {
		$Select::setMatch(i, bytes->readInt());
		$Select::setIndices(i, bytes->readInt());
	}
}

void LOOKUPSWITCH::accept($Visitor* v) {
	$nc(v)->visitVariableLengthInstruction(this);
	v->visitStackConsumer(this);
	v->visitBranchInstruction(this);
	v->visitSelect(this);
	v->visitLOOKUPSWITCH(this);
}

LOOKUPSWITCH::LOOKUPSWITCH() {
}

$Class* LOOKUPSWITCH::load$($String* name, bool initialize) {
	$loadClass(LOOKUPSWITCH, name, initialize, &_LOOKUPSWITCH_ClassInfo_, allocate$LOOKUPSWITCH);
	return class$;
}

$Class* LOOKUPSWITCH::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com