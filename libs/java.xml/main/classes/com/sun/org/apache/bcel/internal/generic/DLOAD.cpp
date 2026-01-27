#include <com/sun/org/apache/bcel/internal/generic/DLOAD.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef DLOAD
#undef DLOAD_0

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

$MethodInfo _DLOAD_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(DLOAD, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(DLOAD, init$, void, int32_t)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(DLOAD, accept, void, $Visitor*)},
	{}
};

$ClassInfo _DLOAD_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.DLOAD",
	"com.sun.org.apache.bcel.internal.generic.LoadInstruction",
	nullptr,
	nullptr,
	_DLOAD_MethodInfo_
};

$Object* allocate$DLOAD($Class* clazz) {
	return $of($alloc(DLOAD));
}

void DLOAD::init$() {
	$LoadInstruction::init$($Const::DLOAD, $Const::DLOAD_0);
}

void DLOAD::init$(int32_t n) {
	$LoadInstruction::init$($Const::DLOAD, $Const::DLOAD_0, n);
}

void DLOAD::accept($Visitor* v) {
	$LoadInstruction::accept(v);
	$nc(v)->visitDLOAD(this);
}

DLOAD::DLOAD() {
}

$Class* DLOAD::load$($String* name, bool initialize) {
	$loadClass(DLOAD, name, initialize, &_DLOAD_ClassInfo_, allocate$DLOAD);
	return class$;
}

$Class* DLOAD::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com