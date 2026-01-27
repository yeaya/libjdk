#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8$Cache.h>

#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8$Cache$1.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantUtf8.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <jcpp.h>

#undef BCEL_STATISTICS
#undef CACHE
#undef INITIAL_CAPACITY
#undef MAX_ENTRIES
#undef MAX_ENTRY_SIZE

using $ConstantUtf8$Cache$1 = ::com::sun::org::apache::bcel::internal::classfile::ConstantUtf8$Cache$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $LinkedHashMap = ::java::util::LinkedHashMap;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _ConstantUtf8$Cache_FieldInfo_[] = {
	{"BCEL_STATISTICS", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConstantUtf8$Cache, BCEL_STATISTICS)},
	{"MAX_ENTRIES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConstantUtf8$Cache, MAX_ENTRIES)},
	{"INITIAL_CAPACITY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConstantUtf8$Cache, INITIAL_CAPACITY)},
	{"CACHE", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/classfile/ConstantUtf8;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ConstantUtf8$Cache, CACHE)},
	{"MAX_ENTRY_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConstantUtf8$Cache, MAX_ENTRY_SIZE)},
	{}
};

$MethodInfo _ConstantUtf8$Cache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ConstantUtf8$Cache, init$, void)},
	{"isEnabled", "()Z", nullptr, $STATIC, $staticMethod(ConstantUtf8$Cache, isEnabled, bool)},
	{}
};

$InnerClassInfo _ConstantUtf8$Cache_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.classfile.ConstantUtf8$Cache", "com.sun.org.apache.bcel.internal.classfile.ConstantUtf8", "Cache", $PRIVATE | $STATIC},
	{"com.sun.org.apache.bcel.internal.classfile.ConstantUtf8$Cache$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ConstantUtf8$Cache_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.ConstantUtf8$Cache",
	"java.lang.Object",
	nullptr,
	_ConstantUtf8$Cache_FieldInfo_,
	_ConstantUtf8$Cache_MethodInfo_,
	nullptr,
	nullptr,
	_ConstantUtf8$Cache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.classfile.ConstantUtf8"
};

$Object* allocate$ConstantUtf8$Cache($Class* clazz) {
	return $of($alloc(ConstantUtf8$Cache));
}

$HashMap* ConstantUtf8$Cache::CACHE = nullptr;

void ConstantUtf8$Cache::init$() {
}

bool ConstantUtf8$Cache::isEnabled() {
	$init(ConstantUtf8$Cache);
	return ConstantUtf8$Cache::MAX_ENTRY_SIZE > 0;
}

void clinit$ConstantUtf8$Cache($Class* class$) {
	$assignStatic(ConstantUtf8$Cache::CACHE, $new($ConstantUtf8$Cache$1, ConstantUtf8$Cache::INITIAL_CAPACITY, 0.75f, true));
}

ConstantUtf8$Cache::ConstantUtf8$Cache() {
}

$Class* ConstantUtf8$Cache::load$($String* name, bool initialize) {
	$loadClass(ConstantUtf8$Cache, name, initialize, &_ConstantUtf8$Cache_ClassInfo_, clinit$ConstantUtf8$Cache, allocate$ConstantUtf8$Cache);
	return class$;
}

$Class* ConstantUtf8$Cache::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com