#include <com/apple/eawt/_AppEventHandler$_NativeEvent.h>
#include <com/apple/eawt/_AppEventHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {

void _AppEventHandler$_NativeEvent::init$($ObjectArray* args) {
	$set(this, args, args);
}

$Object* _AppEventHandler$_NativeEvent::get(int32_t i) {
	if (this->args == nullptr) {
		return nullptr;
	}
	return $nc(this->args)->get(i);
}

_AppEventHandler$_NativeEvent::_AppEventHandler$_NativeEvent() {
}

$Class* _AppEventHandler$_NativeEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"args", "[Ljava/lang/Object;", nullptr, 0, $field(_AppEventHandler$_NativeEvent, args)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT, $method(_AppEventHandler$_NativeEvent, init$, void, $ObjectArray*)},
		{"get", "(I)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(I)TT;", 0, $virtualMethod(_AppEventHandler$_NativeEvent, get, $Object*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.eawt._AppEventHandler$_NativeEvent", "com.apple.eawt._AppEventHandler", "_NativeEvent", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.eawt._AppEventHandler$_NativeEvent",
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
		"com.apple.eawt._AppEventHandler"
	};
	$loadClass(_AppEventHandler$_NativeEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(_AppEventHandler$_NativeEvent);
	});
	return class$;
}

$Class* _AppEventHandler$_NativeEvent::class$ = nullptr;

		} // eawt
	} // apple
} // com