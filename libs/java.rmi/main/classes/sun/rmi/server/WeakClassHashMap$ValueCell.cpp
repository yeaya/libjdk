#include <sun/rmi/server/WeakClassHashMap$ValueCell.h>
#include <java/lang/ref/Reference.h>
#include <sun/rmi/server/WeakClassHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace rmi {
		namespace server {

void WeakClassHashMap$ValueCell::init$() {
	$set(this, ref, nullptr);
}

WeakClassHashMap$ValueCell::WeakClassHashMap$ValueCell() {
}

$Class* WeakClassHashMap$ValueCell::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ref", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<TT;>;", 0, $field(WeakClassHashMap$ValueCell, ref)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(WeakClassHashMap$ValueCell, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.server.WeakClassHashMap$ValueCell", "sun.rmi.server.WeakClassHashMap", "ValueCell", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.server.WeakClassHashMap$ValueCell",
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
		"sun.rmi.server.WeakClassHashMap"
	};
	$loadClass(WeakClassHashMap$ValueCell, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WeakClassHashMap$ValueCell);
	});
	return class$;
}

$Class* WeakClassHashMap$ValueCell::class$ = nullptr;

		} // server
	} // rmi
} // sun