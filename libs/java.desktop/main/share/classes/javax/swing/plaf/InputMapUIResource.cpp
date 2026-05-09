#include <javax/swing/plaf/InputMapUIResource.h>
#include <javax/swing/InputMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InputMap = ::javax::swing::InputMap;

namespace javax {
	namespace swing {
		namespace plaf {

int32_t InputMapUIResource::hashCode() {
	return this->$InputMap::hashCode();
}

bool InputMapUIResource::equals(Object$* arg0) {
	return this->$InputMap::equals(arg0);
}

$Object* InputMapUIResource::clone() {
	return this->$InputMap::clone();
}

$String* InputMapUIResource::toString() {
	return this->$InputMap::toString();
}

void InputMapUIResource::finalize() {
	this->$InputMap::finalize();
}

void InputMapUIResource::init$() {
	$InputMap::init$();
}

InputMapUIResource::InputMapUIResource() {
}

$Class* InputMapUIResource::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(InputMapUIResource, init$, void)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.InputMapUIResource",
		"javax.swing.InputMap",
		"javax.swing.plaf.UIResource",
		nullptr,
		methodInfos$$
	};
	$loadClass(InputMapUIResource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(InputMapUIResource));
	});
	return class$;
}

$Class* InputMapUIResource::class$ = nullptr;

		} // plaf
	} // swing
} // javax