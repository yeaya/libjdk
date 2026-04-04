#include <com/sun/beans/finder/InstanceFinder.h>
#include <com/sun/beans/finder/ClassFinder.h>
#include <java/lang/ClassLoader.h>
#include <jcpp.h>

#undef EMPTY

using $ClassFinder = ::com::sun::beans::finder::ClassFinder;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

$StringArray* InstanceFinder::EMPTY = nullptr;

void InstanceFinder::init$($Class* type, bool allow, $String* suffix, $StringArray* packages) {
	$set(this, type, type);
	this->allow = allow;
	$set(this, suffix, suffix);
	$set(this, packages, $cast($StringArray, $nc(packages)->clone()));
}

$StringArray* InstanceFinder::getPackages() {
	return $cast($StringArray, $nc(this->packages)->clone());
}

void InstanceFinder::setPackages($StringArray* packages) {
	$set(this, packages, (packages != nullptr) && (packages->length > 0) ? $cast($StringArray, packages->clone()) : InstanceFinder::EMPTY);
}

$Object* InstanceFinder::find($Class* type) {
	$useLocalObjectStack();
	if (type == nullptr) {
		return nullptr;
	}
	$var($String, name, $str({$($nc(type)->getName()), this->suffix}));
	$var($Object, object, instantiate(type, name));
	if (object != nullptr) {
		return object;
	}
	if (this->allow) {
		$assign(object, instantiate(type, nullptr));
		if (object != nullptr) {
			return object;
		}
	}
	int32_t index = name->lastIndexOf(u'.') + 1;
	if (index > 0) {
		$assign(name, name->substring(index));
	}
	{
		$var($StringArray, arr$, this->packages);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, prefix, arr$->get(i$));
			{
				$assign(object, instantiate(type, prefix, name));
				if (object != nullptr) {
					return object;
				}
			}
		}
	}
	return nullptr;
}

$Object* InstanceFinder::instantiate($Class* type, $String* name) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (type != nullptr) {
		try {
			if (name != nullptr) {
				type = $ClassFinder::findClass(name, $(type->getClassLoader()));
			}
			if ($nc(this->type)->isAssignableFrom(type)) {
				$var($Object, tmp, $nc(type)->newInstance());
				return tmp;
			}
		} catch ($Exception& exception) {
		}
	}
	return nullptr;
}

$Object* InstanceFinder::instantiate($Class* type, $String* prefix, $String* name) {
	$useLocalObjectStack();
	return instantiate(type, $$str({prefix, $$str(u'.'), name}));
}

void InstanceFinder::clinit$($Class* clazz) {
	$assignStatic(InstanceFinder::EMPTY, $new($StringArray, 0));
}

InstanceFinder::InstanceFinder() {
}

$Class* InstanceFinder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"EMPTY", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InstanceFinder, EMPTY)},
		{"type", "Ljava/lang/Class;", "Ljava/lang/Class<+TT;>;", $PRIVATE | $FINAL, $field(InstanceFinder, type)},
		{"allow", "Z", nullptr, $PRIVATE | $FINAL, $field(InstanceFinder, allow)},
		{"suffix", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(InstanceFinder, suffix)},
		{"packages", "[Ljava/lang/String;", nullptr, $PRIVATE | $VOLATILE, $field(InstanceFinder, packages)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;ZLjava/lang/String;[Ljava/lang/String;)V", "(Ljava/lang/Class<+TT;>;ZLjava/lang/String;[Ljava/lang/String;)V", $TRANSIENT, $method(InstanceFinder, init$, void, $Class*, bool, $String*, $StringArray*)},
		{"find", "(Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/Class<*>;)TT;", $PUBLIC, $virtualMethod(InstanceFinder, find, $Object*, $Class*)},
		{"getPackages", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(InstanceFinder, getPackages, $StringArray*)},
		{"instantiate", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;", "(Ljava/lang/Class<*>;Ljava/lang/String;)TT;", $PROTECTED, $virtualMethod(InstanceFinder, instantiate, $Object*, $Class*, $String*)},
		{"instantiate", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/String;)TT;", $PROTECTED, $virtualMethod(InstanceFinder, instantiate, $Object*, $Class*, $String*, $String*)},
		{"setPackages", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(InstanceFinder, setPackages, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.beans.finder.InstanceFinder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;"
	};
	$loadClass(InstanceFinder, name, initialize, &classInfo$$, InstanceFinder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(InstanceFinder);
	});
	return class$;
}

$Class* InstanceFinder::class$ = nullptr;

			} // finder
		} // beans
	} // sun
} // com