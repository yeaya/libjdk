#include <com/sun/org/apache/bcel/internal/generic/TABLESWITCH.h>

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

#undef TABLESWITCH

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

$MethodInfo _TABLESWITCH_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(TABLESWITCH, init$, void)},
	{"<init>", "([I[Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(TABLESWITCH, init$, void, $ints*, $InstructionHandleArray*, $InstructionHandle*)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(TABLESWITCH, accept, void, $Visitor*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(TABLESWITCH, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"initFromFile", "(Lcom/sun/org/apache/bcel/internal/util/ByteSequence;Z)V", nullptr, $PROTECTED, $virtualMethod(TABLESWITCH, initFromFile, void, $ByteSequence*, bool), "java.io.IOException"},
	{}
};

$ClassInfo _TABLESWITCH_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.TABLESWITCH",
	"com.sun.org.apache.bcel.internal.generic.Select",
	nullptr,
	nullptr,
	_TABLESWITCH_MethodInfo_
};

$Object* allocate$TABLESWITCH($Class* clazz) {
	return $of($alloc(TABLESWITCH));
}

void TABLESWITCH::init$() {
	$Select::init$();
}

void TABLESWITCH::init$($ints* match, $InstructionHandleArray* targets, $InstructionHandle* defaultTarget) {
	$Select::init$($Const::TABLESWITCH, match, targets, defaultTarget);
	int16_t _length = (int16_t)(13 + getMatch_length() * 4);
	$Select::setLength(_length);
	setFixed_length(_length);
}

void TABLESWITCH::dump($DataOutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$Select::dump(out);
	int32_t _match_length = getMatch_length();
	int32_t low = (_match_length > 0) ? $Select::getMatch(0) : 0;
	$nc(out)->writeInt(low);
	int32_t high = (_match_length > 0) ? $Select::getMatch(_match_length - 1) : 0;
	out->writeInt(high);
	for (int32_t i = 0; i < _match_length; ++i) {
		out->writeInt(setIndices(i, getTargetOffset($($Select::getTarget(i)))));
	}
}

void TABLESWITCH::initFromFile($ByteSequence* bytes, bool wide) {
	$useLocalCurrentObjectStackCache();
	$Select::initFromFile(bytes, wide);
	int32_t low = $nc(bytes)->readInt();
	int32_t high = bytes->readInt();
	int32_t _match_length = high - low + 1;
	setMatch_length(_match_length);
	int16_t _fixed_length = (int16_t)(13 + _match_length * 4);
	setFixed_length(_fixed_length);
	$Select::setLength((int16_t)(_fixed_length + $Select::getPadding()));
	$Select::setMatches($$new($ints, _match_length));
	$Select::setIndices($$new($ints, _match_length));
	$Select::setTargets($$new($InstructionHandleArray, _match_length));
	for (int32_t i = 0; i < _match_length; ++i) {
		$Select::setMatch(i, low + i);
		$Select::setIndices(i, bytes->readInt());
	}
}

void TABLESWITCH::accept($Visitor* v) {
	$nc(v)->visitVariableLengthInstruction(this);
	v->visitStackConsumer(this);
	v->visitBranchInstruction(this);
	v->visitSelect(this);
	v->visitTABLESWITCH(this);
}

TABLESWITCH::TABLESWITCH() {
}

$Class* TABLESWITCH::load$($String* name, bool initialize) {
	$loadClass(TABLESWITCH, name, initialize, &_TABLESWITCH_ClassInfo_, allocate$TABLESWITCH);
	return class$;
}

$Class* TABLESWITCH::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com