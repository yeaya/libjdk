#include <javax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Set.h>
#include <javax/swing/MultiUIDefaults$1.h>
#include <javax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator$Type.h>
#include <javax/swing/MultiUIDefaults.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $MultiUIDefaults$1 = ::javax::swing::MultiUIDefaults$1;
using $MultiUIDefaults$MultiUIDefaultsEnumerator$Type = ::javax::swing::MultiUIDefaults$MultiUIDefaultsEnumerator$Type;

namespace javax {
	namespace swing {

void MultiUIDefaults$MultiUIDefaultsEnumerator::init$($MultiUIDefaults$MultiUIDefaultsEnumerator$Type* type, $Set* entries) {
	$set(this, type, type);
	$set(this, iterator, $nc(entries)->iterator());
}

bool MultiUIDefaults$MultiUIDefaultsEnumerator::hasMoreElements() {
	return $nc(this->iterator)->hasNext();
}

$Object* MultiUIDefaults$MultiUIDefaultsEnumerator::nextElement() {
	$useLocalObjectStack();
	$init($MultiUIDefaults$1);
	switch ($nc($MultiUIDefaults$1::$SwitchMap$javax$swing$MultiUIDefaults$MultiUIDefaultsEnumerator$Type)->get($nc((this->type))->ordinal())) {
	case 1:
		return $$sure($Map$Entry, $nc(this->iterator)->next())->getKey();
	case 2:
		return $$sure($Map$Entry, $nc(this->iterator)->next())->getValue();
	default:
		return nullptr;
	}
}

MultiUIDefaults$MultiUIDefaultsEnumerator::MultiUIDefaults$MultiUIDefaultsEnumerator() {
}

$Class* MultiUIDefaults$MultiUIDefaultsEnumerator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"iterator", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;>;", $PRIVATE, $field(MultiUIDefaults$MultiUIDefaultsEnumerator, iterator)},
		{"type", "Ljavax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator$Type;", nullptr, $PRIVATE, $field(MultiUIDefaults$MultiUIDefaultsEnumerator, type)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator$Type;Ljava/util/Set;)V", "(Ljavax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator$Type;Ljava/util/Set<Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;>;)V", 0, $method(MultiUIDefaults$MultiUIDefaultsEnumerator, init$, void, $MultiUIDefaults$MultiUIDefaultsEnumerator$Type*, $Set*)},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(MultiUIDefaults$MultiUIDefaultsEnumerator, hasMoreElements, bool)},
		{"nextElement", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MultiUIDefaults$MultiUIDefaultsEnumerator, nextElement, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.MultiUIDefaults$MultiUIDefaultsEnumerator", "javax.swing.MultiUIDefaults", "MultiUIDefaultsEnumerator", $PRIVATE | $STATIC},
		{"javax.swing.MultiUIDefaults$MultiUIDefaultsEnumerator$Type", "javax.swing.MultiUIDefaults$MultiUIDefaultsEnumerator", "Type", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.MultiUIDefaults$MultiUIDefaultsEnumerator",
		"java.lang.Object",
		"java.util.Enumeration",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/lang/Object;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.MultiUIDefaults"
	};
	$loadClass(MultiUIDefaults$MultiUIDefaultsEnumerator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiUIDefaults$MultiUIDefaultsEnumerator);
	});
	return class$;
}

$Class* MultiUIDefaults$MultiUIDefaultsEnumerator::class$ = nullptr;

	} // swing
} // javax