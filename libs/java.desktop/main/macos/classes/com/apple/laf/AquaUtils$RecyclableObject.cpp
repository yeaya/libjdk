#include <com/apple/laf/AquaUtils$RecyclableObject.h>
#include <com/apple/laf/AquaUtils.h>
#include <java/lang/ref/SoftReference.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;

namespace com {
	namespace apple {
		namespace laf {

void AquaUtils$RecyclableObject::init$() {
}

$Object* AquaUtils$RecyclableObject::get() {
	$var($Object, referent, nullptr);
	if (this->objectRef != nullptr && ($assign(referent, this->objectRef->get())) != nullptr) {
		return referent;
	}
	$assign(referent, create());
	$set(this, objectRef, $new($SoftReference, referent));
	return referent;
}

AquaUtils$RecyclableObject::AquaUtils$RecyclableObject() {
}

$Class* AquaUtils$RecyclableObject::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"objectRef", "Ljava/lang/ref/SoftReference;", "Ljava/lang/ref/SoftReference<TT;>;", $PRIVATE, $field(AquaUtils$RecyclableObject, objectRef)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaUtils$RecyclableObject, init$, void)},
		{"create", "()Ljava/lang/Object;", "()TT;", $PROTECTED | $ABSTRACT, $virtualMethod(AquaUtils$RecyclableObject, create, $Object*)},
		{"get", "()Ljava/lang/Object;", "()TT;", 0, $virtualMethod(AquaUtils$RecyclableObject, get, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaUtils$RecyclableObject", "com.apple.laf.AquaUtils", "RecyclableObject", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.apple.laf.AquaUtils$RecyclableObject",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaUtils"
	};
	$loadClass(AquaUtils$RecyclableObject, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaUtils$RecyclableObject);
	});
	return class$;
}

$Class* AquaUtils$RecyclableObject::class$ = nullptr;

		} // laf
	} // apple
} // com