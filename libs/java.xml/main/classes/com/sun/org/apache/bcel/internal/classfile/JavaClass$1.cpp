#include <com/sun/org/apache/bcel/internal/classfile/JavaClass$1.h>

#include <com/sun/org/apache/bcel/internal/classfile/JavaClass.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef THAT
#undef THIS

using $JavaClass = ::com::sun::org::apache::bcel::internal::classfile::JavaClass;
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

$MethodInfo _JavaClass$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(JavaClass$1, init$, void)},
	{"equals", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(JavaClass$1, equals, bool, Object$*, Object$*)},
	{"hashCode", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(JavaClass$1, hashCode, int32_t, Object$*)},
	{}
};

$EnclosingMethodInfo _JavaClass$1_EnclosingMethodInfo_ = {
	"com.sun.org.apache.bcel.internal.classfile.JavaClass",
	nullptr,
	nullptr
};

$InnerClassInfo _JavaClass$1_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.classfile.JavaClass$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavaClass$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.JavaClass$1",
	"java.lang.Object",
	"com.sun.org.apache.bcel.internal.util.BCELComparator",
	nullptr,
	_JavaClass$1_MethodInfo_,
	nullptr,
	&_JavaClass$1_EnclosingMethodInfo_,
	_JavaClass$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.classfile.JavaClass"
};

$Object* allocate$JavaClass$1($Class* clazz) {
	return $of($alloc(JavaClass$1));
}

void JavaClass$1::init$() {
}

bool JavaClass$1::equals(Object$* o1, Object$* o2) {
	$useLocalCurrentObjectStackCache();
	$var($JavaClass, THIS, $cast($JavaClass, o1));
	$var($JavaClass, THAT, $cast($JavaClass, o2));
	$var($Object, var$0, $of($nc(THIS)->getClassName()));
	return $Objects::equals(var$0, $($nc(THAT)->getClassName()));
}

int32_t JavaClass$1::hashCode(Object$* o) {
	$useLocalCurrentObjectStackCache();
	$var($JavaClass, THIS, $cast($JavaClass, o));
	return $nc($($nc(THIS)->getClassName()))->hashCode();
}

JavaClass$1::JavaClass$1() {
}

$Class* JavaClass$1::load$($String* name, bool initialize) {
	$loadClass(JavaClass$1, name, initialize, &_JavaClass$1_ClassInfo_, allocate$JavaClass$1);
	return class$;
}

$Class* JavaClass$1::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com