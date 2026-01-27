#include <com/sun/org/apache/bcel/internal/classfile/Field$1.h>

#include <com/sun/org/apache/bcel/internal/classfile/Field.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef THAT
#undef THIS

using $Field = ::com::sun::org::apache::bcel::internal::classfile::Field;
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

$MethodInfo _Field$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Field$1, init$, void)},
	{"equals", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Field$1, equals, bool, Object$*, Object$*)},
	{"hashCode", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(Field$1, hashCode, int32_t, Object$*)},
	{}
};

$EnclosingMethodInfo _Field$1_EnclosingMethodInfo_ = {
	"com.sun.org.apache.bcel.internal.classfile.Field",
	nullptr,
	nullptr
};

$InnerClassInfo _Field$1_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.classfile.Field$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Field$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.Field$1",
	"java.lang.Object",
	"com.sun.org.apache.bcel.internal.util.BCELComparator",
	nullptr,
	_Field$1_MethodInfo_,
	nullptr,
	&_Field$1_EnclosingMethodInfo_,
	_Field$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.classfile.Field"
};

$Object* allocate$Field$1($Class* clazz) {
	return $of($alloc(Field$1));
}

void Field$1::init$() {
}

bool Field$1::equals(Object$* o1, Object$* o2) {
	$useLocalCurrentObjectStackCache();
	$var($Field, THIS, $cast($Field, o1));
	$var($Field, THAT, $cast($Field, o2));
	$var($Object, var$1, $of($nc(THIS)->getName()));
	bool var$0 = $Objects::equals(var$1, $($nc(THAT)->getName()));
	if (var$0) {
		$var($Object, var$2, $of($nc(THIS)->getSignature()));
		var$0 = $Objects::equals(var$2, $($nc(THAT)->getSignature()));
	}
	return var$0;
}

int32_t Field$1::hashCode(Object$* o) {
	$useLocalCurrentObjectStackCache();
	$var($Field, THIS, $cast($Field, o));
	int32_t var$0 = $nc($($nc(THIS)->getSignature()))->hashCode();
	return var$0 ^ $nc($(THIS->getName()))->hashCode();
}

Field$1::Field$1() {
}

$Class* Field$1::load$($String* name, bool initialize) {
	$loadClass(Field$1, name, initialize, &_Field$1_ClassInfo_, allocate$Field$1);
	return class$;
}

$Class* Field$1::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com