#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/SlotAllocator.h>

#include <com/sun/org/apache/bcel/internal/generic/LocalVariableGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <java/lang/Error.h>
#include <java/lang/Math.h>
#include <jcpp.h>

#undef INTERNAL_ERR

using $LocalVariableGenArray = $Array<::com::sun::org::apache::bcel::internal::generic::LocalVariableGen>;
using $LocalVariableGen = ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
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

$FieldInfo _SlotAllocator_FieldInfo_[] = {
	{"_firstAvailableSlot", "I", nullptr, $PRIVATE, $field(SlotAllocator, _firstAvailableSlot)},
	{"_size", "I", nullptr, $PRIVATE, $field(SlotAllocator, _size)},
	{"_free", "I", nullptr, $PRIVATE, $field(SlotAllocator, _free)},
	{"_slotsTaken", "[I", nullptr, $PRIVATE, $field(SlotAllocator, _slotsTaken)},
	{}
};

$MethodInfo _SlotAllocator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SlotAllocator, init$, void)},
	{"allocateSlot", "(Lcom/sun/org/apache/bcel/internal/generic/Type;)I", nullptr, $PUBLIC, $method(SlotAllocator, allocateSlot, int32_t, $Type*)},
	{"initialize", "([Lcom/sun/org/apache/bcel/internal/generic/LocalVariableGen;)V", nullptr, $PUBLIC, $method(SlotAllocator, initialize, void, $LocalVariableGenArray*)},
	{"releaseSlot", "(Lcom/sun/org/apache/bcel/internal/generic/LocalVariableGen;)V", nullptr, $PUBLIC, $method(SlotAllocator, releaseSlot, void, $LocalVariableGen*)},
	{}
};

$ClassInfo _SlotAllocator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.SlotAllocator",
	"java.lang.Object",
	nullptr,
	_SlotAllocator_FieldInfo_,
	_SlotAllocator_MethodInfo_
};

$Object* allocate$SlotAllocator($Class* clazz) {
	return $of($alloc(SlotAllocator));
}

void SlotAllocator::init$() {
	this->_size = 8;
	this->_free = 0;
	$set(this, _slotsTaken, $new($ints, this->_size));
}

void SlotAllocator::initialize($LocalVariableGenArray* vars) {
	$useLocalCurrentObjectStackCache();
	int32_t length = $nc(vars)->length;
	int32_t slot = 0;
	int32_t size = 0;
	int32_t index = 0;
	for (int32_t i = 0; i < length; ++i) {
		size = $nc($($nc(vars->get(i))->getType()))->getSize();
		index = $nc(vars->get(i))->getIndex();
		slot = $Math::max(slot, index + size);
	}
	this->_firstAvailableSlot = slot;
}

int32_t SlotAllocator::allocateSlot($Type* type) {
	int32_t size = $nc(type)->getSize();
	int32_t limit = this->_free;
	int32_t slot = this->_firstAvailableSlot;
	int32_t where = 0;
	if (this->_free + size > this->_size) {
		$var($ints, array, $new($ints, this->_size *= 2));
		for (int32_t j = 0; j < limit; ++j) {
			array->set(j, $nc(this->_slotsTaken)->get(j));
		}
		$set(this, _slotsTaken, array);
	}
	while (where < limit) {
		if (slot + size <= $nc(this->_slotsTaken)->get(where)) {
			for (int32_t j = limit - 1; j >= where; --j) {
				$nc(this->_slotsTaken)->set(j + size, $nc(this->_slotsTaken)->get(j));
			}
			break;
		} else {
			slot = $nc(this->_slotsTaken)->get(where++) + 1;
		}
	}
	for (int32_t j = 0; j < size; ++j) {
		$nc(this->_slotsTaken)->set(where + j, slot + j);
	}
	this->_free += size;
	return slot;
}

void SlotAllocator::releaseSlot($LocalVariableGen* lvg) {
	$useLocalCurrentObjectStackCache();
	int32_t size = $nc($($nc(lvg)->getType()))->getSize();
	int32_t slot = lvg->getIndex();
	int32_t limit = this->_free;
	for (int32_t i = 0; i < limit; ++i) {
		if ($nc(this->_slotsTaken)->get(i) == slot) {
			int32_t j = i + size;
			while (j < limit) {
				$nc(this->_slotsTaken)->set(i++, $nc(this->_slotsTaken)->get(j++));
			}
			this->_free -= size;
			return;
		}
	}
	$var($String, state, $str({"Variable slot allocation error(size="_s, $$str(size), ", slot="_s, $$str(slot), ", limit="_s, $$str(limit), ")"_s}));
	$init($ErrorMsg);
	$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::INTERNAL_ERR, $of(state)));
	$throwNew($Error, $(err->toString()));
}

SlotAllocator::SlotAllocator() {
}

$Class* SlotAllocator::load$($String* name, bool initialize) {
	$loadClass(SlotAllocator, name, initialize, &_SlotAllocator_ClassInfo_, allocate$SlotAllocator);
	return class$;
}

$Class* SlotAllocator::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com