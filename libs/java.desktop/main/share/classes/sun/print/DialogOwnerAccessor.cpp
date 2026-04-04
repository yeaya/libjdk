#include <sun/print/DialogOwnerAccessor.h>
#include <javax/print/attribute/standard/DialogOwner.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DialogOwner = ::javax::print::attribute::standard::DialogOwner;

namespace sun {
	namespace print {

DialogOwnerAccessor* DialogOwnerAccessor::accessor = nullptr;

void DialogOwnerAccessor::init$() {
}

void DialogOwnerAccessor::setAccessor(DialogOwnerAccessor* acc) {
	$init(DialogOwnerAccessor);
	$assignStatic(DialogOwnerAccessor::accessor, acc);
}

int64_t DialogOwnerAccessor::getID($DialogOwner* owner) {
	$init(DialogOwnerAccessor);
	if (DialogOwnerAccessor::accessor == nullptr || owner == nullptr) {
		return 0;
	} else {
		return DialogOwnerAccessor::accessor->getOwnerID(owner);
	}
}

void DialogOwnerAccessor::clinit$($Class* clazz) {
	$assignStatic(DialogOwnerAccessor::accessor, nullptr);
}

DialogOwnerAccessor::DialogOwnerAccessor() {
}

$Class* DialogOwnerAccessor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"accessor", "Lsun/print/DialogOwnerAccessor;", nullptr, $PUBLIC | $STATIC, $staticField(DialogOwnerAccessor, accessor)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DialogOwnerAccessor, init$, void)},
		{"getID", "(Ljavax/print/attribute/standard/DialogOwner;)J", nullptr, $PUBLIC | $STATIC, $staticMethod(DialogOwnerAccessor, getID, int64_t, $DialogOwner*)},
		{"getOwnerID", "(Ljavax/print/attribute/standard/DialogOwner;)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DialogOwnerAccessor, getOwnerID, int64_t, $DialogOwner*)},
		{"setAccessor", "(Lsun/print/DialogOwnerAccessor;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DialogOwnerAccessor, setAccessor, void, DialogOwnerAccessor*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.print.DialogOwnerAccessor",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DialogOwnerAccessor, name, initialize, &classInfo$$, DialogOwnerAccessor::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DialogOwnerAccessor);
	});
	return class$;
}

$Class* DialogOwnerAccessor::class$ = nullptr;

	} // print
} // sun