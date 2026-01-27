#include <com/sun/org/apache/bcel/internal/classfile/Utility$1.h>

#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$MethodInfo _Utility$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Utility$1, init$, void)},
	{"initialValue", "()Ljava/lang/Integer;", nullptr, $PROTECTED, $virtualMethod(Utility$1, initialValue, $Object*)},
	{}
};

$EnclosingMethodInfo _Utility$1_EnclosingMethodInfo_ = {
	"com.sun.org.apache.bcel.internal.classfile.Utility",
	nullptr,
	nullptr
};

$InnerClassInfo _Utility$1_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.classfile.Utility$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Utility$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.Utility$1",
	"java.lang.ThreadLocal",
	nullptr,
	nullptr,
	_Utility$1_MethodInfo_,
	"Ljava/lang/ThreadLocal<Ljava/lang/Integer;>;",
	&_Utility$1_EnclosingMethodInfo_,
	_Utility$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.classfile.Utility"
};

$Object* allocate$Utility$1($Class* clazz) {
	return $of($alloc(Utility$1));
}

void Utility$1::init$() {
	$ThreadLocal::init$();
}

$Object* Utility$1::initialValue() {
	return $of($Integer::valueOf(0));
}

Utility$1::Utility$1() {
}

$Class* Utility$1::load$($String* name, bool initialize) {
	$loadClass(Utility$1, name, initialize, &_Utility$1_ClassInfo_, allocate$Utility$1);
	return class$;
}

$Class* Utility$1::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com