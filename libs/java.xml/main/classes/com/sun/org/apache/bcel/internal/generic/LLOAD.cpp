#include <com/sun/org/apache/bcel/internal/generic/LLOAD.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef LLOAD
#undef LLOAD_0

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $Visitor = ::com::sun::org::apache::bcel::internal::generic::Visitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$MethodInfo _LLOAD_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(LLOAD, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(LLOAD, init$, void, int32_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(LLOAD, accept, void, $Visitor*)},
	{}
};

$ClassInfo _LLOAD_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.LLOAD",
	"com.sun.org.apache.bcel.internal.generic.LoadInstruction",
	nullptr,
	nullptr,
	_LLOAD_MethodInfo_
};

$Object* allocate$LLOAD($Class* clazz) {
	return $of($alloc(LLOAD));
}

void LLOAD::init$() {
	$LoadInstruction::init$($Const::LLOAD, $Const::LLOAD_0);
}

void LLOAD::init$(int32_t n) {
	$LoadInstruction::init$($Const::LLOAD, $Const::LLOAD_0, n);
}

void LLOAD::accept($Visitor* v) {
	$LoadInstruction::accept(v);
	$nc(v)->visitLLOAD(this);
}

LLOAD::LLOAD() {
}

$Class* LLOAD::load$($String* name, bool initialize) {
	$loadClass(LLOAD, name, initialize, &_LLOAD_ClassInfo_, allocate$LLOAD);
	return class$;
}

$Class* LLOAD::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com