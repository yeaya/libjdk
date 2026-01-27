#include <com/sun/org/apache/bcel/internal/generic/InstructionComparator.h>

#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPushInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IndexedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/NEWARRAY.h>
#include <java/io/Serializable.h>
#include <java/lang/Number.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

#undef DEFAULT

using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $ConstantPushInstruction = ::com::sun::org::apache::bcel::internal::generic::ConstantPushInstruction;
using $IndexedInstruction = ::com::sun::org::apache::bcel::internal::generic::IndexedInstruction;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $NEWARRAY = ::com::sun::org::apache::bcel::internal::generic::NEWARRAY;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $MethodHandle = ::java::lang::invoke::MethodHandle;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

class InstructionComparator$$Lambda$lambda$static$0 : public InstructionComparator {
	$class(InstructionComparator$$Lambda$lambda$static$0, $NO_CLASS_INIT, InstructionComparator)
public:
	void init$() {
	}
	virtual bool equals($Instruction* i1, $Instruction* i2) override {
		 return InstructionComparator::lambda$static$0(i1, i2);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<InstructionComparator$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo InstructionComparator$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(InstructionComparator$$Lambda$lambda$static$0, init$, void)},
	{"equals", "(Lcom/sun/org/apache/bcel/internal/generic/Instruction;Lcom/sun/org/apache/bcel/internal/generic/Instruction;)Z", nullptr, $PUBLIC, $virtualMethod(InstructionComparator$$Lambda$lambda$static$0, equals, bool, $Instruction*, $Instruction*)},
	{}
};
$ClassInfo InstructionComparator$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.org.apache.bcel.internal.generic.InstructionComparator$$Lambda$lambda$static$0",
	"java.lang.Object",
	"com.sun.org.apache.bcel.internal.generic.InstructionComparator",
	nullptr,
	methodInfos
};
$Class* InstructionComparator$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(InstructionComparator$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* InstructionComparator$$Lambda$lambda$static$0::class$ = nullptr;

$FieldInfo _InstructionComparator_FieldInfo_[] = {
	{"DEFAULT", "Lcom/sun/org/apache/bcel/internal/generic/InstructionComparator;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InstructionComparator, DEFAULT)},
	{}
};

$MethodInfo _InstructionComparator_MethodInfo_[] = {
	{"equals", "(Lcom/sun/org/apache/bcel/internal/generic/Instruction;Lcom/sun/org/apache/bcel/internal/generic/Instruction;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InstructionComparator, equals, bool, $Instruction*, $Instruction*)},
	{"lambda$static$0", "(Lcom/sun/org/apache/bcel/internal/generic/Instruction;Lcom/sun/org/apache/bcel/internal/generic/Instruction;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(InstructionComparator, lambda$static$0, bool, $Instruction*, $Instruction*)},
	{}
};

$ClassInfo _InstructionComparator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.InstructionComparator",
	nullptr,
	nullptr,
	_InstructionComparator_FieldInfo_,
	_InstructionComparator_MethodInfo_
};

$Object* allocate$InstructionComparator($Class* clazz) {
	return $of($alloc(InstructionComparator));
}

InstructionComparator* InstructionComparator::DEFAULT = nullptr;

bool InstructionComparator::lambda$static$0($Instruction* i1, $Instruction* i2) {
	$init(InstructionComparator);
	$useLocalCurrentObjectStackCache();
	int16_t var$0 = $nc(i1)->getOpcode();
	if (var$0 == $nc(i2)->getOpcode()) {
		if ($instanceOf($BranchInstruction, i1)) {
			return false;
		} else if ($instanceOf($ConstantPushInstruction, i1)) {
			return $nc($of($($nc(($cast($ConstantPushInstruction, i1)))->getValue())))->equals($($nc(($cast($ConstantPushInstruction, i2)))->getValue()));
		} else if ($instanceOf($IndexedInstruction, i1)) {
			int32_t var$1 = $nc(($cast($IndexedInstruction, i1)))->getIndex();
			return var$1 == $nc(($cast($IndexedInstruction, i2)))->getIndex();
		} else if ($instanceOf($NEWARRAY, i1)) {
			int8_t var$2 = $nc(($cast($NEWARRAY, i1)))->getTypecode();
			return var$2 == $nc(($cast($NEWARRAY, i2)))->getTypecode();
		} else {
			return true;
		}
	}
	return false;
}

void clinit$InstructionComparator($Class* class$) {
	$assignStatic(InstructionComparator::DEFAULT, static_cast<InstructionComparator*>($new(InstructionComparator$$Lambda$lambda$static$0)));
}

$Class* InstructionComparator::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(InstructionComparator$$Lambda$lambda$static$0::classInfo$.name)) {
			return InstructionComparator$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(InstructionComparator, name, initialize, &_InstructionComparator_ClassInfo_, clinit$InstructionComparator, allocate$InstructionComparator);
	return class$;
}

$Class* InstructionComparator::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com