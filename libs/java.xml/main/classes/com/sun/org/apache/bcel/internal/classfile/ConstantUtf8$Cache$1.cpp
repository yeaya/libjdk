#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8$Cache$1.h>

#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map$Entry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map$Entry = ::java::util::Map$Entry;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _ConstantUtf8$Cache$1_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConstantUtf8$Cache$1, serialVersionUID)},
	{}
};

$MethodInfo _ConstantUtf8$Cache$1_MethodInfo_[] = {
	{"<init>", "(IFZ)V", nullptr, 0, $method(ConstantUtf8$Cache$1, init$, void, int32_t, float, bool)},
	{"removeEldestEntry", "(Ljava/util/Map$Entry;)Z", "(Ljava/util/Map$Entry<Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/classfile/ConstantUtf8;>;)Z", $PROTECTED, $virtualMethod(ConstantUtf8$Cache$1, removeEldestEntry, bool, $Map$Entry*)},
	{}
};

$EnclosingMethodInfo _ConstantUtf8$Cache$1_EnclosingMethodInfo_ = {
	"com.sun.org.apache.bcel.internal.classfile.ConstantUtf8$Cache",
	nullptr,
	nullptr
};

$InnerClassInfo _ConstantUtf8$Cache$1_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.classfile.ConstantUtf8$Cache", "com.sun.org.apache.bcel.internal.classfile.ConstantUtf8", "Cache", $PRIVATE | $STATIC},
	{"com.sun.org.apache.bcel.internal.classfile.ConstantUtf8$Cache$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ConstantUtf8$Cache$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.ConstantUtf8$Cache$1",
	"java.util.LinkedHashMap",
	nullptr,
	_ConstantUtf8$Cache$1_FieldInfo_,
	_ConstantUtf8$Cache$1_MethodInfo_,
	"Ljava/util/LinkedHashMap<Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/classfile/ConstantUtf8;>;",
	&_ConstantUtf8$Cache$1_EnclosingMethodInfo_,
	_ConstantUtf8$Cache$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.classfile.ConstantUtf8"
};

$Object* allocate$ConstantUtf8$Cache$1($Class* clazz) {
	return $of($alloc(ConstantUtf8$Cache$1));
}

void ConstantUtf8$Cache$1::init$(int32_t arg0, float arg1, bool arg2) {
	$LinkedHashMap::init$(arg0, arg1, arg2);
}

bool ConstantUtf8$Cache$1::removeEldestEntry($Map$Entry* eldest) {
	return size() > 20000;
}

ConstantUtf8$Cache$1::ConstantUtf8$Cache$1() {
}

$Class* ConstantUtf8$Cache$1::load$($String* name, bool initialize) {
	$loadClass(ConstantUtf8$Cache$1, name, initialize, &_ConstantUtf8$Cache$1_ClassInfo_, allocate$ConstantUtf8$Cache$1);
	return class$;
}

$Class* ConstantUtf8$Cache$1::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com