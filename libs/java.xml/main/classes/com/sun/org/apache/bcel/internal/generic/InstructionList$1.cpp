#include <com/sun/org/apache/bcel/internal/generic/InstructionList$1.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

void InstructionList$1::init$($InstructionList* this$0) {
	$set(this, this$0, this$0);
	$set(this, ih, this->this$0->start);
}

$Object* InstructionList$1::next() {
	if (this->ih == nullptr) {
		$throwNew($NoSuchElementException);
	}
	$var($InstructionHandle, i, this->ih);
	$set(this, ih, $nc(this->ih)->getNext());
	return i;
}

void InstructionList$1::remove() {
	$throwNew($UnsupportedOperationException);
}

bool InstructionList$1::hasNext() {
	return this->ih != nullptr;
}

InstructionList$1::InstructionList$1() {
}

$Class* InstructionList$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/bcel/internal/generic/InstructionList;", nullptr, $FINAL | $SYNTHETIC, $field(InstructionList$1, this$0)},
		{"ih", "Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PRIVATE, $field(InstructionList$1, ih)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionList;)V", nullptr, 0, $method(InstructionList$1, init$, void, $InstructionList*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(InstructionList$1, hasNext, bool)},
		{"next", "()Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;", nullptr, $PUBLIC, $virtualMethod(InstructionList$1, next, $Object*), "java.util.NoSuchElementException"},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(InstructionList$1, remove, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.bcel.internal.generic.InstructionList",
		"iterator",
		"()Ljava/util/Iterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.bcel.internal.generic.InstructionList$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.bcel.internal.generic.InstructionList$1",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.bcel.internal.generic.InstructionList"
	};
	$loadClass(InstructionList$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InstructionList$1);
	});
	return class$;
}

$Class* InstructionList$1::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com