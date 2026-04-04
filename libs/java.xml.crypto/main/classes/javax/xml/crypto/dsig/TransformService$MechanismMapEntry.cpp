#include <javax/xml/crypto/dsig/TransformService$MechanismMapEntry.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Map$Entry.h>
#include <javax/xml/crypto/dsig/TransformService.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Map$Entry = ::java::util::Map$Entry;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

void TransformService$MechanismMapEntry::init$($String* algorithm, $String* mechanism) {
	$set(this, algorithm, algorithm);
	$set(this, mechanism, mechanism);
	$set(this, key, $str({"TransformService."_s, algorithm, " MechanismType"_s}));
}

bool TransformService$MechanismMapEntry::equals(Object$* o) {
	$useLocalObjectStack();
	if (!($instanceOf($Map$Entry, o))) {
		return false;
	}
	$var($Map$Entry, e, $cast($Map$Entry, o));
	bool var$0 = $cast($String, getKey()) == nullptr ? $nc(e)->getKey() == nullptr : $$sure($String, getKey())->equals($($nc(e)->getKey()));
	return var$0 && ($cast($String, getValue()) == nullptr ? $nc(e)->getValue() == nullptr : $$sure($String, getValue())->equals($($nc(e)->getValue())));
}

$Object* TransformService$MechanismMapEntry::getKey() {
	return $of(this->key);
}

$Object* TransformService$MechanismMapEntry::getValue() {
	return $of(this->mechanism);
}

$String* TransformService$MechanismMapEntry::setValue($String* value) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

int32_t TransformService$MechanismMapEntry::hashCode() {
	$useLocalObjectStack();
	int32_t var$0 = $cast($String, getKey()) == nullptr ? 0 : $$sure($String, getKey())->hashCode();
	return var$0 ^ ($cast($String, getValue()) == nullptr ? 0 : $$sure($String, getValue())->hashCode());
}

$Object* TransformService$MechanismMapEntry::setValue(Object$* value) {
	return $of(this->setValue($cast($String, value)));
}

TransformService$MechanismMapEntry::TransformService$MechanismMapEntry() {
}

$Class* TransformService$MechanismMapEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mechanism", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(TransformService$MechanismMapEntry, mechanism)},
		{"algorithm", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(TransformService$MechanismMapEntry, algorithm)},
		{"key", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(TransformService$MechanismMapEntry, key)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(TransformService$MechanismMapEntry, init$, void, $String*, $String*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(TransformService$MechanismMapEntry, equals, bool, Object$*)},
		{"getKey", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TransformService$MechanismMapEntry, getKey, $Object*)},
		{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TransformService$MechanismMapEntry, getValue, $Object*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(TransformService$MechanismMapEntry, hashCode, int32_t)},
		{"setValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TransformService$MechanismMapEntry, setValue, $String*, $String*)},
		{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(TransformService$MechanismMapEntry, setValue, $Object*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.xml.crypto.dsig.TransformService$MechanismMapEntry", "javax.xml.crypto.dsig.TransformService", "MechanismMapEntry", $PRIVATE | $STATIC},
		{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.xml.crypto.dsig.TransformService$MechanismMapEntry",
		"java.lang.Object",
		"java.util.Map$Entry",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.xml.crypto.dsig.TransformService"
	};
	$loadClass(TransformService$MechanismMapEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransformService$MechanismMapEntry);
	});
	return class$;
}

$Class* TransformService$MechanismMapEntry::class$ = nullptr;

			} // dsig
		} // crypto
	} // xml
} // javax