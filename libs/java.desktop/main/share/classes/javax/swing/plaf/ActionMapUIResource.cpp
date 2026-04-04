#include <javax/swing/plaf/ActionMapUIResource.h>
#include <javax/swing/ActionMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ActionMap = ::javax::swing::ActionMap;

namespace javax {
	namespace swing {
		namespace plaf {

int32_t ActionMapUIResource::hashCode() {
	 return this->$ActionMap::hashCode();
}

bool ActionMapUIResource::equals(Object$* arg0) {
	 return this->$ActionMap::equals(arg0);
}

$Object* ActionMapUIResource::clone() {
	 return this->$ActionMap::clone();
}

$String* ActionMapUIResource::toString() {
	 return this->$ActionMap::toString();
}

void ActionMapUIResource::finalize() {
	this->$ActionMap::finalize();
}

void ActionMapUIResource::init$() {
	$ActionMap::init$();
}

ActionMapUIResource::ActionMapUIResource() {
}

$Class* ActionMapUIResource::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(ActionMapUIResource, init$, void)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.ActionMapUIResource",
		"javax.swing.ActionMap",
		"javax.swing.plaf.UIResource",
		nullptr,
		methodInfos$$
	};
	$loadClass(ActionMapUIResource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ActionMapUIResource));
	});
	return class$;
}

$Class* ActionMapUIResource::class$ = nullptr;

		} // plaf
	} // swing
} // javax