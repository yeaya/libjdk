#include <javax/swing/plaf/nimbus/Effect$ArrayCache.h>
#include <java/lang/ref/SoftReference.h>
#include <javax/swing/plaf/nimbus/Effect.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

void Effect$ArrayCache::init$() {
	$set(this, tmpIntArray, nullptr);
	$set(this, tmpByteArray1, nullptr);
	$set(this, tmpByteArray2, nullptr);
	$set(this, tmpByteArray3, nullptr);
}

$ints* Effect$ArrayCache::getTmpIntArray(int32_t size) {
	$var($ints, tmp, nullptr);
	if (this->tmpIntArray == nullptr || ($assign(tmp, $cast($ints, this->tmpIntArray->get()))) == nullptr || $nc(tmp)->length < size) {
		$assign(tmp, $new($ints, size));
		$set(this, tmpIntArray, $new($SoftReference, tmp));
	}
	return tmp;
}

$bytes* Effect$ArrayCache::getTmpByteArray1(int32_t size) {
	$var($bytes, tmp, nullptr);
	if (this->tmpByteArray1 == nullptr || ($assign(tmp, $cast($bytes, this->tmpByteArray1->get()))) == nullptr || $nc(tmp)->length < size) {
		$assign(tmp, $new($bytes, size));
		$set(this, tmpByteArray1, $new($SoftReference, tmp));
	}
	return tmp;
}

$bytes* Effect$ArrayCache::getTmpByteArray2(int32_t size) {
	$var($bytes, tmp, nullptr);
	if (this->tmpByteArray2 == nullptr || ($assign(tmp, $cast($bytes, this->tmpByteArray2->get()))) == nullptr || $nc(tmp)->length < size) {
		$assign(tmp, $new($bytes, size));
		$set(this, tmpByteArray2, $new($SoftReference, tmp));
	}
	return tmp;
}

$bytes* Effect$ArrayCache::getTmpByteArray3(int32_t size) {
	$var($bytes, tmp, nullptr);
	if (this->tmpByteArray3 == nullptr || ($assign(tmp, $cast($bytes, this->tmpByteArray3->get()))) == nullptr || $nc(tmp)->length < size) {
		$assign(tmp, $new($bytes, size));
		$set(this, tmpByteArray3, $new($SoftReference, tmp));
	}
	return tmp;
}

Effect$ArrayCache::Effect$ArrayCache() {
}

$Class* Effect$ArrayCache::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"tmpIntArray", "Ljava/lang/ref/SoftReference;", "Ljava/lang/ref/SoftReference<[I>;", $PRIVATE, $field(Effect$ArrayCache, tmpIntArray)},
		{"tmpByteArray1", "Ljava/lang/ref/SoftReference;", "Ljava/lang/ref/SoftReference<[B>;", $PRIVATE, $field(Effect$ArrayCache, tmpByteArray1)},
		{"tmpByteArray2", "Ljava/lang/ref/SoftReference;", "Ljava/lang/ref/SoftReference<[B>;", $PRIVATE, $field(Effect$ArrayCache, tmpByteArray2)},
		{"tmpByteArray3", "Ljava/lang/ref/SoftReference;", "Ljava/lang/ref/SoftReference<[B>;", $PRIVATE, $field(Effect$ArrayCache, tmpByteArray3)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(Effect$ArrayCache, init$, void)},
		{"getTmpByteArray1", "(I)[B", nullptr, $PROTECTED, $virtualMethod(Effect$ArrayCache, getTmpByteArray1, $bytes*, int32_t)},
		{"getTmpByteArray2", "(I)[B", nullptr, $PROTECTED, $virtualMethod(Effect$ArrayCache, getTmpByteArray2, $bytes*, int32_t)},
		{"getTmpByteArray3", "(I)[B", nullptr, $PROTECTED, $virtualMethod(Effect$ArrayCache, getTmpByteArray3, $bytes*, int32_t)},
		{"getTmpIntArray", "(I)[I", nullptr, $PROTECTED, $virtualMethod(Effect$ArrayCache, getTmpIntArray, $ints*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.nimbus.Effect$ArrayCache", "javax.swing.plaf.nimbus.Effect", "ArrayCache", $PROTECTED | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.nimbus.Effect$ArrayCache",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.nimbus.Effect"
	};
	$loadClass(Effect$ArrayCache, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Effect$ArrayCache);
	});
	return class$;
}

$Class* Effect$ArrayCache::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax