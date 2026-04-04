#include <com/sun/beans/finder/Signature.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

void Signature::init$($Class* type, $ClassArray* args) {
	Signature::init$(type, nullptr, args);
}

void Signature::init$($Class* type, $String* name, $ClassArray* args) {
	$set(this, type, type);
	$set(this, name, name);
	$set(this, args, args);
}

$Class* Signature::getType() {
	return this->type;
}

$String* Signature::getName() {
	return this->name;
}

$ClassArray* Signature::getArgs() {
	return this->args;
}

bool Signature::equals(Object$* object) {
	if ($equals(this, object)) {
		return true;
	}
	if ($instanceOf(Signature, object)) {
		$var(Signature, signature, $cast(Signature, object));
		bool var$1 = isEqual(signature->type, this->type);
		bool var$0 = var$1 && isEqual(signature->name, this->name);
		return var$0 && isEqual(signature->args, this->args);
	}
	return false;
}

bool Signature::isEqual(Object$* obj1, Object$* obj2) {
	return (obj1 == nullptr) ? obj2 == nullptr : $of(obj1)->equals(obj2);
}

bool Signature::isEqual($ClassArray* args1, $ClassArray* args2) {
	if ((args1 == nullptr) || (args2 == nullptr)) {
		return args1 == args2;
	}
	if ($nc(args1)->length != $nc(args2)->length) {
		return false;
	}
	for (int32_t i = 0; i < args1->length; ++i) {
		if (!isEqual(args1->get(i), args2->get(i))) {
			return false;
		}
	}
	return true;
}

int32_t Signature::hashCode() {
	if (this->code == 0) {
		int32_t code = 17;
		code = addHashCode(code, this->type);
		code = addHashCode(code, this->name);
		if (this->args != nullptr) {
			$var($ClassArray, arr$, this->args);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$Class* arg = arr$->get(i$);
				{
					code = addHashCode(code, arg);
				}
			}
		}
		this->code = code;
	}
	return this->code;
}

int32_t Signature::addHashCode(int32_t code, Object$* object) {
	code *= 37;
	return (object != nullptr) ? code + $of(object)->hashCode() : code;
}

Signature::Signature() {
}

$Class* Signature::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"type", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(Signature, type)},
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Signature, name)},
		{"args", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(Signature, args)},
		{"code", "I", nullptr, $PRIVATE | $VOLATILE, $field(Signature, code)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;[Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;[Ljava/lang/Class<*>;)V", 0, $method(Signature, init$, void, $Class*, $ClassArray*)},
		{"<init>", "(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;Ljava/lang/String;[Ljava/lang/Class<*>;)V", 0, $method(Signature, init$, void, $Class*, $String*, $ClassArray*)},
		{"addHashCode", "(ILjava/lang/Object;)I", nullptr, $PRIVATE | $STATIC, $staticMethod(Signature, addHashCode, int32_t, int32_t, Object$*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Signature, equals, bool, Object$*)},
		{"getArgs", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", 0, $method(Signature, getArgs, $ClassArray*)},
		{"getName", "()Ljava/lang/String;", nullptr, 0, $method(Signature, getName, $String*)},
		{"getType", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", 0, $method(Signature, getType, $Class*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Signature, hashCode, int32_t)},
		{"isEqual", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(Signature, isEqual, bool, Object$*, Object$*)},
		{"isEqual", "([Ljava/lang/Class;[Ljava/lang/Class;)Z", "([Ljava/lang/Class<*>;[Ljava/lang/Class<*>;)Z", $PRIVATE | $STATIC, $staticMethod(Signature, isEqual, bool, $ClassArray*, $ClassArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.beans.finder.Signature",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Signature, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Signature);
	});
	return class$;
}

$Class* Signature::class$ = nullptr;

			} // finder
		} // beans
	} // sun
} // com