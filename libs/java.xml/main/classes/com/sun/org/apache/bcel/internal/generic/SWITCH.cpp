#include <com/sun/org/apache/bcel/internal/generic/SWITCH.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/LOOKUPSWITCH.h>
#include <com/sun/org/apache/bcel/internal/generic/Select.h>
#include <com/sun/org/apache/bcel/internal/generic/TABLESWITCH.h>
#include <jcpp.h>

#undef SWITCH

using $InstructionHandleArray = $Array<::com::sun::org::apache::bcel::internal::generic::InstructionHandle>;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $LOOKUPSWITCH = ::com::sun::org::apache::bcel::internal::generic::LOOKUPSWITCH;
using $TABLESWITCH = ::com::sun::org::apache::bcel::internal::generic::TABLESWITCH;
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

void SWITCH::init$($ints* match, $InstructionHandleArray* targets, $InstructionHandle* target, int32_t max_gap) {
	$set(this, match, $cast($ints, $nc(match)->clone()));
	$set(this, targets, $cast($InstructionHandleArray, $nc(targets)->clone()));
	if ((this->matchLength = match->length) < 2) {
		$set(this, instruction, $new($TABLESWITCH, match, targets, target));
	} else {
		sort(0, this->matchLength - 1);
		if (matchIsOrdered(max_gap)) {
			fillup(max_gap, target);
			$set(this, instruction, $new($TABLESWITCH, this->match, this->targets, target));
		} else {
			$set(this, instruction, $new($LOOKUPSWITCH, this->match, this->targets, target));
		}
	}
}

void SWITCH::init$($ints* match, $InstructionHandleArray* targets, $InstructionHandle* target) {
	SWITCH::init$(match, targets, target, 1);
}

void SWITCH::fillup(int32_t max_gap, $InstructionHandle* target) {
	$useLocalObjectStack();
	int32_t max_size = this->matchLength + this->matchLength * max_gap;
	$var($ints, m_vec, $new($ints, max_size));
	$var($InstructionHandleArray, t_vec, $new($InstructionHandleArray, max_size));
	int32_t count = 1;
	m_vec->set(0, $nc(this->match)->get(0));
	t_vec->set(0, $nc(this->targets)->get(0));
	for (int32_t i = 1; i < this->matchLength; ++i) {
		int32_t prev = this->match->get(i - 1);
		int32_t gap = this->match->get(i) - prev;
		for (int32_t j = 1; j < gap; ++j) {
			m_vec->set(count, prev + j);
			t_vec->set(count, target);
			++count;
		}
		m_vec->set(count, this->match->get(i));
		t_vec->set(count, this->targets->get(i));
		++count;
	}
	$set(this, match, $new($ints, count));
	$set(this, targets, $new($InstructionHandleArray, count));
	$System::arraycopy(m_vec, 0, this->match, 0, count);
	$System::arraycopy(t_vec, 0, this->targets, 0, count);
}

void SWITCH::sort(int32_t l, int32_t r) {
	int32_t i = l;
	int32_t j = r;
	int32_t h = 0;
	int32_t m = $nc(this->match)->get((int32_t)((uint32_t)(l + r) >> 1));
	$var($InstructionHandle, h2, nullptr);
	do {
		while (this->match->get(i) < m) {
			++i;
		}
		while (m < this->match->get(j)) {
			--j;
		}
		if (i <= j) {
			h = this->match->get(i);
			this->match->set(i, this->match->get(j));
			this->match->set(j, h);
			$assign(h2, $nc(this->targets)->get(i));
			this->targets->set(i, this->targets->get(j));
			this->targets->set(j, h2);
			++i;
			--j;
		}
	} while (i <= j);
	if (l < j) {
		sort(l, j);
	}
	if (i < r) {
		sort(i, r);
	}
}

bool SWITCH::matchIsOrdered(int32_t max_gap) {
	for (int32_t i = 1; i < this->matchLength; ++i) {
		if ($nc(this->match)->get(i) - $nc(this->match)->get(i - 1) > max_gap) {
			return false;
		}
	}
	return true;
}

$InstructionList* SWITCH::getInstructionList() {
	return $new($InstructionList, this->instruction);
}

$Instruction* SWITCH::getInstruction() {
	return this->instruction;
}

SWITCH::SWITCH() {
}

$Class* SWITCH::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"match", "[I", nullptr, $PRIVATE, $field(SWITCH, match)},
		{"targets", "[Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PRIVATE, $field(SWITCH, targets)},
		{"instruction", "Lcom/sun/org/apache/bcel/internal/generic/Select;", nullptr, $PRIVATE, $field(SWITCH, instruction)},
		{"matchLength", "I", nullptr, $PRIVATE, $field(SWITCH, matchLength)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([I[Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;I)V", nullptr, $PUBLIC, $method(SWITCH, init$, void, $ints*, $InstructionHandleArray*, $InstructionHandle*, int32_t)},
		{"<init>", "([I[Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(SWITCH, init$, void, $ints*, $InstructionHandleArray*, $InstructionHandle*)},
		{"fillup", "(ILcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PRIVATE, $method(SWITCH, fillup, void, int32_t, $InstructionHandle*)},
		{"getInstruction", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $method(SWITCH, getInstruction, $Instruction*)},
		{"getInstructionList", "()Lcom/sun/org/apache/bcel/internal/generic/InstructionList;", nullptr, $PUBLIC, $virtualMethod(SWITCH, getInstructionList, $InstructionList*)},
		{"matchIsOrdered", "(I)Z", nullptr, $PRIVATE, $method(SWITCH, matchIsOrdered, bool, int32_t)},
		{"sort", "(II)V", nullptr, $PRIVATE, $method(SWITCH, sort, void, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.bcel.internal.generic.SWITCH",
		"java.lang.Object",
		"com.sun.org.apache.bcel.internal.generic.CompoundInstruction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SWITCH, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SWITCH);
	});
	return class$;
}

$Class* SWITCH::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com