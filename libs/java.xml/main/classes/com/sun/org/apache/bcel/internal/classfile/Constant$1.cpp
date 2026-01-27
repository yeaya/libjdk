#include <com/sun/org/apache/bcel/internal/classfile/Constant$1.h>

#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef THAT
#undef THIS

using $Constant = ::com::sun::org::apache::bcel::internal::classfile::Constant;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$MethodInfo _Constant$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Constant$1, init$, void)},
	{"equals", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Constant$1, equals, bool, Object$*, Object$*)},
	{"hashCode", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(Constant$1, hashCode, int32_t, Object$*)},
	{}
};

$EnclosingMethodInfo _Constant$1_EnclosingMethodInfo_ = {
	"com.sun.org.apache.bcel.internal.classfile.Constant",
	nullptr,
	nullptr
};

$InnerClassInfo _Constant$1_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.classfile.Constant$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Constant$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.Constant$1",
	"java.lang.Object",
	"com.sun.org.apache.bcel.internal.util.BCELComparator",
	nullptr,
	_Constant$1_MethodInfo_,
	nullptr,
	&_Constant$1_EnclosingMethodInfo_,
	_Constant$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.classfile.Constant"
};

$Object* allocate$Constant$1($Class* clazz) {
	return $of($alloc(Constant$1));
}

void Constant$1::init$() {
}

bool Constant$1::equals(Object$* o1, Object$* o2) {
	$useLocalCurrentObjectStackCache();
	$var($Constant, THIS, $cast($Constant, o1));
	$var($Constant, THAT, $cast($Constant, o2));
	$var($Object, var$0, $of($nc(THIS)->toString()));
	return $Objects::equals(var$0, $($nc(THAT)->toString()));
}

int32_t Constant$1::hashCode(Object$* o) {
	$useLocalCurrentObjectStackCache();
	$var($Constant, THIS, $cast($Constant, o));
	return $nc($($nc(THIS)->toString()))->hashCode();
}

Constant$1::Constant$1() {
}

$Class* Constant$1::load$($String* name, bool initialize) {
	$loadClass(Constant$1, name, initialize, &_Constant$1_ClassInfo_, allocate$Constant$1);
	return class$;
}

$Class* Constant$1::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com